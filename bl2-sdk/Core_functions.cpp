#pragma once
#include "stdafx.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Core_functions.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Global Static Class Pointers
# ========================================================================================= #
*/

UClass* UObject::pClassPointer = NULL;
UClass* UField::pClassPointer = NULL;
UClass* UStruct::pClassPointer = NULL;
UClass* UFunction::pClassPointer = NULL;
UClass* UState::pClassPointer = NULL;
UClass* UClass::pClassPointer = NULL;
UClass* UPackage::pClassPointer = NULL;

/*
# ========================================================================================= #
# Basic Functions
# ========================================================================================= #
*/

TArray< UObject* >* UObject::GObjObjects()
{
	TArray< UObject* >* ObjectArray = (TArray< UObject* >*) BL2SDK::pGObjects;
	return ObjectArray;
}

char* UObject::GetName()
{
	static char cOutBuffer[256];

	sprintf_s(cOutBuffer, "%s", this->Name.GetName());

	return cOutBuffer;
}

char* UObject::GetNameCPP()
{
	static char cOutBuffer[256];

	if (this->IsA(UClass::StaticClass()))
	{
		UClass* pClass = (UClass*)this;
		while (pClass)
		{
			if (!strcmp(pClass->GetName(), "Actor"))
			{
				strcpy_s(cOutBuffer, "A");
				break;
			}
			else if (!strcmp(pClass->GetName(), "Object"))
			{
				strcpy_s(cOutBuffer, "U");
				break;
			}

			pClass = (UClass*)pClass->SuperField;
		}
	}
	else
	{
		strcpy_s(cOutBuffer, "F");
	}

	strcat_s(cOutBuffer, this->GetName());

	return cOutBuffer;
}

char* UObject::GetFullName()
{
	if (this->Class && this->Outer)
	{
		static char cOutBuffer[256];

		if (this->Outer->Outer)
		{
			strcpy_s(cOutBuffer, this->Class->GetName());
			strcat_s(cOutBuffer, " ");
			strcat_s(cOutBuffer, this->Outer->Outer->GetName());
			strcat_s(cOutBuffer, ".");
			strcat_s(cOutBuffer, this->Outer->GetName());
			strcat_s(cOutBuffer, ".");
			strcat_s(cOutBuffer, this->GetName());
		}
		else
		{
			strcpy_s(cOutBuffer, this->Class->GetName());
			strcat_s(cOutBuffer, " ");
			strcat_s(cOutBuffer, this->Outer->GetName());
			strcat_s(cOutBuffer, ".");
			strcat_s(cOutBuffer, this->GetName());
		}

		return cOutBuffer;
	}

	return "(null)";
}

UClass* UObject::FindClass(char* ClassFullName)
{
	while (!UObject::GObjObjects())
		Sleep(100);

	while (!FName::Names())
		Sleep(100);

	for (int i = 0; i < UObject::GObjObjects()->Count; ++i)
	{
		UObject* Object = UObject::GObjObjects()->Data[i];

		if (!Object)
			continue;

		if (!_stricmp(Object->GetFullName(), ClassFullName))
			return (UClass*)Object;
	}

	return NULL;
}

bool UObject::IsA(UClass* pClass)
{
	for (UClass* SuperClass = this->Class; SuperClass; SuperClass = (UClass*)SuperClass->SuperField)
	{
		if (SuperClass == pClass)
			return true;
	}

	return false;
}

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function Core.Object.IsRelevantForDebugging
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 Source                         ( CPF_Parm )

bool UObject::IsRelevantForDebugging(class UObject* Source)
{
	static UFunction* pFnIsRelevantForDebugging = NULL;

	if (!pFnIsRelevantForDebugging)
		pFnIsRelevantForDebugging = (UFunction*)UObject::GObjObjects()->Data[5375];

	UObject_execIsRelevantForDebugging_Parms IsRelevantForDebugging_Parms;
	IsRelevantForDebugging_Parms.Source = Source;

	pFnIsRelevantForDebugging->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsRelevantForDebugging, &IsRelevantForDebugging_Parms, NULL);

	pFnIsRelevantForDebugging->FunctionFlags |= 0x400;

	return IsRelevantForDebugging_Parms.ReturnValue;
};

// Function Core.Object.GetGlobalDebugTarget
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UObject*                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UObject* UObject::GetGlobalDebugTarget()
{
	static UFunction* pFnGetGlobalDebugTarget = NULL;

	if (!pFnGetGlobalDebugTarget)
		pFnGetGlobalDebugTarget = (UFunction*)UObject::GObjObjects()->Data[5376];

	UObject_execGetGlobalDebugTarget_Parms GetGlobalDebugTarget_Parms;

	pFnGetGlobalDebugTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetGlobalDebugTarget, &GetGlobalDebugTarget_Parms, NULL);

	pFnGetGlobalDebugTarget->FunctionFlags |= 0x400;

	return GetGlobalDebugTarget_Parms.ReturnValue;
};

// Function Core.Object.SetGlobalDebugTarget
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UObject*                 Target                         ( CPF_Parm )

void UObject::SetGlobalDebugTarget(class UObject* Target)
{
	static UFunction* pFnSetGlobalDebugTarget = NULL;

	if (!pFnSetGlobalDebugTarget)
		pFnSetGlobalDebugTarget = (UFunction*)UObject::GObjObjects()->Data[5379];

	UObject_execSetGlobalDebugTarget_Parms SetGlobalDebugTarget_Parms;
	SetGlobalDebugTarget_Parms.Target = Target;

	pFnSetGlobalDebugTarget->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetGlobalDebugTarget, &SetGlobalDebugTarget_Parms, NULL);

	pFnSetGlobalDebugTarget->FunctionFlags |= 0x400;
};

// Function Core.Object.LogContentDebug
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Message                        ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void UObject::LogContentDebug(struct FString Message)
{
	static UFunction* pFnLogContentDebug = NULL;

	if (!pFnLogContentDebug)
		pFnLogContentDebug = (UFunction*)UObject::GObjObjects()->Data[5381];

	UObject_execLogContentDebug_Parms LogContentDebug_Parms;
	memcpy(&LogContentDebug_Parms.Message, &Message, 0xC);

	pFnLogContentDebug->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLogContentDebug, &LogContentDebug_Parms, NULL);

	pFnLogContentDebug->FunctionFlags |= 0x400;
};

// Function Core.Object.GetLanguage
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UObject::GetLanguage()
{
	static UFunction* pFnGetLanguage = NULL;

	if (!pFnGetLanguage)
		pFnGetLanguage = (UFunction*)UObject::GObjObjects()->Data[5383];

	UObject_execGetLanguage_Parms GetLanguage_Parms;

	pFnGetLanguage->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetLanguage, &GetLanguage_Parms, NULL);

	pFnGetLanguage->FunctionFlags |= 0x400;

	return GetLanguage_Parms.ReturnValue;
};

// Function Core.Object.GetRandomOptionSumFrequency
// [0x00420003] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< float >                FreqList                       ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int UObject::GetRandomOptionSumFrequency(TArray< float >* FreqList)
{
	static UFunction* pFnGetRandomOptionSumFrequency = NULL;

	if (!pFnGetRandomOptionSumFrequency)
		pFnGetRandomOptionSumFrequency = (UFunction*)UObject::GObjObjects()->Data[5385];

	UObject_execGetRandomOptionSumFrequency_Parms GetRandomOptionSumFrequency_Parms;

	this->ProcessEvent(pFnGetRandomOptionSumFrequency, &GetRandomOptionSumFrequency_Parms, NULL);

	if (FreqList)
		memcpy(FreqList, &GetRandomOptionSumFrequency_Parms.FreqList, 0xC);

	return GetRandomOptionSumFrequency_Parms.ReturnValue;
};

// Function Core.Object.GetBuildChangelistNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UObject::GetBuildChangelistNumber()
{
	static UFunction* pFnGetBuildChangelistNumber = NULL;

	if (!pFnGetBuildChangelistNumber)
		pFnGetBuildChangelistNumber = (UFunction*)UObject::GObjObjects()->Data[5387];

	UObject_execGetBuildChangelistNumber_Parms GetBuildChangelistNumber_Parms;

	pFnGetBuildChangelistNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetBuildChangelistNumber, &GetBuildChangelistNumber_Parms, NULL);

	pFnGetBuildChangelistNumber->FunctionFlags |= 0x400;

	return GetBuildChangelistNumber_Parms.ReturnValue;
};

// Function Core.Object.GetEngineVersion
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UObject::GetEngineVersion()
{
	static UFunction* pFnGetEngineVersion = NULL;

	if (!pFnGetEngineVersion)
		pFnGetEngineVersion = (UFunction*)UObject::GObjObjects()->Data[5391];

	UObject_execGetEngineVersion_Parms GetEngineVersion_Parms;

	pFnGetEngineVersion->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetEngineVersion, &GetEngineVersion_Parms, NULL);

	pFnGetEngineVersion->FunctionFlags |= 0x400;

	return GetEngineVersion_Parms.ReturnValue;
};

// Function Core.Object.GetSystemTime
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            Year                           ( CPF_Parm | CPF_OutParm )
// int                            Month                          ( CPF_Parm | CPF_OutParm )
// int                            DayOfWeek                      ( CPF_Parm | CPF_OutParm )
// int                            Day                            ( CPF_Parm | CPF_OutParm )
// int                            Hour                           ( CPF_Parm | CPF_OutParm )
// int                            Min                            ( CPF_Parm | CPF_OutParm )
// int                            Sec                            ( CPF_Parm | CPF_OutParm )
// int                            MSec                           ( CPF_Parm | CPF_OutParm )

void UObject::GetSystemTime(int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec)
{
	static UFunction* pFnGetSystemTime = NULL;

	if (!pFnGetSystemTime)
		pFnGetSystemTime = (UFunction*)UObject::GObjObjects()->Data[5393];

	UObject_execGetSystemTime_Parms GetSystemTime_Parms;

	pFnGetSystemTime->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetSystemTime, &GetSystemTime_Parms, NULL);

	pFnGetSystemTime->FunctionFlags |= 0x400;

	if (Year)
		*Year = GetSystemTime_Parms.Year;

	if (Month)
		*Month = GetSystemTime_Parms.Month;

	if (DayOfWeek)
		*DayOfWeek = GetSystemTime_Parms.DayOfWeek;

	if (Day)
		*Day = GetSystemTime_Parms.Day;

	if (Hour)
		*Hour = GetSystemTime_Parms.Hour;

	if (Min)
		*Min = GetSystemTime_Parms.Min;

	if (Sec)
		*Sec = GetSystemTime_Parms.Sec;

	if (MSec)
		*MSec = GetSystemTime_Parms.MSec;
};

// Function Core.Object.TimeStamp
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UObject::TimeStamp()
{
	static UFunction* pFnTimeStamp = NULL;

	if (!pFnTimeStamp)
		pFnTimeStamp = (UFunction*)UObject::GObjObjects()->Data[5395];

	UObject_execTimeStamp_Parms TimeStamp_Parms;

	pFnTimeStamp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTimeStamp, &TimeStamp_Parms, NULL);

	pFnTimeStamp->FunctionFlags |= 0x400;

	return TimeStamp_Parms.ReturnValue;
};

// Function Core.Object.TransformVectorByRotation
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                SourceRotation                 ( CPF_Parm )
// struct FVector                 SourceVector                   ( CPF_Parm )
// unsigned long                  bInverse                       ( CPF_OptionalParm | CPF_Parm )

struct FVector UObject::TransformVectorByRotation(struct FRotator SourceRotation, struct FVector SourceVector, unsigned long bInverse)
{
	static UFunction* pFnTransformVectorByRotation = NULL;

	if (!pFnTransformVectorByRotation)
		pFnTransformVectorByRotation = (UFunction*)UObject::GObjObjects()->Data[5404];

	UObject_execTransformVectorByRotation_Parms TransformVectorByRotation_Parms;
	memcpy(&TransformVectorByRotation_Parms.SourceRotation, &SourceRotation, 0xC);
	memcpy(&TransformVectorByRotation_Parms.SourceVector, &SourceVector, 0xC);
	TransformVectorByRotation_Parms.bInverse = bInverse;

	pFnTransformVectorByRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTransformVectorByRotation, &TransformVectorByRotation_Parms, NULL);

	pFnTransformVectorByRotation->FunctionFlags |= 0x400;

	return TransformVectorByRotation_Parms.ReturnValue;
};

// Function Core.Object.GetPackageName
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName UObject::GetPackageName()
{
	static UFunction* pFnGetPackageName = NULL;

	if (!pFnGetPackageName)
		pFnGetPackageName = (UFunction*)UObject::GObjObjects()->Data[5406];

	UObject_execGetPackageName_Parms GetPackageName_Parms;

	pFnGetPackageName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetPackageName, &GetPackageName_Parms, NULL);

	pFnGetPackageName->FunctionFlags |= 0x400;

	return GetPackageName_Parms.ReturnValue;
};

// Function Core.Object.IsPendingKill
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UObject::IsPendingKill()
{
	static UFunction* pFnIsPendingKill = NULL;

	if (!pFnIsPendingKill)
		pFnIsPendingKill = (UFunction*)UObject::GObjObjects()->Data[5422];

	UObject_execIsPendingKill_Parms IsPendingKill_Parms;

	pFnIsPendingKill->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsPendingKill, &IsPendingKill_Parms, NULL);

	pFnIsPendingKill->FunctionFlags |= 0x400;

	return IsPendingKill_Parms.ReturnValue;
};

// Function Core.Object.ByteToFloat
// [0x00024103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  inputByte                      ( CPF_Parm )
// unsigned long                  bSigned                        ( CPF_OptionalParm | CPF_Parm )

float UObject::ByteToFloat(unsigned char inputByte, unsigned long bSigned)
{
	static UFunction* pFnByteToFloat = NULL;

	if (!pFnByteToFloat)
		pFnByteToFloat = (UFunction*)UObject::GObjObjects()->Data[5424];

	UObject_execByteToFloat_Parms ByteToFloat_Parms;
	ByteToFloat_Parms.inputByte = inputByte;
	ByteToFloat_Parms.bSigned = bSigned;

	this->ProcessEvent(pFnByteToFloat, &ByteToFloat_Parms, NULL);

	return ByteToFloat_Parms.ReturnValue;
};

// Function Core.Object.FloatToByte
// [0x00024103] ( FUNC_Final )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          inputFloat                     ( CPF_Parm )
// unsigned long                  bSigned                        ( CPF_OptionalParm | CPF_Parm )

unsigned char UObject::FloatToByte(float inputFloat, unsigned long bSigned)
{
	static UFunction* pFnFloatToByte = NULL;

	if (!pFnFloatToByte)
		pFnFloatToByte = (UFunction*)UObject::GObjObjects()->Data[5426];

	UObject_execFloatToByte_Parms FloatToByte_Parms;
	FloatToByte_Parms.inputFloat = inputFloat;
	FloatToByte_Parms.bSigned = bSigned;

	this->ProcessEvent(pFnFloatToByte, &FloatToByte_Parms, NULL);

	return FloatToByte_Parms.ReturnValue;
};

// Function Core.Object.UnwindHeading
// [0x00022103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::UnwindHeading(float A)
{
	static UFunction* pFnUnwindHeading = NULL;

	if (!pFnUnwindHeading)
		pFnUnwindHeading = (UFunction*)UObject::GObjObjects()->Data[5430];

	UObject_execUnwindHeading_Parms UnwindHeading_Parms;
	UnwindHeading_Parms.A = A;

	this->ProcessEvent(pFnUnwindHeading, &UnwindHeading_Parms, NULL);

	return UnwindHeading_Parms.ReturnValue;
};

// Function Core.Object.FindDeltaAngle
// [0x00022103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A1                             ( CPF_Parm )
// float                          A2                             ( CPF_Parm )

float UObject::FindDeltaAngle(float A1, float A2)
{
	static UFunction* pFnFindDeltaAngle = NULL;

	if (!pFnFindDeltaAngle)
		pFnFindDeltaAngle = (UFunction*)UObject::GObjObjects()->Data[5434];

	UObject_execFindDeltaAngle_Parms FindDeltaAngle_Parms;
	FindDeltaAngle_Parms.A1 = A1;
	FindDeltaAngle_Parms.A2 = A2;

	this->ProcessEvent(pFnFindDeltaAngle, &FindDeltaAngle_Parms, NULL);

	return FindDeltaAngle_Parms.ReturnValue;
};

// Function Core.Object.GetHeadingAngle
// [0x00022103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Dir                            ( CPF_Parm )

float UObject::GetHeadingAngle(struct FVector Dir)
{
	static UFunction* pFnGetHeadingAngle = NULL;

	if (!pFnGetHeadingAngle)
		pFnGetHeadingAngle = (UFunction*)UObject::GObjObjects()->Data[5437];

	UObject_execGetHeadingAngle_Parms GetHeadingAngle_Parms;
	memcpy(&GetHeadingAngle_Parms.Dir, &Dir, 0xC);

	this->ProcessEvent(pFnGetHeadingAngle, &GetHeadingAngle_Parms, NULL);

	return GetHeadingAngle_Parms.ReturnValue;
};

// Function Core.Object.GetAngularDegreesFromRadians
// [0x00422103] ( FUNC_Final )
// Parameters infos:
// struct FVector2D               OutFOV                         ( CPF_Parm | CPF_OutParm )

void UObject::GetAngularDegreesFromRadians(struct FVector2D* OutFOV)
{
	static UFunction* pFnGetAngularDegreesFromRadians = NULL;

	if (!pFnGetAngularDegreesFromRadians)
		pFnGetAngularDegreesFromRadians = (UFunction*)UObject::GObjObjects()->Data[5441];

	UObject_execGetAngularDegreesFromRadians_Parms GetAngularDegreesFromRadians_Parms;

	this->ProcessEvent(pFnGetAngularDegreesFromRadians, &GetAngularDegreesFromRadians_Parms, NULL);

	if (OutFOV)
		memcpy(OutFOV, &GetAngularDegreesFromRadians_Parms.OutFOV, 0x8);
};

// Function Core.Object.GetAngularFromDotDist
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector2D               DotDist                        ( CPF_Parm )
// struct FVector2D               OutAngDist                     ( CPF_Parm | CPF_OutParm )

void UObject::GetAngularFromDotDist(struct FVector2D DotDist, struct FVector2D* OutAngDist)
{
	static UFunction* pFnGetAngularFromDotDist = NULL;

	if (!pFnGetAngularFromDotDist)
		pFnGetAngularFromDotDist = (UFunction*)UObject::GObjObjects()->Data[5445];

	UObject_execGetAngularFromDotDist_Parms GetAngularFromDotDist_Parms;
	memcpy(&GetAngularFromDotDist_Parms.DotDist, &DotDist, 0x8);

	pFnGetAngularFromDotDist->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAngularFromDotDist, &GetAngularFromDotDist_Parms, NULL);

	pFnGetAngularFromDotDist->FunctionFlags |= 0x400;

	if (OutAngDist)
		memcpy(OutAngDist, &GetAngularFromDotDist_Parms.OutAngDist, 0x8);
};

// Function Core.Object.GetAngularDistance
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 AxisX                          ( CPF_Parm )
// struct FVector                 AxisY                          ( CPF_Parm )
// struct FVector                 AxisZ                          ( CPF_Parm )
// struct FVector2D               OutAngularDist                 ( CPF_Parm | CPF_OutParm )

bool UObject::GetAngularDistance(struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutAngularDist)
{
	static UFunction* pFnGetAngularDistance = NULL;

	if (!pFnGetAngularDistance)
		pFnGetAngularDistance = (UFunction*)UObject::GObjObjects()->Data[5450];

	UObject_execGetAngularDistance_Parms GetAngularDistance_Parms;
	memcpy(&GetAngularDistance_Parms.Direction, &Direction, 0xC);
	memcpy(&GetAngularDistance_Parms.AxisX, &AxisX, 0xC);
	memcpy(&GetAngularDistance_Parms.AxisY, &AxisY, 0xC);
	memcpy(&GetAngularDistance_Parms.AxisZ, &AxisZ, 0xC);

	pFnGetAngularDistance->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAngularDistance, &GetAngularDistance_Parms, NULL);

	pFnGetAngularDistance->FunctionFlags |= 0x400;

	if (OutAngularDist)
		memcpy(OutAngularDist, &GetAngularDistance_Parms.OutAngularDist, 0x8);

	return GetAngularDistance_Parms.ReturnValue;
};

// Function Core.Object.GetDotDistance
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Direction                      ( CPF_Parm )
// struct FVector                 AxisX                          ( CPF_Parm )
// struct FVector                 AxisY                          ( CPF_Parm )
// struct FVector                 AxisZ                          ( CPF_Parm )
// struct FVector2D               OutDotDist                     ( CPF_Parm | CPF_OutParm )

bool UObject::GetDotDistance(struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutDotDist)
{
	static UFunction* pFnGetDotDistance = NULL;

	if (!pFnGetDotDistance)
		pFnGetDotDistance = (UFunction*)UObject::GObjObjects()->Data[5453];

	UObject_execGetDotDistance_Parms GetDotDistance_Parms;
	memcpy(&GetDotDistance_Parms.Direction, &Direction, 0xC);
	memcpy(&GetDotDistance_Parms.AxisX, &AxisX, 0xC);
	memcpy(&GetDotDistance_Parms.AxisY, &AxisY, 0xC);
	memcpy(&GetDotDistance_Parms.AxisZ, &AxisZ, 0xC);

	pFnGetDotDistance->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetDotDistance, &GetDotDistance_Parms, NULL);

	pFnGetDotDistance->FunctionFlags |= 0x400;

	if (OutDotDist)
		memcpy(OutDotDist, &GetDotDistance_Parms.OutDotDist, 0x8);

	return GetDotDistance_Parms.ReturnValue;
};

// Function Core.Object.PointProjectToPlane
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Point                          ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )
// struct FVector                 C                              ( CPF_Parm )

struct FVector UObject::PointProjectToPlane(struct FVector Point, struct FVector A, struct FVector B, struct FVector C)
{
	static UFunction* pFnPointProjectToPlane = NULL;

	if (!pFnPointProjectToPlane)
		pFnPointProjectToPlane = (UFunction*)UObject::GObjObjects()->Data[5460];

	UObject_execPointProjectToPlane_Parms PointProjectToPlane_Parms;
	memcpy(&PointProjectToPlane_Parms.Point, &Point, 0xC);
	memcpy(&PointProjectToPlane_Parms.A, &A, 0xC);
	memcpy(&PointProjectToPlane_Parms.B, &B, 0xC);
	memcpy(&PointProjectToPlane_Parms.C, &C, 0xC);

	pFnPointProjectToPlane->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPointProjectToPlane, &PointProjectToPlane_Parms, NULL);

	pFnPointProjectToPlane->FunctionFlags |= 0x400;

	return PointProjectToPlane_Parms.ReturnValue;
};

// Function Core.Object.PointDistToPlane
// [0x00C24103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Point                          ( CPF_Parm )
// struct FRotator                Orientation                    ( CPF_Parm )
// struct FVector                 Origin                         ( CPF_Parm )
// struct FVector                 out_ClosestPoint               ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

float UObject::PointDistToPlane(struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector* out_ClosestPoint)
{
	static UFunction* pFnPointDistToPlane = NULL;

	if (!pFnPointDistToPlane)
		pFnPointDistToPlane = (UFunction*)UObject::GObjObjects()->Data[5467];

	UObject_execPointDistToPlane_Parms PointDistToPlane_Parms;
	memcpy(&PointDistToPlane_Parms.Point, &Point, 0xC);
	memcpy(&PointDistToPlane_Parms.Orientation, &Orientation, 0xC);
	memcpy(&PointDistToPlane_Parms.Origin, &Origin, 0xC);

	this->ProcessEvent(pFnPointDistToPlane, &PointDistToPlane_Parms, NULL);

	if (out_ClosestPoint)
		memcpy(out_ClosestPoint, &PointDistToPlane_Parms.out_ClosestPoint, 0xC);

	return PointDistToPlane_Parms.ReturnValue;
};

// Function Core.Object.PointDistToSegment
// [0x00424401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Point                          ( CPF_Parm )
// struct FVector                 StartPoint                     ( CPF_Parm )
// struct FVector                 EndPoint                       ( CPF_Parm )
// struct FVector                 OutClosestPoint                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

float UObject::PointDistToSegment(struct FVector Point, struct FVector StartPoint, struct FVector EndPoint, struct FVector* OutClosestPoint)
{
	static UFunction* pFnPointDistToSegment = NULL;

	if (!pFnPointDistToSegment)
		pFnPointDistToSegment = (UFunction*)UObject::GObjObjects()->Data[5473];

	UObject_execPointDistToSegment_Parms PointDistToSegment_Parms;
	memcpy(&PointDistToSegment_Parms.Point, &Point, 0xC);
	memcpy(&PointDistToSegment_Parms.StartPoint, &StartPoint, 0xC);
	memcpy(&PointDistToSegment_Parms.EndPoint, &EndPoint, 0xC);

	pFnPointDistToSegment->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPointDistToSegment, &PointDistToSegment_Parms, NULL);

	pFnPointDistToSegment->FunctionFlags |= 0x400;

	if (OutClosestPoint)
		memcpy(OutClosestPoint, &PointDistToSegment_Parms.OutClosestPoint, 0xC);

	return PointDistToSegment_Parms.ReturnValue;
};

// Function Core.Object.PointDistToLine
// [0x00424401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Point                          ( CPF_Parm )
// struct FVector                 Line                           ( CPF_Parm )
// struct FVector                 Origin                         ( CPF_Parm )
// struct FVector                 OutClosestPoint                ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

float UObject::PointDistToLine(struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector* OutClosestPoint)
{
	static UFunction* pFnPointDistToLine = NULL;

	if (!pFnPointDistToLine)
		pFnPointDistToLine = (UFunction*)UObject::GObjObjects()->Data[5484];

	UObject_execPointDistToLine_Parms PointDistToLine_Parms;
	memcpy(&PointDistToLine_Parms.Point, &Point, 0xC);
	memcpy(&PointDistToLine_Parms.Line, &Line, 0xC);
	memcpy(&PointDistToLine_Parms.Origin, &Origin, 0xC);

	pFnPointDistToLine->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPointDistToLine, &PointDistToLine_Parms, NULL);

	pFnPointDistToLine->FunctionFlags |= 0x400;

	if (OutClosestPoint)
		memcpy(OutClosestPoint, &PointDistToLine_Parms.OutClosestPoint, 0xC);

	return PointDistToLine_Parms.ReturnValue;
};

// Function Core.Object.GetPerObjectConfigSections
// [0x00426401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// class UObject*                 ObjectOuter                    ( CPF_OptionalParm | CPF_Parm )
// int                            MaxResults                     ( CPF_OptionalParm | CPF_Parm )
// TArray< struct FString >       out_SectionNames               ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UObject::GetPerObjectConfigSections(class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray< struct FString >* out_SectionNames)
{
	static UFunction* pFnGetPerObjectConfigSections = NULL;

	if (!pFnGetPerObjectConfigSections)
		pFnGetPerObjectConfigSections = (UFunction*)UObject::GObjObjects()->Data[5490];

	UObject_execGetPerObjectConfigSections_Parms GetPerObjectConfigSections_Parms;
	GetPerObjectConfigSections_Parms.SearchClass = SearchClass;
	GetPerObjectConfigSections_Parms.ObjectOuter = ObjectOuter;
	GetPerObjectConfigSections_Parms.MaxResults = MaxResults;

	pFnGetPerObjectConfigSections->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetPerObjectConfigSections, &GetPerObjectConfigSections_Parms, NULL);

	pFnGetPerObjectConfigSections->FunctionFlags |= 0x400;

	if (out_SectionNames)
		memcpy(out_SectionNames, &GetPerObjectConfigSections_Parms.out_SectionNames, 0xC);

	return GetPerObjectConfigSections_Parms.ReturnValue;
};

// Function Core.Object.StaticSaveConfig
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::StaticSaveConfig()
{
	static UFunction* pFnStaticSaveConfig = NULL;

	if (!pFnStaticSaveConfig)
		pFnStaticSaveConfig = (UFunction*)UObject::GObjObjects()->Data[5496];

	UObject_execStaticSaveConfig_Parms StaticSaveConfig_Parms;

	pFnStaticSaveConfig->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStaticSaveConfig, &StaticSaveConfig_Parms, NULL);

	pFnStaticSaveConfig->FunctionFlags |= 0x400;
};

// Function Core.Object.SaveConfig
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0218]
// Parameters infos:

void UObject::SaveConfig()
{
	static UFunction* pFnSaveConfig = NULL;

	if (!pFnSaveConfig)
		pFnSaveConfig = (UFunction*)UObject::GObjObjects()->Data[5503];

	UObject_execSaveConfig_Parms SaveConfig_Parms;

	unsigned short NativeIndex = pFnSaveConfig->iNative;
	pFnSaveConfig->iNative = 0;

	pFnSaveConfig->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSaveConfig, &SaveConfig_Parms, NULL);

	pFnSaveConfig->FunctionFlags |= 0x400;

	pFnSaveConfig->iNative = NativeIndex;
};

// Function Core.Object.GetAttributeModiferDescriptor
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   AttributeName                  ( CPF_Parm )

struct FString UObject::GetAttributeModiferDescriptor(struct FName AttributeName)
{
	static UFunction* pFnGetAttributeModiferDescriptor = NULL;

	if (!pFnGetAttributeModiferDescriptor)
		pFnGetAttributeModiferDescriptor = (UFunction*)UObject::GObjObjects()->Data[5504];

	UObject_execGetAttributeModiferDescriptor_Parms GetAttributeModiferDescriptor_Parms;
	memcpy(&GetAttributeModiferDescriptor_Parms.AttributeName, &AttributeName, 0x8);

	pFnGetAttributeModiferDescriptor->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAttributeModiferDescriptor, &GetAttributeModiferDescriptor_Parms, NULL);

	pFnGetAttributeModiferDescriptor->FunctionFlags |= 0x400;

	return GetAttributeModiferDescriptor_Parms.ReturnValue;
};

// Function Core.Object.GetAttributeValueByName
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   AttributeName                  ( CPF_Parm )

float UObject::GetAttributeValueByName(struct FName AttributeName)
{
	static UFunction* pFnGetAttributeValueByName = NULL;

	if (!pFnGetAttributeValueByName)
		pFnGetAttributeValueByName = (UFunction*)UObject::GObjObjects()->Data[5505];

	UObject_execGetAttributeValueByName_Parms GetAttributeValueByName_Parms;
	memcpy(&GetAttributeValueByName_Parms.AttributeName, &AttributeName, 0x8);

	pFnGetAttributeValueByName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAttributeValueByName, &GetAttributeValueByName_Parms, NULL);

	pFnGetAttributeValueByName->FunctionFlags |= 0x400;

	return GetAttributeValueByName_Parms.ReturnValue;
};

// Function Core.Object.RemoveModifier
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UAttributeModifier*      mod                            ( CPF_Parm )
// struct FName                   AttributeName                  ( CPF_Parm )
// unsigned long                  bSuppressNotify                ( CPF_OptionalParm | CPF_Parm )

bool UObject::RemoveModifier(class UAttributeModifier* mod, struct FName AttributeName, unsigned long bSuppressNotify)
{
	static UFunction* pFnRemoveModifier = NULL;

	if (!pFnRemoveModifier)
		pFnRemoveModifier = (UFunction*)UObject::GObjObjects()->Data[5508];

	UObject_execRemoveModifier_Parms RemoveModifier_Parms;
	RemoveModifier_Parms.mod = mod;
	memcpy(&RemoveModifier_Parms.AttributeName, &AttributeName, 0x8);
	RemoveModifier_Parms.bSuppressNotify = bSuppressNotify;

	pFnRemoveModifier->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRemoveModifier, &RemoveModifier_Parms, NULL);

	pFnRemoveModifier->FunctionFlags |= 0x400;

	return RemoveModifier_Parms.ReturnValue;
};

// Function Core.Object.AddModifier
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UAttributeModifier*      mod                            ( CPF_Parm )
// struct FName                   AttributeName                  ( CPF_Parm )
// unsigned long                  bSuppressNotify                ( CPF_OptionalParm | CPF_Parm )

bool UObject::AddModifier(class UAttributeModifier* mod, struct FName AttributeName, unsigned long bSuppressNotify)
{
	static UFunction* pFnAddModifier = NULL;

	if (!pFnAddModifier)
		pFnAddModifier = (UFunction*)UObject::GObjObjects()->Data[5511];

	UObject_execAddModifier_Parms AddModifier_Parms;
	AddModifier_Parms.mod = mod;
	memcpy(&AddModifier_Parms.AttributeName, &AttributeName, 0x8);
	AddModifier_Parms.bSuppressNotify = bSuppressNotify;

	pFnAddModifier->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddModifier, &AddModifier_Parms, NULL);

	pFnAddModifier->FunctionFlags |= 0x400;

	return AddModifier_Parms.ReturnValue;
};

// Function Core.Object.FindObject
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UObject*                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ObjectName                     ( CPF_Parm | CPF_NeedCtorLink )
// class UClass*                  ObjectClass                    ( CPF_Parm )

class UObject* UObject::FindObject(struct FString ObjectName, class UClass* ObjectClass)
{
	static UFunction* pFnFindObject = NULL;

	if (!pFnFindObject)
		pFnFindObject = (UFunction*)UObject::GObjObjects()->Data[5516];

	UObject_execFindObject_Parms FindObject_Parms;
	memcpy(&FindObject_Parms.ObjectName, &ObjectName, 0xC);
	FindObject_Parms.ObjectClass = ObjectClass;

	pFnFindObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindObject, &FindObject_Parms, NULL);

	pFnFindObject->FunctionFlags |= 0x400;

	return FindObject_Parms.ReturnValue;
};

// Function Core.Object.DynamicLoadObject
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UObject*                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 ObjectName                     ( CPF_Parm | CPF_NeedCtorLink )
// class UClass*                  ObjectClass                    ( CPF_Parm )
// unsigned long                  MayFail                        ( CPF_OptionalParm | CPF_Parm )

class UObject* UObject::DynamicLoadObject(struct FString ObjectName, class UClass* ObjectClass, unsigned long MayFail)
{
	static UFunction* pFnDynamicLoadObject = NULL;

	if (!pFnDynamicLoadObject)
		pFnDynamicLoadObject = (UFunction*)UObject::GObjObjects()->Data[5521];

	UObject_execDynamicLoadObject_Parms DynamicLoadObject_Parms;
	memcpy(&DynamicLoadObject_Parms.ObjectName, &ObjectName, 0xC);
	DynamicLoadObject_Parms.ObjectClass = ObjectClass;
	DynamicLoadObject_Parms.MayFail = MayFail;

	pFnDynamicLoadObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDynamicLoadObject, &DynamicLoadObject_Parms, NULL);

	pFnDynamicLoadObject->FunctionFlags |= 0x400;

	return DynamicLoadObject_Parms.ReturnValue;
};

// Function Core.Object.GetEnum
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 E                              ( CPF_Parm )
// int                            I                              ( CPF_Parm | CPF_CoerceParm )

struct FName UObject::GetEnum(class UObject* E, int I)
{
	static UFunction* pFnGetEnum = NULL;

	if (!pFnGetEnum)
		pFnGetEnum = (UFunction*)UObject::GObjObjects()->Data[5525];

	UObject_execGetEnum_Parms GetEnum_Parms;
	GetEnum_Parms.E = E;
	GetEnum_Parms.I = I;

	pFnGetEnum->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetEnum, &GetEnum_Parms, NULL);

	pFnGetEnum->FunctionFlags |= 0x400;

	return GetEnum_Parms.ReturnValue;
};

// Function Core.Object.Disable
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0076]
// Parameters infos:
// struct FName                   ProbeFunc                      ( CPF_Parm )

void UObject::Disable(struct FName ProbeFunc)
{
	static UFunction* pFnDisable = NULL;

	if (!pFnDisable)
		pFnDisable = (UFunction*)UObject::GObjObjects()->Data[5530];

	UObject_execDisable_Parms Disable_Parms;
	memcpy(&Disable_Parms.ProbeFunc, &ProbeFunc, 0x8);

	unsigned short NativeIndex = pFnDisable->iNative;
	pFnDisable->iNative = 0;

	pFnDisable->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDisable, &Disable_Parms, NULL);

	pFnDisable->FunctionFlags |= 0x400;

	pFnDisable->iNative = NativeIndex;
};

// Function Core.Object.Enable
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x0075]
// Parameters infos:
// struct FName                   ProbeFunc                      ( CPF_Parm )

