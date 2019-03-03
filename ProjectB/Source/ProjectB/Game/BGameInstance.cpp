// Fill out your copyright notice in the Description page of Project Settings.

#include "BGameInstance.h"
#include "Game/Data/GameDataManager.h"

void UBGameInstance::Init()
{
	Super::Init();
	UE_LOG(LogTemp, Warning, TEXT("게임 인스턴스 초기화 완료!"));

	// 싱글톤 초기화는 여기에서.
	UGameDataManager::Get()->EnterInGame();
}

void UBGameInstance::Shutdown()
{
	Super::Shutdown();
	UE_LOG(LogTemp, Warning, TEXT("게임 인스턴스 해제 완료!"));

	// 싱글톤 해제는 여기에서.
	UGameDataManager::Get()->LeaveInGame();
	

}