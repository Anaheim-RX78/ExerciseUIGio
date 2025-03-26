// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerEventBox.h"

// Sets default values
ATriggerEventBox::ATriggerEventBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	TriggerBox->SetupAttachment(Root);
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ATriggerEventBox::OnBoxOverlap);
}

// Called when the game starts or when spawned
void ATriggerEventBox::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATriggerEventBox::OnBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	OnTriggerClick.Broadcast(OtherActor);
}

// Called every frame
void ATriggerEventBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