void UObject::Enable(struct FName ProbeFunc)
{
	static UFunction* pFnEnable = NULL;

	if (!pFnEnable)
		pFnEnable = (UFunction*)UObject::GObjObjects()->Data[5534];

	UObject_execEnable_Parms Enable_Parms;
	memcpy(&Enable_Parms.ProbeFunc, &ProbeFunc, 0x8);

	unsigned short NativeIndex = pFnEnable->iNative;
	pFnEnable->iNative = 0;

	pFnEnable->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEnable, &Enable_Parms, NULL);

	pFnEnable->FunctionFlags |= 0x400;

	pFnEnable->iNative = NativeIndex;
};

// Function Core.Object.ContinuedState
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UObject::eventContinuedState()
{
	static UFunction* pFnContinuedState = NULL;

	if (!pFnContinuedState)
		pFnContinuedState = (UFunction*)UObject::GObjObjects()->Data[5536];

	UObject_eventContinuedState_Parms ContinuedState_Parms;

	this->ProcessEvent(pFnContinuedState, &ContinuedState_Parms, NULL);
};

// Function Core.Object.PausedState
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UObject::eventPausedState()
{
	static UFunction* pFnPausedState = NULL;

	if (!pFnPausedState)
		pFnPausedState = (UFunction*)UObject::GObjObjects()->Data[5538];

	UObject_eventPausedState_Parms PausedState_Parms;

	this->ProcessEvent(pFnPausedState, &PausedState_Parms, NULL);
};

// Function Core.Object.PoppedState
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UObject::eventPoppedState()
{
	static UFunction* pFnPoppedState = NULL;

	if (!pFnPoppedState)
		pFnPoppedState = (UFunction*)UObject::GObjObjects()->Data[5539];

	UObject_eventPoppedState_Parms PoppedState_Parms;

	this->ProcessEvent(pFnPoppedState, &PoppedState_Parms, NULL);
};

// Function Core.Object.PushedState
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void UObject::eventPushedState()
{
	static UFunction* pFnPushedState = NULL;

	if (!pFnPushedState)
		pFnPushedState = (UFunction*)UObject::GObjObjects()->Data[5540];

	UObject_eventPushedState_Parms PushedState_Parms;

	this->ProcessEvent(pFnPushedState, &PushedState_Parms, NULL);
};

// Function Core.Object.EndState
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FName                   NextStateName                  ( CPF_Parm )

void UObject::eventEndState(struct FName NextStateName)
{
	static UFunction* pFnEndState = NULL;

	if (!pFnEndState)
		pFnEndState = (UFunction*)UObject::GObjObjects()->Data[5541];

	UObject_eventEndState_Parms EndState_Parms;
	memcpy(&EndState_Parms.NextStateName, &NextStateName, 0x8);

	this->ProcessEvent(pFnEndState, &EndState_Parms, NULL);
};

// Function Core.Object.BeginState
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FName                   PreviousStateName              ( CPF_Parm )

void UObject::eventBeginState(struct FName PreviousStateName)
{
	static UFunction* pFnBeginState = NULL;

	if (!pFnBeginState)
		pFnBeginState = (UFunction*)UObject::GObjObjects()->Data[5542];

	UObject_eventBeginState_Parms BeginState_Parms;
	memcpy(&BeginState_Parms.PreviousStateName, &PreviousStateName, 0x8);

	this->ProcessEvent(pFnBeginState, &BeginState_Parms, NULL);
};

// Function Core.Object.BreakPoint
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UObject*                 SomeObject                     ( CPF_OptionalParm | CPF_Parm )

void UObject::BreakPoint(class UObject* SomeObject)
{
	static UFunction* pFnBreakPoint = NULL;

	if (!pFnBreakPoint)
		pFnBreakPoint = (UFunction*)UObject::GObjObjects()->Data[5544];

	UObject_execBreakPoint_Parms BreakPoint_Parms;
	BreakPoint_Parms.SomeObject = SomeObject;

	pFnBreakPoint->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnBreakPoint, &BreakPoint_Parms, NULL);

	pFnBreakPoint->FunctionFlags |= 0x400;
};

// Function Core.Object.PrintScriptStack
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::PrintScriptStack()
{
	static UFunction* pFnPrintScriptStack = NULL;

	if (!pFnPrintScriptStack)
		pFnPrintScriptStack = (UFunction*)UObject::GObjObjects()->Data[5546];

	UObject_execPrintScriptStack_Parms PrintScriptStack_Parms;

	pFnPrintScriptStack->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPrintScriptStack, &PrintScriptStack_Parms, NULL);

	pFnPrintScriptStack->FunctionFlags |= 0x400;
};

// Function Core.Object.DumpStateStack
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::DumpStateStack()
{
	static UFunction* pFnDumpStateStack = NULL;

	if (!pFnDumpStateStack)
		pFnDumpStateStack = (UFunction*)UObject::GObjObjects()->Data[5548];

	UObject_execDumpStateStack_Parms DumpStateStack_Parms;

	pFnDumpStateStack->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDumpStateStack, &DumpStateStack_Parms, NULL);

	pFnDumpStateStack->FunctionFlags |= 0x400;
};

// Function Core.Object.PopState
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bPopAll                        ( CPF_OptionalParm | CPF_Parm )

void UObject::PopState(unsigned long bPopAll)
{
	static UFunction* pFnPopState = NULL;

	if (!pFnPopState)
		pFnPopState = (UFunction*)UObject::GObjObjects()->Data[5549];

	UObject_execPopState_Parms PopState_Parms;
	PopState_Parms.bPopAll = bPopAll;

	pFnPopState->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPopState, &PopState_Parms, NULL);

	pFnPopState->FunctionFlags |= 0x400;
};

// Function Core.Object.PushState
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   NewState                       ( CPF_Parm )
// struct FName                   NewLabel                       ( CPF_OptionalParm | CPF_Parm )

void UObject::PushState(struct FName NewState, struct FName NewLabel)
{
	static UFunction* pFnPushState = NULL;

	if (!pFnPushState)
		pFnPushState = (UFunction*)UObject::GObjObjects()->Data[5550];

	UObject_execPushState_Parms PushState_Parms;
	memcpy(&PushState_Parms.NewState, &NewState, 0x8);
	memcpy(&PushState_Parms.NewLabel, &NewLabel, 0x8);

	pFnPushState->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPushState, &PushState_Parms, NULL);

	pFnPushState->FunctionFlags |= 0x400;
};

// Function Core.Object.GetStateName
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x011C]
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName UObject::GetStateName()
{
	static UFunction* pFnGetStateName = NULL;

	if (!pFnGetStateName)
		pFnGetStateName = (UFunction*)UObject::GObjObjects()->Data[5552];

	UObject_execGetStateName_Parms GetStateName_Parms;

	unsigned short NativeIndex = pFnGetStateName->iNative;
	pFnGetStateName->iNative = 0;

	pFnGetStateName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetStateName, &GetStateName_Parms, NULL);

	pFnGetStateName->FunctionFlags |= 0x400;

	pFnGetStateName->iNative = NativeIndex;

	return GetStateName_Parms.ReturnValue;
};

// Function Core.Object.IsChildState
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   TestState                      ( CPF_Parm )
// struct FName                   TestParentState                ( CPF_Parm )

bool UObject::IsChildState(struct FName TestState, struct FName TestParentState)
{
	static UFunction* pFnIsChildState = NULL;

	if (!pFnIsChildState)
		pFnIsChildState = (UFunction*)UObject::GObjObjects()->Data[5555];

	UObject_execIsChildState_Parms IsChildState_Parms;
	memcpy(&IsChildState_Parms.TestState, &TestState, 0x8);
	memcpy(&IsChildState_Parms.TestParentState, &TestParentState, 0x8);

	pFnIsChildState->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsChildState, &IsChildState_Parms, NULL);

	pFnIsChildState->FunctionFlags |= 0x400;

	return IsChildState_Parms.ReturnValue;
};

// Function Core.Object.IsInState
// [0x00024401] ( FUNC_Final | FUNC_Native ) iNative [0x0119]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   TestState                      ( CPF_Parm )
// unsigned long                  bTestStateStack                ( CPF_OptionalParm | CPF_Parm )

bool UObject::IsInState(struct FName TestState, unsigned long bTestStateStack)
{
	static UFunction* pFnIsInState = NULL;

	if (!pFnIsInState)
		pFnIsInState = (UFunction*)UObject::GObjObjects()->Data[5557];

	UObject_execIsInState_Parms IsInState_Parms;
	memcpy(&IsInState_Parms.TestState, &TestState, 0x8);
	IsInState_Parms.bTestStateStack = bTestStateStack;

	unsigned short NativeIndex = pFnIsInState->iNative;
	pFnIsInState->iNative = 0;

	pFnIsInState->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsInState, &IsInState_Parms, NULL);

	pFnIsInState->FunctionFlags |= 0x400;

	pFnIsInState->iNative = NativeIndex;

	return IsInState_Parms.ReturnValue;
};

// Function Core.Object.GotoState
// [0x00024401] ( FUNC_Final | FUNC_Native ) iNative [0x0071]
// Parameters infos:
// struct FName                   NewState                       ( CPF_OptionalParm | CPF_Parm )
// struct FName                   Label                          ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bForceEvents                   ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bKeepStack                     ( CPF_OptionalParm | CPF_Parm )

void UObject::GotoState(struct FName NewState, struct FName Label, unsigned long bForceEvents, unsigned long bKeepStack)
{
	static UFunction* pFnGotoState = NULL;

	if (!pFnGotoState)
		pFnGotoState = (UFunction*)UObject::GObjObjects()->Data[5561];

	UObject_execGotoState_Parms GotoState_Parms;
	memcpy(&GotoState_Parms.NewState, &NewState, 0x8);
	memcpy(&GotoState_Parms.Label, &Label, 0x8);
	GotoState_Parms.bForceEvents = bForceEvents;
	GotoState_Parms.bKeepStack = bKeepStack;

	unsigned short NativeIndex = pFnGotoState->iNative;
	pFnGotoState->iNative = 0;

	pFnGotoState->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGotoState, &GotoState_Parms, NULL);

	pFnGotoState->FunctionFlags |= 0x400;

	pFnGotoState->iNative = NativeIndex;
};

// Function Core.Object.IsUTracing
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UObject::IsUTracing()
{
	static UFunction* pFnIsUTracing = NULL;

	if (!pFnIsUTracing)
		pFnIsUTracing = (UFunction*)UObject::GObjObjects()->Data[5565];

	UObject_execIsUTracing_Parms IsUTracing_Parms;

	pFnIsUTracing->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsUTracing, &IsUTracing_Parms, NULL);

	pFnIsUTracing->FunctionFlags |= 0x400;

	return IsUTracing_Parms.ReturnValue;
};

// Function Core.Object.SetUTracing
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bShouldUTrace                  ( CPF_Parm )

void UObject::SetUTracing(unsigned long bShouldUTrace)
{
	static UFunction* pFnSetUTracing = NULL;

	if (!pFnSetUTracing)
		pFnSetUTracing = (UFunction*)UObject::GObjObjects()->Data[5570];

	UObject_execSetUTracing_Parms SetUTracing_Parms;
	SetUTracing_Parms.bShouldUTrace = bShouldUTrace;

	pFnSetUTracing->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetUTracing, &SetUTracing_Parms, NULL);

	pFnSetUTracing->FunctionFlags |= 0x400;
};

// Function Core.Object.GetFuncName
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FName                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FName UObject::GetFuncName()
{
	static UFunction* pFnGetFuncName = NULL;

	if (!pFnGetFuncName)
		pFnGetFuncName = (UFunction*)UObject::GObjObjects()->Data[5572];

	UObject_execGetFuncName_Parms GetFuncName_Parms;

	pFnGetFuncName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFuncName, &GetFuncName_Parms, NULL);

	pFnGetFuncName->FunctionFlags |= 0x400;

	return GetFuncName_Parms.ReturnValue;
};

// Function Core.Object.DebugBreak
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            UserFlags                      ( CPF_OptionalParm | CPF_Parm )
// unsigned char                  DebuggerType                   ( CPF_OptionalParm | CPF_Parm )

void UObject::DebugBreak(int UserFlags, unsigned char DebuggerType)
{
	static UFunction* pFnDebugBreak = NULL;

	if (!pFnDebugBreak)
		pFnDebugBreak = (UFunction*)UObject::GObjObjects()->Data[5574];

	UObject_execDebugBreak_Parms DebugBreak_Parms;
	DebugBreak_Parms.UserFlags = UserFlags;
	DebugBreak_Parms.DebuggerType = DebuggerType;

	pFnDebugBreak->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDebugBreak, &DebugBreak_Parms, NULL);

	pFnDebugBreak->FunctionFlags |= 0x400;
};

// Function Core.Object.GetScriptTrace
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )

struct FString UObject::GetScriptTrace()
{
	static UFunction* pFnGetScriptTrace = NULL;

	if (!pFnGetScriptTrace)
		pFnGetScriptTrace = (UFunction*)UObject::GObjObjects()->Data[5576];

	UObject_execGetScriptTrace_Parms GetScriptTrace_Parms;

	pFnGetScriptTrace->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetScriptTrace, &GetScriptTrace_Parms, NULL);

	pFnGetScriptTrace->FunctionFlags |= 0x400;

	return GetScriptTrace_Parms.ReturnValue;
};

// Function Core.Object.ScriptTrace
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UObject::ScriptTrace()
{
	static UFunction* pFnScriptTrace = NULL;

	if (!pFnScriptTrace)
		pFnScriptTrace = (UFunction*)UObject::GObjObjects()->Data[5581];

	UObject_execScriptTrace_Parms ScriptTrace_Parms;

	pFnScriptTrace->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnScriptTrace, &ScriptTrace_Parms, NULL);

	pFnScriptTrace->FunctionFlags |= 0x400;
};

// Function Core.Object.ParseLocalizedPropertyPath
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 PathName                       ( CPF_Parm | CPF_NeedCtorLink )

struct FString UObject::ParseLocalizedPropertyPath(struct FString PathName)
{
	static UFunction* pFnParseLocalizedPropertyPath = NULL;

	if (!pFnParseLocalizedPropertyPath)
		pFnParseLocalizedPropertyPath = (UFunction*)UObject::GObjObjects()->Data[5583];

	UObject_execParseLocalizedPropertyPath_Parms ParseLocalizedPropertyPath_Parms;
	memcpy(&ParseLocalizedPropertyPath_Parms.PathName, &PathName, 0xC);

	this->ProcessEvent(pFnParseLocalizedPropertyPath, &ParseLocalizedPropertyPath_Parms, NULL);

	return ParseLocalizedPropertyPath_Parms.ReturnValue;
};

// Function Core.Object.Localize
// [0x00022400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 SectionName                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 KeyName                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 PackageName                    ( CPF_Parm | CPF_NeedCtorLink )

struct FString UObject::Localize(struct FString SectionName, struct FString KeyName, struct FString PackageName)
{
	static UFunction* pFnLocalize = NULL;

	if (!pFnLocalize)
		pFnLocalize = (UFunction*)UObject::GObjObjects()->Data[5584];

	UObject_execLocalize_Parms Localize_Parms;
	memcpy(&Localize_Parms.SectionName, &SectionName, 0xC);
	memcpy(&Localize_Parms.KeyName, &KeyName, 0xC);
	memcpy(&Localize_Parms.PackageName, &PackageName, 0xC);

	pFnLocalize->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLocalize, &Localize_Parms, NULL);

	pFnLocalize->FunctionFlags |= 0x400;

	return Localize_Parms.ReturnValue;
};

// Function Core.Object.LogIndentedInternal
// [0x00046401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FName                   LogTag                         ( CPF_Parm )
// int                            IndentationLevelChange         ( CPF_OptionalParm | CPF_Parm )

void UObject::LogIndentedInternal(struct FString S, struct FName LogTag, int IndentationLevelChange)
{
	static UFunction* pFnLogIndentedInternal = NULL;

	if (!pFnLogIndentedInternal)
		pFnLogIndentedInternal = (UFunction*)UObject::GObjObjects()->Data[5590];

	UObject_execLogIndentedInternal_Parms LogIndentedInternal_Parms;
	memcpy(&LogIndentedInternal_Parms.S, &S, 0xC);
	memcpy(&LogIndentedInternal_Parms.LogTag, &LogTag, 0x8);
	LogIndentedInternal_Parms.IndentationLevelChange = IndentationLevelChange;

	pFnLogIndentedInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLogIndentedInternal, &LogIndentedInternal_Parms, NULL);

	pFnLogIndentedInternal->FunctionFlags |= 0x400;
};

// Function Core.Object.WarnInternal
// [0x00042401] ( FUNC_Final | FUNC_Native ) iNative [0x00E8]
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void UObject::WarnInternal(struct FString S)
{
	static UFunction* pFnWarnInternal = NULL;

	if (!pFnWarnInternal)
		pFnWarnInternal = (UFunction*)UObject::GObjObjects()->Data[5595];

	UObject_execWarnInternal_Parms WarnInternal_Parms;
	memcpy(&WarnInternal_Parms.S, &S, 0xC);

	unsigned short NativeIndex = pFnWarnInternal->iNative;
	pFnWarnInternal->iNative = 0;

	pFnWarnInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnWarnInternal, &WarnInternal_Parms, NULL);

	pFnWarnInternal->FunctionFlags |= 0x400;

	pFnWarnInternal->iNative = NativeIndex;
};

// Function Core.Object.LogInternal
// [0x00046401] ( FUNC_Final | FUNC_Native ) iNative [0x00E7]
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FName                   Tag                            ( CPF_OptionalParm | CPF_Parm )

void UObject::LogInternal(struct FString S, struct FName Tag)
{
	static UFunction* pFnLogInternal = NULL;

	if (!pFnLogInternal)
		pFnLogInternal = (UFunction*)UObject::GObjObjects()->Data[5599];

	UObject_execLogInternal_Parms LogInternal_Parms;
	memcpy(&LogInternal_Parms.S, &S, 0xC);
	memcpy(&LogInternal_Parms.Tag, &Tag, 0x8);

	unsigned short NativeIndex = pFnLogInternal->iNative;
	pFnLogInternal->iNative = 0;

	pFnLogInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLogInternal, &LogInternal_Parms, NULL);

	pFnLogInternal->FunctionFlags |= 0x400;

	pFnLogInternal->iNative = NativeIndex;
};

// Function Core.Object.GetStringForNameBasedObjectPath
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FNameBasedObjectPath    ObjectPath                     ( CPF_Const | CPF_Parm )

struct FString UObject::GetStringForNameBasedObjectPath(struct FNameBasedObjectPath ObjectPath)
{
	static UFunction* pFnGetStringForNameBasedObjectPath = NULL;

	if (!pFnGetStringForNameBasedObjectPath)
		pFnGetStringForNameBasedObjectPath = (UFunction*)UObject::GObjObjects()->Data[5601];

	UObject_execGetStringForNameBasedObjectPath_Parms GetStringForNameBasedObjectPath_Parms;
	memcpy(&GetStringForNameBasedObjectPath_Parms.ObjectPath, &ObjectPath, 0x34);

	pFnGetStringForNameBasedObjectPath->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetStringForNameBasedObjectPath, &GetStringForNameBasedObjectPath_Parms, NULL);

	pFnGetStringForNameBasedObjectPath->FunctionFlags |= 0x400;

	return GetStringForNameBasedObjectPath_Parms.ReturnValue;
};

// Function Core.Object.SetNameBasedObjectPath
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UObject*                 Object                         ( CPF_Const | CPF_Parm )
// struct FNameBasedObjectPath    ObjectPath                     ( CPF_Parm | CPF_OutParm )

void UObject::SetNameBasedObjectPath(class UObject* Object, struct FNameBasedObjectPath* ObjectPath)
{
	static UFunction* pFnSetNameBasedObjectPath = NULL;

	if (!pFnSetNameBasedObjectPath)
		pFnSetNameBasedObjectPath = (UFunction*)UObject::GObjObjects()->Data[5604];

	UObject_execSetNameBasedObjectPath_Parms SetNameBasedObjectPath_Parms;
	SetNameBasedObjectPath_Parms.Object = Object;

	pFnSetNameBasedObjectPath->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSetNameBasedObjectPath, &SetNameBasedObjectPath_Parms, NULL);

	pFnSetNameBasedObjectPath->FunctionFlags |= 0x400;

	if (ObjectPath)
		memcpy(ObjectPath, &SetNameBasedObjectPath_Parms.ObjectPath, 0x34);
};

// Function Core.Object.FlagHasBeenTrueFor
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          TimeSeconds                    ( CPF_Parm )
// struct FFlag                   theFlag                        ( CPF_Parm | CPF_OutParm )

bool UObject::FlagHasBeenTrueFor(float TimeSeconds, struct FFlag* theFlag)
{
	static UFunction* pFnFlagHasBeenTrueFor = NULL;

	if (!pFnFlagHasBeenTrueFor)
		pFnFlagHasBeenTrueFor = (UFunction*)UObject::GObjObjects()->Data[5611];

	UObject_execFlagHasBeenTrueFor_Parms FlagHasBeenTrueFor_Parms;
	FlagHasBeenTrueFor_Parms.TimeSeconds = TimeSeconds;

	pFnFlagHasBeenTrueFor->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFlagHasBeenTrueFor, &FlagHasBeenTrueFor_Parms, NULL);

	pFnFlagHasBeenTrueFor->FunctionFlags |= 0x400;

	if (theFlag)
		memcpy(theFlag, &FlagHasBeenTrueFor_Parms.theFlag, 0x10);

	return FlagHasBeenTrueFor_Parms.ReturnValue;
};

// Function Core.Object.FlagTimeRemaining
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FFlag                   theFlag                        ( CPF_Parm | CPF_OutParm )

float UObject::FlagTimeRemaining(struct FFlag* theFlag)
{
	static UFunction* pFnFlagTimeRemaining = NULL;

	if (!pFnFlagTimeRemaining)
		pFnFlagTimeRemaining = (UFunction*)UObject::GObjObjects()->Data[5614];

	UObject_execFlagTimeRemaining_Parms FlagTimeRemaining_Parms;

	pFnFlagTimeRemaining->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFlagTimeRemaining, &FlagTimeRemaining_Parms, NULL);

	pFnFlagTimeRemaining->FunctionFlags |= 0x400;

	if (theFlag)
		memcpy(theFlag, &FlagTimeRemaining_Parms.theFlag, 0x10);

	return FlagTimeRemaining_Parms.ReturnValue;
};

// Function Core.Object.FlagTimeSinceRaised
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FFlag                   theFlag                        ( CPF_Parm | CPF_OutParm )

float UObject::FlagTimeSinceRaised(struct FFlag* theFlag)
{
	static UFunction* pFnFlagTimeSinceRaised = NULL;

	if (!pFnFlagTimeSinceRaised)
		pFnFlagTimeSinceRaised = (UFunction*)UObject::GObjObjects()->Data[5627];

	UObject_execFlagTimeSinceRaised_Parms FlagTimeSinceRaised_Parms;

	pFnFlagTimeSinceRaised->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFlagTimeSinceRaised, &FlagTimeSinceRaised_Parms, NULL);

	pFnFlagTimeSinceRaised->FunctionFlags |= 0x400;

	if (theFlag)
		memcpy(theFlag, &FlagTimeSinceRaised_Parms.theFlag, 0x10);

	return FlagTimeSinceRaised_Parms.ReturnValue;
};

// Function Core.Object.FlagSetValue
// [0x00424401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bNewValue                      ( CPF_Parm )
// unsigned long                  bForceTimeStamp                ( CPF_OptionalParm | CPF_Parm )
// struct FFlag                   theFlag                        ( CPF_Parm | CPF_OutParm )

void UObject::FlagSetValue(unsigned long bNewValue, unsigned long bForceTimeStamp, struct FFlag* theFlag)
{
	static UFunction* pFnFlagSetValue = NULL;

	if (!pFnFlagSetValue)
		pFnFlagSetValue = (UFunction*)UObject::GObjObjects()->Data[5630];

	UObject_execFlagSetValue_Parms FlagSetValue_Parms;
	FlagSetValue_Parms.bNewValue = bNewValue;
	FlagSetValue_Parms.bForceTimeStamp = bForceTimeStamp;

	pFnFlagSetValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFlagSetValue, &FlagSetValue_Parms, NULL);

	pFnFlagSetValue->FunctionFlags |= 0x400;

	if (theFlag)
		memcpy(theFlag, &FlagSetValue_Parms.theFlag, 0x10);
};

// Function Core.Object.FlagIsLowered
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FFlag                   theFlag                        ( CPF_Parm | CPF_OutParm )

bool UObject::FlagIsLowered(struct FFlag* theFlag)
{
	static UFunction* pFnFlagIsLowered = NULL;

	if (!pFnFlagIsLowered)
		pFnFlagIsLowered = (UFunction*)UObject::GObjObjects()->Data[5633];

	UObject_execFlagIsLowered_Parms FlagIsLowered_Parms;

	pFnFlagIsLowered->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFlagIsLowered, &FlagIsLowered_Parms, NULL);

	pFnFlagIsLowered->FunctionFlags |= 0x400;

	if (theFlag)
		memcpy(theFlag, &FlagIsLowered_Parms.theFlag, 0x10);

	return FlagIsLowered_Parms.ReturnValue;
};

// Function Core.Object.FlagIsRaised
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FFlag                   theFlag                        ( CPF_Parm | CPF_OutParm )

bool UObject::FlagIsRaised(struct FFlag* theFlag)
{
	static UFunction* pFnFlagIsRaised = NULL;

	if (!pFnFlagIsRaised)
		pFnFlagIsRaised = (UFunction*)UObject::GObjObjects()->Data[5637];

	UObject_execFlagIsRaised_Parms FlagIsRaised_Parms;

	pFnFlagIsRaised->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFlagIsRaised, &FlagIsRaised_Parms, NULL);

	pFnFlagIsRaised->FunctionFlags |= 0x400;

	if (theFlag)
		memcpy(theFlag, &FlagIsRaised_Parms.theFlag, 0x10);

	return FlagIsRaised_Parms.ReturnValue;
};

// Function Core.Object.FlagIsFalse
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FFlag                   theFlag                        ( CPF_Parm | CPF_OutParm )

bool UObject::FlagIsFalse(struct FFlag* theFlag)
{
	static UFunction* pFnFlagIsFalse = NULL;

	if (!pFnFlagIsFalse)
		pFnFlagIsFalse = (UFunction*)UObject::GObjObjects()->Data[5640];

	UObject_execFlagIsFalse_Parms FlagIsFalse_Parms;

	pFnFlagIsFalse->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFlagIsFalse, &FlagIsFalse_Parms, NULL);

	pFnFlagIsFalse->FunctionFlags |= 0x400;

	if (theFlag)
		memcpy(theFlag, &FlagIsFalse_Parms.theFlag, 0x10);

	return FlagIsFalse_Parms.ReturnValue;
};

// Function Core.Object.FlagIsTrue
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FFlag                   theFlag                        ( CPF_Parm | CPF_OutParm )

bool UObject::FlagIsTrue(struct FFlag* theFlag)
{
	static UFunction* pFnFlagIsTrue = NULL;

	if (!pFnFlagIsTrue)
		pFnFlagIsTrue = (UFunction*)UObject::GObjObjects()->Data[5643];

	UObject_execFlagIsTrue_Parms FlagIsTrue_Parms;

	pFnFlagIsTrue->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFlagIsTrue, &FlagIsTrue_Parms, NULL);

	pFnFlagIsTrue->FunctionFlags |= 0x400;

	if (theFlag)
		memcpy(theFlag, &FlagIsTrue_Parms.theFlag, 0x10);

	return FlagIsTrue_Parms.ReturnValue;
};

// Function Core.Object.FlagSetTrueTimed
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          Duration                       ( CPF_Parm )
// struct FFlag                   theFlag                        ( CPF_Parm | CPF_OutParm )

void UObject::FlagSetTrueTimed(float Duration, struct FFlag* theFlag)
{
	static UFunction* pFnFlagSetTrueTimed = NULL;

	if (!pFnFlagSetTrueTimed)
		pFnFlagSetTrueTimed = (UFunction*)UObject::GObjObjects()->Data[5646];

	UObject_execFlagSetTrueTimed_Parms FlagSetTrueTimed_Parms;
	FlagSetTrueTimed_Parms.Duration = Duration;

	pFnFlagSetTrueTimed->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFlagSetTrueTimed, &FlagSetTrueTimed_Parms, NULL);

	pFnFlagSetTrueTimed->FunctionFlags |= 0x400;

	if (theFlag)
		memcpy(theFlag, &FlagSetTrueTimed_Parms.theFlag, 0x10);
};

// Function Core.Object.SmartVectTimeRemaining
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FSmartVector            theSV                          ( CPF_Parm | CPF_OutParm )

float UObject::SmartVectTimeRemaining(struct FSmartVector* theSV)
{
	static UFunction* pFnSmartVectTimeRemaining = NULL;

	if (!pFnSmartVectTimeRemaining)
		pFnSmartVectTimeRemaining = (UFunction*)UObject::GObjObjects()->Data[5649];

	UObject_execSmartVectTimeRemaining_Parms SmartVectTimeRemaining_Parms;

	pFnSmartVectTimeRemaining->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSmartVectTimeRemaining, &SmartVectTimeRemaining_Parms, NULL);

	pFnSmartVectTimeRemaining->FunctionFlags |= 0x400;

	if (theSV)
		memcpy(theSV, &SmartVectTimeRemaining_Parms.theSV, 0x1C);

	return SmartVectTimeRemaining_Parms.ReturnValue;
};

// Function Core.Object.SmartVectTimeSinceSet
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FSmartVector            theSV                          ( CPF_Parm | CPF_OutParm )

float UObject::SmartVectTimeSinceSet(struct FSmartVector* theSV)
{
	static UFunction* pFnSmartVectTimeSinceSet = NULL;

	if (!pFnSmartVectTimeSinceSet)
		pFnSmartVectTimeSinceSet = (UFunction*)UObject::GObjObjects()->Data[5652];

	UObject_execSmartVectTimeSinceSet_Parms SmartVectTimeSinceSet_Parms;

	pFnSmartVectTimeSinceSet->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSmartVectTimeSinceSet, &SmartVectTimeSinceSet_Parms, NULL);

	pFnSmartVectTimeSinceSet->FunctionFlags |= 0x400;

	if (theSV)
		memcpy(theSV, &SmartVectTimeSinceSet_Parms.theSV, 0x1C);

	return SmartVectTimeSinceSet_Parms.ReturnValue;
};

// Function Core.Object.SmartVectGetVector
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FSmartVector            theSV                          ( CPF_Parm | CPF_OutParm )
// struct FVector                 OutVector                      ( CPF_Parm | CPF_OutParm )

bool UObject::SmartVectGetVector(struct FSmartVector* theSV, struct FVector* OutVector)
{
	static UFunction* pFnSmartVectGetVector = NULL;

	if (!pFnSmartVectGetVector)
		pFnSmartVectGetVector = (UFunction*)UObject::GObjObjects()->Data[5658];

	UObject_execSmartVectGetVector_Parms SmartVectGetVector_Parms;

	pFnSmartVectGetVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSmartVectGetVector, &SmartVectGetVector_Parms, NULL);

	pFnSmartVectGetVector->FunctionFlags |= 0x400;

	if (theSV)
		memcpy(theSV, &SmartVectGetVector_Parms.theSV, 0x1C);

	if (OutVector)
		memcpy(OutVector, &SmartVectGetVector_Parms.OutVector, 0xC);

	return SmartVectGetVector_Parms.ReturnValue;
};

// Function Core.Object.SmartVectIsSet
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FSmartVector            theSV                          ( CPF_Parm | CPF_OutParm )

bool UObject::SmartVectIsSet(struct FSmartVector* theSV)
{
	static UFunction* pFnSmartVectIsSet = NULL;

	if (!pFnSmartVectIsSet)
		pFnSmartVectIsSet = (UFunction*)UObject::GObjObjects()->Data[5661];

	UObject_execSmartVectIsSet_Parms SmartVectIsSet_Parms;

	pFnSmartVectIsSet->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSmartVectIsSet, &SmartVectIsSet_Parms, NULL);

	pFnSmartVectIsSet->FunctionFlags |= 0x400;

	if (theSV)
		memcpy(theSV, &SmartVectIsSet_Parms.theSV, 0x1C);

	return SmartVectIsSet_Parms.ReturnValue;
};

// Function Core.Object.SmartVectSetVectorTimed
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 InVector                       ( CPF_Parm )
// float                          Duration                       ( CPF_Parm )
// struct FSmartVector            theSV                          ( CPF_Parm | CPF_OutParm )

void UObject::SmartVectSetVectorTimed(struct FVector InVector, float Duration, struct FSmartVector* theSV)
{
	static UFunction* pFnSmartVectSetVectorTimed = NULL;

	if (!pFnSmartVectSetVectorTimed)
		pFnSmartVectSetVectorTimed = (UFunction*)UObject::GObjObjects()->Data[5665];

	UObject_execSmartVectSetVectorTimed_Parms SmartVectSetVectorTimed_Parms;
	memcpy(&SmartVectSetVectorTimed_Parms.InVector, &InVector, 0xC);
	SmartVectSetVectorTimed_Parms.Duration = Duration;

	pFnSmartVectSetVectorTimed->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSmartVectSetVectorTimed, &SmartVectSetVectorTimed_Parms, NULL);

	pFnSmartVectSetVectorTimed->FunctionFlags |= 0x400;

	if (theSV)
		memcpy(theSV, &SmartVectSetVectorTimed_Parms.theSV, 0x1C);
};

// Function Core.Object.SmartVectValue
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FSmartVector            theSV                          ( CPF_Parm | CPF_OutParm )

struct FVector UObject::SmartVectValue(struct FSmartVector* theSV)
{
	static UFunction* pFnSmartVectValue = NULL;

	if (!pFnSmartVectValue)
		pFnSmartVectValue = (UFunction*)UObject::GObjObjects()->Data[5668];

	UObject_execSmartVectValue_Parms SmartVectValue_Parms;

	pFnSmartVectValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSmartVectValue, &SmartVectValue_Parms, NULL);

	pFnSmartVectValue->FunctionFlags |= 0x400;

	if (theSV)
		memcpy(theSV, &SmartVectValue_Parms.theSV, 0x1C);

	return SmartVectValue_Parms.ReturnValue;
};

// Function Core.Object.SmartVectReset
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FSmartVector            theSV                          ( CPF_Parm | CPF_OutParm )

void UObject::SmartVectReset(struct FSmartVector* theSV)
{
	static UFunction* pFnSmartVectReset = NULL;

	if (!pFnSmartVectReset)
		pFnSmartVectReset = (UFunction*)UObject::GObjObjects()->Data[5672];

	UObject_execSmartVectReset_Parms SmartVectReset_Parms;

	pFnSmartVectReset->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSmartVectReset, &SmartVectReset_Parms, NULL);

	pFnSmartVectReset->FunctionFlags |= 0x400;

	if (theSV)
		memcpy(theSV, &SmartVectReset_Parms.theSV, 0x1C);
};

// Function Core.Object.SmartVectSetVector
// [0x00424401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 InVector                       ( CPF_Parm )
// unsigned long                  bUpdateTime                    ( CPF_OptionalParm | CPF_Parm )
// struct FSmartVector            theSV                          ( CPF_Parm | CPF_OutParm )

void UObject::SmartVectSetVector(struct FVector InVector, unsigned long bUpdateTime, struct FSmartVector* theSV)
{
	static UFunction* pFnSmartVectSetVector = NULL;

	if (!pFnSmartVectSetVector)
		pFnSmartVectSetVector = (UFunction*)UObject::GObjObjects()->Data[5675];

	UObject_execSmartVectSetVector_Parms SmartVectSetVector_Parms;
	memcpy(&SmartVectSetVector_Parms.InVector, &InVector, 0xC);
	SmartVectSetVector_Parms.bUpdateTime = bUpdateTime;

	pFnSmartVectSetVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSmartVectSetVector, &SmartVectSetVector_Parms, NULL);

	pFnSmartVectSetVector->FunctionFlags |= 0x400;

	if (theSV)
		memcpy(theSV, &SmartVectSetVector_Parms.theSV, 0x1C);
};

// Function Core.Object.Subtract_LinearColorLinearColor
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FLinearColor            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FLinearColor            A                              ( CPF_Parm )
// struct FLinearColor            B                              ( CPF_Parm )

struct FLinearColor UObject::Subtract_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B)
{
	static UFunction* pFnSubtract_LinearColorLinearColor = NULL;

	if (!pFnSubtract_LinearColorLinearColor)
		pFnSubtract_LinearColorLinearColor = (UFunction*)UObject::GObjObjects()->Data[5677];

