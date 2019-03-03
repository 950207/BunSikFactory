#pragma once

#include "CoreMinimal.h"

/**
* World에 종속되지 않으며 한번 생성되면 Standalone 또는 Editor가 종료 될때까지 게속 유지 되는 단일체
*/
template <class T>
class PROJECTB_API TSingletonObject
{
public:
	static T* Get()
	{
		if (Instance == nullptr)
		{
			Instance = NewObject<T>(GetTransientPackage(), T::StaticClass());
			Instance->AddToRoot();
		}
		return Instance;
	};

private:
	static T* Instance;
};

template <class T>
T* TSingletonObject<T>::Instance = nullptr;

/**
* 게임 플레이 시간동안에만 유지되는 단일체(For Standalone & PIE)
*/
template <class T>
class PROJECTB_API TGameTimeSingletonObject
{
public:
	static T* Get()
	{
		if (Instance == nullptr)
		{
			Instance = NewObject<T>(T::StaticClass());
			Instance->AddToRoot();
			Instance->EnterInGame();
		}
		return Instance;
	}

protected:
	virtual void EnterInGame() {};
	virtual void LeaveInGame() {};

private:
	static T* Instance;
};

template <class T>
T* TGameTimeSingletonObject<T>::Instance = nullptr;


/**
* 사용자가 생명 주기를 결정하는 시스템용 단일체
*/
template <class T>
class PROJECTB_API TGameSystemObject
{
public:
	static void CreateSystemObject(UObject* InOuter)
	{
		if (Instance == nullptr)
		{
			Instance = NewObject<T>(InOuter, T::StaticClass());
			Instance->AddToRoot();
			Instance->OnInitSystemObject();
		}
	}

	static T* Get()
	{
		// nullptr허용
		// check(Instance != nullptr);
		return Instance;
	};

	static void RemoveSystemObject()
	{
		if (Instance != nullptr)
		{
			Instance->OnRemoveSystemObject();
			Instance->RemoveFromRoot();
			Instance = nullptr;
		}
	}

protected:
	virtual void OnInitSystemObject() {}
	virtual void OnRemoveSystemObject() {}

private:
	static T* Instance;
};

template <class T>
T* TGameSystemObject<T>::Instance = nullptr;
