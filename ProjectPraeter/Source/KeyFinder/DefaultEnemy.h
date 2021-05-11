#pragma once

#include "CoreMinimal.h"
//#include "GameFramework/Character.h"
#include "PaperCharacter.h"
#include "DefaultEnemy.generated.h"

UCLASS()
class KEYFINDER_API ADefaultEnemy : public APaperCharacter
{
	GENERATED_BODY()

	public:
		
		ADefaultEnemy(); // Sets default values for this character's properties

	protected:
		
		virtual void BeginPlay() override; // Called when the game starts or when spawned

	public:	
		
		virtual void Tick(float DeltaTime) override; // Called every frame

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			int health; 
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			float speed;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			bool isAttacking;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			bool isDead;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
			class UPaperFlipbook* IdleAnimation;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
			class UPaperFlipbook* MovingAnimation;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
			class UPaperFlipbook* AttackAnimation;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
			class UPaperFlipbook* HurtAnimation;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
			class UPaperFlipbook* DeathAnimation;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
			class USoundBase* hurtSFX;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
			class USoundBase* attackSFX;

		UFUNCTION(BlueprintCallable)
			void Attack();

		void UpdateAnimations(); 

		UFUNCTION(BlueprintCallable)
			void TakeDamage();

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			bool enemyTakingDamage; 

		UFUNCTION(BlueprintImplementableEvent)
			void EnemyDeath();
};