	UObject_execSubtract_LinearColorLinearColor_Parms Subtract_LinearColorLinearColor_Parms;
	memcpy(&Subtract_LinearColorLinearColor_Parms.A, &A, 0x10);
	memcpy(&Subtract_LinearColorLinearColor_Parms.B, &B, 0x10);

	this->ProcessEvent(pFnSubtract_LinearColorLinearColor, &Subtract_LinearColorLinearColor_Parms, NULL);

	return Subtract_LinearColorLinearColor_Parms.ReturnValue;
};

// Function Core.Object.Multiply_LinearColorFloat
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FLinearColor            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FLinearColor            LC                             ( CPF_Parm )
// float                          Mult                           ( CPF_Parm )

struct FLinearColor UObject::Multiply_LinearColorFloat(struct FLinearColor LC, float Mult)
{
	static UFunction* pFnMultiply_LinearColorFloat = NULL;

	if (!pFnMultiply_LinearColorFloat)
		pFnMultiply_LinearColorFloat = (UFunction*)UObject::GObjObjects()->Data[5681];

	UObject_execMultiply_LinearColorFloat_Parms Multiply_LinearColorFloat_Parms;
	memcpy(&Multiply_LinearColorFloat_Parms.LC, &LC, 0x10);
	Multiply_LinearColorFloat_Parms.Mult = Mult;

	this->ProcessEvent(pFnMultiply_LinearColorFloat, &Multiply_LinearColorFloat_Parms, NULL);

	return Multiply_LinearColorFloat_Parms.ReturnValue;
};

// Function Core.Object.ColorToLinearColor
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FLinearColor            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FColor                  OldColor                       ( CPF_Parm )

struct FLinearColor UObject::ColorToLinearColor(struct FColor OldColor)
{
	static UFunction* pFnColorToLinearColor = NULL;

	if (!pFnColorToLinearColor)
		pFnColorToLinearColor = (UFunction*)UObject::GObjObjects()->Data[5691];

	UObject_execColorToLinearColor_Parms ColorToLinearColor_Parms;
	memcpy(&ColorToLinearColor_Parms.OldColor, &OldColor, 0x4);

	this->ProcessEvent(pFnColorToLinearColor, &ColorToLinearColor_Parms, NULL);

	return ColorToLinearColor_Parms.ReturnValue;
};

// Function Core.Object.MakeLinearColor
// [0x00822003] ( FUNC_Final )
// Parameters infos:
// struct FLinearColor            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          R                              ( CPF_Parm )
// float                          G                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )
// float                          A                              ( CPF_Parm )

struct FLinearColor UObject::MakeLinearColor(float R, float G, float B, float A)
{
	static UFunction* pFnMakeLinearColor = NULL;

	if (!pFnMakeLinearColor)
		pFnMakeLinearColor = (UFunction*)UObject::GObjObjects()->Data[5695];

	UObject_execMakeLinearColor_Parms MakeLinearColor_Parms;
	MakeLinearColor_Parms.R = R;
	MakeLinearColor_Parms.G = G;
	MakeLinearColor_Parms.B = B;
	MakeLinearColor_Parms.A = A;

	this->ProcessEvent(pFnMakeLinearColor, &MakeLinearColor_Parms, NULL);

	return MakeLinearColor_Parms.ReturnValue;
};

// Function Core.Object.GetHTMLColor
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FColor                  C                              ( CPF_Const | CPF_Parm | CPF_OutParm )

struct FString UObject::GetHTMLColor(struct FColor* C)
{
	static UFunction* pFnGetHTMLColor = NULL;

	if (!pFnGetHTMLColor)
		pFnGetHTMLColor = (UFunction*)UObject::GObjObjects()->Data[5703];

	UObject_execGetHTMLColor_Parms GetHTMLColor_Parms;

	pFnGetHTMLColor->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetHTMLColor, &GetHTMLColor_Parms, NULL);

	pFnGetHTMLColor->FunctionFlags |= 0x400;

	if (C)
		memcpy(C, &GetHTMLColor_Parms.C, 0x4);

	return GetHTMLColor_Parms.ReturnValue;
};

// Function Core.Object.LerpColor
// [0x00822003] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FColor                  A                              ( CPF_Parm )
// struct FColor                  B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )

struct FColor UObject::LerpColor(struct FColor A, struct FColor B, float Alpha)
{
	static UFunction* pFnLerpColor = NULL;

	if (!pFnLerpColor)
		pFnLerpColor = (UFunction*)UObject::GObjObjects()->Data[5710];

	UObject_execLerpColor_Parms LerpColor_Parms;
	memcpy(&LerpColor_Parms.A, &A, 0x4);
	memcpy(&LerpColor_Parms.B, &B, 0x4);
	LerpColor_Parms.Alpha = Alpha;

	this->ProcessEvent(pFnLerpColor, &LerpColor_Parms, NULL);

	return LerpColor_Parms.ReturnValue;
};

// Function Core.Object.MakeColor
// [0x00826003] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  R                              ( CPF_Parm )
// unsigned char                  G                              ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned char                  A                              ( CPF_OptionalParm | CPF_Parm )

struct FColor UObject::MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A)
{
	static UFunction* pFnMakeColor = NULL;

	if (!pFnMakeColor)
		pFnMakeColor = (UFunction*)UObject::GObjObjects()->Data[5713];

	UObject_execMakeColor_Parms MakeColor_Parms;
	MakeColor_Parms.R = R;
	MakeColor_Parms.G = G;
	MakeColor_Parms.B = B;
	MakeColor_Parms.A = A;

	this->ProcessEvent(pFnMakeColor, &MakeColor_Parms, NULL);

	return MakeColor_Parms.ReturnValue;
};

// Function Core.Object.Add_ColorColor
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FColor                  A                              ( CPF_Parm )
// struct FColor                  B                              ( CPF_Parm )

struct FColor UObject::Add_ColorColor(struct FColor A, struct FColor B)
{
	static UFunction* pFnAdd_ColorColor = NULL;

	if (!pFnAdd_ColorColor)
		pFnAdd_ColorColor = (UFunction*)UObject::GObjObjects()->Data[5722];

	UObject_execAdd_ColorColor_Parms Add_ColorColor_Parms;
	memcpy(&Add_ColorColor_Parms.A, &A, 0x4);
	memcpy(&Add_ColorColor_Parms.B, &B, 0x4);

	this->ProcessEvent(pFnAdd_ColorColor, &Add_ColorColor_Parms, NULL);

	return Add_ColorColor_Parms.ReturnValue;
};

// Function Core.Object.Multiply_ColorFloat
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FColor                  A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

struct FColor UObject::Multiply_ColorFloat(struct FColor A, float B)
{
	static UFunction* pFnMultiply_ColorFloat = NULL;

	if (!pFnMultiply_ColorFloat)
		pFnMultiply_ColorFloat = (UFunction*)UObject::GObjObjects()->Data[5729];

	UObject_execMultiply_ColorFloat_Parms Multiply_ColorFloat_Parms;
	memcpy(&Multiply_ColorFloat_Parms.A, &A, 0x4);
	Multiply_ColorFloat_Parms.B = B;

	this->ProcessEvent(pFnMultiply_ColorFloat, &Multiply_ColorFloat_Parms, NULL);

	return Multiply_ColorFloat_Parms.ReturnValue;
};

// Function Core.Object.Multiply_FloatColor
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// struct FColor                  B                              ( CPF_Parm )

struct FColor UObject::Multiply_FloatColor(float A, struct FColor B)
{
	static UFunction* pFnMultiply_FloatColor = NULL;

	if (!pFnMultiply_FloatColor)
		pFnMultiply_FloatColor = (UFunction*)UObject::GObjObjects()->Data[5733];

	UObject_execMultiply_FloatColor_Parms Multiply_FloatColor_Parms;
	Multiply_FloatColor_Parms.A = A;
	memcpy(&Multiply_FloatColor_Parms.B, &B, 0x4);

	this->ProcessEvent(pFnMultiply_FloatColor, &Multiply_FloatColor_Parms, NULL);

	return Multiply_FloatColor_Parms.ReturnValue;
};

// Function Core.Object.Subtract_ColorColor
// [0x00023003] ( FUNC_Final )
// Parameters infos:
// struct FColor                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FColor                  A                              ( CPF_Parm )
// struct FColor                  B                              ( CPF_Parm )

struct FColor UObject::Subtract_ColorColor(struct FColor A, struct FColor B)
{
	static UFunction* pFnSubtract_ColorColor = NULL;

	if (!pFnSubtract_ColorColor)
		pFnSubtract_ColorColor = (UFunction*)UObject::GObjObjects()->Data[5737];

	UObject_execSubtract_ColorColor_Parms Subtract_ColorColor_Parms;
	memcpy(&Subtract_ColorColor_Parms.A, &A, 0x4);
	memcpy(&Subtract_ColorColor_Parms.B, &B, 0x4);

	this->ProcessEvent(pFnSubtract_ColorColor, &Subtract_ColorColor_Parms, NULL);

	return Subtract_ColorColor_Parms.ReturnValue;
};

// Function Core.Object.EvalInterpCurveVector2D
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector2D               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInterpCurveVector2D    Vector2DCurve                  ( CPF_Parm | CPF_NeedCtorLink )
// float                          InVal                          ( CPF_Parm )

struct FVector2D UObject::EvalInterpCurveVector2D(struct FInterpCurveVector2D Vector2DCurve, float InVal)
{
	static UFunction* pFnEvalInterpCurveVector2D = NULL;

	if (!pFnEvalInterpCurveVector2D)
		pFnEvalInterpCurveVector2D = (UFunction*)UObject::GObjObjects()->Data[5741];

	UObject_execEvalInterpCurveVector2D_Parms EvalInterpCurveVector2D_Parms;
	memcpy(&EvalInterpCurveVector2D_Parms.Vector2DCurve, &Vector2DCurve, 0x10);
	EvalInterpCurveVector2D_Parms.InVal = InVal;

	pFnEvalInterpCurveVector2D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEvalInterpCurveVector2D, &EvalInterpCurveVector2D_Parms, NULL);

	pFnEvalInterpCurveVector2D->FunctionFlags |= 0x400;

	return EvalInterpCurveVector2D_Parms.ReturnValue;
};

// Function Core.Object.EvalInterpCurveVector
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInterpCurveVector      VectorCurve                    ( CPF_Parm | CPF_NeedCtorLink )
// float                          InVal                          ( CPF_Parm )

struct FVector UObject::EvalInterpCurveVector(struct FInterpCurveVector VectorCurve, float InVal)
{
	static UFunction* pFnEvalInterpCurveVector = NULL;

	if (!pFnEvalInterpCurveVector)
		pFnEvalInterpCurveVector = (UFunction*)UObject::GObjObjects()->Data[5745];

	UObject_execEvalInterpCurveVector_Parms EvalInterpCurveVector_Parms;
	memcpy(&EvalInterpCurveVector_Parms.VectorCurve, &VectorCurve, 0x10);
	EvalInterpCurveVector_Parms.InVal = InVal;

	pFnEvalInterpCurveVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEvalInterpCurveVector, &EvalInterpCurveVector_Parms, NULL);

	pFnEvalInterpCurveVector->FunctionFlags |= 0x400;

	return EvalInterpCurveVector_Parms.ReturnValue;
};

// Function Core.Object.EvalInterpCurveFloat
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FInterpCurveFloat       FloatCurve                     ( CPF_Parm | CPF_NeedCtorLink )
// float                          InVal                          ( CPF_Parm )

float UObject::EvalInterpCurveFloat(struct FInterpCurveFloat FloatCurve, float InVal)
{
	static UFunction* pFnEvalInterpCurveFloat = NULL;

	if (!pFnEvalInterpCurveFloat)
		pFnEvalInterpCurveFloat = (UFunction*)UObject::GObjObjects()->Data[5763];

	UObject_execEvalInterpCurveFloat_Parms EvalInterpCurveFloat_Parms;
	memcpy(&EvalInterpCurveFloat_Parms.FloatCurve, &FloatCurve, 0x10);
	EvalInterpCurveFloat_Parms.InVal = InVal;

	pFnEvalInterpCurveFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEvalInterpCurveFloat, &EvalInterpCurveFloat_Parms, NULL);

	pFnEvalInterpCurveFloat->FunctionFlags |= 0x400;

	return EvalInterpCurveFloat_Parms.ReturnValue;
};

// Function Core.Object.vect2d
// [0x00822003] ( FUNC_Final )
// Parameters infos:
// struct FVector2D               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          InX                            ( CPF_Parm )
// float                          InY                            ( CPF_Parm )

struct FVector2D UObject::vect2d(float InX, float InY)
{
	static UFunction* pFnvect2d = NULL;

	if (!pFnvect2d)
		pFnvect2d = (UFunction*)UObject::GObjObjects()->Data[5777];

	UObject_execvect2d_Parms vect2d_Parms;
	vect2d_Parms.InX = InX;
	vect2d_Parms.InY = InY;

	this->ProcessEvent(pFnvect2d, &vect2d_Parms, NULL);

	return vect2d_Parms.ReturnValue;
};

// Function Core.Object.GetMappedRangeValue
// [0x00022501] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector2D               InputRange                     ( CPF_Parm )
// struct FVector2D               OutputRange                    ( CPF_Parm )
// float                          Value                          ( CPF_Parm )

float UObject::GetMappedRangeValue(struct FVector2D InputRange, struct FVector2D OutputRange, float Value)
{
	static UFunction* pFnGetMappedRangeValue = NULL;

	if (!pFnGetMappedRangeValue)
		pFnGetMappedRangeValue = (UFunction*)UObject::GObjObjects()->Data[5790];

	UObject_execGetMappedRangeValue_Parms GetMappedRangeValue_Parms;
	memcpy(&GetMappedRangeValue_Parms.InputRange, &InputRange, 0x8);
	memcpy(&GetMappedRangeValue_Parms.OutputRange, &OutputRange, 0x8);
	GetMappedRangeValue_Parms.Value = Value;

	pFnGetMappedRangeValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetMappedRangeValue, &GetMappedRangeValue_Parms, NULL);

	pFnGetMappedRangeValue->FunctionFlags |= 0x400;

	return GetMappedRangeValue_Parms.ReturnValue;
};

// Function Core.Object.GetRangePctByValue
// [0x00022103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector2D               Range                          ( CPF_Parm )
// float                          Value                          ( CPF_Parm )

float UObject::GetRangePctByValue(struct FVector2D Range, float Value)
{
	static UFunction* pFnGetRangePctByValue = NULL;

	if (!pFnGetRangePctByValue)
		pFnGetRangePctByValue = (UFunction*)UObject::GObjObjects()->Data[5795];

	UObject_execGetRangePctByValue_Parms GetRangePctByValue_Parms;
	memcpy(&GetRangePctByValue_Parms.Range, &Range, 0x8);
	GetRangePctByValue_Parms.Value = Value;

	this->ProcessEvent(pFnGetRangePctByValue, &GetRangePctByValue_Parms, NULL);

	return GetRangePctByValue_Parms.ReturnValue;
};

// Function Core.Object.GetRangeValueByPct
// [0x00022103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector2D               Range                          ( CPF_Parm )
// float                          Pct                            ( CPF_Parm )

float UObject::GetRangeValueByPct(struct FVector2D Range, float Pct)
{
	static UFunction* pFnGetRangeValueByPct = NULL;

	if (!pFnGetRangeValueByPct)
		pFnGetRangeValueByPct = (UFunction*)UObject::GObjObjects()->Data[5800];

	UObject_execGetRangeValueByPct_Parms GetRangeValueByPct_Parms;
	memcpy(&GetRangeValueByPct_Parms.Range, &Range, 0x8);
	GetRangeValueByPct_Parms.Pct = Pct;

	this->ProcessEvent(pFnGetRangeValueByPct, &GetRangeValueByPct_Parms, NULL);

	return GetRangeValueByPct_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_Vector2DVector2D
// [0x00423401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector2D               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector2D               B                              ( CPF_Parm )
// struct FVector2D               A                              ( CPF_Parm | CPF_OutParm )

struct FVector2D UObject::SubtractEqual_Vector2DVector2D(struct FVector2D B, struct FVector2D* A)
{
	static UFunction* pFnSubtractEqual_Vector2DVector2D = NULL;

	if (!pFnSubtractEqual_Vector2DVector2D)
		pFnSubtractEqual_Vector2DVector2D = (UFunction*)UObject::GObjObjects()->Data[5804];

	UObject_execSubtractEqual_Vector2DVector2D_Parms SubtractEqual_Vector2DVector2D_Parms;
	memcpy(&SubtractEqual_Vector2DVector2D_Parms.B, &B, 0x8);

	pFnSubtractEqual_Vector2DVector2D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractEqual_Vector2DVector2D, &SubtractEqual_Vector2DVector2D_Parms, NULL);

	pFnSubtractEqual_Vector2DVector2D->FunctionFlags |= 0x400;

	if (A)
		memcpy(A, &SubtractEqual_Vector2DVector2D_Parms.A, 0x8);

	return SubtractEqual_Vector2DVector2D_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_Vector2DVector2D
// [0x00423401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector2D               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector2D               B                              ( CPF_Parm )
// struct FVector2D               A                              ( CPF_Parm | CPF_OutParm )

struct FVector2D UObject::AddEqual_Vector2DVector2D(struct FVector2D B, struct FVector2D* A)
{
	static UFunction* pFnAddEqual_Vector2DVector2D = NULL;

	if (!pFnAddEqual_Vector2DVector2D)
		pFnAddEqual_Vector2DVector2D = (UFunction*)UObject::GObjObjects()->Data[5808];

	UObject_execAddEqual_Vector2DVector2D_Parms AddEqual_Vector2DVector2D_Parms;
	memcpy(&AddEqual_Vector2DVector2D_Parms.B, &B, 0x8);

	pFnAddEqual_Vector2DVector2D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddEqual_Vector2DVector2D, &AddEqual_Vector2DVector2D_Parms, NULL);

	pFnAddEqual_Vector2DVector2D->FunctionFlags |= 0x400;

	if (A)
		memcpy(A, &AddEqual_Vector2DVector2D_Parms.A, 0x8);

	return AddEqual_Vector2DVector2D_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_Vector2DFloat
// [0x00423401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector2D               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// struct FVector2D               A                              ( CPF_Parm | CPF_OutParm )

struct FVector2D UObject::DivideEqual_Vector2DFloat(float B, struct FVector2D* A)
{
	static UFunction* pFnDivideEqual_Vector2DFloat = NULL;

	if (!pFnDivideEqual_Vector2DFloat)
		pFnDivideEqual_Vector2DFloat = (UFunction*)UObject::GObjObjects()->Data[5812];

	UObject_execDivideEqual_Vector2DFloat_Parms DivideEqual_Vector2DFloat_Parms;
	DivideEqual_Vector2DFloat_Parms.B = B;

	pFnDivideEqual_Vector2DFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivideEqual_Vector2DFloat, &DivideEqual_Vector2DFloat_Parms, NULL);

	pFnDivideEqual_Vector2DFloat->FunctionFlags |= 0x400;

	if (A)
		memcpy(A, &DivideEqual_Vector2DFloat_Parms.A, 0x8);

	return DivideEqual_Vector2DFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_Vector2DFloat
// [0x00423401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector2D               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// struct FVector2D               A                              ( CPF_Parm | CPF_OutParm )

struct FVector2D UObject::MultiplyEqual_Vector2DFloat(float B, struct FVector2D* A)
{
	static UFunction* pFnMultiplyEqual_Vector2DFloat = NULL;

	if (!pFnMultiplyEqual_Vector2DFloat)
		pFnMultiplyEqual_Vector2DFloat = (UFunction*)UObject::GObjObjects()->Data[5816];

	UObject_execMultiplyEqual_Vector2DFloat_Parms MultiplyEqual_Vector2DFloat_Parms;
	MultiplyEqual_Vector2DFloat_Parms.B = B;

	pFnMultiplyEqual_Vector2DFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyEqual_Vector2DFloat, &MultiplyEqual_Vector2DFloat_Parms, NULL);

	pFnMultiplyEqual_Vector2DFloat->FunctionFlags |= 0x400;

	if (A)
		memcpy(A, &MultiplyEqual_Vector2DFloat_Parms.A, 0x8);

	return MultiplyEqual_Vector2DFloat_Parms.ReturnValue;
};

// Function Core.Object.Divide_Vector2DFloat
// [0x00023401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector2D               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector2D               A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

struct FVector2D UObject::Divide_Vector2DFloat(struct FVector2D A, float B)
{
	static UFunction* pFnDivide_Vector2DFloat = NULL;

	if (!pFnDivide_Vector2DFloat)
		pFnDivide_Vector2DFloat = (UFunction*)UObject::GObjObjects()->Data[5820];

	UObject_execDivide_Vector2DFloat_Parms Divide_Vector2DFloat_Parms;
	memcpy(&Divide_Vector2DFloat_Parms.A, &A, 0x8);
	Divide_Vector2DFloat_Parms.B = B;

	pFnDivide_Vector2DFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivide_Vector2DFloat, &Divide_Vector2DFloat_Parms, NULL);

	pFnDivide_Vector2DFloat->FunctionFlags |= 0x400;

	return Divide_Vector2DFloat_Parms.ReturnValue;
};

// Function Core.Object.Multiply_Vector2DFloat
// [0x00023401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector2D               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector2D               A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

struct FVector2D UObject::Multiply_Vector2DFloat(struct FVector2D A, float B)
{
	static UFunction* pFnMultiply_Vector2DFloat = NULL;

	if (!pFnMultiply_Vector2DFloat)
		pFnMultiply_Vector2DFloat = (UFunction*)UObject::GObjObjects()->Data[5824];

	UObject_execMultiply_Vector2DFloat_Parms Multiply_Vector2DFloat_Parms;
	memcpy(&Multiply_Vector2DFloat_Parms.A, &A, 0x8);
	Multiply_Vector2DFloat_Parms.B = B;

	pFnMultiply_Vector2DFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_Vector2DFloat, &Multiply_Vector2DFloat_Parms, NULL);

	pFnMultiply_Vector2DFloat->FunctionFlags |= 0x400;

	return Multiply_Vector2DFloat_Parms.ReturnValue;
};

// Function Core.Object.Subtract_Vector2DVector2D
// [0x00023401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector2D               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector2D               A                              ( CPF_Parm )
// struct FVector2D               B                              ( CPF_Parm )

struct FVector2D UObject::Subtract_Vector2DVector2D(struct FVector2D A, struct FVector2D B)
{
	static UFunction* pFnSubtract_Vector2DVector2D = NULL;

	if (!pFnSubtract_Vector2DVector2D)
		pFnSubtract_Vector2DVector2D = (UFunction*)UObject::GObjObjects()->Data[5828];

	UObject_execSubtract_Vector2DVector2D_Parms Subtract_Vector2DVector2D_Parms;
	memcpy(&Subtract_Vector2DVector2D_Parms.A, &A, 0x8);
	memcpy(&Subtract_Vector2DVector2D_Parms.B, &B, 0x8);

	pFnSubtract_Vector2DVector2D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_Vector2DVector2D, &Subtract_Vector2DVector2D_Parms, NULL);

	pFnSubtract_Vector2DVector2D->FunctionFlags |= 0x400;

	return Subtract_Vector2DVector2D_Parms.ReturnValue;
};

// Function Core.Object.Add_Vector2DVector2D
// [0x00023401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector2D               ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector2D               A                              ( CPF_Parm )
// struct FVector2D               B                              ( CPF_Parm )

struct FVector2D UObject::Add_Vector2DVector2D(struct FVector2D A, struct FVector2D B)
{
	static UFunction* pFnAdd_Vector2DVector2D = NULL;

	if (!pFnAdd_Vector2DVector2D)
		pFnAdd_Vector2DVector2D = (UFunction*)UObject::GObjObjects()->Data[5832];

	UObject_execAdd_Vector2DVector2D_Parms Add_Vector2DVector2D_Parms;
	memcpy(&Add_Vector2DVector2D_Parms.A, &A, 0x8);
	memcpy(&Add_Vector2DVector2D_Parms.B, &B, 0x8);

	pFnAdd_Vector2DVector2D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAdd_Vector2DVector2D, &Add_Vector2DVector2D_Parms, NULL);

	pFnAdd_Vector2DVector2D->FunctionFlags |= 0x400;

	return Add_Vector2DVector2D_Parms.ReturnValue;
};

// Function Core.Object.Subtract_QuatQuat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x010F]
// Parameters infos:
// struct FQuat                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQuat                   A                              ( CPF_Parm )
// struct FQuat                   B                              ( CPF_Parm )

struct FQuat UObject::Subtract_QuatQuat(struct FQuat A, struct FQuat B)
{
	static UFunction* pFnSubtract_QuatQuat = NULL;

	if (!pFnSubtract_QuatQuat)
		pFnSubtract_QuatQuat = (UFunction*)UObject::GObjObjects()->Data[5836];

	UObject_execSubtract_QuatQuat_Parms Subtract_QuatQuat_Parms;
	memcpy(&Subtract_QuatQuat_Parms.A, &A, 0x10);
	memcpy(&Subtract_QuatQuat_Parms.B, &B, 0x10);

	unsigned short NativeIndex = pFnSubtract_QuatQuat->iNative;
	pFnSubtract_QuatQuat->iNative = 0;

	pFnSubtract_QuatQuat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_QuatQuat, &Subtract_QuatQuat_Parms, NULL);

	pFnSubtract_QuatQuat->FunctionFlags |= 0x400;

	pFnSubtract_QuatQuat->iNative = NativeIndex;

	return Subtract_QuatQuat_Parms.ReturnValue;
};

// Function Core.Object.Add_QuatQuat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x010E]
// Parameters infos:
// struct FQuat                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQuat                   A                              ( CPF_Parm )
// struct FQuat                   B                              ( CPF_Parm )

struct FQuat UObject::Add_QuatQuat(struct FQuat A, struct FQuat B)
{
	static UFunction* pFnAdd_QuatQuat = NULL;

	if (!pFnAdd_QuatQuat)
		pFnAdd_QuatQuat = (UFunction*)UObject::GObjObjects()->Data[5840];

	UObject_execAdd_QuatQuat_Parms Add_QuatQuat_Parms;
	memcpy(&Add_QuatQuat_Parms.A, &A, 0x10);
	memcpy(&Add_QuatQuat_Parms.B, &B, 0x10);

	unsigned short NativeIndex = pFnAdd_QuatQuat->iNative;
	pFnAdd_QuatQuat->iNative = 0;

	pFnAdd_QuatQuat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAdd_QuatQuat, &Add_QuatQuat_Parms, NULL);

	pFnAdd_QuatQuat->FunctionFlags |= 0x400;

	pFnAdd_QuatQuat->iNative = NativeIndex;

	return Add_QuatQuat_Parms.ReturnValue;
};

// Function Core.Object.QuatSlerp
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FQuat                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQuat                   A                              ( CPF_Parm )
// struct FQuat                   B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )
// unsigned long                  bShortestPath                  ( CPF_OptionalParm | CPF_Parm )

struct FQuat UObject::QuatSlerp(struct FQuat A, struct FQuat B, float Alpha, unsigned long bShortestPath)
{
	static UFunction* pFnQuatSlerp = NULL;

	if (!pFnQuatSlerp)
		pFnQuatSlerp = (UFunction*)UObject::GObjObjects()->Data[5849];

	UObject_execQuatSlerp_Parms QuatSlerp_Parms;
	memcpy(&QuatSlerp_Parms.A, &A, 0x10);
	memcpy(&QuatSlerp_Parms.B, &B, 0x10);
	QuatSlerp_Parms.Alpha = Alpha;
	QuatSlerp_Parms.bShortestPath = bShortestPath;

	pFnQuatSlerp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatSlerp, &QuatSlerp_Parms, NULL);

	pFnQuatSlerp->FunctionFlags |= 0x400;

	return QuatSlerp_Parms.ReturnValue;
};

// Function Core.Object.QuatToRotator
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQuat                   A                              ( CPF_Parm )

struct FRotator UObject::QuatToRotator(struct FQuat A)
{
	static UFunction* pFnQuatToRotator = NULL;

	if (!pFnQuatToRotator)
		pFnQuatToRotator = (UFunction*)UObject::GObjObjects()->Data[5853];

	UObject_execQuatToRotator_Parms QuatToRotator_Parms;
	memcpy(&QuatToRotator_Parms.A, &A, 0x10);

	pFnQuatToRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatToRotator, &QuatToRotator_Parms, NULL);

	pFnQuatToRotator->FunctionFlags |= 0x400;

	return QuatToRotator_Parms.ReturnValue;
};

// Function Core.Object.QuatFromRotator
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FQuat                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )

struct FQuat UObject::QuatFromRotator(struct FRotator A)
{
	static UFunction* pFnQuatFromRotator = NULL;

	if (!pFnQuatFromRotator)
		pFnQuatFromRotator = (UFunction*)UObject::GObjObjects()->Data[5859];

	UObject_execQuatFromRotator_Parms QuatFromRotator_Parms;
	memcpy(&QuatFromRotator_Parms.A, &A, 0xC);

	pFnQuatFromRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatFromRotator, &QuatFromRotator_Parms, NULL);

	pFnQuatFromRotator->FunctionFlags |= 0x400;

	return QuatFromRotator_Parms.ReturnValue;
};

// Function Core.Object.QuatFromAxisAndAngle
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FQuat                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Axis                           ( CPF_Parm )
// float                          Angle                          ( CPF_Parm )

struct FQuat UObject::QuatFromAxisAndAngle(struct FVector Axis, float Angle)
{
	static UFunction* pFnQuatFromAxisAndAngle = NULL;

	if (!pFnQuatFromAxisAndAngle)
		pFnQuatFromAxisAndAngle = (UFunction*)UObject::GObjObjects()->Data[5862];

	UObject_execQuatFromAxisAndAngle_Parms QuatFromAxisAndAngle_Parms;
	memcpy(&QuatFromAxisAndAngle_Parms.Axis, &Axis, 0xC);
	QuatFromAxisAndAngle_Parms.Angle = Angle;

	pFnQuatFromAxisAndAngle->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatFromAxisAndAngle, &QuatFromAxisAndAngle_Parms, NULL);

	pFnQuatFromAxisAndAngle->FunctionFlags |= 0x400;

	return QuatFromAxisAndAngle_Parms.ReturnValue;
};

// Function Core.Object.QuatFindBetween
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FQuat                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

struct FQuat UObject::QuatFindBetween(struct FVector A, struct FVector B)
{
	static UFunction* pFnQuatFindBetween = NULL;

	if (!pFnQuatFindBetween)
		pFnQuatFindBetween = (UFunction*)UObject::GObjObjects()->Data[5865];

	UObject_execQuatFindBetween_Parms QuatFindBetween_Parms;
	memcpy(&QuatFindBetween_Parms.A, &A, 0xC);
	memcpy(&QuatFindBetween_Parms.B, &B, 0xC);

	pFnQuatFindBetween->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatFindBetween, &QuatFindBetween_Parms, NULL);

	pFnQuatFindBetween->FunctionFlags |= 0x400;

	return QuatFindBetween_Parms.ReturnValue;
};

// Function Core.Object.QuatRotateVector
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQuat                   A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

struct FVector UObject::QuatRotateVector(struct FQuat A, struct FVector B)
{
	static UFunction* pFnQuatRotateVector = NULL;

	if (!pFnQuatRotateVector)
		pFnQuatRotateVector = (UFunction*)UObject::GObjObjects()->Data[5869];

	UObject_execQuatRotateVector_Parms QuatRotateVector_Parms;
	memcpy(&QuatRotateVector_Parms.A, &A, 0x10);
	memcpy(&QuatRotateVector_Parms.B, &B, 0xC);

	pFnQuatRotateVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatRotateVector, &QuatRotateVector_Parms, NULL);

	pFnQuatRotateVector->FunctionFlags |= 0x400;

	return QuatRotateVector_Parms.ReturnValue;
};

// Function Core.Object.QuatInvert
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FQuat                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQuat                   A                              ( CPF_Parm )

struct FQuat UObject::QuatInvert(struct FQuat A)
{
	static UFunction* pFnQuatInvert = NULL;

	if (!pFnQuatInvert)
		pFnQuatInvert = (UFunction*)UObject::GObjObjects()->Data[5873];

	UObject_execQuatInvert_Parms QuatInvert_Parms;
	memcpy(&QuatInvert_Parms.A, &A, 0x10);

	pFnQuatInvert->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatInvert, &QuatInvert_Parms, NULL);

	pFnQuatInvert->FunctionFlags |= 0x400;

	return QuatInvert_Parms.ReturnValue;
};

// Function Core.Object.QuatDot
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQuat                   A                              ( CPF_Parm )
// struct FQuat                   B                              ( CPF_Parm )

float UObject::QuatDot(struct FQuat A, struct FQuat B)
{
	static UFunction* pFnQuatDot = NULL;

	if (!pFnQuatDot)
		pFnQuatDot = (UFunction*)UObject::GObjObjects()->Data[5877];

	UObject_execQuatDot_Parms QuatDot_Parms;
	memcpy(&QuatDot_Parms.A, &A, 0x10);
	memcpy(&QuatDot_Parms.B, &B, 0x10);

	pFnQuatDot->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatDot, &QuatDot_Parms, NULL);

	pFnQuatDot->FunctionFlags |= 0x400;

	return QuatDot_Parms.ReturnValue;
};

// Function Core.Object.QuatProduct
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FQuat                   ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FQuat                   A                              ( CPF_Parm )
// struct FQuat                   B                              ( CPF_Parm )

struct FQuat UObject::QuatProduct(struct FQuat A, struct FQuat B)
{
	static UFunction* pFnQuatProduct = NULL;

	if (!pFnQuatProduct)
		pFnQuatProduct = (UFunction*)UObject::GObjObjects()->Data[5880];

	UObject_execQuatProduct_Parms QuatProduct_Parms;
	memcpy(&QuatProduct_Parms.A, &A, 0x10);
	memcpy(&QuatProduct_Parms.B, &B, 0x10);

	pFnQuatProduct->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQuatProduct, &QuatProduct_Parms, NULL);

	pFnQuatProduct->FunctionFlags |= 0x400;

	return QuatProduct_Parms.ReturnValue;
};

// Function Core.Object.MatrixGetAxis
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMatrix                 TM                             ( CPF_Parm )
// unsigned char                  Axis                           ( CPF_Parm )

struct FVector UObject::MatrixGetAxis(struct FMatrix TM, unsigned char Axis)
{
	static UFunction* pFnMatrixGetAxis = NULL;

	if (!pFnMatrixGetAxis)
		pFnMatrixGetAxis = (UFunction*)UObject::GObjObjects()->Data[5884];

	UObject_execMatrixGetAxis_Parms MatrixGetAxis_Parms;
	memcpy(&MatrixGetAxis_Parms.TM, &TM, 0x40);
	MatrixGetAxis_Parms.Axis = Axis;

	pFnMatrixGetAxis->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMatrixGetAxis, &MatrixGetAxis_Parms, NULL);

	pFnMatrixGetAxis->FunctionFlags |= 0x400;

	return MatrixGetAxis_Parms.ReturnValue;
};

// Function Core.Object.MatrixGetOrigin
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMatrix                 TM                             ( CPF_Parm )

struct FVector UObject::MatrixGetOrigin(struct FMatrix TM)
{
	static UFunction* pFnMatrixGetOrigin = NULL;

	if (!pFnMatrixGetOrigin)
		pFnMatrixGetOrigin = (UFunction*)UObject::GObjObjects()->Data[5888];

	UObject_execMatrixGetOrigin_Parms MatrixGetOrigin_Parms;
	memcpy(&MatrixGetOrigin_Parms.TM, &TM, 0x40);

	pFnMatrixGetOrigin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMatrixGetOrigin, &MatrixGetOrigin_Parms, NULL);

	pFnMatrixGetOrigin->FunctionFlags |= 0x400;

	return MatrixGetOrigin_Parms.ReturnValue;
};

// Function Core.Object.MatrixGetRotator
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMatrix                 TM                             ( CPF_Parm )

struct FRotator UObject::MatrixGetRotator(struct FMatrix TM)
{
	static UFunction* pFnMatrixGetRotator = NULL;

	if (!pFnMatrixGetRotator)
		pFnMatrixGetRotator = (UFunction*)UObject::GObjObjects()->Data[5903];

	UObject_execMatrixGetRotator_Parms MatrixGetRotator_Parms;
	memcpy(&MatrixGetRotator_Parms.TM, &TM, 0x40);

	pFnMatrixGetRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMatrixGetRotator, &MatrixGetRotator_Parms, NULL);

	pFnMatrixGetRotator->FunctionFlags |= 0x400;

	return MatrixGetRotator_Parms.ReturnValue;
};

