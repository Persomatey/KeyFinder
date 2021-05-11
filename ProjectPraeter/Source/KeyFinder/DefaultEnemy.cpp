#include "DefaultEnemy.h"
#include "PaperFlipbookComponent.h"
#include "PaperSpriteComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ADefaultEnemy::ADefaultEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	GetSprite()->SetIsReplicated(true);
}

// Called when the game starts or when spawned
void ADefaultEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	health = 2; 
	speed = 0.75; 
	isAttacking = false; 
	enemyTakingDamage = false; 
}

// Called every frame
void ADefaultEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!isDead)
	{
		UpdateAnimations();
	}

	const FVector enemyVelocity = GetVelocity();
	float travelDirection = enemyVelocity.X;
	// Set the rotation so that the character faces his direction of travel.
	if (!isAttacking)
	{
		if (travelDirection < 0.0f)
		{
			GetSprite()->SetRelativeRotation(FRotator(0.0, 0.0f, 0.0f));
		}
		else if (travelDirection > 0.0f)
		{
			GetSprite()->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f));
		}
	}
}

void ADefaultEnemy::UpdateAnimations()
{
	const FVector enemyVelocity = GetVelocity();
	float travelDirection = enemyVelocity.X;

	UPaperFlipbook* DesiredAnimation;
	DesiredAnimation = NULL; 

	if (enemyTakingDamage)
	{
		DesiredAnimation = HurtAnimation;
	}
	else if (travelDirection != 0.0f)
	{
		DesiredAnimation = MovingAnimation;
	}
	else if (travelDirection == 0.0f)
	{
		DesiredAnimation = IdleAnimation;
	}

	if (!isAttacking && GetSprite()->GetFlipbook() != DesiredAnimation)
	{
		GetSprite()->SetFlipbook(DesiredAnimation);
	}
}

void ADefaultEnemy::Attack()
{
	UPaperFlipbook* DesiredAnimation;
	DesiredAnimation = AttackAnimation;
	UGameplayStatics::PlaySoundAtLocation(this, attackSFX, GetActorLocation());

	if (GetSprite()->GetFlipbook() != DesiredAnimation)
	{
		GetSprite()->SetFlipbook(DesiredAnimation);
	}
}

void ADefaultEnemy::TakeDamage()
{
	health -= 1;

	enemyTakingDamage = true; 

	UGameplayStatics::PlaySoundAtLocation(this, hurtSFX, GetActorLocation());

	if (health <= 0)
	{
		health = 0;
		EnemyDeath();
	}
}