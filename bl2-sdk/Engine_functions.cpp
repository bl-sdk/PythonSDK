/*
#############################################################################################
# Borderlands 2 (1.0.35.4705) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/
#include "stdafx.h"
#include "BL2-SDK.h"
//#include "Log.h"

#ifdef _MSC_VER
#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Global Static Class Pointers
# ========================================================================================= #
*/

//UClass* APlayerController::pClassPointer = NULL;

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/
// Function Engine.SkeletalMeshComponent.GetBoneLocation
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   BoneName                       ( CPF_Parm )
// int                            Space                          ( CPF_OptionalParm | CPF_Parm )

struct FVector USkeletalMeshComponent::GetBoneLocation(struct FName BoneName, int Space)
{
	static UFunction* pFnGetBoneLocation = NULL;

	if (!pFnGetBoneLocation)
		pFnGetBoneLocation = (UFunction*)UObject::GObjObjects()->Data[11534 - 1];

	USkeletalMeshComponent_execGetBoneLocation_Parms GetBoneLocation_Parms;
	memcpy(&GetBoneLocation_Parms.BoneName, &BoneName, 0x8);
	GetBoneLocation_Parms.Space = Space;

	pFnGetBoneLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetBoneLocation, &GetBoneLocation_Parms, NULL);

	pFnGetBoneLocation->FunctionFlags |= 0x400;

	return GetBoneLocation_Parms.ReturnValue;
};

// Function Engine.Actor.Spawn
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class AActor*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm )
// class UClass*                  SpawnClass                     ( CPF_Parm )
// class AActor*                  SpawnOwner                     ( CPF_OptionalParm | CPF_Parm )
// struct FName                   SpawnTag                       ( CPF_OptionalParm | CPF_Parm )
// struct FVector                 SpawnLocation                  ( CPF_OptionalParm | CPF_Parm )
// struct FRotator                SpawnRotation                  ( CPF_OptionalParm | CPF_Parm )
// class AActor*                  ActorTemplate                  ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bNoCollisionFail               ( CPF_OptionalParm | CPF_Parm )

class AActor* AActor::Spawn(class UClass* SpawnClass, class AActor* SpawnOwner, struct FName SpawnTag, struct FVector SpawnLocation, struct FRotator SpawnRotation, class AActor* ActorTemplate, unsigned long bNoCollisionFail)
{
	static UFunction* pFnSpawn = NULL;

	if (!pFnSpawn)
		pFnSpawn = (UFunction*)UObject::GObjObjects()->Data[7381 - 1];

	AActor_execSpawn_Parms Spawn_Parms;
	Spawn_Parms.SpawnClass = SpawnClass;
	Spawn_Parms.SpawnOwner = SpawnOwner;
	memcpy(&Spawn_Parms.SpawnTag, &SpawnTag, 0x8);
	memcpy(&Spawn_Parms.SpawnLocation, &SpawnLocation, 0xC);
	memcpy(&Spawn_Parms.SpawnRotation, &SpawnRotation, 0xC);
	Spawn_Parms.ActorTemplate = ActorTemplate;
	Spawn_Parms.bNoCollisionFail = bNoCollisionFail;

	pFnSpawn->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSpawn, &Spawn_Parms, NULL);

	pFnSpawn->FunctionFlags |= 0x400;

	return Spawn_Parms.ReturnValue;
};

// Function Engine.Console.OutputText
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void UConsole::eventOutputText(struct FString Text)
{
	static UFunction* pFnOutputText = NULL;

	if (!pFnOutputText)
		pFnOutputText = UObject::FindObject<UFunction>("Function Engine.Console:OutputText");

	UConsole_eventOutputText_Parms OutputText_Parms;
	memcpy(&OutputText_Parms.Text, &Text, 0xC);

	this->ProcessEvent(pFnOutputText, &OutputText_Parms, NULL);
};