// Function Core.Object.MakeRotationMatrix
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                Rotation                       ( CPF_Parm )

struct FMatrix UObject::MakeRotationMatrix(struct FRotator Rotation)
{
	static UFunction* pFnMakeRotationMatrix = NULL;

	if (!pFnMakeRotationMatrix)
		pFnMakeRotationMatrix = (UFunction*)UObject::GObjObjects()->Data[5906];

	UObject_execMakeRotationMatrix_Parms MakeRotationMatrix_Parms;
	memcpy(&MakeRotationMatrix_Parms.Rotation, &Rotation, 0xC);

	pFnMakeRotationMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMakeRotationMatrix, &MakeRotationMatrix_Parms, NULL);

	pFnMakeRotationMatrix->FunctionFlags |= 0x400;

	return MakeRotationMatrix_Parms.ReturnValue;
};

// Function Core.Object.MakeRotationTranslationMatrix
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Translation                    ( CPF_Parm )
// struct FRotator                Rotation                       ( CPF_Parm )

struct FMatrix UObject::MakeRotationTranslationMatrix(struct FVector Translation, struct FRotator Rotation)
{
	static UFunction* pFnMakeRotationTranslationMatrix = NULL;

	if (!pFnMakeRotationTranslationMatrix)
		pFnMakeRotationTranslationMatrix = (UFunction*)UObject::GObjObjects()->Data[5909];

	UObject_execMakeRotationTranslationMatrix_Parms MakeRotationTranslationMatrix_Parms;
	memcpy(&MakeRotationTranslationMatrix_Parms.Translation, &Translation, 0xC);
	memcpy(&MakeRotationTranslationMatrix_Parms.Rotation, &Rotation, 0xC);

	pFnMakeRotationTranslationMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMakeRotationTranslationMatrix, &MakeRotationTranslationMatrix_Parms, NULL);

	pFnMakeRotationTranslationMatrix->FunctionFlags |= 0x400;

	return MakeRotationTranslationMatrix_Parms.ReturnValue;
};

// Function Core.Object.InverseTransformNormal
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMatrix                 TM                             ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm )

struct FVector UObject::InverseTransformNormal(struct FMatrix TM, struct FVector A)
{
	static UFunction* pFnInverseTransformNormal = NULL;

	if (!pFnInverseTransformNormal)
		pFnInverseTransformNormal = (UFunction*)UObject::GObjObjects()->Data[5912];

	UObject_execInverseTransformNormal_Parms InverseTransformNormal_Parms;
	memcpy(&InverseTransformNormal_Parms.TM, &TM, 0x40);
	memcpy(&InverseTransformNormal_Parms.A, &A, 0xC);

	pFnInverseTransformNormal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInverseTransformNormal, &InverseTransformNormal_Parms, NULL);

	pFnInverseTransformNormal->FunctionFlags |= 0x400;

	return InverseTransformNormal_Parms.ReturnValue;
};

// Function Core.Object.TransformNormal
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMatrix                 TM                             ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm )

struct FVector UObject::TransformNormal(struct FMatrix TM, struct FVector A)
{
	static UFunction* pFnTransformNormal = NULL;

	if (!pFnTransformNormal)
		pFnTransformNormal = (UFunction*)UObject::GObjObjects()->Data[5916];

	UObject_execTransformNormal_Parms TransformNormal_Parms;
	memcpy(&TransformNormal_Parms.TM, &TM, 0x40);
	memcpy(&TransformNormal_Parms.A, &A, 0xC);

	pFnTransformNormal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTransformNormal, &TransformNormal_Parms, NULL);

	pFnTransformNormal->FunctionFlags |= 0x400;

	return TransformNormal_Parms.ReturnValue;
};

// Function Core.Object.InverseTransformVector
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMatrix                 TM                             ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm )

struct FVector UObject::InverseTransformVector(struct FMatrix TM, struct FVector A)
{
	static UFunction* pFnInverseTransformVector = NULL;

	if (!pFnInverseTransformVector)
		pFnInverseTransformVector = (UFunction*)UObject::GObjObjects()->Data[5920];

	UObject_execInverseTransformVector_Parms InverseTransformVector_Parms;
	memcpy(&InverseTransformVector_Parms.TM, &TM, 0x40);
	memcpy(&InverseTransformVector_Parms.A, &A, 0xC);

	pFnInverseTransformVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInverseTransformVector, &InverseTransformVector_Parms, NULL);

	pFnInverseTransformVector->FunctionFlags |= 0x400;

	return InverseTransformVector_Parms.ReturnValue;
};

// Function Core.Object.TransformVector
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMatrix                 TM                             ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm )

struct FVector UObject::TransformVector(struct FMatrix TM, struct FVector A)
{
	static UFunction* pFnTransformVector = NULL;

	if (!pFnTransformVector)
		pFnTransformVector = (UFunction*)UObject::GObjObjects()->Data[5924];

	UObject_execTransformVector_Parms TransformVector_Parms;
	memcpy(&TransformVector_Parms.TM, &TM, 0x40);
	memcpy(&TransformVector_Parms.A, &A, 0xC);

	pFnTransformVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTransformVector, &TransformVector_Parms, NULL);

	pFnTransformVector->FunctionFlags |= 0x400;

	return TransformVector_Parms.ReturnValue;
};

// Function Core.Object.Multiply_MatrixMatrix
// [0x00023401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FMatrix                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FMatrix                 A                              ( CPF_Parm )
// struct FMatrix                 B                              ( CPF_Parm )

struct FMatrix UObject::Multiply_MatrixMatrix(struct FMatrix A, struct FMatrix B)
{
	static UFunction* pFnMultiply_MatrixMatrix = NULL;

	if (!pFnMultiply_MatrixMatrix)
		pFnMultiply_MatrixMatrix = (UFunction*)UObject::GObjObjects()->Data[5928];

	UObject_execMultiply_MatrixMatrix_Parms Multiply_MatrixMatrix_Parms;
	memcpy(&Multiply_MatrixMatrix_Parms.A, &A, 0x40);
	memcpy(&Multiply_MatrixMatrix_Parms.B, &B, 0x40);

	pFnMultiply_MatrixMatrix->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_MatrixMatrix, &Multiply_MatrixMatrix_Parms, NULL);

	pFnMultiply_MatrixMatrix->FunctionFlags |= 0x400;

	return Multiply_MatrixMatrix_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_NameName
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00FF]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   A                              ( CPF_Parm )
// struct FName                   B                              ( CPF_Parm )

bool UObject::NotEqual_NameName(struct FName A, struct FName B)
{
	static UFunction* pFnNotEqual_NameName = NULL;

	if (!pFnNotEqual_NameName)
		pFnNotEqual_NameName = (UFunction*)UObject::GObjObjects()->Data[5932];

	UObject_execNotEqual_NameName_Parms NotEqual_NameName_Parms;
	memcpy(&NotEqual_NameName_Parms.A, &A, 0x8);
	memcpy(&NotEqual_NameName_Parms.B, &B, 0x8);

	unsigned short NativeIndex = pFnNotEqual_NameName->iNative;
	pFnNotEqual_NameName->iNative = 0;

	pFnNotEqual_NameName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_NameName, &NotEqual_NameName_Parms, NULL);

	pFnNotEqual_NameName->FunctionFlags |= 0x400;

	pFnNotEqual_NameName->iNative = NativeIndex;

	return NotEqual_NameName_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_NameName
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00FE]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   A                              ( CPF_Parm )
// struct FName                   B                              ( CPF_Parm )

bool UObject::EqualEqual_NameName(struct FName A, struct FName B)
{
	static UFunction* pFnEqualEqual_NameName = NULL;

	if (!pFnEqualEqual_NameName)
		pFnEqualEqual_NameName = (UFunction*)UObject::GObjObjects()->Data[5936];

	UObject_execEqualEqual_NameName_Parms EqualEqual_NameName_Parms;
	memcpy(&EqualEqual_NameName_Parms.A, &A, 0x8);
	memcpy(&EqualEqual_NameName_Parms.B, &B, 0x8);

	unsigned short NativeIndex = pFnEqualEqual_NameName->iNative;
	pFnEqualEqual_NameName->iNative = 0;

	pFnEqualEqual_NameName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_NameName, &EqualEqual_NameName_Parms, NULL);

	pFnEqualEqual_NameName->FunctionFlags |= 0x400;

	pFnEqualEqual_NameName->iNative = NativeIndex;

	return EqualEqual_NameName_Parms.ReturnValue;
};

// Function Core.Object.QueryInterface
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// class UInterface*              ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_CoerceParm )
// class UClass*                  InterfaceClass                 ( CPF_Parm )

class UInterface* UObject::QueryInterface(class UClass* InterfaceClass)
{
	static UFunction* pFnQueryInterface = NULL;

	if (!pFnQueryInterface)
		pFnQueryInterface = (UFunction*)UObject::GObjObjects()->Data[5940];

	UObject_execQueryInterface_Parms QueryInterface_Parms;
	QueryInterface_Parms.InterfaceClass = InterfaceClass;

	pFnQueryInterface->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnQueryInterface, &QueryInterface_Parms, NULL);

	pFnQueryInterface->FunctionFlags |= 0x400;

	return QueryInterface_Parms.ReturnValue;
};

// Function Core.Object.IsA
// [0x00020401] ( FUNC_Final | FUNC_Native ) iNative [0x00C5]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   ClassName                      ( CPF_Parm )

bool UObject::IsA(struct FName ClassName)
{
	static UFunction* pFnIsA = NULL;

	if (!pFnIsA)
		pFnIsA = (UFunction*)UObject::GObjObjects()->Data[5944];

	UObject_execIsA_Parms IsA_Parms;
	memcpy(&IsA_Parms.ClassName, &ClassName, 0x8);

	unsigned short NativeIndex = pFnIsA->iNative;
	pFnIsA->iNative = 0;

	pFnIsA->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsA, &IsA_Parms, NULL);

	pFnIsA->FunctionFlags |= 0x400;

	pFnIsA->iNative = NativeIndex;

	return IsA_Parms.ReturnValue;
};

// Function Core.Object.ClassIsChildOf
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x0102]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UClass*                  TestClass                      ( CPF_Parm )
// class UClass*                  ParentClass                    ( CPF_Parm )

bool UObject::ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass)
{
	static UFunction* pFnClassIsChildOf = NULL;

	if (!pFnClassIsChildOf)
		pFnClassIsChildOf = (UFunction*)UObject::GObjObjects()->Data[5947];

	UObject_execClassIsChildOf_Parms ClassIsChildOf_Parms;
	ClassIsChildOf_Parms.TestClass = TestClass;
	ClassIsChildOf_Parms.ParentClass = ParentClass;

	unsigned short NativeIndex = pFnClassIsChildOf->iNative;
	pFnClassIsChildOf->iNative = 0;

	pFnClassIsChildOf->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClassIsChildOf, &ClassIsChildOf_Parms, NULL);

	pFnClassIsChildOf->FunctionFlags |= 0x400;

	pFnClassIsChildOf->iNative = NativeIndex;

	return ClassIsChildOf_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_InterfaceInterface
// [0x00023401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UInterface*              A                              ( CPF_Parm )
// class UInterface*              B                              ( CPF_Parm )

bool UObject::NotEqual_InterfaceInterface(class UInterface* A, class UInterface* B)
{
	static UFunction* pFnNotEqual_InterfaceInterface = NULL;

	if (!pFnNotEqual_InterfaceInterface)
		pFnNotEqual_InterfaceInterface = (UFunction*)UObject::GObjObjects()->Data[5950];

	UObject_execNotEqual_InterfaceInterface_Parms NotEqual_InterfaceInterface_Parms;
	NotEqual_InterfaceInterface_Parms.A = A;
	NotEqual_InterfaceInterface_Parms.B = B;

	pFnNotEqual_InterfaceInterface->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_InterfaceInterface, &NotEqual_InterfaceInterface_Parms, NULL);

	pFnNotEqual_InterfaceInterface->FunctionFlags |= 0x400;

	return NotEqual_InterfaceInterface_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_InterfaceInterface
// [0x00023401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UInterface*              A                              ( CPF_Parm )
// class UInterface*              B                              ( CPF_Parm )

bool UObject::EqualEqual_InterfaceInterface(class UInterface* A, class UInterface* B)
{
	static UFunction* pFnEqualEqual_InterfaceInterface = NULL;

	if (!pFnEqualEqual_InterfaceInterface)
		pFnEqualEqual_InterfaceInterface = (UFunction*)UObject::GObjObjects()->Data[5954];

	UObject_execEqualEqual_InterfaceInterface_Parms EqualEqual_InterfaceInterface_Parms;
	EqualEqual_InterfaceInterface_Parms.A = A;
	EqualEqual_InterfaceInterface_Parms.B = B;

	pFnEqualEqual_InterfaceInterface->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_InterfaceInterface, &EqualEqual_InterfaceInterface_Parms, NULL);

	pFnEqualEqual_InterfaceInterface->FunctionFlags |= 0x400;

	return EqualEqual_InterfaceInterface_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_ObjectObject
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0077]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 A                              ( CPF_Parm )
// class UObject*                 B                              ( CPF_Parm )

bool UObject::NotEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static UFunction* pFnNotEqual_ObjectObject = NULL;

	if (!pFnNotEqual_ObjectObject)
		pFnNotEqual_ObjectObject = (UFunction*)UObject::GObjObjects()->Data[5958];

	UObject_execNotEqual_ObjectObject_Parms NotEqual_ObjectObject_Parms;
	NotEqual_ObjectObject_Parms.A = A;
	NotEqual_ObjectObject_Parms.B = B;

	unsigned short NativeIndex = pFnNotEqual_ObjectObject->iNative;
	pFnNotEqual_ObjectObject->iNative = 0;

	pFnNotEqual_ObjectObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_ObjectObject, &NotEqual_ObjectObject_Parms, NULL);

	pFnNotEqual_ObjectObject->FunctionFlags |= 0x400;

	pFnNotEqual_ObjectObject->iNative = NativeIndex;

	return NotEqual_ObjectObject_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_ObjectObject
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0072]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UObject*                 A                              ( CPF_Parm )
// class UObject*                 B                              ( CPF_Parm )

bool UObject::EqualEqual_ObjectObject(class UObject* A, class UObject* B)
{
	static UFunction* pFnEqualEqual_ObjectObject = NULL;

	if (!pFnEqualEqual_ObjectObject)
		pFnEqualEqual_ObjectObject = (UFunction*)UObject::GObjObjects()->Data[5962];

	UObject_execEqualEqual_ObjectObject_Parms EqualEqual_ObjectObject_Parms;
	EqualEqual_ObjectObject_Parms.A = A;
	EqualEqual_ObjectObject_Parms.B = B;

	unsigned short NativeIndex = pFnEqualEqual_ObjectObject->iNative;
	pFnEqualEqual_ObjectObject->iNative = 0;

	pFnEqualEqual_ObjectObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_ObjectObject, &EqualEqual_ObjectObject_Parms, NULL);

	pFnEqualEqual_ObjectObject->FunctionFlags |= 0x400;

	pFnEqualEqual_ObjectObject->iNative = NativeIndex;

	return EqualEqual_ObjectObject_Parms.ReturnValue;
};

// Function Core.Object.GuidToString
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FGuid                   G                              ( CPF_Const | CPF_Parm | CPF_OutParm )

struct FString UObject::GuidToString(struct FGuid* G)
{
	static UFunction* pFnGuidToString = NULL;

	if (!pFnGuidToString)
		pFnGuidToString = (UFunction*)UObject::GObjObjects()->Data[5966];

	UObject_execGuidToString_Parms GuidToString_Parms;

	pFnGuidToString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGuidToString, &GuidToString_Parms, NULL);

	pFnGuidToString->FunctionFlags |= 0x400;

	if (G)
		memcpy(G, &GuidToString_Parms.G, 0x10);

	return GuidToString_Parms.ReturnValue;
};

// Function Core.Object.PathName
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// class UObject*                 CheckObject                    ( CPF_Parm )

struct FString UObject::PathName(class UObject* CheckObject)
{
	static UFunction* pFnPathName = NULL;

	if (!pFnPathName)
		pFnPathName = (UFunction*)UObject::GObjObjects()->Data[5970];

	UObject_execPathName_Parms PathName_Parms;
	PathName_Parms.CheckObject = CheckObject;

	pFnPathName->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPathName, &PathName_Parms, NULL);

	pFnPathName->FunctionFlags |= 0x400;

	return PathName_Parms.ReturnValue;
};

// Function Core.Object.SplitString
// [0x00026003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FString >       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Source                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Delimiter                      ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bCullEmpty                     ( CPF_OptionalParm | CPF_Parm )

TArray< struct FString > UObject::SplitString(struct FString Source, struct FString Delimiter, unsigned long bCullEmpty)
{
	static UFunction* pFnSplitString = NULL;

	if (!pFnSplitString)
		pFnSplitString = (UFunction*)UObject::GObjObjects()->Data[5978];

	UObject_execSplitString_Parms SplitString_Parms;
	memcpy(&SplitString_Parms.Source, &Source, 0xC);
	memcpy(&SplitString_Parms.Delimiter, &Delimiter, 0xC);
	SplitString_Parms.bCullEmpty = bCullEmpty;

	this->ProcessEvent(pFnSplitString, &SplitString_Parms, NULL);

	return SplitString_Parms.ReturnValue;
};

// Function Core.Object.ParseStringIntoArray
// [0x00422401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 BaseString                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 delim                          ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bCullEmpty                     ( CPF_Parm )
// TArray< struct FString >       Pieces                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UObject::ParseStringIntoArray(struct FString BaseString, struct FString delim, unsigned long bCullEmpty, TArray< struct FString >* Pieces)
{
	static UFunction* pFnParseStringIntoArray = NULL;

	if (!pFnParseStringIntoArray)
		pFnParseStringIntoArray = (UFunction*)UObject::GObjObjects()->Data[5586];

	UObject_execParseStringIntoArray_Parms ParseStringIntoArray_Parms;
	memcpy(&ParseStringIntoArray_Parms.BaseString, &BaseString, 0xC);
	memcpy(&ParseStringIntoArray_Parms.delim, &delim, 0xC);
	ParseStringIntoArray_Parms.bCullEmpty = bCullEmpty;

	pFnParseStringIntoArray->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnParseStringIntoArray, &ParseStringIntoArray_Parms, NULL);

	pFnParseStringIntoArray->FunctionFlags |= 0x400;

	if (Pieces)
		memcpy(Pieces, &ParseStringIntoArray_Parms.Pieces, 0xC);
};

// Function Core.Object.JoinArray
// [0x00426003] ( FUNC_Final )
// Parameters infos:
// TArray< struct FString >       StringArray                    ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 delim                          ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bIgnoreBlanks                  ( CPF_OptionalParm | CPF_Parm )
// struct FString                 out_Result                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UObject::JoinArray(TArray< struct FString > StringArray, struct FString delim, unsigned long bIgnoreBlanks, struct FString* out_Result)
{
	static UFunction* pFnJoinArray = NULL;

	if (!pFnJoinArray)
		pFnJoinArray = (UFunction*)UObject::GObjObjects()->Data[5988];

	UObject_execJoinArray_Parms JoinArray_Parms;
	memcpy(&JoinArray_Parms.StringArray, &StringArray, 0xC);
	memcpy(&JoinArray_Parms.delim, &delim, 0xC);
	JoinArray_Parms.bIgnoreBlanks = bIgnoreBlanks;

	this->ProcessEvent(pFnJoinArray, &JoinArray_Parms, NULL);

	if (out_Result)
		memcpy(out_Result, &JoinArray_Parms.out_Result, 0xC);
};

// Function Core.Object.GetRightMost
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

struct FString UObject::GetRightMost(struct FString Text)
{
	static UFunction* pFnGetRightMost = NULL;

	if (!pFnGetRightMost)
		pFnGetRightMost = (UFunction*)UObject::GObjObjects()->Data[5994];

	UObject_execGetRightMost_Parms GetRightMost_Parms;
	memcpy(&GetRightMost_Parms.Text, &Text, 0xC);

	this->ProcessEvent(pFnGetRightMost, &GetRightMost_Parms, NULL);

	return GetRightMost_Parms.ReturnValue;
};

// Function Core.Object.Split
// [0x00026003] ( FUNC_Final )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Text                           ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 SplitStr                       ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// unsigned long                  bOmitSplitStr                  ( CPF_OptionalParm | CPF_Parm )

struct FString UObject::Split(struct FString Text, struct FString SplitStr, unsigned long bOmitSplitStr)
{
	static UFunction* pFnSplit = NULL;

	if (!pFnSplit)
		pFnSplit = (UFunction*)UObject::GObjObjects()->Data[6002];

	UObject_execSplit_Parms Split_Parms;
	memcpy(&Split_Parms.Text, &Text, 0xC);
	memcpy(&Split_Parms.SplitStr, &SplitStr, 0xC);
	Split_Parms.bOmitSplitStr = bOmitSplitStr;

	this->ProcessEvent(pFnSplit, &Split_Parms, NULL);

	return Split_Parms.ReturnValue;
};

// Function Core.Object.StringHash
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

int UObject::StringHash(struct FString S)
{
	static UFunction* pFnStringHash = NULL;

	if (!pFnStringHash)
		pFnStringHash = (UFunction*)UObject::GObjObjects()->Data[6005];

	UObject_execStringHash_Parms StringHash_Parms;
	memcpy(&StringHash_Parms.S, &S, 0xC);

	pFnStringHash->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStringHash, &StringHash_Parms, NULL);

	pFnStringHash->FunctionFlags |= 0x400;

	return StringHash_Parms.ReturnValue;
};

// Function Core.Object.Repl
// [0x00026401] ( FUNC_Final | FUNC_Native ) iNative [0x00C9]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Src                            ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 Match                          ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 With                           ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// unsigned long                  bCaseSensitive                 ( CPF_OptionalParm | CPF_Parm )

struct FString UObject::Repl(struct FString Src, struct FString Match, struct FString With, unsigned long bCaseSensitive)
{
	static UFunction* pFnRepl = NULL;

	if (!pFnRepl)
		pFnRepl = (UFunction*)UObject::GObjObjects()->Data[6010];

	UObject_execRepl_Parms Repl_Parms;
	memcpy(&Repl_Parms.Src, &Src, 0xC);
	memcpy(&Repl_Parms.Match, &Match, 0xC);
	memcpy(&Repl_Parms.With, &With, 0xC);
	Repl_Parms.bCaseSensitive = bCaseSensitive;

	unsigned short NativeIndex = pFnRepl->iNative;
	pFnRepl->iNative = 0;

	pFnRepl->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRepl, &Repl_Parms, NULL);

	pFnRepl->FunctionFlags |= 0x400;

	pFnRepl->iNative = NativeIndex;

	return Repl_Parms.ReturnValue;
};

// Function Core.Object.Asc
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00ED]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

int UObject::Asc(struct FString S)
{
	static UFunction* pFnAsc = NULL;

	if (!pFnAsc)
		pFnAsc = (UFunction*)UObject::GObjObjects()->Data[6013];

	UObject_execAsc_Parms Asc_Parms;
	memcpy(&Asc_Parms.S, &S, 0xC);

	unsigned short NativeIndex = pFnAsc->iNative;
	pFnAsc->iNative = 0;

	pFnAsc->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAsc, &Asc_Parms, NULL);

	pFnAsc->FunctionFlags |= 0x400;

	pFnAsc->iNative = NativeIndex;

	return Asc_Parms.ReturnValue;
};

// Function Core.Object.Chr
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00EC]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            I                              ( CPF_Parm )

struct FString UObject::Chr(int I)
{
	static UFunction* pFnChr = NULL;

	if (!pFnChr)
		pFnChr = (UFunction*)UObject::GObjObjects()->Data[6019];

	UObject_execChr_Parms Chr_Parms;
	Chr_Parms.I = I;

	unsigned short NativeIndex = pFnChr->iNative;
	pFnChr->iNative = 0;

	pFnChr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnChr, &Chr_Parms, NULL);

	pFnChr->FunctionFlags |= 0x400;

	pFnChr->iNative = NativeIndex;

	return Chr_Parms.ReturnValue;
};

// Function Core.Object.Locs
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00EE]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

struct FString UObject::Locs(struct FString S)
{
	static UFunction* pFnLocs = NULL;

	if (!pFnLocs)
		pFnLocs = (UFunction*)UObject::GObjObjects()->Data[6022];

	UObject_execLocs_Parms Locs_Parms;
	memcpy(&Locs_Parms.S, &S, 0xC);

	unsigned short NativeIndex = pFnLocs->iNative;
	pFnLocs->iNative = 0;

	pFnLocs->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLocs, &Locs_Parms, NULL);

	pFnLocs->FunctionFlags |= 0x400;

	pFnLocs->iNative = NativeIndex;

	return Locs_Parms.ReturnValue;
};

// Function Core.Object.Caps
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00EB]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

struct FString UObject::Caps(struct FString S)
{
	static UFunction* pFnCaps = NULL;

	if (!pFnCaps)
		pFnCaps = (UFunction*)UObject::GObjObjects()->Data[6025];

	UObject_execCaps_Parms Caps_Parms;
	memcpy(&Caps_Parms.S, &S, 0xC);

	unsigned short NativeIndex = pFnCaps->iNative;
	pFnCaps->iNative = 0;

	pFnCaps->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCaps, &Caps_Parms, NULL);

	pFnCaps->FunctionFlags |= 0x400;

	pFnCaps->iNative = NativeIndex;

	return Caps_Parms.ReturnValue;
};

// Function Core.Object.Right
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00EA]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// int                            I                              ( CPF_Parm )

struct FString UObject::Right(struct FString S, int I)
{
	static UFunction* pFnRight = NULL;

	if (!pFnRight)
		pFnRight = (UFunction*)UObject::GObjObjects()->Data[6028];

	UObject_execRight_Parms Right_Parms;
	memcpy(&Right_Parms.S, &S, 0xC);
	Right_Parms.I = I;

	unsigned short NativeIndex = pFnRight->iNative;
	pFnRight->iNative = 0;

	pFnRight->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRight, &Right_Parms, NULL);

	pFnRight->FunctionFlags |= 0x400;

	pFnRight->iNative = NativeIndex;

	return Right_Parms.ReturnValue;
};

// Function Core.Object.Left
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x0080]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// int                            I                              ( CPF_Parm )

struct FString UObject::Left(struct FString S, int I)
{
	static UFunction* pFnLeft = NULL;

	if (!pFnLeft)
		pFnLeft = (UFunction*)UObject::GObjObjects()->Data[6031];

	UObject_execLeft_Parms Left_Parms;
	memcpy(&Left_Parms.S, &S, 0xC);
	Left_Parms.I = I;

	unsigned short NativeIndex = pFnLeft->iNative;
	pFnLeft->iNative = 0;

	pFnLeft->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLeft, &Left_Parms, NULL);

	pFnLeft->FunctionFlags |= 0x400;

	pFnLeft->iNative = NativeIndex;

	return Left_Parms.ReturnValue;
};

// Function Core.Object.Mid
// [0x00026401] ( FUNC_Final | FUNC_Native ) iNative [0x007F]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// int                            I                              ( CPF_Parm )
// int                            J                              ( CPF_OptionalParm | CPF_Parm )

struct FString UObject::Mid(struct FString S, int I, int J)
{
	static UFunction* pFnMid = NULL;

	if (!pFnMid)
		pFnMid = (UFunction*)UObject::GObjObjects()->Data[6035];

	UObject_execMid_Parms Mid_Parms;
	memcpy(&Mid_Parms.S, &S, 0xC);
	Mid_Parms.I = I;
	Mid_Parms.J = J;

	unsigned short NativeIndex = pFnMid->iNative;
	pFnMid->iNative = 0;

	pFnMid->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMid, &Mid_Parms, NULL);

	pFnMid->FunctionFlags |= 0x400;

	pFnMid->iNative = NativeIndex;

	return Mid_Parms.ReturnValue;
};

// Function Core.Object.InStr
// [0x00026401] ( FUNC_Final | FUNC_Native ) iNative [0x007E]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 T                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// unsigned long                  bSearchFromRight               ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bIgnoreCase                    ( CPF_OptionalParm | CPF_Parm )
// int                            StartPos                       ( CPF_OptionalParm | CPF_Parm )

int UObject::InStr(struct FString S, struct FString T, unsigned long bSearchFromRight, unsigned long bIgnoreCase, int StartPos)
{
	static UFunction* pFnInStr = NULL;

	if (!pFnInStr)
		pFnInStr = (UFunction*)UObject::GObjObjects()->Data[6039];

	UObject_execInStr_Parms InStr_Parms;
	memcpy(&InStr_Parms.S, &S, 0xC);
	memcpy(&InStr_Parms.T, &T, 0xC);
	InStr_Parms.bSearchFromRight = bSearchFromRight;
	InStr_Parms.bIgnoreCase = bIgnoreCase;
	InStr_Parms.StartPos = StartPos;

	unsigned short NativeIndex = pFnInStr->iNative;
	pFnInStr->iNative = 0;

	pFnInStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInStr, &InStr_Parms, NULL);

	pFnInStr->FunctionFlags |= 0x400;

	pFnInStr->iNative = NativeIndex;

	return InStr_Parms.ReturnValue;
};

// Function Core.Object.Len
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x007D]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 S                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

int UObject::Len(struct FString S)
{
	static UFunction* pFnLen = NULL;

	if (!pFnLen)
		pFnLen = (UFunction*)UObject::GObjObjects()->Data[6044];

	UObject_execLen_Parms Len_Parms;
	memcpy(&Len_Parms.S, &S, 0xC);

	unsigned short NativeIndex = pFnLen->iNative;
	pFnLen->iNative = 0;

	pFnLen->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLen, &Len_Parms, NULL);

	pFnLen->FunctionFlags |= 0x400;

	pFnLen->iNative = NativeIndex;

	return Len_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_StrStr
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0144]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 A                              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FString UObject::SubtractEqual_StrStr(struct FString B, struct FString* A)
{
	static UFunction* pFnSubtractEqual_StrStr = NULL;

	if (!pFnSubtractEqual_StrStr)
		pFnSubtractEqual_StrStr = (UFunction*)UObject::GObjObjects()->Data[6051];

	UObject_execSubtractEqual_StrStr_Parms SubtractEqual_StrStr_Parms;
	memcpy(&SubtractEqual_StrStr_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnSubtractEqual_StrStr->iNative;
	pFnSubtractEqual_StrStr->iNative = 0;

	pFnSubtractEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractEqual_StrStr, &SubtractEqual_StrStr_Parms, NULL);

	pFnSubtractEqual_StrStr->FunctionFlags |= 0x400;

	pFnSubtractEqual_StrStr->iNative = NativeIndex;

	if (A)
		memcpy(A, &SubtractEqual_StrStr_Parms.A, 0xC);

	return SubtractEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.AtEqual_StrStr
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0143]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 A                              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FString UObject::AtEqual_StrStr(struct FString B, struct FString* A)
{
	static UFunction* pFnAtEqual_StrStr = NULL;

	if (!pFnAtEqual_StrStr)
		pFnAtEqual_StrStr = (UFunction*)UObject::GObjObjects()->Data[6054];

	UObject_execAtEqual_StrStr_Parms AtEqual_StrStr_Parms;
	memcpy(&AtEqual_StrStr_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnAtEqual_StrStr->iNative;
	pFnAtEqual_StrStr->iNative = 0;

	pFnAtEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAtEqual_StrStr, &AtEqual_StrStr_Parms, NULL);

	pFnAtEqual_StrStr->FunctionFlags |= 0x400;

	pFnAtEqual_StrStr->iNative = NativeIndex;

	if (A)
		memcpy(A, &AtEqual_StrStr_Parms.A, 0xC);

	return AtEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.ConcatEqual_StrStr
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0142]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 A                              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

struct FString UObject::ConcatEqual_StrStr(struct FString B, struct FString* A)
{
	static UFunction* pFnConcatEqual_StrStr = NULL;

	if (!pFnConcatEqual_StrStr)
		pFnConcatEqual_StrStr = (UFunction*)UObject::GObjObjects()->Data[5998];

	UObject_execConcatEqual_StrStr_Parms ConcatEqual_StrStr_Parms;
	memcpy(&ConcatEqual_StrStr_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnConcatEqual_StrStr->iNative;
	pFnConcatEqual_StrStr->iNative = 0;

	pFnConcatEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnConcatEqual_StrStr, &ConcatEqual_StrStr_Parms, NULL);

	pFnConcatEqual_StrStr->FunctionFlags |= 0x400;

	pFnConcatEqual_StrStr->iNative = NativeIndex;

	if (A)
		memcpy(A, &ConcatEqual_StrStr_Parms.A, 0xC);

	return ConcatEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.ComplementEqual_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x007C]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_NeedCtorLink )

bool UObject::ComplementEqual_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnComplementEqual_StrStr = NULL;

	if (!pFnComplementEqual_StrStr)
		pFnComplementEqual_StrStr = (UFunction*)UObject::GObjObjects()->Data[6061];

	UObject_execComplementEqual_StrStr_Parms ComplementEqual_StrStr_Parms;
	memcpy(&ComplementEqual_StrStr_Parms.A, &A, 0xC);
	memcpy(&ComplementEqual_StrStr_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnComplementEqual_StrStr->iNative;
	pFnComplementEqual_StrStr->iNative = 0;

	pFnComplementEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnComplementEqual_StrStr, &ComplementEqual_StrStr_Parms, NULL);

	pFnComplementEqual_StrStr->FunctionFlags |= 0x400;

	pFnComplementEqual_StrStr->iNative = NativeIndex;

	return ComplementEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x007B]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_NeedCtorLink )

bool UObject::NotEqual_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnNotEqual_StrStr = NULL;

	if (!pFnNotEqual_StrStr)
		pFnNotEqual_StrStr = (UFunction*)UObject::GObjObjects()->Data[6064];

	UObject_execNotEqual_StrStr_Parms NotEqual_StrStr_Parms;
	memcpy(&NotEqual_StrStr_Parms.A, &A, 0xC);
	memcpy(&NotEqual_StrStr_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnNotEqual_StrStr->iNative;
	pFnNotEqual_StrStr->iNative = 0;

	pFnNotEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_StrStr, &NotEqual_StrStr_Parms, NULL);

	pFnNotEqual_StrStr->FunctionFlags |= 0x400;

	pFnNotEqual_StrStr->iNative = NativeIndex;

	return NotEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x007A]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_NeedCtorLink )

bool UObject::EqualEqual_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnEqualEqual_StrStr = NULL;

	if (!pFnEqualEqual_StrStr)
		pFnEqualEqual_StrStr = (UFunction*)UObject::GObjObjects()->Data[6068];

	UObject_execEqualEqual_StrStr_Parms EqualEqual_StrStr_Parms;
	memcpy(&EqualEqual_StrStr_Parms.A, &A, 0xC);
	memcpy(&EqualEqual_StrStr_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnEqualEqual_StrStr->iNative;
	pFnEqualEqual_StrStr->iNative = 0;

	pFnEqualEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_StrStr, &EqualEqual_StrStr_Parms, NULL);

	pFnEqualEqual_StrStr->FunctionFlags |= 0x400;

	pFnEqualEqual_StrStr->iNative = NativeIndex;

	return EqualEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.GreaterEqual_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0079]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_NeedCtorLink )

bool UObject::GreaterEqual_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnGreaterEqual_StrStr = NULL;

	if (!pFnGreaterEqual_StrStr)
		pFnGreaterEqual_StrStr = (UFunction*)UObject::GObjObjects()->Data[6072];

	UObject_execGreaterEqual_StrStr_Parms GreaterEqual_StrStr_Parms;
	memcpy(&GreaterEqual_StrStr_Parms.A, &A, 0xC);
	memcpy(&GreaterEqual_StrStr_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnGreaterEqual_StrStr->iNative;
	pFnGreaterEqual_StrStr->iNative = 0;

	pFnGreaterEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreaterEqual_StrStr, &GreaterEqual_StrStr_Parms, NULL);

	pFnGreaterEqual_StrStr->FunctionFlags |= 0x400;

	pFnGreaterEqual_StrStr->iNative = NativeIndex;

	return GreaterEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.LessEqual_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0078]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_NeedCtorLink )

bool UObject::LessEqual_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnLessEqual_StrStr = NULL;

	if (!pFnLessEqual_StrStr)
		pFnLessEqual_StrStr = (UFunction*)UObject::GObjObjects()->Data[6076];

	UObject_execLessEqual_StrStr_Parms LessEqual_StrStr_Parms;
	memcpy(&LessEqual_StrStr_Parms.A, &A, 0xC);
	memcpy(&LessEqual_StrStr_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnLessEqual_StrStr->iNative;
	pFnLessEqual_StrStr->iNative = 0;

	pFnLessEqual_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLessEqual_StrStr, &LessEqual_StrStr_Parms, NULL);

	pFnLessEqual_StrStr->FunctionFlags |= 0x400;

	pFnLessEqual_StrStr->iNative = NativeIndex;

	return LessEqual_StrStr_Parms.ReturnValue;
};

