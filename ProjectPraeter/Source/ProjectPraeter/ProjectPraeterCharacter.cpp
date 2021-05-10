#include "ProjectPraeterCharacter.h"
#include "PaperFlipbookComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Camera/CameraComponent.h"

DEFINE_LOG_CATEGORY_STATIC(SideScrollerCharacter, Log, All);

AProjectPraeterCharacter::AProjectPraeterCharacter()
{
	// Use only Yaw from the controller and ignore the rest of the rotation.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	// Set the size of our collision capsule.
	GetCapsuleComponent()->SetCapsuleHalfHeight(96.0f);
	GetCapsuleComponent()->SetCapsuleRadius(40.0f);

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->SocketOffset = FVector(0.0f, 0.0f, 75.0f);
	CameraBoom->SetUsingAbsoluteRotation(true);
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	

	// Create an orthographic camera (no perspective) and attach it to the boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
	SideViewCameraComponent->OrthoWidth = 2048.0f;
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	// Prevent all automatic rotation behavior on the camera, character, and camera component
	CameraBoom->SetUsingAbsoluteRotation(true);
	SideViewCameraComponent->bUsePawnControlRotation = false;
	SideViewCameraComponent->bAutoActivate = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;

	// Configure character movement
	GetCharacterMovement()->GravityScale = 2.0f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.0f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	GetCharacterMovement()->MaxFlySpeed = 600.0f;

	// Lock character motion onto the XZ plane, so the character can't move in or out of the screen
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->SetPlaneConstraintNormal(FVector(0.0f, -1.0f, 0.0f));

	// Behave like a traditional 2D platformer character, with a flat bottom instead of a curved capsule bottom
	// Note: This can cause a little floating when going up inclines; you can choose the tradeoff between better
	// behavior on the edge of a ledge versus inclines by setting this to true or false
	GetCharacterMovement()->bUseFlatBaseForFloorChecks = true;

    // 	TextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("IncarGear"));
    // 	TextComponent->SetRelativeScale3D(FVector(3.0f, 3.0f, 3.0f));
    // 	TextComponent->SetRelativeLocation(FVector(35.0f, 5.0f, 20.0f));
    // 	TextComponent->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
    // 	TextComponent->SetupAttachment(RootComponent);

	// Enable replication on the Sprite component so animations show up when networked
	GetSprite()->SetIsReplicated(true);
	bReplicates = true;

	isJumping = false; 
	health = 3; 
	maxHealth = 3; 
}

void AProjectPraeterCharacter::UpdateAnimation()
{
	const FVector PlayerVelocity = GetVelocity();
	//const float PlayerSpeedSqr = PlayerVelocity.SizeSquared();
	const float PlayerSpeedHoriz = PlayerVelocity.X;
	const float PlayerSpeedVert = PlayerVelocity.Z;
	// Are we moving or standing still?
	//UPaperFlipbook* DesiredAnimation = (PlayerSpeedSqr > 0.0f) ? RunningAnimation : IdleAnimation;
	UPaperFlipbook* DesiredAnimation; 
	DesiredAnimation = NULL;

	if (playerIsAttacking)
	{
		DesiredAnimation = AttackAnimation;
	}
	if (takingDamage)
	{
		DesiredAnimation = HurtAnimation;
	}
	else if (!takingDamage && !playerIsAttacking && PlayerSpeedVert < 0.0f)
	{
		DesiredAnimation = FallingAnimation;
	}
	else if (!takingDamage && !playerIsAttacking && !isJumping && PlayerSpeedHoriz != 0.0f)
	{
		DesiredAnimation = RunningAnimation;
	}
	else if (!takingDamage && !playerIsAttacking && !isJumping && PlayerSpeedHoriz == 0.0f)
	{
		DesiredAnimation = IdleAnimation;
	}
	else if (!takingDamage && !playerIsAttacking && isJumping && PlayerSpeedVert > 0.0f)
	{
		DesiredAnimation = JumpingAnimation;
	}
	else if (!takingDamage && !playerIsAttacking && isJumping && PlayerSpeedVert == 0.0f)
	{
		isJumping = false; 
	}

	if( GetSprite()->GetFlipbook() != DesiredAnimation 	)
	{
		GetSprite()->SetFlipbook(DesiredAnimation);
	}
}

void AProjectPraeterCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	UpdateCharacter();	
}

void AProjectPraeterCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Note: the 'Jump' action and the 'MoveRight' axis are bound to actual keys/buttons/sticks in DefaultInput.ini (editable from Project Settings..Input)
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AProjectPraeterCharacter::HunterJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Attack", IE_Released, this, &AProjectPraeterCharacter::PlayerAttack);
	PlayerInputComponent->BindAxis("MoveRight", this, &AProjectPraeterCharacter::MoveRight);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &AProjectPraeterCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AProjectPraeterCharacter::TouchStopped);
}

void AProjectPraeterCharacter::HunterJump()
{
	if (!playerIsAttacking)
	{
		isJumping = true;
		ACharacter::Jump();
	}
}

void AProjectPraeterCharacter::MoveRight(float Value)
{
	/*UpdateChar();*/

	// Apply the input to the character motion
	if (!playerIsAttacking)
	{
		AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);
	}
}

void AProjectPraeterCharacter::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// Jump on any touch
	Jump();
}

void AProjectPraeterCharacter::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// Cease jumping once touch stopped
	StopJumping();
}

void AProjectPraeterCharacter::UpdateCharacter()
{
	// Update animation to match the motion
	UpdateAnimation();

	// Now setup the rotation of the controller based on the direction we are travelling
	const FVector PlayerVelocity = GetVelocity();	
	float TravelDirection = PlayerVelocity.X;
	// Set the rotation so that the character faces his direction of travel.
	if (Controller != nullptr && !takingDamage)
	{
		if (TravelDirection < 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0, 180.0f, 0.0f));
		}
		else if (TravelDirection > 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0f, 0.0f, 0.0f));
		}
	}
}

void AProjectPraeterCharacter::TakeDamage()
{
	health -= 1; 
	takingDamage = true; 

	
	if (health < 0)
	{
		health = 0; 
		PlayerDeath(); 
	}
}

void AProjectPraeterCharacter::PlayerDeath()
{
	UE_LOG(LogTemp, Warning, TEXT("Player has died! =("));
}

void AProjectPraeterCharacter::PlayerAttack()
{
	if (!isJumping)
	{
		UE_LOG(LogTemp, Warning, TEXT("Attack!"));
		playerIsAttacking = true;
	}

	//UPaperFlipbook* DesiredAnimation;

	//DesiredAnimation = AttackAnimation;

	//if (GetSprite()->GetFlipbook() != DesiredAnimation)
	//{
	//	GetSprite()->SetFlipbook(DesiredAnimation);
	//}
}

void AProjectPraeterCharacter::HealPlayer(int amount)
{
	health += amount; 
	
	if (health > maxHealth)
	{
		health = maxHealth;
	}
}