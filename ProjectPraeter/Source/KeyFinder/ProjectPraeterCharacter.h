#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "ProjectPraeterCharacter.generated.h"

class UTextRenderComponent;

/**
 * This class is the default character for ProjectPraeter, and it is responsible for all
 * physical interaction between the player and the world.
 *
 * The capsule component (inherited from ACharacter) handles collision with the world
 * The CharacterMovementComponent (inherited from ACharacter) handles movement of the collision capsule
 * The Sprite component (inherited from APaperCharacter) handles the visuals
 */
UCLASS(config=Game)
class AProjectPraeterCharacter : public APaperCharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera, meta=(AllowPrivateAccess="true"))
		class UCameraComponent* SideViewCameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	UTextRenderComponent* TextComponent;
		virtual void Tick(float DeltaSeconds) override;

	protected:

		// Animations 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Animations)
			class UPaperFlipbook* RunningAnimation;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
			class UPaperFlipbook* IdleAnimation;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
			class UPaperFlipbook* JumpingAnimation;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
			class UPaperFlipbook* FallingAnimation;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
			class UPaperFlipbook* AttackAnimation;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
			class UPaperFlipbook* HurtAnimation;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
			class UPaperFlipbook* DeathAnimation;

		// Sound Effects 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
			class USoundBase* attackSFX;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
			class USoundBase* takeDamageSFX; 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
			class USoundBase* jumpSFX;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
			class USoundBase* landSFX;

		// Functions 

		void UpdateAnimation();	

		void MoveRight(float Value); 

		void HunterJump(); 

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
			bool isJumping; 

		void UpdateCharacter();

		void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

		void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

		virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			int health;

		int maxHealth; 

		UFUNCTION(BlueprintCallable)
			void HealPlayer(int amount);

		UFUNCTION(BlueprintCallable)
			void TakeDamage(); 

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			bool takingDamage; 

		UFUNCTION(BlueprintImplementableEvent)
			void PlayerDeath();

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			bool isDead; 

		void PlayerAttack(); 

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			bool playerIsAttacking; 

	public:

		AProjectPraeterCharacter();

		FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }

		FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