// Function Core.Object.Greater_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0074]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_NeedCtorLink )

bool UObject::Greater_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnGreater_StrStr = NULL;

	if (!pFnGreater_StrStr)
		pFnGreater_StrStr = (UFunction*)UObject::GObjObjects()->Data[6080];

	UObject_execGreater_StrStr_Parms Greater_StrStr_Parms;
	memcpy(&Greater_StrStr_Parms.A, &A, 0xC);
	memcpy(&Greater_StrStr_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnGreater_StrStr->iNative;
	pFnGreater_StrStr->iNative = 0;

	pFnGreater_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreater_StrStr, &Greater_StrStr_Parms, NULL);

	pFnGreater_StrStr->FunctionFlags |= 0x400;

	pFnGreater_StrStr->iNative = NativeIndex;

	return Greater_StrStr_Parms.ReturnValue;
};

// Function Core.Object.Less_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0073]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 A                              ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_NeedCtorLink )

bool UObject::Less_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnLess_StrStr = NULL;

	if (!pFnLess_StrStr)
		pFnLess_StrStr = (UFunction*)UObject::GObjObjects()->Data[6084];

	UObject_execLess_StrStr_Parms Less_StrStr_Parms;
	memcpy(&Less_StrStr_Parms.A, &A, 0xC);
	memcpy(&Less_StrStr_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnLess_StrStr->iNative;
	pFnLess_StrStr->iNative = 0;

	pFnLess_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLess_StrStr, &Less_StrStr_Parms, NULL);

	pFnLess_StrStr->FunctionFlags |= 0x400;

	pFnLess_StrStr->iNative = NativeIndex;

	return Less_StrStr_Parms.ReturnValue;
};

// Function Core.Object.At_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00A8]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 A                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

struct FString UObject::At_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnAt_StrStr = NULL;

	if (!pFnAt_StrStr)
		pFnAt_StrStr = (UFunction*)UObject::GObjObjects()->Data[6088];

	UObject_execAt_StrStr_Parms At_StrStr_Parms;
	memcpy(&At_StrStr_Parms.A, &A, 0xC);
	memcpy(&At_StrStr_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnAt_StrStr->iNative;
	pFnAt_StrStr->iNative = 0;

	pFnAt_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAt_StrStr, &At_StrStr_Parms, NULL);

	pFnAt_StrStr->FunctionFlags |= 0x400;

	pFnAt_StrStr->iNative = NativeIndex;

	return At_StrStr_Parms.ReturnValue;
};

// Function Core.Object.Concat_StrStr
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0070]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 A                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 B                              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

struct FString UObject::Concat_StrStr(struct FString A, struct FString B)
{
	static UFunction* pFnConcat_StrStr = NULL;

	if (!pFnConcat_StrStr)
		pFnConcat_StrStr = (UFunction*)UObject::GObjObjects()->Data[6092];

	UObject_execConcat_StrStr_Parms Concat_StrStr_Parms;
	memcpy(&Concat_StrStr_Parms.A, &A, 0xC);
	memcpy(&Concat_StrStr_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnConcat_StrStr->iNative;
	pFnConcat_StrStr->iNative = 0;

	pFnConcat_StrStr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnConcat_StrStr, &Concat_StrStr_Parms, NULL);

	pFnConcat_StrStr->FunctionFlags |= 0x400;

	pFnConcat_StrStr->iNative = NativeIndex;

	return Concat_StrStr_Parms.ReturnValue;
};

// Function Core.Object.MakeRotator
// [0x00822003] ( FUNC_Final )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Pitch                          ( CPF_Parm )
// int                            Yaw                            ( CPF_Parm )
// int                            Roll                           ( CPF_Parm )

struct FRotator UObject::MakeRotator(int Pitch, int Yaw, int Roll)
{
	static UFunction* pFnMakeRotator = NULL;

	if (!pFnMakeRotator)
		pFnMakeRotator = (UFunction*)UObject::GObjObjects()->Data[6096];

	UObject_execMakeRotator_Parms MakeRotator_Parms;
	MakeRotator_Parms.Pitch = Pitch;
	MakeRotator_Parms.Yaw = Yaw;
	MakeRotator_Parms.Roll = Roll;

	this->ProcessEvent(pFnMakeRotator, &MakeRotator_Parms, NULL);

	return MakeRotator_Parms.ReturnValue;
};

// Function Core.Object.SClampRotAxis
// [0x00422103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )
// int                            ViewAxis                       ( CPF_Parm )
// int                            MaxLimit                       ( CPF_Parm )
// int                            MinLimit                       ( CPF_Parm )
// float                          InterpolationSpeed             ( CPF_Parm )
// int                            out_DeltaViewAxis              ( CPF_Parm | CPF_OutParm )

bool UObject::SClampRotAxis(float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis)
{
	static UFunction* pFnSClampRotAxis = NULL;

	if (!pFnSClampRotAxis)
		pFnSClampRotAxis = (UFunction*)UObject::GObjObjects()->Data[6100];

	UObject_execSClampRotAxis_Parms SClampRotAxis_Parms;
	SClampRotAxis_Parms.DeltaTime = DeltaTime;
	SClampRotAxis_Parms.ViewAxis = ViewAxis;
	SClampRotAxis_Parms.MaxLimit = MaxLimit;
	SClampRotAxis_Parms.MinLimit = MinLimit;
	SClampRotAxis_Parms.InterpolationSpeed = InterpolationSpeed;

	this->ProcessEvent(pFnSClampRotAxis, &SClampRotAxis_Parms, NULL);

	if (out_DeltaViewAxis)
		*out_DeltaViewAxis = SClampRotAxis_Parms.out_DeltaViewAxis;

	return SClampRotAxis_Parms.ReturnValue;
};

// Function Core.Object.ClampRotAxisFromRange
// [0x00022103] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Current                        ( CPF_Parm )
// int                            Min                            ( CPF_Parm )
// int                            Max                            ( CPF_Parm )

int UObject::ClampRotAxisFromRange(int Current, int Min, int Max)
{
	static UFunction* pFnClampRotAxisFromRange = NULL;

	if (!pFnClampRotAxisFromRange)
		pFnClampRotAxisFromRange = (UFunction*)UObject::GObjObjects()->Data[6106];

	UObject_execClampRotAxisFromRange_Parms ClampRotAxisFromRange_Parms;
	ClampRotAxisFromRange_Parms.Current = Current;
	ClampRotAxisFromRange_Parms.Min = Min;
	ClampRotAxisFromRange_Parms.Max = Max;

	this->ProcessEvent(pFnClampRotAxisFromRange, &ClampRotAxisFromRange_Parms, NULL);

	return ClampRotAxisFromRange_Parms.ReturnValue;
};

// Function Core.Object.ClampRotAxisFromBase
// [0x00022103] ( FUNC_Final )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Current                        ( CPF_Parm )
// int                            Center                         ( CPF_Parm )
// int                            MaxDelta                       ( CPF_Parm )

int UObject::ClampRotAxisFromBase(int Current, int Center, int MaxDelta)
{
	static UFunction* pFnClampRotAxisFromBase = NULL;

	if (!pFnClampRotAxisFromBase)
		pFnClampRotAxisFromBase = (UFunction*)UObject::GObjObjects()->Data[6116];

	UObject_execClampRotAxisFromBase_Parms ClampRotAxisFromBase_Parms;
	ClampRotAxisFromBase_Parms.Current = Current;
	ClampRotAxisFromBase_Parms.Center = Center;
	ClampRotAxisFromBase_Parms.MaxDelta = MaxDelta;

	this->ProcessEvent(pFnClampRotAxisFromBase, &ClampRotAxisFromBase_Parms, NULL);

	return ClampRotAxisFromBase_Parms.ReturnValue;
};

// Function Core.Object.ClampRotAxis
// [0x00422103] ( FUNC_Final )
// Parameters infos:
// int                            ViewAxis                       ( CPF_Parm )
// int                            MaxLimit                       ( CPF_Parm )
// int                            MinLimit                       ( CPF_Parm )
// int                            out_DeltaViewAxis              ( CPF_Parm | CPF_OutParm )

void UObject::ClampRotAxis(int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis)
{
	static UFunction* pFnClampRotAxis = NULL;

	if (!pFnClampRotAxis)
		pFnClampRotAxis = (UFunction*)UObject::GObjObjects()->Data[6121];

	UObject_execClampRotAxis_Parms ClampRotAxis_Parms;
	ClampRotAxis_Parms.ViewAxis = ViewAxis;
	ClampRotAxis_Parms.MaxLimit = MaxLimit;
	ClampRotAxis_Parms.MinLimit = MinLimit;

	this->ProcessEvent(pFnClampRotAxis, &ClampRotAxis_Parms, NULL);

	if (out_DeltaViewAxis)
		*out_DeltaViewAxis = ClampRotAxis_Parms.out_DeltaViewAxis;
};

// Function Core.Object.RSize
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                R                              ( CPF_Parm )

float UObject::RSize(struct FRotator R)
{
	static UFunction* pFnRSize = NULL;

	if (!pFnRSize)
		pFnRSize = (UFunction*)UObject::GObjObjects()->Data[6126];

	UObject_execRSize_Parms RSize_Parms;
	memcpy(&RSize_Parms.R, &R, 0xC);

	pFnRSize->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRSize, &RSize_Parms, NULL);

	pFnRSize->FunctionFlags |= 0x400;

	return RSize_Parms.ReturnValue;
};

// Function Core.Object.RDiff
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )

float UObject::RDiff(struct FRotator A, struct FRotator B)
{
	static UFunction* pFnRDiff = NULL;

	if (!pFnRDiff)
		pFnRDiff = (UFunction*)UObject::GObjObjects()->Data[6131];

	UObject_execRDiff_Parms RDiff_Parms;
	memcpy(&RDiff_Parms.A, &A, 0xC);
	memcpy(&RDiff_Parms.B, &B, 0xC);

	pFnRDiff->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRDiff, &RDiff_Parms, NULL);

	pFnRDiff->FunctionFlags |= 0x400;

	return RDiff_Parms.ReturnValue;
};

// Function Core.Object.NormalizeRotAxis
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Angle                          ( CPF_Parm )

int UObject::NormalizeRotAxis(int Angle)
{
	static UFunction* pFnNormalizeRotAxis = NULL;

	if (!pFnNormalizeRotAxis)
		pFnNormalizeRotAxis = (UFunction*)UObject::GObjObjects()->Data[6109];

	UObject_execNormalizeRotAxis_Parms NormalizeRotAxis_Parms;
	NormalizeRotAxis_Parms.Angle = Angle;

	pFnNormalizeRotAxis->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNormalizeRotAxis, &NormalizeRotAxis_Parms, NULL);

	pFnNormalizeRotAxis->FunctionFlags |= 0x400;

	return NormalizeRotAxis_Parms.ReturnValue;
};

// Function Core.Object.RInterpTo
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                Current                        ( CPF_Parm )
// struct FRotator                Target                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// float                          InterpSpeed                    ( CPF_Parm )
// unsigned long                  bConstantInterpSpeed           ( CPF_OptionalParm | CPF_Parm )

struct FRotator UObject::RInterpTo(struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed, unsigned long bConstantInterpSpeed)
{
	static UFunction* pFnRInterpTo = NULL;

	if (!pFnRInterpTo)
		pFnRInterpTo = (UFunction*)UObject::GObjObjects()->Data[6137];

	UObject_execRInterpTo_Parms RInterpTo_Parms;
	memcpy(&RInterpTo_Parms.Current, &Current, 0xC);
	memcpy(&RInterpTo_Parms.Target, &Target, 0xC);
	RInterpTo_Parms.DeltaTime = DeltaTime;
	RInterpTo_Parms.InterpSpeed = InterpSpeed;
	RInterpTo_Parms.bConstantInterpSpeed = bConstantInterpSpeed;

	pFnRInterpTo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRInterpTo, &RInterpTo_Parms, NULL);

	pFnRInterpTo->FunctionFlags |= 0x400;

	return RInterpTo_Parms.ReturnValue;
};

// Function Core.Object.RTransform
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                R                              ( CPF_Parm )
// struct FRotator                RBasis                         ( CPF_Parm )

struct FRotator UObject::RTransform(struct FRotator R, struct FRotator RBasis)
{
	static UFunction* pFnRTransform = NULL;

	if (!pFnRTransform)
		pFnRTransform = (UFunction*)UObject::GObjObjects()->Data[6140];

	UObject_execRTransform_Parms RTransform_Parms;
	memcpy(&RTransform_Parms.R, &R, 0xC);
	memcpy(&RTransform_Parms.RBasis, &RBasis, 0xC);

	pFnRTransform->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRTransform, &RTransform_Parms, NULL);

	pFnRTransform->FunctionFlags |= 0x400;

	return RTransform_Parms.ReturnValue;
};

// Function Core.Object.RLerp
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )
// unsigned long                  bShortestPath                  ( CPF_OptionalParm | CPF_Parm )

struct FRotator UObject::RLerp(struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath)
{
	static UFunction* pFnRLerp = NULL;

	if (!pFnRLerp)
		pFnRLerp = (UFunction*)UObject::GObjObjects()->Data[6147];

	UObject_execRLerp_Parms RLerp_Parms;
	memcpy(&RLerp_Parms.A, &A, 0xC);
	memcpy(&RLerp_Parms.B, &B, 0xC);
	RLerp_Parms.Alpha = Alpha;
	RLerp_Parms.bShortestPath = bShortestPath;

	pFnRLerp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRLerp, &RLerp_Parms, NULL);

	pFnRLerp->FunctionFlags |= 0x400;

	return RLerp_Parms.ReturnValue;
};

// Function Core.Object.Normalize
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                Rot                            ( CPF_Parm )

struct FRotator UObject::Normalize(struct FRotator Rot)
{
	static UFunction* pFnNormalize = NULL;

	if (!pFnNormalize)
		pFnNormalize = (UFunction*)UObject::GObjObjects()->Data[6151];

	UObject_execNormalize_Parms Normalize_Parms;
	memcpy(&Normalize_Parms.Rot, &Rot, 0xC);

	pFnNormalize->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNormalize, &Normalize_Parms, NULL);

	pFnNormalize->FunctionFlags |= 0x400;

	return Normalize_Parms.ReturnValue;
};

// Function Core.Object.OrthoRotation
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 X                              ( CPF_Parm )
// struct FVector                 Y                              ( CPF_Parm )
// struct FVector                 Z                              ( CPF_Parm )

struct FRotator UObject::OrthoRotation(struct FVector X, struct FVector Y, struct FVector Z)
{
	static UFunction* pFnOrthoRotation = NULL;

	if (!pFnOrthoRotation)
		pFnOrthoRotation = (UFunction*)UObject::GObjObjects()->Data[6157];

	UObject_execOrthoRotation_Parms OrthoRotation_Parms;
	memcpy(&OrthoRotation_Parms.X, &X, 0xC);
	memcpy(&OrthoRotation_Parms.Y, &Y, 0xC);
	memcpy(&OrthoRotation_Parms.Z, &Z, 0xC);

	pFnOrthoRotation->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnOrthoRotation, &OrthoRotation_Parms, NULL);

	pFnOrthoRotation->FunctionFlags |= 0x400;

	return OrthoRotation_Parms.ReturnValue;
};

// Function Core.Object.RotRand
// [0x00026401] ( FUNC_Final | FUNC_Native ) iNative [0x0140]
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bRoll                          ( CPF_OptionalParm | CPF_Parm )

struct FRotator UObject::RotRand(unsigned long bRoll)
{
	static UFunction* pFnRotRand = NULL;

	if (!pFnRotRand)
		pFnRotRand = (UFunction*)UObject::GObjObjects()->Data[6160];

	UObject_execRotRand_Parms RotRand_Parms;
	RotRand_Parms.bRoll = bRoll;

	unsigned short NativeIndex = pFnRotRand->iNative;
	pFnRotRand->iNative = 0;

	pFnRotRand->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRotRand, &RotRand_Parms, NULL);

	pFnRotRand->FunctionFlags |= 0x400;

	pFnRotRand->iNative = NativeIndex;

	return RotRand_Parms.ReturnValue;
};

// Function Core.Object.GetRotatorAxis
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// int                            Axis                           ( CPF_Parm )

struct FVector UObject::GetRotatorAxis(struct FRotator A, int Axis)
{
	static UFunction* pFnGetRotatorAxis = NULL;

	if (!pFnGetRotatorAxis)
		pFnGetRotatorAxis = (UFunction*)UObject::GObjObjects()->Data[6165];

	UObject_execGetRotatorAxis_Parms GetRotatorAxis_Parms;
	memcpy(&GetRotatorAxis_Parms.A, &A, 0xC);
	GetRotatorAxis_Parms.Axis = Axis;

	pFnGetRotatorAxis->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetRotatorAxis, &GetRotatorAxis_Parms, NULL);

	pFnGetRotatorAxis->FunctionFlags |= 0x400;

	return GetRotatorAxis_Parms.ReturnValue;
};

// Function Core.Object.GetUnAxes
// [0x00422401] ( FUNC_Final | FUNC_Native ) iNative [0x00E6]
// Parameters infos:
// struct FRotator                A                              ( CPF_Parm )
// struct FVector                 X                              ( CPF_Parm | CPF_OutParm )
// struct FVector                 Y                              ( CPF_Parm | CPF_OutParm )
// struct FVector                 Z                              ( CPF_Parm | CPF_OutParm )

void UObject::GetUnAxes(struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z)
{
	static UFunction* pFnGetUnAxes = NULL;

	if (!pFnGetUnAxes)
		pFnGetUnAxes = (UFunction*)UObject::GObjObjects()->Data[6168];

	UObject_execGetUnAxes_Parms GetUnAxes_Parms;
	memcpy(&GetUnAxes_Parms.A, &A, 0xC);

	unsigned short NativeIndex = pFnGetUnAxes->iNative;
	pFnGetUnAxes->iNative = 0;

	pFnGetUnAxes->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetUnAxes, &GetUnAxes_Parms, NULL);

	pFnGetUnAxes->FunctionFlags |= 0x400;

	pFnGetUnAxes->iNative = NativeIndex;

	if (X)
		memcpy(X, &GetUnAxes_Parms.X, 0xC);

	if (Y)
		memcpy(Y, &GetUnAxes_Parms.Y, 0xC);

	if (Z)
		memcpy(Z, &GetUnAxes_Parms.Z, 0xC);
};

// Function Core.Object.GetAxes
// [0x00422401] ( FUNC_Final | FUNC_Native ) iNative [0x00E5]
// Parameters infos:
// struct FRotator                A                              ( CPF_Parm )
// struct FVector                 X                              ( CPF_Parm | CPF_OutParm )
// struct FVector                 Y                              ( CPF_Parm | CPF_OutParm )
// struct FVector                 Z                              ( CPF_Parm | CPF_OutParm )

void UObject::GetAxes(struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z)
{
	static UFunction* pFnGetAxes = NULL;

	if (!pFnGetAxes)
		pFnGetAxes = (UFunction*)UObject::GObjObjects()->Data[6172];

	UObject_execGetAxes_Parms GetAxes_Parms;
	memcpy(&GetAxes_Parms.A, &A, 0xC);

	unsigned short NativeIndex = pFnGetAxes->iNative;
	pFnGetAxes->iNative = 0;

	pFnGetAxes->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAxes, &GetAxes_Parms, NULL);

	pFnGetAxes->FunctionFlags |= 0x400;

	pFnGetAxes->iNative = NativeIndex;

	if (X)
		memcpy(X, &GetAxes_Parms.X, 0xC);

	if (Y)
		memcpy(Y, &GetAxes_Parms.Y, 0xC);

	if (Z)
		memcpy(Z, &GetAxes_Parms.Z, 0xC);
};

// Function Core.Object.ClockwiseFrom_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::ClockwiseFrom_IntInt(int A, int B)
{
	static UFunction* pFnClockwiseFrom_IntInt = NULL;

	if (!pFnClockwiseFrom_IntInt)
		pFnClockwiseFrom_IntInt = (UFunction*)UObject::GObjObjects()->Data[6177];

	UObject_execClockwiseFrom_IntInt_Parms ClockwiseFrom_IntInt_Parms;
	ClockwiseFrom_IntInt_Parms.A = A;
	ClockwiseFrom_IntInt_Parms.B = B;

	pFnClockwiseFrom_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClockwiseFrom_IntInt, &ClockwiseFrom_IntInt_Parms, NULL);

	pFnClockwiseFrom_IntInt->FunctionFlags |= 0x400;

	return ClockwiseFrom_IntInt_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_RotatorRotator
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x013F]
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                B                              ( CPF_Parm )
// struct FRotator                A                              ( CPF_Parm | CPF_OutParm )

struct FRotator UObject::SubtractEqual_RotatorRotator(struct FRotator B, struct FRotator* A)
{
	static UFunction* pFnSubtractEqual_RotatorRotator = NULL;

	if (!pFnSubtractEqual_RotatorRotator)
		pFnSubtractEqual_RotatorRotator = (UFunction*)UObject::GObjObjects()->Data[6182];

	UObject_execSubtractEqual_RotatorRotator_Parms SubtractEqual_RotatorRotator_Parms;
	memcpy(&SubtractEqual_RotatorRotator_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnSubtractEqual_RotatorRotator->iNative;
	pFnSubtractEqual_RotatorRotator->iNative = 0;

	pFnSubtractEqual_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractEqual_RotatorRotator, &SubtractEqual_RotatorRotator_Parms, NULL);

	pFnSubtractEqual_RotatorRotator->FunctionFlags |= 0x400;

	pFnSubtractEqual_RotatorRotator->iNative = NativeIndex;

	if (A)
		memcpy(A, &SubtractEqual_RotatorRotator_Parms.A, 0xC);

	return SubtractEqual_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_RotatorRotator
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x013E]
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                B                              ( CPF_Parm )
// struct FRotator                A                              ( CPF_Parm | CPF_OutParm )

struct FRotator UObject::AddEqual_RotatorRotator(struct FRotator B, struct FRotator* A)
{
	static UFunction* pFnAddEqual_RotatorRotator = NULL;

	if (!pFnAddEqual_RotatorRotator)
		pFnAddEqual_RotatorRotator = (UFunction*)UObject::GObjObjects()->Data[6186];

	UObject_execAddEqual_RotatorRotator_Parms AddEqual_RotatorRotator_Parms;
	memcpy(&AddEqual_RotatorRotator_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnAddEqual_RotatorRotator->iNative;
	pFnAddEqual_RotatorRotator->iNative = 0;

	pFnAddEqual_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddEqual_RotatorRotator, &AddEqual_RotatorRotator_Parms, NULL);

	pFnAddEqual_RotatorRotator->FunctionFlags |= 0x400;

	pFnAddEqual_RotatorRotator->iNative = NativeIndex;

	if (A)
		memcpy(A, &AddEqual_RotatorRotator_Parms.A, 0xC);

	return AddEqual_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.Subtract_RotatorRotator
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x013D]
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )

struct FRotator UObject::Subtract_RotatorRotator(struct FRotator A, struct FRotator B)
{
	static UFunction* pFnSubtract_RotatorRotator = NULL;

	if (!pFnSubtract_RotatorRotator)
		pFnSubtract_RotatorRotator = (UFunction*)UObject::GObjObjects()->Data[6190];

	UObject_execSubtract_RotatorRotator_Parms Subtract_RotatorRotator_Parms;
	memcpy(&Subtract_RotatorRotator_Parms.A, &A, 0xC);
	memcpy(&Subtract_RotatorRotator_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnSubtract_RotatorRotator->iNative;
	pFnSubtract_RotatorRotator->iNative = 0;

	pFnSubtract_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_RotatorRotator, &Subtract_RotatorRotator_Parms, NULL);

	pFnSubtract_RotatorRotator->FunctionFlags |= 0x400;

	pFnSubtract_RotatorRotator->iNative = NativeIndex;

	return Subtract_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.Add_RotatorRotator
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x013C]
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )

struct FRotator UObject::Add_RotatorRotator(struct FRotator A, struct FRotator B)
{
	static UFunction* pFnAdd_RotatorRotator = NULL;

	if (!pFnAdd_RotatorRotator)
		pFnAdd_RotatorRotator = (UFunction*)UObject::GObjObjects()->Data[6194];

	UObject_execAdd_RotatorRotator_Parms Add_RotatorRotator_Parms;
	memcpy(&Add_RotatorRotator_Parms.A, &A, 0xC);
	memcpy(&Add_RotatorRotator_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnAdd_RotatorRotator->iNative;
	pFnAdd_RotatorRotator->iNative = 0;

	pFnAdd_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAdd_RotatorRotator, &Add_RotatorRotator_Parms, NULL);

	pFnAdd_RotatorRotator->FunctionFlags |= 0x400;

	pFnAdd_RotatorRotator->iNative = NativeIndex;

	return Add_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_RotatorFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0123]
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// struct FRotator                A                              ( CPF_Parm | CPF_OutParm )

struct FRotator UObject::DivideEqual_RotatorFloat(float B, struct FRotator* A)
{
	static UFunction* pFnDivideEqual_RotatorFloat = NULL;

	if (!pFnDivideEqual_RotatorFloat)
		pFnDivideEqual_RotatorFloat = (UFunction*)UObject::GObjObjects()->Data[6198];

	UObject_execDivideEqual_RotatorFloat_Parms DivideEqual_RotatorFloat_Parms;
	DivideEqual_RotatorFloat_Parms.B = B;

	unsigned short NativeIndex = pFnDivideEqual_RotatorFloat->iNative;
	pFnDivideEqual_RotatorFloat->iNative = 0;

	pFnDivideEqual_RotatorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivideEqual_RotatorFloat, &DivideEqual_RotatorFloat_Parms, NULL);

	pFnDivideEqual_RotatorFloat->FunctionFlags |= 0x400;

	pFnDivideEqual_RotatorFloat->iNative = NativeIndex;

	if (A)
		memcpy(A, &DivideEqual_RotatorFloat_Parms.A, 0xC);

	return DivideEqual_RotatorFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_RotatorFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0122]
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// struct FRotator                A                              ( CPF_Parm | CPF_OutParm )

struct FRotator UObject::MultiplyEqual_RotatorFloat(float B, struct FRotator* A)
{
	static UFunction* pFnMultiplyEqual_RotatorFloat = NULL;

	if (!pFnMultiplyEqual_RotatorFloat)
		pFnMultiplyEqual_RotatorFloat = (UFunction*)UObject::GObjObjects()->Data[6202];

	UObject_execMultiplyEqual_RotatorFloat_Parms MultiplyEqual_RotatorFloat_Parms;
	MultiplyEqual_RotatorFloat_Parms.B = B;

	unsigned short NativeIndex = pFnMultiplyEqual_RotatorFloat->iNative;
	pFnMultiplyEqual_RotatorFloat->iNative = 0;

	pFnMultiplyEqual_RotatorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyEqual_RotatorFloat, &MultiplyEqual_RotatorFloat_Parms, NULL);

	pFnMultiplyEqual_RotatorFloat->FunctionFlags |= 0x400;

	pFnMultiplyEqual_RotatorFloat->iNative = NativeIndex;

	if (A)
		memcpy(A, &MultiplyEqual_RotatorFloat_Parms.A, 0xC);

	return MultiplyEqual_RotatorFloat_Parms.ReturnValue;
};

// Function Core.Object.Divide_RotatorFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0121]
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

struct FRotator UObject::Divide_RotatorFloat(struct FRotator A, float B)
{
	static UFunction* pFnDivide_RotatorFloat = NULL;

	if (!pFnDivide_RotatorFloat)
		pFnDivide_RotatorFloat = (UFunction*)UObject::GObjObjects()->Data[6206];

	UObject_execDivide_RotatorFloat_Parms Divide_RotatorFloat_Parms;
	memcpy(&Divide_RotatorFloat_Parms.A, &A, 0xC);
	Divide_RotatorFloat_Parms.B = B;

	unsigned short NativeIndex = pFnDivide_RotatorFloat->iNative;
	pFnDivide_RotatorFloat->iNative = 0;

	pFnDivide_RotatorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivide_RotatorFloat, &Divide_RotatorFloat_Parms, NULL);

	pFnDivide_RotatorFloat->FunctionFlags |= 0x400;

	pFnDivide_RotatorFloat->iNative = NativeIndex;

	return Divide_RotatorFloat_Parms.ReturnValue;
};

// Function Core.Object.Multiply_FloatRotator
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0120]
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )

struct FRotator UObject::Multiply_FloatRotator(float A, struct FRotator B)
{
	static UFunction* pFnMultiply_FloatRotator = NULL;

	if (!pFnMultiply_FloatRotator)
		pFnMultiply_FloatRotator = (UFunction*)UObject::GObjObjects()->Data[6210];

	UObject_execMultiply_FloatRotator_Parms Multiply_FloatRotator_Parms;
	Multiply_FloatRotator_Parms.A = A;
	memcpy(&Multiply_FloatRotator_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnMultiply_FloatRotator->iNative;
	pFnMultiply_FloatRotator->iNative = 0;

	pFnMultiply_FloatRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_FloatRotator, &Multiply_FloatRotator_Parms, NULL);

	pFnMultiply_FloatRotator->FunctionFlags |= 0x400;

	pFnMultiply_FloatRotator->iNative = NativeIndex;

	return Multiply_FloatRotator_Parms.ReturnValue;
};

// Function Core.Object.Multiply_RotatorFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x011F]
// Parameters infos:
// struct FRotator                ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

struct FRotator UObject::Multiply_RotatorFloat(struct FRotator A, float B)
{
	static UFunction* pFnMultiply_RotatorFloat = NULL;

	if (!pFnMultiply_RotatorFloat)
		pFnMultiply_RotatorFloat = (UFunction*)UObject::GObjObjects()->Data[6214];

	UObject_execMultiply_RotatorFloat_Parms Multiply_RotatorFloat_Parms;
	memcpy(&Multiply_RotatorFloat_Parms.A, &A, 0xC);
	Multiply_RotatorFloat_Parms.B = B;

	unsigned short NativeIndex = pFnMultiply_RotatorFloat->iNative;
	pFnMultiply_RotatorFloat->iNative = 0;

	pFnMultiply_RotatorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_RotatorFloat, &Multiply_RotatorFloat_Parms, NULL);

	pFnMultiply_RotatorFloat->FunctionFlags |= 0x400;

	pFnMultiply_RotatorFloat->iNative = NativeIndex;

	return Multiply_RotatorFloat_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_RotatorRotator
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00CB]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )

bool UObject::NotEqual_RotatorRotator(struct FRotator A, struct FRotator B)
{
	static UFunction* pFnNotEqual_RotatorRotator = NULL;

	if (!pFnNotEqual_RotatorRotator)
		pFnNotEqual_RotatorRotator = (UFunction*)UObject::GObjObjects()->Data[6218];

	UObject_execNotEqual_RotatorRotator_Parms NotEqual_RotatorRotator_Parms;
	memcpy(&NotEqual_RotatorRotator_Parms.A, &A, 0xC);
	memcpy(&NotEqual_RotatorRotator_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnNotEqual_RotatorRotator->iNative;
	pFnNotEqual_RotatorRotator->iNative = 0;

	pFnNotEqual_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_RotatorRotator, &NotEqual_RotatorRotator_Parms, NULL);

	pFnNotEqual_RotatorRotator->FunctionFlags |= 0x400;

	pFnNotEqual_RotatorRotator->iNative = NativeIndex;

	return NotEqual_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_RotatorRotator
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x008E]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FRotator                A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )

bool UObject::EqualEqual_RotatorRotator(struct FRotator A, struct FRotator B)
{
	static UFunction* pFnEqualEqual_RotatorRotator = NULL;

	if (!pFnEqualEqual_RotatorRotator)
		pFnEqualEqual_RotatorRotator = (UFunction*)UObject::GObjObjects()->Data[6222];

	UObject_execEqualEqual_RotatorRotator_Parms EqualEqual_RotatorRotator_Parms;
	memcpy(&EqualEqual_RotatorRotator_Parms.A, &A, 0xC);
	memcpy(&EqualEqual_RotatorRotator_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnEqualEqual_RotatorRotator->iNative;
	pFnEqualEqual_RotatorRotator->iNative = 0;

	pFnEqualEqual_RotatorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_RotatorRotator, &EqualEqual_RotatorRotator_Parms, NULL);

	pFnEqualEqual_RotatorRotator->FunctionFlags |= 0x400;

	pFnEqualEqual_RotatorRotator->iNative = NativeIndex;

	return EqualEqual_RotatorRotator_Parms.ReturnValue;
};

// Function Core.Object.InCylinder
// [0x00824103] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Origin                         ( CPF_Parm )
// struct FRotator                Dir                            ( CPF_Parm )
// float                          Width                          ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm )
// unsigned long                  bIgnoreZ                       ( CPF_OptionalParm | CPF_Parm )

bool UObject::InCylinder(struct FVector Origin, struct FRotator Dir, float Width, struct FVector A, unsigned long bIgnoreZ)
{
	static UFunction* pFnInCylinder = NULL;

	if (!pFnInCylinder)
		pFnInCylinder = (UFunction*)UObject::GObjObjects()->Data[6226];

	UObject_execInCylinder_Parms InCylinder_Parms;
	memcpy(&InCylinder_Parms.Origin, &Origin, 0xC);
	memcpy(&InCylinder_Parms.Dir, &Dir, 0xC);
	InCylinder_Parms.Width = Width;
	memcpy(&InCylinder_Parms.A, &A, 0xC);
	InCylinder_Parms.bIgnoreZ = bIgnoreZ;

	this->ProcessEvent(pFnInCylinder, &InCylinder_Parms, NULL);

	return InCylinder_Parms.ReturnValue;
};

// Function Core.Object.NoZDot
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

float UObject::NoZDot(struct FVector A, struct FVector B)
{
	static UFunction* pFnNoZDot = NULL;

	if (!pFnNoZDot)
		pFnNoZDot = (UFunction*)UObject::GObjObjects()->Data[6230];

	UObject_execNoZDot_Parms NoZDot_Parms;
	memcpy(&NoZDot_Parms.A, &A, 0xC);
	memcpy(&NoZDot_Parms.B, &B, 0xC);

	pFnNoZDot->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNoZDot, &NoZDot_Parms, NULL);

	pFnNoZDot->FunctionFlags |= 0x400;

	return NoZDot_Parms.ReturnValue;
};

// Function Core.Object.ClampLength
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 V                              ( CPF_Parm )
// float                          MaxLength                      ( CPF_Parm )

struct FVector UObject::ClampLength(struct FVector V, float MaxLength)
{
	static UFunction* pFnClampLength = NULL;

	if (!pFnClampLength)
		pFnClampLength = (UFunction*)UObject::GObjObjects()->Data[6239];

	UObject_execClampLength_Parms ClampLength_Parms;
	memcpy(&ClampLength_Parms.V, &V, 0xC);
	ClampLength_Parms.MaxLength = MaxLength;

	pFnClampLength->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClampLength, &ClampLength_Parms, NULL);

	pFnClampLength->FunctionFlags |= 0x400;

	return ClampLength_Parms.ReturnValue;
};

// Function Core.Object.VInterpTo
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Current                        ( CPF_Parm )
// struct FVector                 Target                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// float                          InterpSpeed                    ( CPF_Parm )

struct FVector UObject::VInterpTo(struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed)
{
	static UFunction* pFnVInterpTo = NULL;

	if (!pFnVInterpTo)
		pFnVInterpTo = (UFunction*)UObject::GObjObjects()->Data[6243];

	UObject_execVInterpTo_Parms VInterpTo_Parms;
	memcpy(&VInterpTo_Parms.Current, &Current, 0xC);
	memcpy(&VInterpTo_Parms.Target, &Target, 0xC);
	VInterpTo_Parms.DeltaTime = DeltaTime;
	VInterpTo_Parms.InterpSpeed = InterpSpeed;

	pFnVInterpTo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVInterpTo, &VInterpTo_Parms, NULL);

	pFnVInterpTo->FunctionFlags |= 0x400;

	return VInterpTo_Parms.ReturnValue;
};

// Function Core.Object.IsZero
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x05DD]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )

