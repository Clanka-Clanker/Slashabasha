// Fill out your copyright notice in the Description page of Project Settings.


#include "Slashabasha/Player/PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Player Camera"));
	Camera->SetupAttachment(GetMesh(), FName("CameraSocket"));
	Camera->bUsePawnControlRotation = true;

	SwordMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sword Mesh"));
	SwordMesh->SetupAttachment(GetMesh(), FName("SwordSocket"));
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);

	PlayerInputComponent->BindAxis("TurnCamera", this, &APlayerCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerCharacter::LookUp);

	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &APlayerCharacter::StartAttack);


}

void APlayerCharacter::MoveForward(float InputValue)
{
	FVector ForwardDirection = GetActorForwardVector();
	AddMovementInput(ForwardDirection, InputValue);
}
void APlayerCharacter::MoveRight(float InputValue)
{
	FVector RightDirection = GetActorRightVector();
	AddMovementInput(RightDirection, InputValue);
}
void APlayerCharacter::Turn(float InputValue)
{
	AddControllerYawInput(InputValue);
}
void APlayerCharacter::LookUp(float InputValue)
{
	AddControllerPitchInput(InputValue);
}

void APlayerCharacter::StartAttack()
{
	// Call attack Animation
	if (AttackAnimation && !bIsAttacking)
	{
		GetMesh()->PlayAnimation(AttackAnimation, false);
		bIsAttacking = true;
	}
}

void APlayerCharacter::LineTrace()
{
	// Get Socket location
	FVector StartLocation = SwordMesh->GetSocketLocation(FName("Start"));
	FVector EndLocation = SwordMesh->GetSocketLocation(FName("End"));
	 
	// setup line trace
	FHitResult HitResult;
	FCollisionQueryParams TraceParams;
	TraceParams.AddIgnoredActor(this); // Ignore self
	
	//line trace
	GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, TraceParams);

	// Draw debug line

	DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Purple, false, 1.0f, 0, 1.0f);
	
	// If hit something
	if (HitResult.bBlockingHit)
	{
		AActor* ActorHit = HitResult.GetActor();
		ActorHit->Destroy(); // Destroy the actor hit
	}
	
	
}