bool UObject::IsZero(struct FVector A)
{
	static UFunction* pFnIsZero = NULL;

	if (!pFnIsZero)
		pFnIsZero = (UFunction*)UObject::GObjObjects()->Data[6247];

	UObject_execIsZero_Parms IsZero_Parms;
	memcpy(&IsZero_Parms.A, &A, 0xC);

	unsigned short NativeIndex = pFnIsZero->iNative;
	pFnIsZero->iNative = 0;

	pFnIsZero->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsZero, &IsZero_Parms, NULL);

	pFnIsZero->FunctionFlags |= 0x400;

	pFnIsZero->iNative = NativeIndex;

	return IsZero_Parms.ReturnValue;
};

// Function Core.Object.ProjectOnTo
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x05DC]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 X                              ( CPF_Parm )
// struct FVector                 Y                              ( CPF_Parm )

struct FVector UObject::ProjectOnTo(struct FVector X, struct FVector Y)
{
	static UFunction* pFnProjectOnTo = NULL;

	if (!pFnProjectOnTo)
		pFnProjectOnTo = (UFunction*)UObject::GObjObjects()->Data[6253];

	UObject_execProjectOnTo_Parms ProjectOnTo_Parms;
	memcpy(&ProjectOnTo_Parms.X, &X, 0xC);
	memcpy(&ProjectOnTo_Parms.Y, &Y, 0xC);

	unsigned short NativeIndex = pFnProjectOnTo->iNative;
	pFnProjectOnTo->iNative = 0;

	pFnProjectOnTo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnProjectOnTo, &ProjectOnTo_Parms, NULL);

	pFnProjectOnTo->FunctionFlags |= 0x400;

	pFnProjectOnTo->iNative = NativeIndex;

	return ProjectOnTo_Parms.ReturnValue;
};

// Function Core.Object.MirrorVectorByNormal
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x012C]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 InVect                         ( CPF_Parm )
// struct FVector                 InNormal                       ( CPF_Parm )

struct FVector UObject::MirrorVectorByNormal(struct FVector InVect, struct FVector InNormal)
{
	static UFunction* pFnMirrorVectorByNormal = NULL;

	if (!pFnMirrorVectorByNormal)
		pFnMirrorVectorByNormal = (UFunction*)UObject::GObjObjects()->Data[6256];

	UObject_execMirrorVectorByNormal_Parms MirrorVectorByNormal_Parms;
	memcpy(&MirrorVectorByNormal_Parms.InVect, &InVect, 0xC);
	memcpy(&MirrorVectorByNormal_Parms.InNormal, &InNormal, 0xC);

	unsigned short NativeIndex = pFnMirrorVectorByNormal->iNative;
	pFnMirrorVectorByNormal->iNative = 0;

	pFnMirrorVectorByNormal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMirrorVectorByNormal, &MirrorVectorByNormal_Parms, NULL);

	pFnMirrorVectorByNormal->FunctionFlags |= 0x400;

	pFnMirrorVectorByNormal->iNative = NativeIndex;

	return MirrorVectorByNormal_Parms.ReturnValue;
};

// Function Core.Object.VRandCone2
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Dir                            ( CPF_Parm )
// float                          HorizontalConeHalfAngleRadians ( CPF_Parm )
// float                          VerticalConeHalfAngleRadians   ( CPF_Parm )

struct FVector UObject::VRandCone2(struct FVector Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians)
{
	static UFunction* pFnVRandCone2 = NULL;

	if (!pFnVRandCone2)
		pFnVRandCone2 = (UFunction*)UObject::GObjObjects()->Data[6260];

	UObject_execVRandCone2_Parms VRandCone2_Parms;
	memcpy(&VRandCone2_Parms.Dir, &Dir, 0xC);
	VRandCone2_Parms.HorizontalConeHalfAngleRadians = HorizontalConeHalfAngleRadians;
	VRandCone2_Parms.VerticalConeHalfAngleRadians = VerticalConeHalfAngleRadians;

	pFnVRandCone2->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVRandCone2, &VRandCone2_Parms, NULL);

	pFnVRandCone2->FunctionFlags |= 0x400;

	return VRandCone2_Parms.ReturnValue;
};

// Function Core.Object.VRandCone
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 Dir                            ( CPF_Parm )
// float                          ConeHalfAngleRadians           ( CPF_Parm )

struct FVector UObject::VRandCone(struct FVector Dir, float ConeHalfAngleRadians)
{
	static UFunction* pFnVRandCone = NULL;

	if (!pFnVRandCone)
		pFnVRandCone = (UFunction*)UObject::GObjObjects()->Data[6264];

	UObject_execVRandCone_Parms VRandCone_Parms;
	memcpy(&VRandCone_Parms.Dir, &Dir, 0xC);
	VRandCone_Parms.ConeHalfAngleRadians = ConeHalfAngleRadians;

	pFnVRandCone->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVRandCone, &VRandCone_Parms, NULL);

	pFnVRandCone->FunctionFlags |= 0x400;

	return VRandCone_Parms.ReturnValue;
};

// Function Core.Object.VRand
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00FC]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

struct FVector UObject::VRand()
{
	static UFunction* pFnVRand = NULL;

	if (!pFnVRand)
		pFnVRand = (UFunction*)UObject::GObjObjects()->Data[6269];

	UObject_execVRand_Parms VRand_Parms;

	unsigned short NativeIndex = pFnVRand->iNative;
	pFnVRand->iNative = 0;

	pFnVRand->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVRand, &VRand_Parms, NULL);

	pFnVRand->FunctionFlags |= 0x400;

	pFnVRand->iNative = NativeIndex;

	return VRand_Parms.ReturnValue;
};

// Function Core.Object.VLerp
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )

struct FVector UObject::VLerp(struct FVector A, struct FVector B, float Alpha)
{
	static UFunction* pFnVLerp = NULL;

	if (!pFnVLerp)
		pFnVLerp = (UFunction*)UObject::GObjObjects()->Data[6273];

	UObject_execVLerp_Parms VLerp_Parms;
	memcpy(&VLerp_Parms.A, &A, 0xC);
	memcpy(&VLerp_Parms.B, &B, 0xC);
	VLerp_Parms.Alpha = Alpha;

	pFnVLerp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVLerp, &VLerp_Parms, NULL);

	pFnVLerp->FunctionFlags |= 0x400;

	return VLerp_Parms.ReturnValue;
};

// Function Core.Object.Normal
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00E2]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )

struct FVector UObject::Normal(struct FVector A)
{
	static UFunction* pFnNormal = NULL;

	if (!pFnNormal)
		pFnNormal = (UFunction*)UObject::GObjObjects()->Data[6275];

	UObject_execNormal_Parms Normal_Parms;
	memcpy(&Normal_Parms.A, &A, 0xC);

	unsigned short NativeIndex = pFnNormal->iNative;
	pFnNormal->iNative = 0;

	pFnNormal->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNormal, &Normal_Parms, NULL);

	pFnNormal->FunctionFlags |= 0x400;

	pFnNormal->iNative = NativeIndex;

	return Normal_Parms.ReturnValue;
};

// Function Core.Object.VSizeSq2D
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )

float UObject::VSizeSq2D(struct FVector A)
{
	static UFunction* pFnVSizeSq2D = NULL;

	if (!pFnVSizeSq2D)
		pFnVSizeSq2D = (UFunction*)UObject::GObjObjects()->Data[6280];

	UObject_execVSizeSq2D_Parms VSizeSq2D_Parms;
	memcpy(&VSizeSq2D_Parms.A, &A, 0xC);

	pFnVSizeSq2D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVSizeSq2D, &VSizeSq2D_Parms, NULL);

	pFnVSizeSq2D->FunctionFlags |= 0x400;

	return VSizeSq2D_Parms.ReturnValue;
};

// Function Core.Object.VSizeSq
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00E4]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )

float UObject::VSizeSq(struct FVector A)
{
	static UFunction* pFnVSizeSq = NULL;

	if (!pFnVSizeSq)
		pFnVSizeSq = (UFunction*)UObject::GObjObjects()->Data[6283];

	UObject_execVSizeSq_Parms VSizeSq_Parms;
	memcpy(&VSizeSq_Parms.A, &A, 0xC);

	unsigned short NativeIndex = pFnVSizeSq->iNative;
	pFnVSizeSq->iNative = 0;

	pFnVSizeSq->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVSizeSq, &VSizeSq_Parms, NULL);

	pFnVSizeSq->FunctionFlags |= 0x400;

	pFnVSizeSq->iNative = NativeIndex;

	return VSizeSq_Parms.ReturnValue;
};

// Function Core.Object.VSize2D
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )

float UObject::VSize2D(struct FVector A)
{
	static UFunction* pFnVSize2D = NULL;

	if (!pFnVSize2D)
		pFnVSize2D = (UFunction*)UObject::GObjObjects()->Data[6286];

	UObject_execVSize2D_Parms VSize2D_Parms;
	memcpy(&VSize2D_Parms.A, &A, 0xC);

	pFnVSize2D->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVSize2D, &VSize2D_Parms, NULL);

	pFnVSize2D->FunctionFlags |= 0x400;

	return VSize2D_Parms.ReturnValue;
};

// Function Core.Object.VSize
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00E1]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )

float UObject::VSize(struct FVector A)
{
	static UFunction* pFnVSize = NULL;

	if (!pFnVSize)
		pFnVSize = (UFunction*)UObject::GObjObjects()->Data[6289];

	UObject_execVSize_Parms VSize_Parms;
	memcpy(&VSize_Parms.A, &A, 0xC);

	unsigned short NativeIndex = pFnVSize->iNative;
	pFnVSize->iNative = 0;

	pFnVSize->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnVSize, &VSize_Parms, NULL);

	pFnVSize->FunctionFlags |= 0x400;

	pFnVSize->iNative = NativeIndex;

	return VSize_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_VectorVector
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00E0]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 B                              ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm | CPF_OutParm )

struct FVector UObject::SubtractEqual_VectorVector(struct FVector B, struct FVector* A)
{
	static UFunction* pFnSubtractEqual_VectorVector = NULL;

	if (!pFnSubtractEqual_VectorVector)
		pFnSubtractEqual_VectorVector = (UFunction*)UObject::GObjObjects()->Data[6292];

	UObject_execSubtractEqual_VectorVector_Parms SubtractEqual_VectorVector_Parms;
	memcpy(&SubtractEqual_VectorVector_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnSubtractEqual_VectorVector->iNative;
	pFnSubtractEqual_VectorVector->iNative = 0;

	pFnSubtractEqual_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractEqual_VectorVector, &SubtractEqual_VectorVector_Parms, NULL);

	pFnSubtractEqual_VectorVector->FunctionFlags |= 0x400;

	pFnSubtractEqual_VectorVector->iNative = NativeIndex;

	if (A)
		memcpy(A, &SubtractEqual_VectorVector_Parms.A, 0xC);

	return SubtractEqual_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_VectorVector
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00DF]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 B                              ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm | CPF_OutParm )

struct FVector UObject::AddEqual_VectorVector(struct FVector B, struct FVector* A)
{
	static UFunction* pFnAddEqual_VectorVector = NULL;

	if (!pFnAddEqual_VectorVector)
		pFnAddEqual_VectorVector = (UFunction*)UObject::GObjObjects()->Data[6295];

	UObject_execAddEqual_VectorVector_Parms AddEqual_VectorVector_Parms;
	memcpy(&AddEqual_VectorVector_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnAddEqual_VectorVector->iNative;
	pFnAddEqual_VectorVector->iNative = 0;

	pFnAddEqual_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddEqual_VectorVector, &AddEqual_VectorVector_Parms, NULL);

	pFnAddEqual_VectorVector->FunctionFlags |= 0x400;

	pFnAddEqual_VectorVector->iNative = NativeIndex;

	if (A)
		memcpy(A, &AddEqual_VectorVector_Parms.A, 0xC);

	return AddEqual_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_VectorFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00DE]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm | CPF_OutParm )

struct FVector UObject::DivideEqual_VectorFloat(float B, struct FVector* A)
{
	static UFunction* pFnDivideEqual_VectorFloat = NULL;

	if (!pFnDivideEqual_VectorFloat)
		pFnDivideEqual_VectorFloat = (UFunction*)UObject::GObjObjects()->Data[6299];

	UObject_execDivideEqual_VectorFloat_Parms DivideEqual_VectorFloat_Parms;
	DivideEqual_VectorFloat_Parms.B = B;

	unsigned short NativeIndex = pFnDivideEqual_VectorFloat->iNative;
	pFnDivideEqual_VectorFloat->iNative = 0;

	pFnDivideEqual_VectorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivideEqual_VectorFloat, &DivideEqual_VectorFloat_Parms, NULL);

	pFnDivideEqual_VectorFloat->FunctionFlags |= 0x400;

	pFnDivideEqual_VectorFloat->iNative = NativeIndex;

	if (A)
		memcpy(A, &DivideEqual_VectorFloat_Parms.A, 0xC);

	return DivideEqual_VectorFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_VectorVector
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0129]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 B                              ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm | CPF_OutParm )

struct FVector UObject::MultiplyEqual_VectorVector(struct FVector B, struct FVector* A)
{
	static UFunction* pFnMultiplyEqual_VectorVector = NULL;

	if (!pFnMultiplyEqual_VectorVector)
		pFnMultiplyEqual_VectorVector = (UFunction*)UObject::GObjObjects()->Data[6303];

	UObject_execMultiplyEqual_VectorVector_Parms MultiplyEqual_VectorVector_Parms;
	memcpy(&MultiplyEqual_VectorVector_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnMultiplyEqual_VectorVector->iNative;
	pFnMultiplyEqual_VectorVector->iNative = 0;

	pFnMultiplyEqual_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyEqual_VectorVector, &MultiplyEqual_VectorVector_Parms, NULL);

	pFnMultiplyEqual_VectorVector->FunctionFlags |= 0x400;

	pFnMultiplyEqual_VectorVector->iNative = NativeIndex;

	if (A)
		memcpy(A, &MultiplyEqual_VectorVector_Parms.A, 0xC);

	return MultiplyEqual_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_VectorFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00DD]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// struct FVector                 A                              ( CPF_Parm | CPF_OutParm )

struct FVector UObject::MultiplyEqual_VectorFloat(float B, struct FVector* A)
{
	static UFunction* pFnMultiplyEqual_VectorFloat = NULL;

	if (!pFnMultiplyEqual_VectorFloat)
		pFnMultiplyEqual_VectorFloat = (UFunction*)UObject::GObjObjects()->Data[6307];

	UObject_execMultiplyEqual_VectorFloat_Parms MultiplyEqual_VectorFloat_Parms;
	MultiplyEqual_VectorFloat_Parms.B = B;

	unsigned short NativeIndex = pFnMultiplyEqual_VectorFloat->iNative;
	pFnMultiplyEqual_VectorFloat->iNative = 0;

	pFnMultiplyEqual_VectorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyEqual_VectorFloat, &MultiplyEqual_VectorFloat_Parms, NULL);

	pFnMultiplyEqual_VectorFloat->FunctionFlags |= 0x400;

	pFnMultiplyEqual_VectorFloat->iNative = NativeIndex;

	if (A)
		memcpy(A, &MultiplyEqual_VectorFloat_Parms.A, 0xC);

	return MultiplyEqual_VectorFloat_Parms.ReturnValue;
};

// Function Core.Object.Cross_VectorVector
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00DC]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

struct FVector UObject::Cross_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* pFnCross_VectorVector = NULL;

	if (!pFnCross_VectorVector)
		pFnCross_VectorVector = (UFunction*)UObject::GObjObjects()->Data[6311];

	UObject_execCross_VectorVector_Parms Cross_VectorVector_Parms;
	memcpy(&Cross_VectorVector_Parms.A, &A, 0xC);
	memcpy(&Cross_VectorVector_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnCross_VectorVector->iNative;
	pFnCross_VectorVector->iNative = 0;

	pFnCross_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCross_VectorVector, &Cross_VectorVector_Parms, NULL);

	pFnCross_VectorVector->FunctionFlags |= 0x400;

	pFnCross_VectorVector->iNative = NativeIndex;

	return Cross_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.Dot_VectorVector
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00DB]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

float UObject::Dot_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* pFnDot_VectorVector = NULL;

	if (!pFnDot_VectorVector)
		pFnDot_VectorVector = (UFunction*)UObject::GObjObjects()->Data[6315];

	UObject_execDot_VectorVector_Parms Dot_VectorVector_Parms;
	memcpy(&Dot_VectorVector_Parms.A, &A, 0xC);
	memcpy(&Dot_VectorVector_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnDot_VectorVector->iNative;
	pFnDot_VectorVector->iNative = 0;

	pFnDot_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDot_VectorVector, &Dot_VectorVector_Parms, NULL);

	pFnDot_VectorVector->FunctionFlags |= 0x400;

	pFnDot_VectorVector->iNative = NativeIndex;

	return Dot_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_VectorVector
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00DA]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

bool UObject::NotEqual_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* pFnNotEqual_VectorVector = NULL;

	if (!pFnNotEqual_VectorVector)
		pFnNotEqual_VectorVector = (UFunction*)UObject::GObjObjects()->Data[6319];

	UObject_execNotEqual_VectorVector_Parms NotEqual_VectorVector_Parms;
	memcpy(&NotEqual_VectorVector_Parms.A, &A, 0xC);
	memcpy(&NotEqual_VectorVector_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnNotEqual_VectorVector->iNative;
	pFnNotEqual_VectorVector->iNative = 0;

	pFnNotEqual_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_VectorVector, &NotEqual_VectorVector_Parms, NULL);

	pFnNotEqual_VectorVector->FunctionFlags |= 0x400;

	pFnNotEqual_VectorVector->iNative = NativeIndex;

	return NotEqual_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_VectorVector
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00D9]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

bool UObject::EqualEqual_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* pFnEqualEqual_VectorVector = NULL;

	if (!pFnEqualEqual_VectorVector)
		pFnEqualEqual_VectorVector = (UFunction*)UObject::GObjObjects()->Data[6323];

	UObject_execEqualEqual_VectorVector_Parms EqualEqual_VectorVector_Parms;
	memcpy(&EqualEqual_VectorVector_Parms.A, &A, 0xC);
	memcpy(&EqualEqual_VectorVector_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnEqualEqual_VectorVector->iNative;
	pFnEqualEqual_VectorVector->iNative = 0;

	pFnEqualEqual_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_VectorVector, &EqualEqual_VectorVector_Parms, NULL);

	pFnEqualEqual_VectorVector->FunctionFlags |= 0x400;

	pFnEqualEqual_VectorVector->iNative = NativeIndex;

	return EqualEqual_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.GreaterGreater_VectorRotator
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0114]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )

struct FVector UObject::GreaterGreater_VectorRotator(struct FVector A, struct FRotator B)
{
	static UFunction* pFnGreaterGreater_VectorRotator = NULL;

	if (!pFnGreaterGreater_VectorRotator)
		pFnGreaterGreater_VectorRotator = (UFunction*)UObject::GObjObjects()->Data[6327];

	UObject_execGreaterGreater_VectorRotator_Parms GreaterGreater_VectorRotator_Parms;
	memcpy(&GreaterGreater_VectorRotator_Parms.A, &A, 0xC);
	memcpy(&GreaterGreater_VectorRotator_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnGreaterGreater_VectorRotator->iNative;
	pFnGreaterGreater_VectorRotator->iNative = 0;

	pFnGreaterGreater_VectorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreaterGreater_VectorRotator, &GreaterGreater_VectorRotator_Parms, NULL);

	pFnGreaterGreater_VectorRotator->FunctionFlags |= 0x400;

	pFnGreaterGreater_VectorRotator->iNative = NativeIndex;

	return GreaterGreater_VectorRotator_Parms.ReturnValue;
};

// Function Core.Object.LessLess_VectorRotator
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0113]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FRotator                B                              ( CPF_Parm )

struct FVector UObject::LessLess_VectorRotator(struct FVector A, struct FRotator B)
{
	static UFunction* pFnLessLess_VectorRotator = NULL;

	if (!pFnLessLess_VectorRotator)
		pFnLessLess_VectorRotator = (UFunction*)UObject::GObjObjects()->Data[6331];

	UObject_execLessLess_VectorRotator_Parms LessLess_VectorRotator_Parms;
	memcpy(&LessLess_VectorRotator_Parms.A, &A, 0xC);
	memcpy(&LessLess_VectorRotator_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnLessLess_VectorRotator->iNative;
	pFnLessLess_VectorRotator->iNative = 0;

	pFnLessLess_VectorRotator->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLessLess_VectorRotator, &LessLess_VectorRotator_Parms, NULL);

	pFnLessLess_VectorRotator->FunctionFlags |= 0x400;

	pFnLessLess_VectorRotator->iNative = NativeIndex;

	return LessLess_VectorRotator_Parms.ReturnValue;
};

// Function Core.Object.Subtract_VectorVector
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00D8]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

struct FVector UObject::Subtract_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* pFnSubtract_VectorVector = NULL;

	if (!pFnSubtract_VectorVector)
		pFnSubtract_VectorVector = (UFunction*)UObject::GObjObjects()->Data[6335];

	UObject_execSubtract_VectorVector_Parms Subtract_VectorVector_Parms;
	memcpy(&Subtract_VectorVector_Parms.A, &A, 0xC);
	memcpy(&Subtract_VectorVector_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnSubtract_VectorVector->iNative;
	pFnSubtract_VectorVector->iNative = 0;

	pFnSubtract_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_VectorVector, &Subtract_VectorVector_Parms, NULL);

	pFnSubtract_VectorVector->FunctionFlags |= 0x400;

	pFnSubtract_VectorVector->iNative = NativeIndex;

	return Subtract_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.Add_VectorVector
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00D7]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

struct FVector UObject::Add_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* pFnAdd_VectorVector = NULL;

	if (!pFnAdd_VectorVector)
		pFnAdd_VectorVector = (UFunction*)UObject::GObjObjects()->Data[6339];

	UObject_execAdd_VectorVector_Parms Add_VectorVector_Parms;
	memcpy(&Add_VectorVector_Parms.A, &A, 0xC);
	memcpy(&Add_VectorVector_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnAdd_VectorVector->iNative;
	pFnAdd_VectorVector->iNative = 0;

	pFnAdd_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAdd_VectorVector, &Add_VectorVector_Parms, NULL);

	pFnAdd_VectorVector->FunctionFlags |= 0x400;

	pFnAdd_VectorVector->iNative = NativeIndex;

	return Add_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.Divide_VectorFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00D6]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

struct FVector UObject::Divide_VectorFloat(struct FVector A, float B)
{
	static UFunction* pFnDivide_VectorFloat = NULL;

	if (!pFnDivide_VectorFloat)
		pFnDivide_VectorFloat = (UFunction*)UObject::GObjObjects()->Data[6343];

	UObject_execDivide_VectorFloat_Parms Divide_VectorFloat_Parms;
	memcpy(&Divide_VectorFloat_Parms.A, &A, 0xC);
	Divide_VectorFloat_Parms.B = B;

	unsigned short NativeIndex = pFnDivide_VectorFloat->iNative;
	pFnDivide_VectorFloat->iNative = 0;

	pFnDivide_VectorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivide_VectorFloat, &Divide_VectorFloat_Parms, NULL);

	pFnDivide_VectorFloat->FunctionFlags |= 0x400;

	pFnDivide_VectorFloat->iNative = NativeIndex;

	return Divide_VectorFloat_Parms.ReturnValue;
};

// Function Core.Object.Multiply_VectorVector
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0128]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

struct FVector UObject::Multiply_VectorVector(struct FVector A, struct FVector B)
{
	static UFunction* pFnMultiply_VectorVector = NULL;

	if (!pFnMultiply_VectorVector)
		pFnMultiply_VectorVector = (UFunction*)UObject::GObjObjects()->Data[6347];

	UObject_execMultiply_VectorVector_Parms Multiply_VectorVector_Parms;
	memcpy(&Multiply_VectorVector_Parms.A, &A, 0xC);
	memcpy(&Multiply_VectorVector_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnMultiply_VectorVector->iNative;
	pFnMultiply_VectorVector->iNative = 0;

	pFnMultiply_VectorVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_VectorVector, &Multiply_VectorVector_Parms, NULL);

	pFnMultiply_VectorVector->FunctionFlags |= 0x400;

	pFnMultiply_VectorVector->iNative = NativeIndex;

	return Multiply_VectorVector_Parms.ReturnValue;
};

// Function Core.Object.Multiply_FloatVector
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00D5]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// struct FVector                 B                              ( CPF_Parm )

struct FVector UObject::Multiply_FloatVector(float A, struct FVector B)
{
	static UFunction* pFnMultiply_FloatVector = NULL;

	if (!pFnMultiply_FloatVector)
		pFnMultiply_FloatVector = (UFunction*)UObject::GObjObjects()->Data[6351];

	UObject_execMultiply_FloatVector_Parms Multiply_FloatVector_Parms;
	Multiply_FloatVector_Parms.A = A;
	memcpy(&Multiply_FloatVector_Parms.B, &B, 0xC);

	unsigned short NativeIndex = pFnMultiply_FloatVector->iNative;
	pFnMultiply_FloatVector->iNative = 0;

	pFnMultiply_FloatVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_FloatVector, &Multiply_FloatVector_Parms, NULL);

	pFnMultiply_FloatVector->FunctionFlags |= 0x400;

	pFnMultiply_FloatVector->iNative = NativeIndex;

	return Multiply_FloatVector_Parms.ReturnValue;
};

// Function Core.Object.Multiply_VectorFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00D4]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

struct FVector UObject::Multiply_VectorFloat(struct FVector A, float B)
{
	static UFunction* pFnMultiply_VectorFloat = NULL;

	if (!pFnMultiply_VectorFloat)
		pFnMultiply_VectorFloat = (UFunction*)UObject::GObjObjects()->Data[6355];

	UObject_execMultiply_VectorFloat_Parms Multiply_VectorFloat_Parms;
	memcpy(&Multiply_VectorFloat_Parms.A, &A, 0xC);
	Multiply_VectorFloat_Parms.B = B;

	unsigned short NativeIndex = pFnMultiply_VectorFloat->iNative;
	pFnMultiply_VectorFloat->iNative = 0;

	pFnMultiply_VectorFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_VectorFloat, &Multiply_VectorFloat_Parms, NULL);

	pFnMultiply_VectorFloat->FunctionFlags |= 0x400;

	pFnMultiply_VectorFloat->iNative = NativeIndex;

	return Multiply_VectorFloat_Parms.ReturnValue;
};

// Function Core.Object.Subtract_PreVector
// [0x00023411] ( FUNC_Final | FUNC_Native ) iNative [0x00D3]
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FVector                 A                              ( CPF_Parm )

struct FVector UObject::Subtract_PreVector(struct FVector A)
{
	static UFunction* pFnSubtract_PreVector = NULL;

	if (!pFnSubtract_PreVector)
		pFnSubtract_PreVector = (UFunction*)UObject::GObjObjects()->Data[6359];

	UObject_execSubtract_PreVector_Parms Subtract_PreVector_Parms;
	memcpy(&Subtract_PreVector_Parms.A, &A, 0xC);

	unsigned short NativeIndex = pFnSubtract_PreVector->iNative;
	pFnSubtract_PreVector->iNative = 0;

	pFnSubtract_PreVector->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_PreVector, &Subtract_PreVector_Parms, NULL);

	pFnSubtract_PreVector->FunctionFlags |= 0x400;

	pFnSubtract_PreVector->iNative = NativeIndex;

	return Subtract_PreVector_Parms.ReturnValue;
};

// Function Core.Object.SmoothInterp
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          DeltaTime                      ( CPF_Parm )
// float                          InterpSpeed                    ( CPF_Parm )
// float                          deltaDist                      ( CPF_Parm )
// float                          overallDist                    ( CPF_Parm )

float UObject::SmoothInterp(float DeltaTime, float InterpSpeed, float deltaDist, float overallDist)
{
	static UFunction* pFnSmoothInterp = NULL;

	if (!pFnSmoothInterp)
		pFnSmoothInterp = (UFunction*)UObject::GObjObjects()->Data[6363];

	UObject_execSmoothInterp_Parms SmoothInterp_Parms;
	SmoothInterp_Parms.DeltaTime = DeltaTime;
	SmoothInterp_Parms.InterpSpeed = InterpSpeed;
	SmoothInterp_Parms.deltaDist = deltaDist;
	SmoothInterp_Parms.overallDist = overallDist;

	pFnSmoothInterp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSmoothInterp, &SmoothInterp_Parms, NULL);

	pFnSmoothInterp->FunctionFlags |= 0x400;

	return SmoothInterp_Parms.ReturnValue;
};

// Function Core.Object.FInterpConstantTo
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Current                        ( CPF_Parm )
// float                          Target                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// float                          InterpSpeed                    ( CPF_Parm )

float UObject::FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static UFunction* pFnFInterpConstantTo = NULL;

	if (!pFnFInterpConstantTo)
		pFnFInterpConstantTo = (UFunction*)UObject::GObjObjects()->Data[6366];

	UObject_execFInterpConstantTo_Parms FInterpConstantTo_Parms;
	FInterpConstantTo_Parms.Current = Current;
	FInterpConstantTo_Parms.Target = Target;
	FInterpConstantTo_Parms.DeltaTime = DeltaTime;
	FInterpConstantTo_Parms.InterpSpeed = InterpSpeed;

	pFnFInterpConstantTo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFInterpConstantTo, &FInterpConstantTo_Parms, NULL);

	pFnFInterpConstantTo->FunctionFlags |= 0x400;

	return FInterpConstantTo_Parms.ReturnValue;
};

// Function Core.Object.FInterpTo
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Current                        ( CPF_Parm )
// float                          Target                         ( CPF_Parm )
// float                          DeltaTime                      ( CPF_Parm )
// float                          InterpSpeed                    ( CPF_Parm )

float UObject::FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static UFunction* pFnFInterpTo = NULL;

	if (!pFnFInterpTo)
		pFnFInterpTo = (UFunction*)UObject::GObjObjects()->Data[6112];

	UObject_execFInterpTo_Parms FInterpTo_Parms;
	FInterpTo_Parms.Current = Current;
	FInterpTo_Parms.Target = Target;
	FInterpTo_Parms.DeltaTime = DeltaTime;
	FInterpTo_Parms.InterpSpeed = InterpSpeed;

	pFnFInterpTo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFInterpTo, &FInterpTo_Parms, NULL);

	pFnFInterpTo->FunctionFlags |= 0x400;

	return FInterpTo_Parms.ReturnValue;
};

// Function Core.Object.FPctByRange
// [0x00022103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Value                          ( CPF_Parm )
// float                          InMin                          ( CPF_Parm )
// float                          InMax                          ( CPF_Parm )

float UObject::FPctByRange(float Value, float InMin, float InMax)
{
	static UFunction* pFnFPctByRange = NULL;

	if (!pFnFPctByRange)
		pFnFPctByRange = (UFunction*)UObject::GObjObjects()->Data[6377];

	UObject_execFPctByRange_Parms FPctByRange_Parms;
	FPctByRange_Parms.Value = Value;
	FPctByRange_Parms.InMin = InMin;
	FPctByRange_Parms.InMax = InMax;

	this->ProcessEvent(pFnFPctByRange, &FPctByRange_Parms, NULL);

	return FPctByRange_Parms.ReturnValue;
};

// Function Core.Object.RandRange
// [0x00022103] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          InMin                          ( CPF_Parm )
// float                          InMax                          ( CPF_Parm )

float UObject::RandRange(float InMin, float InMax)
{
	static UFunction* pFnRandRange = NULL;

	if (!pFnRandRange)
		pFnRandRange = (UFunction*)UObject::GObjObjects()->Data[6383];

	UObject_execRandRange_Parms RandRange_Parms;
	RandRange_Parms.InMin = InMin;
	RandRange_Parms.InMax = InMax;

	this->ProcessEvent(pFnRandRange, &RandRange_Parms, NULL);

	return RandRange_Parms.ReturnValue;
};

// Function Core.Object.FInterpEaseInOut
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )
// float                          Exp                            ( CPF_Parm )

float UObject::FInterpEaseInOut(float A, float B, float Alpha, float Exp)
{
	static UFunction* pFnFInterpEaseInOut = NULL;

	if (!pFnFInterpEaseInOut)
		pFnFInterpEaseInOut = (UFunction*)UObject::GObjObjects()->Data[6388];

	UObject_execFInterpEaseInOut_Parms FInterpEaseInOut_Parms;
	FInterpEaseInOut_Parms.A = A;
	FInterpEaseInOut_Parms.B = B;
	FInterpEaseInOut_Parms.Alpha = Alpha;
	FInterpEaseInOut_Parms.Exp = Exp;

	pFnFInterpEaseInOut->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFInterpEaseInOut, &FInterpEaseInOut_Parms, NULL);

	pFnFInterpEaseInOut->FunctionFlags |= 0x400;

	return FInterpEaseInOut_Parms.ReturnValue;
};

// Function Core.Object.FInterpEaseOut
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )
// float                          Exp                            ( CPF_Parm )

float UObject::FInterpEaseOut(float A, float B, float Alpha, float Exp)
{
	static UFunction* pFnFInterpEaseOut = NULL;

	if (!pFnFInterpEaseOut)
		pFnFInterpEaseOut = (UFunction*)UObject::GObjObjects()->Data[6392];

	UObject_execFInterpEaseOut_Parms FInterpEaseOut_Parms;
	FInterpEaseOut_Parms.A = A;
	FInterpEaseOut_Parms.B = B;
	FInterpEaseOut_Parms.Alpha = Alpha;
	FInterpEaseOut_Parms.Exp = Exp;

	this->ProcessEvent(pFnFInterpEaseOut, &FInterpEaseOut_Parms, NULL);

	return FInterpEaseOut_Parms.ReturnValue;
};

// Function Core.Object.FInterpEaseIn
// [0x00022003] ( FUNC_Final )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )
// float                          Exp                            ( CPF_Parm )

float UObject::FInterpEaseIn(float A, float B, float Alpha, float Exp)
{
	static UFunction* pFnFInterpEaseIn = NULL;

	if (!pFnFInterpEaseIn)
		pFnFInterpEaseIn = (UFunction*)UObject::GObjObjects()->Data[6398];

	UObject_execFInterpEaseIn_Parms FInterpEaseIn_Parms;
	FInterpEaseIn_Parms.A = A;
	FInterpEaseIn_Parms.B = B;
	FInterpEaseIn_Parms.Alpha = Alpha;
	FInterpEaseIn_Parms.Exp = Exp;

	this->ProcessEvent(pFnFInterpEaseIn, &FInterpEaseIn_Parms, NULL);

	return FInterpEaseIn_Parms.ReturnValue;
};

// Function Core.Object.FCubicInterp
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          P0                             ( CPF_Parm )
// float                          T0                             ( CPF_Parm )
// float                          P1                             ( CPF_Parm )
// float                          T1                             ( CPF_Parm )
// float                          A                              ( CPF_Parm )

float UObject::FCubicInterp(float P0, float T0, float P1, float T1, float A)
{
	static UFunction* pFnFCubicInterp = NULL;

	if (!pFnFCubicInterp)
		pFnFCubicInterp = (UFunction*)UObject::GObjObjects()->Data[6404];

	UObject_execFCubicInterp_Parms FCubicInterp_Parms;
	FCubicInterp_Parms.P0 = P0;
	FCubicInterp_Parms.T0 = T0;
	FCubicInterp_Parms.P1 = P1;
	FCubicInterp_Parms.T1 = T1;
	FCubicInterp_Parms.A = A;

	pFnFCubicInterp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFCubicInterp, &FCubicInterp_Parms, NULL);

	pFnFCubicInterp->FunctionFlags |= 0x400;

	return FCubicInterp_Parms.ReturnValue;
};

// Function Core.Object.FCeil
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

int UObject::FCeil(float A)
{
	static UFunction* pFnFCeil = NULL;

	if (!pFnFCeil)
		pFnFCeil = (UFunction*)UObject::GObjObjects()->Data[6410];

	UObject_execFCeil_Parms FCeil_Parms;
	FCeil_Parms.A = A;

	pFnFCeil->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFCeil, &FCeil_Parms, NULL);

	pFnFCeil->FunctionFlags |= 0x400;

	return FCeil_Parms.ReturnValue;
};

// Function Core.Object.FFloor
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

int UObject::FFloor(float A)
{
	static UFunction* pFnFFloor = NULL;

	if (!pFnFFloor)
		pFnFFloor = (UFunction*)UObject::GObjObjects()->Data[6417];

	UObject_execFFloor_Parms FFloor_Parms;
	FFloor_Parms.A = A;

	pFnFFloor->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFFloor, &FFloor_Parms, NULL);

	pFnFFloor->FunctionFlags |= 0x400;

	return FFloor_Parms.ReturnValue;
};

// Function Core.Object.Round
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00C7]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

int UObject::Round(float A)
{
	static UFunction* pFnRound = NULL;

	if (!pFnRound)
		pFnRound = (UFunction*)UObject::GObjObjects()->Data[6420];

	UObject_execRound_Parms Round_Parms;
	Round_Parms.A = A;

	unsigned short NativeIndex = pFnRound->iNative;
	pFnRound->iNative = 0;

	pFnRound->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRound, &Round_Parms, NULL);

	pFnRound->FunctionFlags |= 0x400;

	pFnRound->iNative = NativeIndex;

	return Round_Parms.ReturnValue;
};

// Function Core.Object.Lerp
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00F7]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )
// float                          Alpha                          ( CPF_Parm )

float UObject::Lerp(float A, float B, float Alpha)
{
	static UFunction* pFnLerp = NULL;

	if (!pFnLerp)
		pFnLerp = (UFunction*)UObject::GObjObjects()->Data[6423];

	UObject_execLerp_Parms Lerp_Parms;
	Lerp_Parms.A = A;
	Lerp_Parms.B = B;
	Lerp_Parms.Alpha = Alpha;

	unsigned short NativeIndex = pFnLerp->iNative;
	pFnLerp->iNative = 0;

	pFnLerp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLerp, &Lerp_Parms, NULL);

	pFnLerp->FunctionFlags |= 0x400;

	pFnLerp->iNative = NativeIndex;

	return Lerp_Parms.ReturnValue;
};

// Function Core.Object.FClamp
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00F6]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          V                              ( CPF_Parm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::FClamp(float V, float A, float B)
{
	static UFunction* pFnFClamp = NULL;

	if (!pFnFClamp)
		pFnFClamp = (UFunction*)UObject::GObjObjects()->Data[6426];

	UObject_execFClamp_Parms FClamp_Parms;
	FClamp_Parms.V = V;
	FClamp_Parms.A = A;
	FClamp_Parms.B = B;

	unsigned short NativeIndex = pFnFClamp->iNative;
	pFnFClamp->iNative = 0;

	pFnFClamp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFClamp, &FClamp_Parms, NULL);

	pFnFClamp->FunctionFlags |= 0x400;

	pFnFClamp->iNative = NativeIndex;

	return FClamp_Parms.ReturnValue;
};

// Function Core.Object.FMax
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00F5]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::FMax(float A, float B)
{
	static UFunction* pFnFMax = NULL;

	if (!pFnFMax)
		pFnFMax = (UFunction*)UObject::GObjObjects()->Data[6431];

	UObject_execFMax_Parms FMax_Parms;
	FMax_Parms.A = A;
	FMax_Parms.B = B;

	unsigned short NativeIndex = pFnFMax->iNative;
	pFnFMax->iNative = 0;

	pFnFMax->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFMax, &FMax_Parms, NULL);

	pFnFMax->FunctionFlags |= 0x400;

	pFnFMax->iNative = NativeIndex;

	return FMax_Parms.ReturnValue;
};

// Function Core.Object.FMin
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00F4]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::FMin(float A, float B)
{
	static UFunction* pFnFMin = NULL;

	if (!pFnFMin)
		pFnFMin = (UFunction*)UObject::GObjObjects()->Data[6436];

	UObject_execFMin_Parms FMin_Parms;
	FMin_Parms.A = A;
	FMin_Parms.B = B;

	unsigned short NativeIndex = pFnFMin->iNative;
	pFnFMin->iNative = 0;

	pFnFMin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFMin, &FMin_Parms, NULL);

	pFnFMin->FunctionFlags |= 0x400;

	pFnFMin->iNative = NativeIndex;

	return FMin_Parms.ReturnValue;
};

// Function Core.Object.FRand
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00C3]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

float UObject::FRand()
{
	static UFunction* pFnFRand = NULL;

	if (!pFnFRand)
		pFnFRand = (UFunction*)UObject::GObjObjects()->Data[6440];

	UObject_execFRand_Parms FRand_Parms;

	unsigned short NativeIndex = pFnFRand->iNative;
	pFnFRand->iNative = 0;

	pFnFRand->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFRand, &FRand_Parms, NULL);

	pFnFRand->FunctionFlags |= 0x400;

	pFnFRand->iNative = NativeIndex;

	return FRand_Parms.ReturnValue;
};

// Function Core.Object.Square
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00C2]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Square(float A)
{
	static UFunction* pFnSquare = NULL;

	if (!pFnSquare)
		pFnSquare = (UFunction*)UObject::GObjObjects()->Data[6444];

	UObject_execSquare_Parms Square_Parms;
	Square_Parms.A = A;

	unsigned short NativeIndex = pFnSquare->iNative;
	pFnSquare->iNative = 0;

	pFnSquare->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSquare, &Square_Parms, NULL);

	pFnSquare->FunctionFlags |= 0x400;

	pFnSquare->iNative = NativeIndex;

	return Square_Parms.ReturnValue;
};

// Function Core.Object.Sqrt
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00C1]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Sqrt(float A)
{
	static UFunction* pFnSqrt = NULL;

	if (!pFnSqrt)
		pFnSqrt = (UFunction*)UObject::GObjObjects()->Data[6446];

	UObject_execSqrt_Parms Sqrt_Parms;
	Sqrt_Parms.A = A;

	unsigned short NativeIndex = pFnSqrt->iNative;
	pFnSqrt->iNative = 0;

	pFnSqrt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSqrt, &Sqrt_Parms, NULL);

	pFnSqrt->FunctionFlags |= 0x400;

	pFnSqrt->iNative = NativeIndex;

	return Sqrt_Parms.ReturnValue;
};

// Function Core.Object.Loge
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00C0]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Loge(float A)
{
	static UFunction* pFnLoge = NULL;

	if (!pFnLoge)
		pFnLoge = (UFunction*)UObject::GObjObjects()->Data[6449];

	UObject_execLoge_Parms Loge_Parms;
	Loge_Parms.A = A;

	unsigned short NativeIndex = pFnLoge->iNative;
	pFnLoge->iNative = 0;

	pFnLoge->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLoge, &Loge_Parms, NULL);

	pFnLoge->FunctionFlags |= 0x400;

	pFnLoge->iNative = NativeIndex;

	return Loge_Parms.ReturnValue;
};

// Function Core.Object.Exp
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00BF]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Exp(float A)
{
	static UFunction* pFnExp = NULL;

	if (!pFnExp)
		pFnExp = (UFunction*)UObject::GObjObjects()->Data[6452];

	UObject_execExp_Parms Exp_Parms;
	Exp_Parms.A = A;

	unsigned short NativeIndex = pFnExp->iNative;
	pFnExp->iNative = 0;

	pFnExp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnExp, &Exp_Parms, NULL);

	pFnExp->FunctionFlags |= 0x400;

	pFnExp->iNative = NativeIndex;

	return Exp_Parms.ReturnValue;
};

// Function Core.Object.Atan2
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::Atan2(float A, float B)
{
	static UFunction* pFnAtan2 = NULL;

	if (!pFnAtan2)
		pFnAtan2 = (UFunction*)UObject::GObjObjects()->Data[6455];

	UObject_execAtan2_Parms Atan2_Parms;
	Atan2_Parms.A = A;
	Atan2_Parms.B = B;

	pFnAtan2->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAtan2, &Atan2_Parms, NULL);

	pFnAtan2->FunctionFlags |= 0x400;

	return Atan2_Parms.ReturnValue;
};

// Function Core.Object.Atan
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00BE]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Atan(float A)
{
	static UFunction* pFnAtan = NULL;

	if (!pFnAtan)
		pFnAtan = (UFunction*)UObject::GObjObjects()->Data[6458];

	UObject_execAtan_Parms Atan_Parms;
	Atan_Parms.A = A;

	unsigned short NativeIndex = pFnAtan->iNative;
	pFnAtan->iNative = 0;

	pFnAtan->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAtan, &Atan_Parms, NULL);

	pFnAtan->FunctionFlags |= 0x400;

	pFnAtan->iNative = NativeIndex;

	return Atan_Parms.ReturnValue;
};

// Function Core.Object.Tan
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00BD]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Tan(float A)
{
	static UFunction* pFnTan = NULL;

	if (!pFnTan)
		pFnTan = (UFunction*)UObject::GObjObjects()->Data[6462];

	UObject_execTan_Parms Tan_Parms;
	Tan_Parms.A = A;

	unsigned short NativeIndex = pFnTan->iNative;
	pFnTan->iNative = 0;

	pFnTan->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTan, &Tan_Parms, NULL);

	pFnTan->FunctionFlags |= 0x400;

	pFnTan->iNative = NativeIndex;

	return Tan_Parms.ReturnValue;
};

// Function Core.Object.Acos
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Acos(float A)
{
	static UFunction* pFnAcos = NULL;

	if (!pFnAcos)
		pFnAcos = (UFunction*)UObject::GObjObjects()->Data[5443];

	UObject_execAcos_Parms Acos_Parms;
	Acos_Parms.A = A;

	pFnAcos->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAcos, &Acos_Parms, NULL);

	pFnAcos->FunctionFlags |= 0x400;

	return Acos_Parms.ReturnValue;
};

// Function Core.Object.Cos
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00BC]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Cos(float A)
{
	static UFunction* pFnCos = NULL;

	if (!pFnCos)
		pFnCos = (UFunction*)UObject::GObjObjects()->Data[6467];

	UObject_execCos_Parms Cos_Parms;
	Cos_Parms.A = A;

	unsigned short NativeIndex = pFnCos->iNative;
	pFnCos->iNative = 0;

	pFnCos->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCos, &Cos_Parms, NULL);

	pFnCos->FunctionFlags |= 0x400;

	pFnCos->iNative = NativeIndex;

	return Cos_Parms.ReturnValue;
};

// Function Core.Object.Asin
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Asin(float A)
{
	static UFunction* pFnAsin = NULL;

	if (!pFnAsin)
		pFnAsin = (UFunction*)UObject::GObjObjects()->Data[6470];

	UObject_execAsin_Parms Asin_Parms;
	Asin_Parms.A = A;

	pFnAsin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAsin, &Asin_Parms, NULL);

	pFnAsin->FunctionFlags |= 0x400;

	return Asin_Parms.ReturnValue;
};

// Function Core.Object.Sin
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00BB]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Sin(float A)
{
	static UFunction* pFnSin = NULL;

	if (!pFnSin)
		pFnSin = (UFunction*)UObject::GObjObjects()->Data[6473];

	UObject_execSin_Parms Sin_Parms;
	Sin_Parms.A = A;

	unsigned short NativeIndex = pFnSin->iNative;
	pFnSin->iNative = 0;

	pFnSin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSin, &Sin_Parms, NULL);

	pFnSin->FunctionFlags |= 0x400;

	pFnSin->iNative = NativeIndex;

	return Sin_Parms.ReturnValue;
};

// Function Core.Object.Abs
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00BA]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Abs(float A)
{
	static UFunction* pFnAbs = NULL;

	if (!pFnAbs)
		pFnAbs = (UFunction*)UObject::GObjObjects()->Data[6476];

	UObject_execAbs_Parms Abs_Parms;
	Abs_Parms.A = A;

	unsigned short NativeIndex = pFnAbs->iNative;
	pFnAbs->iNative = 0;

	pFnAbs->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAbs, &Abs_Parms, NULL);

	pFnAbs->FunctionFlags |= 0x400;

	pFnAbs->iNative = NativeIndex;

	return Abs_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_FloatFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00B9]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// float                          A                              ( CPF_Parm | CPF_OutParm )

float UObject::SubtractEqual_FloatFloat(float B, float* A)
{
	static UFunction* pFnSubtractEqual_FloatFloat = NULL;

	if (!pFnSubtractEqual_FloatFloat)
		pFnSubtractEqual_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6479];

	UObject_execSubtractEqual_FloatFloat_Parms SubtractEqual_FloatFloat_Parms;
	SubtractEqual_FloatFloat_Parms.B = B;

	unsigned short NativeIndex = pFnSubtractEqual_FloatFloat->iNative;
	pFnSubtractEqual_FloatFloat->iNative = 0;

	pFnSubtractEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractEqual_FloatFloat, &SubtractEqual_FloatFloat_Parms, NULL);

	pFnSubtractEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnSubtractEqual_FloatFloat->iNative = NativeIndex;

	if (A)
		*A = SubtractEqual_FloatFloat_Parms.A;

	return SubtractEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_FloatFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00B8]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// float                          A                              ( CPF_Parm | CPF_OutParm )

float UObject::AddEqual_FloatFloat(float B, float* A)
{
	static UFunction* pFnAddEqual_FloatFloat = NULL;

	if (!pFnAddEqual_FloatFloat)
		pFnAddEqual_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6482];

	UObject_execAddEqual_FloatFloat_Parms AddEqual_FloatFloat_Parms;
	AddEqual_FloatFloat_Parms.B = B;

	unsigned short NativeIndex = pFnAddEqual_FloatFloat->iNative;
	pFnAddEqual_FloatFloat->iNative = 0;

	pFnAddEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddEqual_FloatFloat, &AddEqual_FloatFloat_Parms, NULL);

	pFnAddEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnAddEqual_FloatFloat->iNative = NativeIndex;

	if (A)
		*A = AddEqual_FloatFloat_Parms.A;

	return AddEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_FloatFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00B7]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// float                          A                              ( CPF_Parm | CPF_OutParm )

float UObject::DivideEqual_FloatFloat(float B, float* A)
{
	static UFunction* pFnDivideEqual_FloatFloat = NULL;

	if (!pFnDivideEqual_FloatFloat)
		pFnDivideEqual_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6486];

	UObject_execDivideEqual_FloatFloat_Parms DivideEqual_FloatFloat_Parms;
	DivideEqual_FloatFloat_Parms.B = B;

	unsigned short NativeIndex = pFnDivideEqual_FloatFloat->iNative;
	pFnDivideEqual_FloatFloat->iNative = 0;

	pFnDivideEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivideEqual_FloatFloat, &DivideEqual_FloatFloat_Parms, NULL);

	pFnDivideEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnDivideEqual_FloatFloat->iNative = NativeIndex;

	if (A)
		*A = DivideEqual_FloatFloat_Parms.A;

	return DivideEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_FloatFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00B6]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// float                          A                              ( CPF_Parm | CPF_OutParm )

float UObject::MultiplyEqual_FloatFloat(float B, float* A)
{
	static UFunction* pFnMultiplyEqual_FloatFloat = NULL;

	if (!pFnMultiplyEqual_FloatFloat)
		pFnMultiplyEqual_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6490];

	UObject_execMultiplyEqual_FloatFloat_Parms MultiplyEqual_FloatFloat_Parms;
	MultiplyEqual_FloatFloat_Parms.B = B;

	unsigned short NativeIndex = pFnMultiplyEqual_FloatFloat->iNative;
	pFnMultiplyEqual_FloatFloat->iNative = 0;

	pFnMultiplyEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyEqual_FloatFloat, &MultiplyEqual_FloatFloat_Parms, NULL);

	pFnMultiplyEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnMultiplyEqual_FloatFloat->iNative = NativeIndex;

	if (A)
		*A = MultiplyEqual_FloatFloat_Parms.A;

	return MultiplyEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00B5]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

bool UObject::NotEqual_FloatFloat(float A, float B)
{
	static UFunction* pFnNotEqual_FloatFloat = NULL;

	if (!pFnNotEqual_FloatFloat)
		pFnNotEqual_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6494];

	UObject_execNotEqual_FloatFloat_Parms NotEqual_FloatFloat_Parms;
	NotEqual_FloatFloat_Parms.A = A;
	NotEqual_FloatFloat_Parms.B = B;

	unsigned short NativeIndex = pFnNotEqual_FloatFloat->iNative;
	pFnNotEqual_FloatFloat->iNative = 0;

	pFnNotEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_FloatFloat, &NotEqual_FloatFloat_Parms, NULL);

	pFnNotEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnNotEqual_FloatFloat->iNative = NativeIndex;

	return NotEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.ComplementEqual_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00D2]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

bool UObject::ComplementEqual_FloatFloat(float A, float B)
{
	static UFunction* pFnComplementEqual_FloatFloat = NULL;

	if (!pFnComplementEqual_FloatFloat)
		pFnComplementEqual_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6498];

	UObject_execComplementEqual_FloatFloat_Parms ComplementEqual_FloatFloat_Parms;
	ComplementEqual_FloatFloat_Parms.A = A;
	ComplementEqual_FloatFloat_Parms.B = B;

	unsigned short NativeIndex = pFnComplementEqual_FloatFloat->iNative;
	pFnComplementEqual_FloatFloat->iNative = 0;

	pFnComplementEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnComplementEqual_FloatFloat, &ComplementEqual_FloatFloat_Parms, NULL);

	pFnComplementEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnComplementEqual_FloatFloat->iNative = NativeIndex;

	return ComplementEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00B4]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

bool UObject::EqualEqual_FloatFloat(float A, float B)
{
	static UFunction* pFnEqualEqual_FloatFloat = NULL;

	if (!pFnEqualEqual_FloatFloat)
		pFnEqualEqual_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6502];

	UObject_execEqualEqual_FloatFloat_Parms EqualEqual_FloatFloat_Parms;
	EqualEqual_FloatFloat_Parms.A = A;
	EqualEqual_FloatFloat_Parms.B = B;

	unsigned short NativeIndex = pFnEqualEqual_FloatFloat->iNative;
	pFnEqualEqual_FloatFloat->iNative = 0;

	pFnEqualEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_FloatFloat, &EqualEqual_FloatFloat_Parms, NULL);

	pFnEqualEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnEqualEqual_FloatFloat->iNative = NativeIndex;

	return EqualEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.GreaterEqual_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00B3]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

bool UObject::GreaterEqual_FloatFloat(float A, float B)
{
	static UFunction* pFnGreaterEqual_FloatFloat = NULL;

	if (!pFnGreaterEqual_FloatFloat)
		pFnGreaterEqual_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6506];

	UObject_execGreaterEqual_FloatFloat_Parms GreaterEqual_FloatFloat_Parms;
	GreaterEqual_FloatFloat_Parms.A = A;
	GreaterEqual_FloatFloat_Parms.B = B;

	unsigned short NativeIndex = pFnGreaterEqual_FloatFloat->iNative;
	pFnGreaterEqual_FloatFloat->iNative = 0;

	pFnGreaterEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreaterEqual_FloatFloat, &GreaterEqual_FloatFloat_Parms, NULL);

	pFnGreaterEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnGreaterEqual_FloatFloat->iNative = NativeIndex;

	return GreaterEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.LessEqual_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00B2]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

bool UObject::LessEqual_FloatFloat(float A, float B)
{
	static UFunction* pFnLessEqual_FloatFloat = NULL;

	if (!pFnLessEqual_FloatFloat)
		pFnLessEqual_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6510];

	UObject_execLessEqual_FloatFloat_Parms LessEqual_FloatFloat_Parms;
	LessEqual_FloatFloat_Parms.A = A;
	LessEqual_FloatFloat_Parms.B = B;

	unsigned short NativeIndex = pFnLessEqual_FloatFloat->iNative;
	pFnLessEqual_FloatFloat->iNative = 0;

	pFnLessEqual_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLessEqual_FloatFloat, &LessEqual_FloatFloat_Parms, NULL);

	pFnLessEqual_FloatFloat->FunctionFlags |= 0x400;

	pFnLessEqual_FloatFloat->iNative = NativeIndex;

	return LessEqual_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Greater_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00B1]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

bool UObject::Greater_FloatFloat(float A, float B)
{
	static UFunction* pFnGreater_FloatFloat = NULL;

	if (!pFnGreater_FloatFloat)
		pFnGreater_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6514];

	UObject_execGreater_FloatFloat_Parms Greater_FloatFloat_Parms;
	Greater_FloatFloat_Parms.A = A;
	Greater_FloatFloat_Parms.B = B;

	unsigned short NativeIndex = pFnGreater_FloatFloat->iNative;
	pFnGreater_FloatFloat->iNative = 0;

	pFnGreater_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreater_FloatFloat, &Greater_FloatFloat_Parms, NULL);

	pFnGreater_FloatFloat->FunctionFlags |= 0x400;

	pFnGreater_FloatFloat->iNative = NativeIndex;

	return Greater_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Less_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00B0]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

bool UObject::Less_FloatFloat(float A, float B)
{
	static UFunction* pFnLess_FloatFloat = NULL;

	if (!pFnLess_FloatFloat)
		pFnLess_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6518];

	UObject_execLess_FloatFloat_Parms Less_FloatFloat_Parms;
	Less_FloatFloat_Parms.A = A;
	Less_FloatFloat_Parms.B = B;

	unsigned short NativeIndex = pFnLess_FloatFloat->iNative;
	pFnLess_FloatFloat->iNative = 0;

	pFnLess_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLess_FloatFloat, &Less_FloatFloat_Parms, NULL);

	pFnLess_FloatFloat->FunctionFlags |= 0x400;

	pFnLess_FloatFloat->iNative = NativeIndex;

	return Less_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Subtract_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00AF]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::Subtract_FloatFloat(float A, float B)
{
	static UFunction* pFnSubtract_FloatFloat = NULL;

	if (!pFnSubtract_FloatFloat)
		pFnSubtract_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6522];

	UObject_execSubtract_FloatFloat_Parms Subtract_FloatFloat_Parms;
	Subtract_FloatFloat_Parms.A = A;
	Subtract_FloatFloat_Parms.B = B;

	unsigned short NativeIndex = pFnSubtract_FloatFloat->iNative;
	pFnSubtract_FloatFloat->iNative = 0;

	pFnSubtract_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_FloatFloat, &Subtract_FloatFloat_Parms, NULL);

	pFnSubtract_FloatFloat->FunctionFlags |= 0x400;

	pFnSubtract_FloatFloat->iNative = NativeIndex;

	return Subtract_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Add_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00AE]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::Add_FloatFloat(float A, float B)
{
	static UFunction* pFnAdd_FloatFloat = NULL;

	if (!pFnAdd_FloatFloat)
		pFnAdd_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6526];

	UObject_execAdd_FloatFloat_Parms Add_FloatFloat_Parms;
	Add_FloatFloat_Parms.A = A;
	Add_FloatFloat_Parms.B = B;

	unsigned short NativeIndex = pFnAdd_FloatFloat->iNative;
	pFnAdd_FloatFloat->iNative = 0;

	pFnAdd_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAdd_FloatFloat, &Add_FloatFloat_Parms, NULL);

	pFnAdd_FloatFloat->FunctionFlags |= 0x400;

	pFnAdd_FloatFloat->iNative = NativeIndex;

	return Add_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Percent_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00AD]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::Percent_FloatFloat(float A, float B)
{
	static UFunction* pFnPercent_FloatFloat = NULL;

	if (!pFnPercent_FloatFloat)
		pFnPercent_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6530];

	UObject_execPercent_FloatFloat_Parms Percent_FloatFloat_Parms;
	Percent_FloatFloat_Parms.A = A;
	Percent_FloatFloat_Parms.B = B;

	unsigned short NativeIndex = pFnPercent_FloatFloat->iNative;
	pFnPercent_FloatFloat->iNative = 0;

	pFnPercent_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPercent_FloatFloat, &Percent_FloatFloat_Parms, NULL);

	pFnPercent_FloatFloat->FunctionFlags |= 0x400;

	pFnPercent_FloatFloat->iNative = NativeIndex;

	return Percent_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Divide_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00AC]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::Divide_FloatFloat(float A, float B)
{
	static UFunction* pFnDivide_FloatFloat = NULL;

	if (!pFnDivide_FloatFloat)
		pFnDivide_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6534];

	UObject_execDivide_FloatFloat_Parms Divide_FloatFloat_Parms;
	Divide_FloatFloat_Parms.A = A;
	Divide_FloatFloat_Parms.B = B;

	unsigned short NativeIndex = pFnDivide_FloatFloat->iNative;
	pFnDivide_FloatFloat->iNative = 0;

	pFnDivide_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivide_FloatFloat, &Divide_FloatFloat_Parms, NULL);

	pFnDivide_FloatFloat->FunctionFlags |= 0x400;

	pFnDivide_FloatFloat->iNative = NativeIndex;

	return Divide_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Multiply_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00AB]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )
// float                          B                              ( CPF_Parm )

float UObject::Multiply_FloatFloat(float A, float B)
{
	static UFunction* pFnMultiply_FloatFloat = NULL;

	if (!pFnMultiply_FloatFloat)
		pFnMultiply_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6538];

	UObject_execMultiply_FloatFloat_Parms Multiply_FloatFloat_Parms;
	Multiply_FloatFloat_Parms.A = A;
	Multiply_FloatFloat_Parms.B = B;

	unsigned short NativeIndex = pFnMultiply_FloatFloat->iNative;
	pFnMultiply_FloatFloat->iNative = 0;

	pFnMultiply_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_FloatFloat, &Multiply_FloatFloat_Parms, NULL);

	pFnMultiply_FloatFloat->FunctionFlags |= 0x400;

	pFnMultiply_FloatFloat->iNative = NativeIndex;

	return Multiply_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyMultiply_FloatFloat
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00AA]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          Base                           ( CPF_Parm )
// float                          Exp                            ( CPF_Parm )

float UObject::MultiplyMultiply_FloatFloat(float Base, float Exp)
{
	static UFunction* pFnMultiplyMultiply_FloatFloat = NULL;

	if (!pFnMultiplyMultiply_FloatFloat)
		pFnMultiplyMultiply_FloatFloat = (UFunction*)UObject::GObjObjects()->Data[6542];

	UObject_execMultiplyMultiply_FloatFloat_Parms MultiplyMultiply_FloatFloat_Parms;
	MultiplyMultiply_FloatFloat_Parms.Base = Base;
	MultiplyMultiply_FloatFloat_Parms.Exp = Exp;

	unsigned short NativeIndex = pFnMultiplyMultiply_FloatFloat->iNative;
	pFnMultiplyMultiply_FloatFloat->iNative = 0;

	pFnMultiplyMultiply_FloatFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyMultiply_FloatFloat, &MultiplyMultiply_FloatFloat_Parms, NULL);

	pFnMultiplyMultiply_FloatFloat->FunctionFlags |= 0x400;

	pFnMultiplyMultiply_FloatFloat->iNative = NativeIndex;

	return MultiplyMultiply_FloatFloat_Parms.ReturnValue;
};

// Function Core.Object.Subtract_PreFloat
// [0x00023411] ( FUNC_Final | FUNC_Native ) iNative [0x00A9]
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          A                              ( CPF_Parm )

float UObject::Subtract_PreFloat(float A)
{
	static UFunction* pFnSubtract_PreFloat = NULL;

	if (!pFnSubtract_PreFloat)
		pFnSubtract_PreFloat = (UFunction*)UObject::GObjObjects()->Data[6546];

	UObject_execSubtract_PreFloat_Parms Subtract_PreFloat_Parms;
	Subtract_PreFloat_Parms.A = A;

	unsigned short NativeIndex = pFnSubtract_PreFloat->iNative;
	pFnSubtract_PreFloat->iNative = 0;

	pFnSubtract_PreFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_PreFloat, &Subtract_PreFloat_Parms, NULL);

	pFnSubtract_PreFloat->FunctionFlags |= 0x400;

	pFnSubtract_PreFloat->iNative = NativeIndex;

	return Subtract_PreFloat_Parms.ReturnValue;
};

// Function Core.Object.ToHex
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            A                              ( CPF_Parm )

struct FString UObject::ToHex(int A)
{
	static UFunction* pFnToHex = NULL;

	if (!pFnToHex)
		pFnToHex = (UFunction*)UObject::GObjObjects()->Data[6550];

	UObject_execToHex_Parms ToHex_Parms;
	ToHex_Parms.A = A;

	pFnToHex->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnToHex, &ToHex_Parms, NULL);

	pFnToHex->FunctionFlags |= 0x400;

	return ToHex_Parms.ReturnValue;
};

// Function Core.Object.Clamp
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00FB]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            V                              ( CPF_Parm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Clamp(int V, int A, int B)
{
	static UFunction* pFnClamp = NULL;

	if (!pFnClamp)
		pFnClamp = (UFunction*)UObject::GObjObjects()->Data[6553];

	UObject_execClamp_Parms Clamp_Parms;
	Clamp_Parms.V = V;
	Clamp_Parms.A = A;
	Clamp_Parms.B = B;

	unsigned short NativeIndex = pFnClamp->iNative;
	pFnClamp->iNative = 0;

	pFnClamp->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClamp, &Clamp_Parms, NULL);

	pFnClamp->FunctionFlags |= 0x400;

	pFnClamp->iNative = NativeIndex;

	return Clamp_Parms.ReturnValue;
};

// Function Core.Object.Max
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00FA]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Max(int A, int B)
{
	static UFunction* pFnMax = NULL;

	if (!pFnMax)
		pFnMax = (UFunction*)UObject::GObjObjects()->Data[6556];

	UObject_execMax_Parms Max_Parms;
	Max_Parms.A = A;
	Max_Parms.B = B;

	unsigned short NativeIndex = pFnMax->iNative;
	pFnMax->iNative = 0;

	pFnMax->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMax, &Max_Parms, NULL);

	pFnMax->FunctionFlags |= 0x400;

	pFnMax->iNative = NativeIndex;

	return Max_Parms.ReturnValue;
};

// Function Core.Object.Min
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00F9]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Min(int A, int B)
{
	static UFunction* pFnMin = NULL;

	if (!pFnMin)
		pFnMin = (UFunction*)UObject::GObjObjects()->Data[6561];

	UObject_execMin_Parms Min_Parms;
	Min_Parms.A = A;
	Min_Parms.B = B;

	unsigned short NativeIndex = pFnMin->iNative;
	pFnMin->iNative = 0;

	pFnMin->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMin, &Min_Parms, NULL);

	pFnMin->FunctionFlags |= 0x400;

	pFnMin->iNative = NativeIndex;

	return Min_Parms.ReturnValue;
};

// Function Core.Object.Rand
// [0x00022401] ( FUNC_Final | FUNC_Native ) iNative [0x00A7]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Max                            ( CPF_Parm )

int UObject::Rand(int Max)
{
	static UFunction* pFnRand = NULL;

	if (!pFnRand)
		pFnRand = (UFunction*)UObject::GObjObjects()->Data[6565];

	UObject_execRand_Parms Rand_Parms;
	Rand_Parms.Max = Max;

	unsigned short NativeIndex = pFnRand->iNative;
	pFnRand->iNative = 0;

	pFnRand->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRand, &Rand_Parms, NULL);

	pFnRand->FunctionFlags |= 0x400;

	pFnRand->iNative = NativeIndex;

	return Rand_Parms.ReturnValue;
};

// Function Core.Object.SubtractSubtract_Int
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00A6]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm | CPF_OutParm )

int UObject::SubtractSubtract_Int(int* A)
{
	static UFunction* pFnSubtractSubtract_Int = NULL;

	if (!pFnSubtractSubtract_Int)
		pFnSubtractSubtract_Int = (UFunction*)UObject::GObjObjects()->Data[6569];

	UObject_execSubtractSubtract_Int_Parms SubtractSubtract_Int_Parms;

	unsigned short NativeIndex = pFnSubtractSubtract_Int->iNative;
	pFnSubtractSubtract_Int->iNative = 0;

	pFnSubtractSubtract_Int->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractSubtract_Int, &SubtractSubtract_Int_Parms, NULL);

	pFnSubtractSubtract_Int->FunctionFlags |= 0x400;

	pFnSubtractSubtract_Int->iNative = NativeIndex;

	if (A)
		*A = SubtractSubtract_Int_Parms.A;

	return SubtractSubtract_Int_Parms.ReturnValue;
};

// Function Core.Object.AddAdd_Int
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00A5]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm | CPF_OutParm )

int UObject::AddAdd_Int(int* A)
{
	static UFunction* pFnAddAdd_Int = NULL;

	if (!pFnAddAdd_Int)
		pFnAddAdd_Int = (UFunction*)UObject::GObjObjects()->Data[6572];

	UObject_execAddAdd_Int_Parms AddAdd_Int_Parms;

	unsigned short NativeIndex = pFnAddAdd_Int->iNative;
	pFnAddAdd_Int->iNative = 0;

	pFnAddAdd_Int->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddAdd_Int, &AddAdd_Int_Parms, NULL);

	pFnAddAdd_Int->FunctionFlags |= 0x400;

	pFnAddAdd_Int->iNative = NativeIndex;

	if (A)
		*A = AddAdd_Int_Parms.A;

	return AddAdd_Int_Parms.ReturnValue;
};

// Function Core.Object.SubtractSubtract_PreInt
// [0x00423411] ( FUNC_Final | FUNC_Native ) iNative [0x00A4]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm | CPF_OutParm )

int UObject::SubtractSubtract_PreInt(int* A)
{
	static UFunction* pFnSubtractSubtract_PreInt = NULL;

	if (!pFnSubtractSubtract_PreInt)
		pFnSubtractSubtract_PreInt = (UFunction*)UObject::GObjObjects()->Data[6575];

	UObject_execSubtractSubtract_PreInt_Parms SubtractSubtract_PreInt_Parms;

	unsigned short NativeIndex = pFnSubtractSubtract_PreInt->iNative;
	pFnSubtractSubtract_PreInt->iNative = 0;

	pFnSubtractSubtract_PreInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractSubtract_PreInt, &SubtractSubtract_PreInt_Parms, NULL);

	pFnSubtractSubtract_PreInt->FunctionFlags |= 0x400;

	pFnSubtractSubtract_PreInt->iNative = NativeIndex;

	if (A)
		*A = SubtractSubtract_PreInt_Parms.A;

	return SubtractSubtract_PreInt_Parms.ReturnValue;
};

// Function Core.Object.AddAdd_PreInt
// [0x00423411] ( FUNC_Final | FUNC_Native ) iNative [0x00A3]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm | CPF_OutParm )

int UObject::AddAdd_PreInt(int* A)
{
	static UFunction* pFnAddAdd_PreInt = NULL;

	if (!pFnAddAdd_PreInt)
		pFnAddAdd_PreInt = (UFunction*)UObject::GObjObjects()->Data[6578];

	UObject_execAddAdd_PreInt_Parms AddAdd_PreInt_Parms;

	unsigned short NativeIndex = pFnAddAdd_PreInt->iNative;
	pFnAddAdd_PreInt->iNative = 0;

	pFnAddAdd_PreInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddAdd_PreInt, &AddAdd_PreInt_Parms, NULL);

	pFnAddAdd_PreInt->FunctionFlags |= 0x400;

	pFnAddAdd_PreInt->iNative = NativeIndex;

	if (A)
		*A = AddAdd_PreInt_Parms.A;

	return AddAdd_PreInt_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_IntInt
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00A2]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            B                              ( CPF_Parm )
// int                            A                              ( CPF_Parm | CPF_OutParm )

int UObject::SubtractEqual_IntInt(int B, int* A)
{
	static UFunction* pFnSubtractEqual_IntInt = NULL;

	if (!pFnSubtractEqual_IntInt)
		pFnSubtractEqual_IntInt = (UFunction*)UObject::GObjObjects()->Data[6581];

	UObject_execSubtractEqual_IntInt_Parms SubtractEqual_IntInt_Parms;
	SubtractEqual_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnSubtractEqual_IntInt->iNative;
	pFnSubtractEqual_IntInt->iNative = 0;

	pFnSubtractEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractEqual_IntInt, &SubtractEqual_IntInt_Parms, NULL);

	pFnSubtractEqual_IntInt->FunctionFlags |= 0x400;

	pFnSubtractEqual_IntInt->iNative = NativeIndex;

	if (A)
		*A = SubtractEqual_IntInt_Parms.A;

	return SubtractEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_IntInt
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00A1]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            B                              ( CPF_Parm )
// int                            A                              ( CPF_Parm | CPF_OutParm )

int UObject::AddEqual_IntInt(int B, int* A)
{
	static UFunction* pFnAddEqual_IntInt = NULL;

	if (!pFnAddEqual_IntInt)
		pFnAddEqual_IntInt = (UFunction*)UObject::GObjObjects()->Data[6584];

	UObject_execAddEqual_IntInt_Parms AddEqual_IntInt_Parms;
	AddEqual_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnAddEqual_IntInt->iNative;
	pFnAddEqual_IntInt->iNative = 0;

	pFnAddEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddEqual_IntInt, &AddEqual_IntInt_Parms, NULL);

	pFnAddEqual_IntInt->FunctionFlags |= 0x400;

	pFnAddEqual_IntInt->iNative = NativeIndex;

	if (A)
		*A = AddEqual_IntInt_Parms.A;

	return AddEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_IntFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00A0]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// int                            A                              ( CPF_Parm | CPF_OutParm )

int UObject::DivideEqual_IntFloat(float B, int* A)
{
	static UFunction* pFnDivideEqual_IntFloat = NULL;

	if (!pFnDivideEqual_IntFloat)
		pFnDivideEqual_IntFloat = (UFunction*)UObject::GObjObjects()->Data[6588];

	UObject_execDivideEqual_IntFloat_Parms DivideEqual_IntFloat_Parms;
	DivideEqual_IntFloat_Parms.B = B;

	unsigned short NativeIndex = pFnDivideEqual_IntFloat->iNative;
	pFnDivideEqual_IntFloat->iNative = 0;

	pFnDivideEqual_IntFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivideEqual_IntFloat, &DivideEqual_IntFloat_Parms, NULL);

	pFnDivideEqual_IntFloat->FunctionFlags |= 0x400;

	pFnDivideEqual_IntFloat->iNative = NativeIndex;

	if (A)
		*A = DivideEqual_IntFloat_Parms.A;

	return DivideEqual_IntFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_IntFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x009F]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// int                            A                              ( CPF_Parm | CPF_OutParm )

int UObject::MultiplyEqual_IntFloat(float B, int* A)
{
	static UFunction* pFnMultiplyEqual_IntFloat = NULL;

	if (!pFnMultiplyEqual_IntFloat)
		pFnMultiplyEqual_IntFloat = (UFunction*)UObject::GObjObjects()->Data[6592];

	UObject_execMultiplyEqual_IntFloat_Parms MultiplyEqual_IntFloat_Parms;
	MultiplyEqual_IntFloat_Parms.B = B;

	unsigned short NativeIndex = pFnMultiplyEqual_IntFloat->iNative;
	pFnMultiplyEqual_IntFloat->iNative = 0;

	pFnMultiplyEqual_IntFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyEqual_IntFloat, &MultiplyEqual_IntFloat_Parms, NULL);

	pFnMultiplyEqual_IntFloat->FunctionFlags |= 0x400;

	pFnMultiplyEqual_IntFloat->iNative = NativeIndex;

	if (A)
		*A = MultiplyEqual_IntFloat_Parms.A;

	return MultiplyEqual_IntFloat_Parms.ReturnValue;
};

// Function Core.Object.Or_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x009E]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Or_IntInt(int A, int B)
{
	static UFunction* pFnOr_IntInt = NULL;

	if (!pFnOr_IntInt)
		pFnOr_IntInt = (UFunction*)UObject::GObjObjects()->Data[6596];

	UObject_execOr_IntInt_Parms Or_IntInt_Parms;
	Or_IntInt_Parms.A = A;
	Or_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnOr_IntInt->iNative;
	pFnOr_IntInt->iNative = 0;

	pFnOr_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnOr_IntInt, &Or_IntInt_Parms, NULL);

	pFnOr_IntInt->FunctionFlags |= 0x400;

	pFnOr_IntInt->iNative = NativeIndex;

	return Or_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Xor_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x009D]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Xor_IntInt(int A, int B)
{
	static UFunction* pFnXor_IntInt = NULL;

	if (!pFnXor_IntInt)
		pFnXor_IntInt = (UFunction*)UObject::GObjObjects()->Data[6600];

	UObject_execXor_IntInt_Parms Xor_IntInt_Parms;
	Xor_IntInt_Parms.A = A;
	Xor_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnXor_IntInt->iNative;
	pFnXor_IntInt->iNative = 0;

	pFnXor_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnXor_IntInt, &Xor_IntInt_Parms, NULL);

	pFnXor_IntInt->FunctionFlags |= 0x400;

	pFnXor_IntInt->iNative = NativeIndex;

	return Xor_IntInt_Parms.ReturnValue;
};

// Function Core.Object.And_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x009C]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::And_IntInt(int A, int B)
{
	static UFunction* pFnAnd_IntInt = NULL;

	if (!pFnAnd_IntInt)
		pFnAnd_IntInt = (UFunction*)UObject::GObjObjects()->Data[6604];

	UObject_execAnd_IntInt_Parms And_IntInt_Parms;
	And_IntInt_Parms.A = A;
	And_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnAnd_IntInt->iNative;
	pFnAnd_IntInt->iNative = 0;

	pFnAnd_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAnd_IntInt, &And_IntInt_Parms, NULL);

	pFnAnd_IntInt->FunctionFlags |= 0x400;

	pFnAnd_IntInt->iNative = NativeIndex;

	return And_IntInt_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x009B]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::NotEqual_IntInt(int A, int B)
{
	static UFunction* pFnNotEqual_IntInt = NULL;

	if (!pFnNotEqual_IntInt)
		pFnNotEqual_IntInt = (UFunction*)UObject::GObjObjects()->Data[6608];

	UObject_execNotEqual_IntInt_Parms NotEqual_IntInt_Parms;
	NotEqual_IntInt_Parms.A = A;
	NotEqual_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnNotEqual_IntInt->iNative;
	pFnNotEqual_IntInt->iNative = 0;

	pFnNotEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_IntInt, &NotEqual_IntInt_Parms, NULL);

	pFnNotEqual_IntInt->FunctionFlags |= 0x400;

	pFnNotEqual_IntInt->iNative = NativeIndex;

	return NotEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x009A]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::EqualEqual_IntInt(int A, int B)
{
	static UFunction* pFnEqualEqual_IntInt = NULL;

	if (!pFnEqualEqual_IntInt)
		pFnEqualEqual_IntInt = (UFunction*)UObject::GObjObjects()->Data[6612];

	UObject_execEqualEqual_IntInt_Parms EqualEqual_IntInt_Parms;
	EqualEqual_IntInt_Parms.A = A;
	EqualEqual_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnEqualEqual_IntInt->iNative;
	pFnEqualEqual_IntInt->iNative = 0;

	pFnEqualEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_IntInt, &EqualEqual_IntInt_Parms, NULL);

	pFnEqualEqual_IntInt->FunctionFlags |= 0x400;

	pFnEqualEqual_IntInt->iNative = NativeIndex;

	return EqualEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.GreaterEqual_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0099]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::GreaterEqual_IntInt(int A, int B)
{
	static UFunction* pFnGreaterEqual_IntInt = NULL;

	if (!pFnGreaterEqual_IntInt)
		pFnGreaterEqual_IntInt = (UFunction*)UObject::GObjObjects()->Data[6616];

	UObject_execGreaterEqual_IntInt_Parms GreaterEqual_IntInt_Parms;
	GreaterEqual_IntInt_Parms.A = A;
	GreaterEqual_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnGreaterEqual_IntInt->iNative;
	pFnGreaterEqual_IntInt->iNative = 0;

	pFnGreaterEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreaterEqual_IntInt, &GreaterEqual_IntInt_Parms, NULL);

	pFnGreaterEqual_IntInt->FunctionFlags |= 0x400;

	pFnGreaterEqual_IntInt->iNative = NativeIndex;

	return GreaterEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.LessEqual_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0098]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::LessEqual_IntInt(int A, int B)
{
	static UFunction* pFnLessEqual_IntInt = NULL;

	if (!pFnLessEqual_IntInt)
		pFnLessEqual_IntInt = (UFunction*)UObject::GObjObjects()->Data[6620];

	UObject_execLessEqual_IntInt_Parms LessEqual_IntInt_Parms;
	LessEqual_IntInt_Parms.A = A;
	LessEqual_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnLessEqual_IntInt->iNative;
	pFnLessEqual_IntInt->iNative = 0;

	pFnLessEqual_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLessEqual_IntInt, &LessEqual_IntInt_Parms, NULL);

	pFnLessEqual_IntInt->FunctionFlags |= 0x400;

	pFnLessEqual_IntInt->iNative = NativeIndex;

	return LessEqual_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Greater_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0097]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::Greater_IntInt(int A, int B)
{
	static UFunction* pFnGreater_IntInt = NULL;

	if (!pFnGreater_IntInt)
		pFnGreater_IntInt = (UFunction*)UObject::GObjObjects()->Data[6624];

	UObject_execGreater_IntInt_Parms Greater_IntInt_Parms;
	Greater_IntInt_Parms.A = A;
	Greater_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnGreater_IntInt->iNative;
	pFnGreater_IntInt->iNative = 0;

	pFnGreater_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreater_IntInt, &Greater_IntInt_Parms, NULL);

	pFnGreater_IntInt->FunctionFlags |= 0x400;

	pFnGreater_IntInt->iNative = NativeIndex;

	return Greater_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Less_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0096]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

bool UObject::Less_IntInt(int A, int B)
{
	static UFunction* pFnLess_IntInt = NULL;

	if (!pFnLess_IntInt)
		pFnLess_IntInt = (UFunction*)UObject::GObjObjects()->Data[6628];

	UObject_execLess_IntInt_Parms Less_IntInt_Parms;
	Less_IntInt_Parms.A = A;
	Less_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnLess_IntInt->iNative;
	pFnLess_IntInt->iNative = 0;

	pFnLess_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLess_IntInt, &Less_IntInt_Parms, NULL);

	pFnLess_IntInt->FunctionFlags |= 0x400;

	pFnLess_IntInt->iNative = NativeIndex;

	return Less_IntInt_Parms.ReturnValue;
};

// Function Core.Object.GreaterGreaterGreater_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00C4]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::GreaterGreaterGreater_IntInt(int A, int B)
{
	static UFunction* pFnGreaterGreaterGreater_IntInt = NULL;

	if (!pFnGreaterGreaterGreater_IntInt)
		pFnGreaterGreaterGreater_IntInt = (UFunction*)UObject::GObjObjects()->Data[6632];

	UObject_execGreaterGreaterGreater_IntInt_Parms GreaterGreaterGreater_IntInt_Parms;
	GreaterGreaterGreater_IntInt_Parms.A = A;
	GreaterGreaterGreater_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnGreaterGreaterGreater_IntInt->iNative;
	pFnGreaterGreaterGreater_IntInt->iNative = 0;

	pFnGreaterGreaterGreater_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreaterGreaterGreater_IntInt, &GreaterGreaterGreater_IntInt_Parms, NULL);

	pFnGreaterGreaterGreater_IntInt->FunctionFlags |= 0x400;

	pFnGreaterGreaterGreater_IntInt->iNative = NativeIndex;

	return GreaterGreaterGreater_IntInt_Parms.ReturnValue;
};

// Function Core.Object.GreaterGreater_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0095]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::GreaterGreater_IntInt(int A, int B)
{
	static UFunction* pFnGreaterGreater_IntInt = NULL;

	if (!pFnGreaterGreater_IntInt)
		pFnGreaterGreater_IntInt = (UFunction*)UObject::GObjObjects()->Data[6636];

	UObject_execGreaterGreater_IntInt_Parms GreaterGreater_IntInt_Parms;
	GreaterGreater_IntInt_Parms.A = A;
	GreaterGreater_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnGreaterGreater_IntInt->iNative;
	pFnGreaterGreater_IntInt->iNative = 0;

	pFnGreaterGreater_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGreaterGreater_IntInt, &GreaterGreater_IntInt_Parms, NULL);

	pFnGreaterGreater_IntInt->FunctionFlags |= 0x400;

	pFnGreaterGreater_IntInt->iNative = NativeIndex;

	return GreaterGreater_IntInt_Parms.ReturnValue;
};

// Function Core.Object.LessLess_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0094]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::LessLess_IntInt(int A, int B)
{
	static UFunction* pFnLessLess_IntInt = NULL;

	if (!pFnLessLess_IntInt)
		pFnLessLess_IntInt = (UFunction*)UObject::GObjObjects()->Data[6640];

	UObject_execLessLess_IntInt_Parms LessLess_IntInt_Parms;
	LessLess_IntInt_Parms.A = A;
	LessLess_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnLessLess_IntInt->iNative;
	pFnLessLess_IntInt->iNative = 0;

	pFnLessLess_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLessLess_IntInt, &LessLess_IntInt_Parms, NULL);

	pFnLessLess_IntInt->FunctionFlags |= 0x400;

	pFnLessLess_IntInt->iNative = NativeIndex;

	return LessLess_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Subtract_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0093]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Subtract_IntInt(int A, int B)
{
	static UFunction* pFnSubtract_IntInt = NULL;

	if (!pFnSubtract_IntInt)
		pFnSubtract_IntInt = (UFunction*)UObject::GObjObjects()->Data[6644];

	UObject_execSubtract_IntInt_Parms Subtract_IntInt_Parms;
	Subtract_IntInt_Parms.A = A;
	Subtract_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnSubtract_IntInt->iNative;
	pFnSubtract_IntInt->iNative = 0;

	pFnSubtract_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_IntInt, &Subtract_IntInt_Parms, NULL);

	pFnSubtract_IntInt->FunctionFlags |= 0x400;

	pFnSubtract_IntInt->iNative = NativeIndex;

	return Subtract_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Add_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0092]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Add_IntInt(int A, int B)
{
	static UFunction* pFnAdd_IntInt = NULL;

	if (!pFnAdd_IntInt)
		pFnAdd_IntInt = (UFunction*)UObject::GObjObjects()->Data[6648];

	UObject_execAdd_IntInt_Parms Add_IntInt_Parms;
	Add_IntInt_Parms.A = A;
	Add_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnAdd_IntInt->iNative;
	pFnAdd_IntInt->iNative = 0;

	pFnAdd_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAdd_IntInt, &Add_IntInt_Parms, NULL);

	pFnAdd_IntInt->FunctionFlags |= 0x400;

	pFnAdd_IntInt->iNative = NativeIndex;

	return Add_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Percent_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00FD]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Percent_IntInt(int A, int B)
{
	static UFunction* pFnPercent_IntInt = NULL;

	if (!pFnPercent_IntInt)
		pFnPercent_IntInt = (UFunction*)UObject::GObjObjects()->Data[6652];

	UObject_execPercent_IntInt_Parms Percent_IntInt_Parms;
	Percent_IntInt_Parms.A = A;
	Percent_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnPercent_IntInt->iNative;
	pFnPercent_IntInt->iNative = 0;

	pFnPercent_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPercent_IntInt, &Percent_IntInt_Parms, NULL);

	pFnPercent_IntInt->FunctionFlags |= 0x400;

	pFnPercent_IntInt->iNative = NativeIndex;

	return Percent_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Divide_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0091]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Divide_IntInt(int A, int B)
{
	static UFunction* pFnDivide_IntInt = NULL;

	if (!pFnDivide_IntInt)
		pFnDivide_IntInt = (UFunction*)UObject::GObjObjects()->Data[6656];

	UObject_execDivide_IntInt_Parms Divide_IntInt_Parms;
	Divide_IntInt_Parms.A = A;
	Divide_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnDivide_IntInt->iNative;
	pFnDivide_IntInt->iNative = 0;

	pFnDivide_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivide_IntInt, &Divide_IntInt_Parms, NULL);

	pFnDivide_IntInt->FunctionFlags |= 0x400;

	pFnDivide_IntInt->iNative = NativeIndex;

	return Divide_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Multiply_IntInt
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0090]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )
// int                            B                              ( CPF_Parm )

int UObject::Multiply_IntInt(int A, int B)
{
	static UFunction* pFnMultiply_IntInt = NULL;

	if (!pFnMultiply_IntInt)
		pFnMultiply_IntInt = (UFunction*)UObject::GObjObjects()->Data[6660];

	UObject_execMultiply_IntInt_Parms Multiply_IntInt_Parms;
	Multiply_IntInt_Parms.A = A;
	Multiply_IntInt_Parms.B = B;

	unsigned short NativeIndex = pFnMultiply_IntInt->iNative;
	pFnMultiply_IntInt->iNative = 0;

	pFnMultiply_IntInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiply_IntInt, &Multiply_IntInt_Parms, NULL);

	pFnMultiply_IntInt->FunctionFlags |= 0x400;

	pFnMultiply_IntInt->iNative = NativeIndex;

	return Multiply_IntInt_Parms.ReturnValue;
};

// Function Core.Object.Subtract_PreInt
// [0x00023411] ( FUNC_Final | FUNC_Native ) iNative [0x008F]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )

int UObject::Subtract_PreInt(int A)
{
	static UFunction* pFnSubtract_PreInt = NULL;

	if (!pFnSubtract_PreInt)
		pFnSubtract_PreInt = (UFunction*)UObject::GObjObjects()->Data[6664];

	UObject_execSubtract_PreInt_Parms Subtract_PreInt_Parms;
	Subtract_PreInt_Parms.A = A;

	unsigned short NativeIndex = pFnSubtract_PreInt->iNative;
	pFnSubtract_PreInt->iNative = 0;

	pFnSubtract_PreInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtract_PreInt, &Subtract_PreInt_Parms, NULL);

	pFnSubtract_PreInt->FunctionFlags |= 0x400;

	pFnSubtract_PreInt->iNative = NativeIndex;

	return Subtract_PreInt_Parms.ReturnValue;
};

// Function Core.Object.Complement_PreInt
// [0x00023411] ( FUNC_Final | FUNC_Native ) iNative [0x008D]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            A                              ( CPF_Parm )

int UObject::Complement_PreInt(int A)
{
	static UFunction* pFnComplement_PreInt = NULL;

	if (!pFnComplement_PreInt)
		pFnComplement_PreInt = (UFunction*)UObject::GObjObjects()->Data[6668];

	UObject_execComplement_PreInt_Parms Complement_PreInt_Parms;
	Complement_PreInt_Parms.A = A;

	unsigned short NativeIndex = pFnComplement_PreInt->iNative;
	pFnComplement_PreInt->iNative = 0;

	pFnComplement_PreInt->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnComplement_PreInt, &Complement_PreInt_Parms, NULL);

	pFnComplement_PreInt->FunctionFlags |= 0x400;

	pFnComplement_PreInt->iNative = NativeIndex;

	return Complement_PreInt_Parms.ReturnValue;
};

// Function Core.Object.SubtractSubtract_Byte
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x008C]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::SubtractSubtract_Byte(unsigned char* A)
{
	static UFunction* pFnSubtractSubtract_Byte = NULL;

	if (!pFnSubtractSubtract_Byte)
		pFnSubtractSubtract_Byte = (UFunction*)UObject::GObjObjects()->Data[6671];

	UObject_execSubtractSubtract_Byte_Parms SubtractSubtract_Byte_Parms;

	unsigned short NativeIndex = pFnSubtractSubtract_Byte->iNative;
	pFnSubtractSubtract_Byte->iNative = 0;

	pFnSubtractSubtract_Byte->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractSubtract_Byte, &SubtractSubtract_Byte_Parms, NULL);

	pFnSubtractSubtract_Byte->FunctionFlags |= 0x400;

	pFnSubtractSubtract_Byte->iNative = NativeIndex;

	if (A)
		*A = SubtractSubtract_Byte_Parms.A;

	return SubtractSubtract_Byte_Parms.ReturnValue;
};

// Function Core.Object.AddAdd_Byte
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x008B]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::AddAdd_Byte(unsigned char* A)
{
	static UFunction* pFnAddAdd_Byte = NULL;

	if (!pFnAddAdd_Byte)
		pFnAddAdd_Byte = (UFunction*)UObject::GObjObjects()->Data[6674];

	UObject_execAddAdd_Byte_Parms AddAdd_Byte_Parms;

	unsigned short NativeIndex = pFnAddAdd_Byte->iNative;
	pFnAddAdd_Byte->iNative = 0;

	pFnAddAdd_Byte->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddAdd_Byte, &AddAdd_Byte_Parms, NULL);

	pFnAddAdd_Byte->FunctionFlags |= 0x400;

	pFnAddAdd_Byte->iNative = NativeIndex;

	if (A)
		*A = AddAdd_Byte_Parms.A;

	return AddAdd_Byte_Parms.ReturnValue;
};

// Function Core.Object.SubtractSubtract_PreByte
// [0x00423411] ( FUNC_Final | FUNC_Native ) iNative [0x008A]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::SubtractSubtract_PreByte(unsigned char* A)
{
	static UFunction* pFnSubtractSubtract_PreByte = NULL;

	if (!pFnSubtractSubtract_PreByte)
		pFnSubtractSubtract_PreByte = (UFunction*)UObject::GObjObjects()->Data[6677];

	UObject_execSubtractSubtract_PreByte_Parms SubtractSubtract_PreByte_Parms;

	unsigned short NativeIndex = pFnSubtractSubtract_PreByte->iNative;
	pFnSubtractSubtract_PreByte->iNative = 0;

	pFnSubtractSubtract_PreByte->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractSubtract_PreByte, &SubtractSubtract_PreByte_Parms, NULL);

	pFnSubtractSubtract_PreByte->FunctionFlags |= 0x400;

	pFnSubtractSubtract_PreByte->iNative = NativeIndex;

	if (A)
		*A = SubtractSubtract_PreByte_Parms.A;

	return SubtractSubtract_PreByte_Parms.ReturnValue;
};

// Function Core.Object.AddAdd_PreByte
// [0x00423411] ( FUNC_Final | FUNC_Native ) iNative [0x0089]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::AddAdd_PreByte(unsigned char* A)
{
	static UFunction* pFnAddAdd_PreByte = NULL;

	if (!pFnAddAdd_PreByte)
		pFnAddAdd_PreByte = (UFunction*)UObject::GObjObjects()->Data[6680];

	UObject_execAddAdd_PreByte_Parms AddAdd_PreByte_Parms;

	unsigned short NativeIndex = pFnAddAdd_PreByte->iNative;
	pFnAddAdd_PreByte->iNative = 0;

	pFnAddAdd_PreByte->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddAdd_PreByte, &AddAdd_PreByte_Parms, NULL);

	pFnAddAdd_PreByte->FunctionFlags |= 0x400;

	pFnAddAdd_PreByte->iNative = NativeIndex;

	if (A)
		*A = AddAdd_PreByte_Parms.A;

	return AddAdd_PreByte_Parms.ReturnValue;
};

// Function Core.Object.SubtractEqual_ByteByte
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0088]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::SubtractEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static UFunction* pFnSubtractEqual_ByteByte = NULL;

	if (!pFnSubtractEqual_ByteByte)
		pFnSubtractEqual_ByteByte = (UFunction*)UObject::GObjObjects()->Data[6683];

	UObject_execSubtractEqual_ByteByte_Parms SubtractEqual_ByteByte_Parms;
	SubtractEqual_ByteByte_Parms.B = B;

	unsigned short NativeIndex = pFnSubtractEqual_ByteByte->iNative;
	pFnSubtractEqual_ByteByte->iNative = 0;

	pFnSubtractEqual_ByteByte->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubtractEqual_ByteByte, &SubtractEqual_ByteByte_Parms, NULL);

	pFnSubtractEqual_ByteByte->FunctionFlags |= 0x400;

	pFnSubtractEqual_ByteByte->iNative = NativeIndex;

	if (A)
		*A = SubtractEqual_ByteByte_Parms.A;

	return SubtractEqual_ByteByte_Parms.ReturnValue;
};

// Function Core.Object.AddEqual_ByteByte
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0087]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::AddEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static UFunction* pFnAddEqual_ByteByte = NULL;

	if (!pFnAddEqual_ByteByte)
		pFnAddEqual_ByteByte = (UFunction*)UObject::GObjObjects()->Data[6686];

	UObject_execAddEqual_ByteByte_Parms AddEqual_ByteByte_Parms;
	AddEqual_ByteByte_Parms.B = B;

	unsigned short NativeIndex = pFnAddEqual_ByteByte->iNative;
	pFnAddEqual_ByteByte->iNative = 0;

	pFnAddEqual_ByteByte->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddEqual_ByteByte, &AddEqual_ByteByte_Parms, NULL);

	pFnAddEqual_ByteByte->FunctionFlags |= 0x400;

	pFnAddEqual_ByteByte->iNative = NativeIndex;

	if (A)
		*A = AddEqual_ByteByte_Parms.A;

	return AddEqual_ByteByte_Parms.ReturnValue;
};

// Function Core.Object.DivideEqual_ByteByte
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0086]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::DivideEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static UFunction* pFnDivideEqual_ByteByte = NULL;

	if (!pFnDivideEqual_ByteByte)
		pFnDivideEqual_ByteByte = (UFunction*)UObject::GObjObjects()->Data[6690];

	UObject_execDivideEqual_ByteByte_Parms DivideEqual_ByteByte_Parms;
	DivideEqual_ByteByte_Parms.B = B;

	unsigned short NativeIndex = pFnDivideEqual_ByteByte->iNative;
	pFnDivideEqual_ByteByte->iNative = 0;

	pFnDivideEqual_ByteByte->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDivideEqual_ByteByte, &DivideEqual_ByteByte_Parms, NULL);

	pFnDivideEqual_ByteByte->FunctionFlags |= 0x400;

	pFnDivideEqual_ByteByte->iNative = NativeIndex;

	if (A)
		*A = DivideEqual_ByteByte_Parms.A;

	return DivideEqual_ByteByte_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_ByteFloat
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x00C6]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          B                              ( CPF_Parm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::MultiplyEqual_ByteFloat(float B, unsigned char* A)
{
	static UFunction* pFnMultiplyEqual_ByteFloat = NULL;

	if (!pFnMultiplyEqual_ByteFloat)
		pFnMultiplyEqual_ByteFloat = (UFunction*)UObject::GObjObjects()->Data[6694];

	UObject_execMultiplyEqual_ByteFloat_Parms MultiplyEqual_ByteFloat_Parms;
	MultiplyEqual_ByteFloat_Parms.B = B;

	unsigned short NativeIndex = pFnMultiplyEqual_ByteFloat->iNative;
	pFnMultiplyEqual_ByteFloat->iNative = 0;

	pFnMultiplyEqual_ByteFloat->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyEqual_ByteFloat, &MultiplyEqual_ByteFloat_Parms, NULL);

	pFnMultiplyEqual_ByteFloat->FunctionFlags |= 0x400;

	pFnMultiplyEqual_ByteFloat->iNative = NativeIndex;

	if (A)
		*A = MultiplyEqual_ByteFloat_Parms.A;

	return MultiplyEqual_ByteFloat_Parms.ReturnValue;
};

// Function Core.Object.MultiplyEqual_ByteByte
// [0x00423401] ( FUNC_Final | FUNC_Native ) iNative [0x0085]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  B                              ( CPF_Parm )
// unsigned char                  A                              ( CPF_Parm | CPF_OutParm )

unsigned char UObject::MultiplyEqual_ByteByte(unsigned char B, unsigned char* A)
{
	static UFunction* pFnMultiplyEqual_ByteByte = NULL;

	if (!pFnMultiplyEqual_ByteByte)
		pFnMultiplyEqual_ByteByte = (UFunction*)UObject::GObjObjects()->Data[6698];

	UObject_execMultiplyEqual_ByteByte_Parms MultiplyEqual_ByteByte_Parms;
	MultiplyEqual_ByteByte_Parms.B = B;

	unsigned short NativeIndex = pFnMultiplyEqual_ByteByte->iNative;
	pFnMultiplyEqual_ByteByte->iNative = 0;

	pFnMultiplyEqual_ByteByte->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnMultiplyEqual_ByteByte, &MultiplyEqual_ByteByte_Parms, NULL);

	pFnMultiplyEqual_ByteByte->FunctionFlags |= 0x400;

	pFnMultiplyEqual_ByteByte->iNative = NativeIndex;

	if (A)
		*A = MultiplyEqual_ByteByte_Parms.A;

	return MultiplyEqual_ByteByte_Parms.ReturnValue;
};

// Function Core.Object.OrOr_BoolBool
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0084]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  A                              ( CPF_Parm )
// unsigned long                  B                              ( CPF_Parm | CPF_SkipParm )

bool UObject::OrOr_BoolBool(unsigned long A, unsigned long B)
{
	static UFunction* pFnOrOr_BoolBool = NULL;

	if (!pFnOrOr_BoolBool)
		pFnOrOr_BoolBool = (UFunction*)UObject::GObjObjects()->Data[6702];

	UObject_execOrOr_BoolBool_Parms OrOr_BoolBool_Parms;
	OrOr_BoolBool_Parms.A = A;
	OrOr_BoolBool_Parms.B = B;

	unsigned short NativeIndex = pFnOrOr_BoolBool->iNative;
	pFnOrOr_BoolBool->iNative = 0;

	pFnOrOr_BoolBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnOrOr_BoolBool, &OrOr_BoolBool_Parms, NULL);

	pFnOrOr_BoolBool->FunctionFlags |= 0x400;

	pFnOrOr_BoolBool->iNative = NativeIndex;

	return OrOr_BoolBool_Parms.ReturnValue;
};

// Function Core.Object.XorXor_BoolBool
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0083]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  A                              ( CPF_Parm )
// unsigned long                  B                              ( CPF_Parm )

bool UObject::XorXor_BoolBool(unsigned long A, unsigned long B)
{
	static UFunction* pFnXorXor_BoolBool = NULL;

	if (!pFnXorXor_BoolBool)
		pFnXorXor_BoolBool = (UFunction*)UObject::GObjObjects()->Data[6706];

	UObject_execXorXor_BoolBool_Parms XorXor_BoolBool_Parms;
	XorXor_BoolBool_Parms.A = A;
	XorXor_BoolBool_Parms.B = B;

	unsigned short NativeIndex = pFnXorXor_BoolBool->iNative;
	pFnXorXor_BoolBool->iNative = 0;

	pFnXorXor_BoolBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnXorXor_BoolBool, &XorXor_BoolBool_Parms, NULL);

	pFnXorXor_BoolBool->FunctionFlags |= 0x400;

	pFnXorXor_BoolBool->iNative = NativeIndex;

	return XorXor_BoolBool_Parms.ReturnValue;
};

// Function Core.Object.AndAnd_BoolBool
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x0082]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  A                              ( CPF_Parm )
// unsigned long                  B                              ( CPF_Parm | CPF_SkipParm )

bool UObject::AndAnd_BoolBool(unsigned long A, unsigned long B)
{
	static UFunction* pFnAndAnd_BoolBool = NULL;

	if (!pFnAndAnd_BoolBool)
		pFnAndAnd_BoolBool = (UFunction*)UObject::GObjObjects()->Data[6710];

	UObject_execAndAnd_BoolBool_Parms AndAnd_BoolBool_Parms;
	AndAnd_BoolBool_Parms.A = A;
	AndAnd_BoolBool_Parms.B = B;

	unsigned short NativeIndex = pFnAndAnd_BoolBool->iNative;
	pFnAndAnd_BoolBool->iNative = 0;

	pFnAndAnd_BoolBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAndAnd_BoolBool, &AndAnd_BoolBool_Parms, NULL);

	pFnAndAnd_BoolBool->FunctionFlags |= 0x400;

	pFnAndAnd_BoolBool->iNative = NativeIndex;

	return AndAnd_BoolBool_Parms.ReturnValue;
};

// Function Core.Object.NotEqual_BoolBool
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00F3]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  A                              ( CPF_Parm )
// unsigned long                  B                              ( CPF_Parm )

bool UObject::NotEqual_BoolBool(unsigned long A, unsigned long B)
{
	static UFunction* pFnNotEqual_BoolBool = NULL;

	if (!pFnNotEqual_BoolBool)
		pFnNotEqual_BoolBool = (UFunction*)UObject::GObjObjects()->Data[6714];

	UObject_execNotEqual_BoolBool_Parms NotEqual_BoolBool_Parms;
	NotEqual_BoolBool_Parms.A = A;
	NotEqual_BoolBool_Parms.B = B;

	unsigned short NativeIndex = pFnNotEqual_BoolBool->iNative;
	pFnNotEqual_BoolBool->iNative = 0;

	pFnNotEqual_BoolBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNotEqual_BoolBool, &NotEqual_BoolBool_Parms, NULL);

	pFnNotEqual_BoolBool->FunctionFlags |= 0x400;

	pFnNotEqual_BoolBool->iNative = NativeIndex;

	return NotEqual_BoolBool_Parms.ReturnValue;
};

// Function Core.Object.EqualEqual_BoolBool
// [0x00023401] ( FUNC_Final | FUNC_Native ) iNative [0x00F2]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  A                              ( CPF_Parm )
// unsigned long                  B                              ( CPF_Parm )

bool UObject::EqualEqual_BoolBool(unsigned long A, unsigned long B)
{
	static UFunction* pFnEqualEqual_BoolBool = NULL;

	if (!pFnEqualEqual_BoolBool)
		pFnEqualEqual_BoolBool = (UFunction*)UObject::GObjObjects()->Data[6718];

	UObject_execEqualEqual_BoolBool_Parms EqualEqual_BoolBool_Parms;
	EqualEqual_BoolBool_Parms.A = A;
	EqualEqual_BoolBool_Parms.B = B;

	unsigned short NativeIndex = pFnEqualEqual_BoolBool->iNative;
	pFnEqualEqual_BoolBool->iNative = 0;

	pFnEqualEqual_BoolBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEqualEqual_BoolBool, &EqualEqual_BoolBool_Parms, NULL);

	pFnEqualEqual_BoolBool->FunctionFlags |= 0x400;

	pFnEqualEqual_BoolBool->iNative = NativeIndex;

	return EqualEqual_BoolBool_Parms.ReturnValue;
};

// Function Core.Object.Not_PreBool
// [0x00023411] ( FUNC_Final | FUNC_Native ) iNative [0x0081]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  A                              ( CPF_Parm )

bool UObject::Not_PreBool(unsigned long A)
{
	static UFunction* pFnNot_PreBool = NULL;

	if (!pFnNot_PreBool)
		pFnNot_PreBool = (UFunction*)UObject::GObjObjects()->Data[6722];

	UObject_execNot_PreBool_Parms Not_PreBool_Parms;
	Not_PreBool_Parms.A = A;

	unsigned short NativeIndex = pFnNot_PreBool->iNative;
	pFnNot_PreBool->iNative = 0;

	pFnNot_PreBool->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnNot_PreBool, &Not_PreBool_Parms, NULL);

	pFnNot_PreBool->FunctionFlags |= 0x400;

	pFnNot_PreBool->iNative = NativeIndex;

	return Not_PreBool_Parms.ReturnValue;
};

// Function Core.DistributionVector.GetVectorValue
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// struct FVector                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          F                              ( CPF_OptionalParm | CPF_Parm )
// int                            LastExtreme                    ( CPF_OptionalParm | CPF_Parm )

struct FVector UDistributionVector::GetVectorValue(float F, int LastExtreme)
{
	static UFunction* pFnGetVectorValue = NULL;

	if (!pFnGetVectorValue)
		pFnGetVectorValue = (UFunction*)UObject::GObjObjects()->Data[6957];

	UDistributionVector_execGetVectorValue_Parms GetVectorValue_Parms;
	GetVectorValue_Parms.F = F;
	GetVectorValue_Parms.LastExtreme = LastExtreme;

	pFnGetVectorValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVectorValue, &GetVectorValue_Parms, NULL);

	pFnGetVectorValue->FunctionFlags |= 0x400;

	return GetVectorValue_Parms.ReturnValue;
};

// Function Core.DistributionFloat.GetFloatValue
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// float                          ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// float                          F                              ( CPF_OptionalParm | CPF_Parm )

float UDistributionFloat::GetFloatValue(float F)
{
	static UFunction* pFnGetFloatValue = NULL;

	if (!pFnGetFloatValue)
		pFnGetFloatValue = (UFunction*)UObject::GObjObjects()->Data[6947];

	UDistributionFloat_execGetFloatValue_Parms GetFloatValue_Parms;
	GetFloatValue_Parms.F = F;

	pFnGetFloatValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetFloatValue, &GetFloatValue_Parms, NULL);

	pFnGetFloatValue->FunctionFlags |= 0x400;

	return GetFloatValue_Parms.ReturnValue;
};

// Function Core.HelpCommandlet.Main
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Params                         ( CPF_Parm | CPF_NeedCtorLink )

int UHelpCommandlet::eventMain(struct FString Params)
{
	static UFunction* pFnMain = NULL;

	if (!pFnMain)
		pFnMain = (UFunction*)UObject::GObjObjects()->Data[6973];

	UHelpCommandlet_eventMain_Parms Main_Parms;
	memcpy(&Main_Parms.Params, &Params, 0xC);

	this->ProcessEvent(pFnMain, &Main_Parms, NULL);

	return Main_Parms.ReturnValue;
};

// Function Core.Commandlet.Main
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Params                         ( CPF_Parm | CPF_NeedCtorLink )

int UCommandlet::eventMain(struct FString Params)
{
	static UFunction* pFnMain = NULL;

	if (!pFnMain)
		pFnMain = (UFunction*)UObject::GObjObjects()->Data[6939];

	UCommandlet_eventMain_Parms Main_Parms;
	memcpy(&Main_Parms.Params, &Params, 0xC);

	this->ProcessEvent(pFnMain, &Main_Parms, NULL);

	return Main_Parms.ReturnValue;
};

#ifdef _MSC_VER
#pragma pack ( pop )
#endif