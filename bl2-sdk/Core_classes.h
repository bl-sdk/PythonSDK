#pragma once
#ifndef CORECLASSES_H
#define CORECLASSES_H

#include "stdafx.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Core_classes.h
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
# Constants
# ========================================================================================= #
*/

#define CONST_MAX_OBJECT_PATH_COMPONENTS                         6
#define CONST_InvAspectRatio16x9                                 0.56249
#define CONST_InvAspectRatio5x4                                  0.8
#define CONST_InvAspectRatio4x3                                  0.75
#define CONST_AspectRatio16x9                                    1.77778
#define CONST_AspectRatio5x4                                     1.25
#define CONST_AspectRatio4x3                                     1.33333
#define CONST_INDEX_NONE                                         -1
#define CONST_UnrRotToDeg                                        0.00549316540360483
#define CONST_DegToUnrRot                                        182.0444
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_Pi                                                 3.1415926535897932
#define CONST_MaxInt                                             0x7fffffff

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Core.Object.EDebugBreakType
/*enum EDebugBreakType
{
	DEBUGGER_NativeOnly                                = 0,
	DEBUGGER_ScriptOnly                                = 1,
	DEBUGGER_Both                                      = 2,
	DEBUGGER_MAX                                       = 3
};*/

// Enum Core.Object.EAutomatedRunResult
/*enum EAutomatedRunResult
{
	ARR_Unknown                                        = 0,
	ARR_OOM                                            = 1,
	ARR_Passed                                         = 2,
	ARR_MAX                                            = 3
};*/

// Enum Core.Object.EAspectRatioAxisConstraint
/*enum EAspectRatioAxisConstraint
{
	AspectRatio_MaintainYFOV                           = 0,
	AspectRatio_MaintainXFOV                           = 1,
	AspectRatio_MajorAxisFOV                           = 2,
	AspectRatio_MAX                                    = 3
};*/

// Enum Core.Object.EInterpCurveMode
/*enum EInterpCurveMode
{
	CIM_Linear                                         = 0,
	CIM_CurveAuto                                      = 1,
	CIM_Constant                                       = 2,
	CIM_CurveUser                                      = 3,
	CIM_CurveBreak                                     = 4,
	CIM_CurveAutoClamped                               = 5,
	CIM_MAX                                            = 6
};*/

// Enum Core.Object.EInterpMethodType
/*enum EInterpMethodType
{
	IMT_UseFixedTangentEvalAndNewAutoTangents          = 0,
	IMT_UseFixedTangentEval                            = 1,
	IMT_UseBrokenTangentEval                           = 2,
	IMT_MAX                                            = 3
};*/

// Enum Core.Object.EAxis
/*enum EAxis
{
	AXIS_NONE                                          = 0,
	AXIS_X                                             = 1,
	AXIS_Y                                             = 2,
	AXIS_BLANK                                         = 3,
	AXIS_Z                                             = 4,
	AXIS_MAX                                           = 5
};*/

// Enum Core.Object.ETickingGroup
/*enum ETickingGroup
{
	TG_PreAsyncWork                                    = 0,
	TG_DuringAsyncWork                                 = 1,
	TG_PostAsyncWork                                   = 2,
	TG_PostUpdateWork                                  = 3,
	TG_EffectsUpdateWork                               = 4,
	TG_MAX                                             = 5
};*/

// Enum Core.Object.EInputEvent
/*enum EInputEvent
{
	IE_Pressed                                         = 0,
	IE_Released                                        = 1,
	IE_Repeat                                          = 2,
	IE_DoubleClick                                     = 3,
	IE_Axis                                            = 4,
	IE_MAX                                             = 5
};*/

// Enum Core.Object.AlphaBlendType
/*enum AlphaBlendType
{
	ABT_Linear                                         = 0,
	ABT_Cubic                                          = 1,
	ABT_Sinusoidal                                     = 2,
	ABT_EaseInOutExponent2                             = 3,
	ABT_EaseInOutExponent3                             = 4,
	ABT_EaseInOutExponent4                             = 5,
	ABT_EaseInOutExponent5                             = 6,
	ABT_MAX                                            = 7
};*/

// Enum Core.AttributeModifier.EModifierType
/*enum EModifierType
{
	MT_Scale                                           = 0,
	MT_PreAdd                                          = 1,
	MT_PostAdd                                         = 2,
	MT_MAX                                             = 3
};*/

// Enum Core.DistributionVector.EDistributionVectorLockFlags
/*enum EDistributionVectorLockFlags
{
	EDVLF_None                                         = 0,
	EDVLF_XY                                           = 1,
	EDVLF_XZ                                           = 2,
	EDVLF_YZ                                           = 3,
	EDVLF_XYZ                                          = 4,
	EDVLF_MAX                                          = 5
};*/

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
/*enum EDistributionVectorMirrorFlags
{
	EDVMF_Same                                         = 0,
	EDVMF_Different                                    = 1,
	EDVMF_Mirror                                       = 2,
	EDVMF_MAX                                          = 3
};*/

/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Core.Object
// 0x003C
class UObject
{
public:
	//struct FPointer                                    VfTableObject;                                    		// 0x0000 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer                                    HashNext;                                         		// 0x0004 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FQWord                                      ObjectFlags;                                      		// 0x0008 (0x0008) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    HashOuterNext;                                    		// 0x0010 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    StateFrame;                                       		// 0x0014 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     Linker;                                           		// 0x0018 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer                                    LinkerIndex;                                      		// 0x001C (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                ObjectInternalInteger;                            		// 0x0020 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                NetIndex;                                         		// 0x0024 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	class UObject*                                     Outer;                                            		// 0x0028 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FName                                       Name;                                             		// 0x002C (0x0008) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
	class UClass*                                      Class;                                            		// 0x0034 (0x0004) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     ObjectArchetype;                                  		// 0x0038 (0x0004) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static TArray< UObject* >* GObjObjects();

	std::string GetName();
	std::string GetNameCPP();
	std::string GetFullName();

	template< class T > static T* FindObject(const std::string& ObjectFullName)
	{
		while (!UObject::GObjObjects())
			Sleep(100);

		while (!FName::Names())
			Sleep(100);

		for (size_t i = 0; i < UObject::GObjObjects()->Count; ++i)
		{
			UObject* Object = UObject::GObjObjects()->Data[i];

			// skip no T class objects
			if
				(
					!Object
					|| !Object->IsA(T::StaticClass())
					)
				continue;

			// check
			if (Object->GetFullName() == ObjectFullName)
				return (T*)Object;
		}

		return nullptr;
	}

	static UObject* FindObjectByFullName(const std::string& ObjectFullName)
	{
		while (!UObject::GObjObjects())
			Sleep(100);

		while (!FName::Names())
			Sleep(100);

		for (size_t i = 0; i < UObject::GObjObjects()->Count; ++i)
		{
			UObject* Object = UObject::GObjObjects()->Data[i];
			if (Object && Object->GetFullName() == ObjectFullName)
				return Object;
		}
		return nullptr;
	}


	static std::vector<UObject*> FindObjectsRegex(const std::string& regexString)
	{
		std::regex re = std::regex(regexString);
		std::vector<UObject *> ret;
		while (!UObject::GObjObjects())
			Sleep(100);

		while (!FName::Names())
			Sleep(100);

		for (size_t i = 0; i < UObject::GObjObjects()->Count; ++i)
		{
			UObject* Object = UObject::GObjObjects()->Data[i];
			if (Object && std::regex_match(Object->GetFullName(), re))
				ret.push_back(Object);
		}
		return ret;
	}

	static std::vector<UObject*> FindObjectsContaining(const std::string& stringLookup)
	{
		std::vector<UObject *> ret;
		while (!UObject::GObjObjects())
			Sleep(100);

		while (!FName::Names())
			Sleep(100);

		for (size_t i = 0; i < UObject::GObjObjects()->Count; ++i)
		{
			UObject* Object = UObject::GObjObjects()->Data[i];
			if (Object && Object->GetFullName().find(stringLookup) != std::string::npos)
				ret.push_back(Object);
		}
		return ret;
	}

	static UClass* FindClass(char* ClassFullName);

	bool IsA(UClass* pClass) const;

	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[2];

		return pClassPointer;
	};

	class UPackage* GetPackageObject() {
		UObject *pkg;
		UObject *outer = this->Outer;
		while (outer) {
			pkg = outer;
			outer = pkg->Outer;
		}
		return (UPackage*)pkg;
	};

	bool IsRelevantForDebugging(class UObject* Source);
	class UObject* GetGlobalDebugTarget();
	void SetGlobalDebugTarget(class UObject* Target);
	void LogContentDebug(struct FString Message);
	struct FString GetLanguage();
	int GetRandomOptionSumFrequency(TArray< float >* FreqList);
	int GetBuildChangelistNumber();
	int GetEngineVersion();
	void GetSystemTime(int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec);
	struct FString TimeStamp();
	struct FVector TransformVectorByRotation(struct FRotator SourceRotation, struct FVector SourceVector, unsigned long bInverse);
	struct FName GetPackageName();
	bool IsPendingKill();
	float ByteToFloat(unsigned char inputByte, unsigned long bSigned);
	unsigned char FloatToByte(float inputFloat, unsigned long bSigned);
	float UnwindHeading(float A);
	float FindDeltaAngle(float A1, float A2);
	float GetHeadingAngle(struct FVector Dir);
	void GetAngularDegreesFromRadians(struct FVector2D* OutFOV);
	void GetAngularFromDotDist(struct FVector2D DotDist, struct FVector2D* OutAngDist);
	bool GetAngularDistance(struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutAngularDist);
	bool GetDotDistance(struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutDotDist);
	struct FVector PointProjectToPlane(struct FVector Point, struct FVector A, struct FVector B, struct FVector C);
	float PointDistToPlane(struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector* out_ClosestPoint);
	float PointDistToSegment(struct FVector Point, struct FVector StartPoint, struct FVector EndPoint, struct FVector* OutClosestPoint);
	float PointDistToLine(struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector* OutClosestPoint);
	bool GetPerObjectConfigSections(class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray< struct FString >* out_SectionNames);
	void StaticSaveConfig();
	void SaveConfig();
	struct FString GetAttributeModiferDescriptor(struct FName AttributeName);
	float GetAttributeValueByName(struct FName AttributeName);
	bool RemoveModifier(class UAttributeModifier* mod, struct FName AttributeName, unsigned long bSuppressNotify);
	bool AddModifier(class UAttributeModifier* mod, struct FName AttributeName, unsigned long bSuppressNotify);
	class UObject* FindObject(struct FString ObjectName, class UClass* ObjectClass);
	class UObject* DynamicLoadObject(struct FString ObjectName, class UClass* ObjectClass, unsigned long MayFail);
	struct FName GetEnum(class UObject* E, int I);
	void Disable(struct FName ProbeFunc);
	void Enable(struct FName ProbeFunc);
	void eventContinuedState();
	void eventPausedState();
	void eventPoppedState();
	void eventPushedState();
	void eventEndState(struct FName NextStateName);
	void eventBeginState(struct FName PreviousStateName);
	void BreakPoint(class UObject* SomeObject);
	void PrintScriptStack();
	void DumpStateStack();
	void PopState(unsigned long bPopAll);
	void PushState(struct FName NewState, struct FName NewLabel);
	struct FName GetStateName();
	bool IsChildState(struct FName TestState, struct FName TestParentState);
	bool IsInState(struct FName TestState, unsigned long bTestStateStack);
	void GotoState(struct FName NewState, struct FName Label, unsigned long bForceEvents, unsigned long bKeepStack);
	bool IsUTracing();
	void SetUTracing(unsigned long bShouldUTrace);
	struct FName GetFuncName();
	void DebugBreak(int UserFlags, unsigned char DebuggerType);
	struct FString GetScriptTrace();
	void ScriptTrace();
	struct FString ParseLocalizedPropertyPath(struct FString PathName);
	struct FString Localize(struct FString SectionName, struct FString KeyName, struct FString PackageName);
	void LogIndentedInternal(struct FString S, struct FName LogTag, int IndentationLevelChange);
	void WarnInternal(struct FString S);
	void LogInternal(struct FString S, struct FName Tag);
	struct FString GetStringForNameBasedObjectPath(struct FNameBasedObjectPath ObjectPath);
	void SetNameBasedObjectPath(class UObject* Object, struct FNameBasedObjectPath* ObjectPath);
	bool FlagHasBeenTrueFor(float TimeSeconds, struct FFlag* theFlag);
	float FlagTimeRemaining(struct FFlag* theFlag);
	float FlagTimeSinceRaised(struct FFlag* theFlag);
	void FlagSetValue(unsigned long bNewValue, unsigned long bForceTimeStamp, struct FFlag* theFlag);
	bool FlagIsLowered(struct FFlag* theFlag);
	bool FlagIsRaised(struct FFlag* theFlag);
	bool FlagIsFalse(struct FFlag* theFlag);
	bool FlagIsTrue(struct FFlag* theFlag);
	void FlagSetTrueTimed(float Duration, struct FFlag* theFlag);
	float SmartVectTimeRemaining(struct FSmartVector* theSV);
	float SmartVectTimeSinceSet(struct FSmartVector* theSV);
	bool SmartVectGetVector(struct FSmartVector* theSV, struct FVector* OutVector);
	bool SmartVectIsSet(struct FSmartVector* theSV);
	void SmartVectSetVectorTimed(struct FVector InVector, float Duration, struct FSmartVector* theSV);
	struct FVector SmartVectValue(struct FSmartVector* theSV);
	void SmartVectReset(struct FSmartVector* theSV);
	void SmartVectSetVector(struct FVector InVector, unsigned long bUpdateTime, struct FSmartVector* theSV);
	struct FLinearColor Subtract_LinearColorLinearColor(struct FLinearColor A, struct FLinearColor B);
	struct FLinearColor Multiply_LinearColorFloat(struct FLinearColor LC, float Mult);
	struct FLinearColor ColorToLinearColor(struct FColor OldColor);
	struct FLinearColor MakeLinearColor(float R, float G, float B, float A);
	struct FString GetHTMLColor(struct FColor* C);
	struct FColor LerpColor(struct FColor A, struct FColor B, float Alpha);
	struct FColor MakeColor(unsigned char R, unsigned char G, unsigned char B, unsigned char A);
	struct FColor Add_ColorColor(struct FColor A, struct FColor B);
	struct FColor Multiply_ColorFloat(struct FColor A, float B);
	struct FColor Multiply_FloatColor(float A, struct FColor B);
	struct FColor Subtract_ColorColor(struct FColor A, struct FColor B);
	struct FVector2D EvalInterpCurveVector2D(struct FInterpCurveVector2D Vector2DCurve, float InVal);
	struct FVector EvalInterpCurveVector(struct FInterpCurveVector VectorCurve, float InVal);
	float EvalInterpCurveFloat(struct FInterpCurveFloat FloatCurve, float InVal);
	struct FVector2D vect2d(float InX, float InY);
	float GetMappedRangeValue(struct FVector2D InputRange, struct FVector2D OutputRange, float Value);
	float GetRangePctByValue(struct FVector2D Range, float Value);
	float GetRangeValueByPct(struct FVector2D Range, float Pct);
	struct FVector2D SubtractEqual_Vector2DVector2D(struct FVector2D B, struct FVector2D* A);
	struct FVector2D AddEqual_Vector2DVector2D(struct FVector2D B, struct FVector2D* A);
	struct FVector2D DivideEqual_Vector2DFloat(float B, struct FVector2D* A);
	struct FVector2D MultiplyEqual_Vector2DFloat(float B, struct FVector2D* A);
	struct FVector2D Divide_Vector2DFloat(struct FVector2D A, float B);
	struct FVector2D Multiply_Vector2DFloat(struct FVector2D A, float B);
	struct FVector2D Subtract_Vector2DVector2D(struct FVector2D A, struct FVector2D B);
	struct FVector2D Add_Vector2DVector2D(struct FVector2D A, struct FVector2D B);
	struct FQuat Subtract_QuatQuat(struct FQuat A, struct FQuat B);
	struct FQuat Add_QuatQuat(struct FQuat A, struct FQuat B);
	struct FQuat QuatSlerp(struct FQuat A, struct FQuat B, float Alpha, unsigned long bShortestPath);
	struct FRotator QuatToRotator(struct FQuat A);
	struct FQuat QuatFromRotator(struct FRotator A);
	struct FQuat QuatFromAxisAndAngle(struct FVector Axis, float Angle);
	struct FQuat QuatFindBetween(struct FVector A, struct FVector B);
	struct FVector QuatRotateVector(struct FQuat A, struct FVector B);
	struct FQuat QuatInvert(struct FQuat A);
	float QuatDot(struct FQuat A, struct FQuat B);
	struct FQuat QuatProduct(struct FQuat A, struct FQuat B);
	struct FVector MatrixGetAxis(struct FMatrix TM, unsigned char Axis);
	struct FVector MatrixGetOrigin(struct FMatrix TM);
	struct FRotator MatrixGetRotator(struct FMatrix TM);
	struct FMatrix MakeRotationMatrix(struct FRotator Rotation);
	struct FMatrix MakeRotationTranslationMatrix(struct FVector Translation, struct FRotator Rotation);
	struct FVector InverseTransformNormal(struct FMatrix TM, struct FVector A);
	struct FVector TransformNormal(struct FMatrix TM, struct FVector A);
	struct FVector InverseTransformVector(struct FMatrix TM, struct FVector A);
	struct FVector TransformVector(struct FMatrix TM, struct FVector A);
	struct FMatrix Multiply_MatrixMatrix(struct FMatrix A, struct FMatrix B);
	bool NotEqual_NameName(struct FName A, struct FName B);
	bool EqualEqual_NameName(struct FName A, struct FName B);
	class UInterface* QueryInterface(class UClass* InterfaceClass);
	bool IsA(struct FName ClassName);
	bool ClassIsChildOf(class UClass* TestClass, class UClass* ParentClass);
	bool NotEqual_InterfaceInterface(class UInterface* A, class UInterface* B);
	bool EqualEqual_InterfaceInterface(class UInterface* A, class UInterface* B);
	bool NotEqual_ObjectObject(class UObject* A, class UObject* B);
	bool EqualEqual_ObjectObject(class UObject* A, class UObject* B);
	struct FString GuidToString(struct FGuid* G);
	struct FString PathName(class UObject* CheckObject);
	TArray< struct FString > SplitString(struct FString Source, struct FString Delimiter, unsigned long bCullEmpty);
	void ParseStringIntoArray(struct FString BaseString, struct FString delim, unsigned long bCullEmpty, TArray< struct FString >* Pieces);
	void JoinArray(TArray< struct FString > StringArray, struct FString delim, unsigned long bIgnoreBlanks, struct FString* out_Result);
	struct FString GetRightMost(struct FString Text);
	struct FString Split(struct FString Text, struct FString SplitStr, unsigned long bOmitSplitStr);
	int StringHash(struct FString S);
	struct FString Repl(struct FString Src, struct FString Match, struct FString With, unsigned long bCaseSensitive);
	int Asc(struct FString S);
	struct FString Chr(int I);
	struct FString Locs(struct FString S);
	struct FString Caps(struct FString S);
	struct FString Right(struct FString S, int I);
	struct FString Left(struct FString S, int I);
	struct FString Mid(struct FString S, int I, int J);
	int InStr(struct FString S, struct FString T, unsigned long bSearchFromRight, unsigned long bIgnoreCase, int StartPos);
	int Len(struct FString S);
	struct FString SubtractEqual_StrStr(struct FString B, struct FString* A);
	struct FString AtEqual_StrStr(struct FString B, struct FString* A);
	struct FString ConcatEqual_StrStr(struct FString B, struct FString* A);
	bool ComplementEqual_StrStr(struct FString A, struct FString B);
	bool NotEqual_StrStr(struct FString A, struct FString B);
	bool EqualEqual_StrStr(struct FString A, struct FString B);
	bool GreaterEqual_StrStr(struct FString A, struct FString B);
	bool LessEqual_StrStr(struct FString A, struct FString B);
	bool Greater_StrStr(struct FString A, struct FString B);
	bool Less_StrStr(struct FString A, struct FString B);
	struct FString At_StrStr(struct FString A, struct FString B);
	struct FString Concat_StrStr(struct FString A, struct FString B);
	struct FRotator MakeRotator(int Pitch, int Yaw, int Roll);
	bool SClampRotAxis(float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis);
	int ClampRotAxisFromRange(int Current, int Min, int Max);
	int ClampRotAxisFromBase(int Current, int Center, int MaxDelta);
	void ClampRotAxis(int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis);
	float RSize(struct FRotator R);
	float RDiff(struct FRotator A, struct FRotator B);
	int NormalizeRotAxis(int Angle);
	struct FRotator RInterpTo(struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed, unsigned long bConstantInterpSpeed);
	struct FRotator RTransform(struct FRotator R, struct FRotator RBasis);
	struct FRotator RLerp(struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath);
	struct FRotator Normalize(struct FRotator Rot);
	struct FRotator OrthoRotation(struct FVector X, struct FVector Y, struct FVector Z);
	struct FRotator RotRand(unsigned long bRoll);
	struct FVector GetRotatorAxis(struct FRotator A, int Axis);
	void GetUnAxes(struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	void GetAxes(struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z);
	bool ClockwiseFrom_IntInt(int A, int B);
	struct FRotator SubtractEqual_RotatorRotator(struct FRotator B, struct FRotator* A);
	struct FRotator AddEqual_RotatorRotator(struct FRotator B, struct FRotator* A);
	struct FRotator Subtract_RotatorRotator(struct FRotator A, struct FRotator B);
	struct FRotator Add_RotatorRotator(struct FRotator A, struct FRotator B);
	struct FRotator DivideEqual_RotatorFloat(float B, struct FRotator* A);
	struct FRotator MultiplyEqual_RotatorFloat(float B, struct FRotator* A);
	struct FRotator Divide_RotatorFloat(struct FRotator A, float B);
	struct FRotator Multiply_FloatRotator(float A, struct FRotator B);
	struct FRotator Multiply_RotatorFloat(struct FRotator A, float B);
	bool NotEqual_RotatorRotator(struct FRotator A, struct FRotator B);
	bool EqualEqual_RotatorRotator(struct FRotator A, struct FRotator B);
	bool InCylinder(struct FVector Origin, struct FRotator Dir, float Width, struct FVector A, unsigned long bIgnoreZ);
	float NoZDot(struct FVector A, struct FVector B);
	struct FVector ClampLength(struct FVector V, float MaxLength);
	struct FVector VInterpTo(struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed);
	bool IsZero(struct FVector A);
	struct FVector ProjectOnTo(struct FVector X, struct FVector Y);
	struct FVector MirrorVectorByNormal(struct FVector InVect, struct FVector InNormal);
	struct FVector VRandCone2(struct FVector Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians);
	struct FVector VRandCone(struct FVector Dir, float ConeHalfAngleRadians);
	struct FVector VRand();
	struct FVector VLerp(struct FVector A, struct FVector B, float Alpha);
	struct FVector Normal(struct FVector A);
	float VSizeSq2D(struct FVector A);
	float VSizeSq(struct FVector A);
	float VSize2D(struct FVector A);
	float VSize(struct FVector A);
	struct FVector SubtractEqual_VectorVector(struct FVector B, struct FVector* A);
	struct FVector AddEqual_VectorVector(struct FVector B, struct FVector* A);
	struct FVector DivideEqual_VectorFloat(float B, struct FVector* A);
	struct FVector MultiplyEqual_VectorVector(struct FVector B, struct FVector* A);
	struct FVector MultiplyEqual_VectorFloat(float B, struct FVector* A);
	struct FVector Cross_VectorVector(struct FVector A, struct FVector B);
	float Dot_VectorVector(struct FVector A, struct FVector B);
	bool NotEqual_VectorVector(struct FVector A, struct FVector B);
	bool EqualEqual_VectorVector(struct FVector A, struct FVector B);
	struct FVector GreaterGreater_VectorRotator(struct FVector A, struct FRotator B);
	struct FVector LessLess_VectorRotator(struct FVector A, struct FRotator B);
	struct FVector Subtract_VectorVector(struct FVector A, struct FVector B);
	struct FVector Add_VectorVector(struct FVector A, struct FVector B);
	struct FVector Divide_VectorFloat(struct FVector A, float B);
	struct FVector Multiply_VectorVector(struct FVector A, struct FVector B);
	struct FVector Multiply_FloatVector(float A, struct FVector B);
	struct FVector Multiply_VectorFloat(struct FVector A, float B);
	struct FVector Subtract_PreVector(struct FVector A);
	float SmoothInterp(float DeltaTime, float InterpSpeed, float deltaDist, float overallDist);
	float FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);
	float FPctByRange(float Value, float InMin, float InMax);
	float RandRange(float InMin, float InMax);
	float FInterpEaseInOut(float A, float B, float Alpha, float Exp);
	float FInterpEaseOut(float A, float B, float Alpha, float Exp);
	float FInterpEaseIn(float A, float B, float Alpha, float Exp);
	float FCubicInterp(float P0, float T0, float P1, float T1, float A);
	int FCeil(float A);
	int FFloor(float A);
	int Round(float A);
	float Lerp(float A, float B, float Alpha);
	float FClamp(float V, float A, float B);
	float FMax(float A, float B);
	float FMin(float A, float B);
	float FRand();
	float Square(float A);
	float Sqrt(float A);
	float Loge(float A);
	float Exp(float A);
	float Atan2(float A, float B);
	float Atan(float A);
	float Tan(float A);
	float Acos(float A);
	float Cos(float A);
	float Asin(float A);
	float Sin(float A);
	float Abs(float A);
	float SubtractEqual_FloatFloat(float B, float* A);
	float AddEqual_FloatFloat(float B, float* A);
	float DivideEqual_FloatFloat(float B, float* A);
	float MultiplyEqual_FloatFloat(float B, float* A);
	bool NotEqual_FloatFloat(float A, float B);
	bool ComplementEqual_FloatFloat(float A, float B);
	bool EqualEqual_FloatFloat(float A, float B);
	bool GreaterEqual_FloatFloat(float A, float B);
	bool LessEqual_FloatFloat(float A, float B);
	bool Greater_FloatFloat(float A, float B);
	bool Less_FloatFloat(float A, float B);
	float Subtract_FloatFloat(float A, float B);
	float Add_FloatFloat(float A, float B);
	float Percent_FloatFloat(float A, float B);
	float Divide_FloatFloat(float A, float B);
	float Multiply_FloatFloat(float A, float B);
	float MultiplyMultiply_FloatFloat(float Base, float Exp);
	float Subtract_PreFloat(float A);
	struct FString ToHex(int A);
	int Clamp(int V, int A, int B);
	int Max(int A, int B);
	int Min(int A, int B);
	int Rand(int Max);
	int SubtractSubtract_Int(int* A);
	int AddAdd_Int(int* A);
	int SubtractSubtract_PreInt(int* A);
	int AddAdd_PreInt(int* A);
	int SubtractEqual_IntInt(int B, int* A);
	int AddEqual_IntInt(int B, int* A);
	int DivideEqual_IntFloat(float B, int* A);
	int MultiplyEqual_IntFloat(float B, int* A);
	int Or_IntInt(int A, int B);
	int Xor_IntInt(int A, int B);
	int And_IntInt(int A, int B);
	bool NotEqual_IntInt(int A, int B);
	bool EqualEqual_IntInt(int A, int B);
	bool GreaterEqual_IntInt(int A, int B);
	bool LessEqual_IntInt(int A, int B);
	bool Greater_IntInt(int A, int B);
	bool Less_IntInt(int A, int B);
	int GreaterGreaterGreater_IntInt(int A, int B);
	int GreaterGreater_IntInt(int A, int B);
	int LessLess_IntInt(int A, int B);
	int Subtract_IntInt(int A, int B);
	int Add_IntInt(int A, int B);
	int Percent_IntInt(int A, int B);
	int Divide_IntInt(int A, int B);
	int Multiply_IntInt(int A, int B);
	int Subtract_PreInt(int A);
	int Complement_PreInt(int A);
	unsigned char SubtractSubtract_Byte(unsigned char* A);
	unsigned char AddAdd_Byte(unsigned char* A);
	unsigned char SubtractSubtract_PreByte(unsigned char* A);
	unsigned char AddAdd_PreByte(unsigned char* A);
	unsigned char SubtractEqual_ByteByte(unsigned char B, unsigned char* A);
	unsigned char AddEqual_ByteByte(unsigned char B, unsigned char* A);
	unsigned char DivideEqual_ByteByte(unsigned char B, unsigned char* A);
	unsigned char MultiplyEqual_ByteFloat(float B, unsigned char* A);
	unsigned char MultiplyEqual_ByteByte(unsigned char B, unsigned char* A);
	bool OrOr_BoolBool(unsigned long A, unsigned long B);
	bool XorXor_BoolBool(unsigned long A, unsigned long B);
	bool AndAnd_BoolBool(unsigned long A, unsigned long B);
	bool NotEqual_BoolBool(unsigned long A, unsigned long B);
	bool EqualEqual_BoolBool(unsigned long A, unsigned long B);
	bool Not_PreBool(unsigned long A);

	// Virtual Functions
	virtual void VirtualFunction00() {};																			// 0x005838A0 (0x00)
	virtual void VirtualFunction01() {};																			// 0x005FC030 (0x04)
	virtual void VirtualFunction02() {};																			// 0x005953C0 (0x08)
	virtual void VirtualFunction03() {};																			// 0x00FBA130 (0x0C)
	virtual void VirtualFunction04() {};																			// 0x01218070 (0x10)
	virtual void VirtualFunction05() {};																			// 0x00F90510 (0x14)
	virtual void VirtualFunction06() {};																			// 0x0073DA00 (0x18)
	virtual void VirtualFunction07() {};																			// 0x0040C150 (0x1C)
	virtual void VirtualFunction08() {};																			// 0x00BD3FF0 (0x20)
	virtual void VirtualFunction09() {};																			// 0x0100ACD0 (0x24)
	virtual void VirtualFunction10() {};																			// 0x005838A0 (0x28)
	virtual void VirtualFunction11() {};																			// 0x008C0E10 (0x2C)
	virtual void VirtualFunction12() {};																			// 0x00F64D40 (0x30)
	virtual void VirtualFunction13() {};																			// 0x009A7490 (0x34)
	virtual void VirtualFunction14() {};																			// 0x00271DD0 (0x38)
	virtual void VirtualFunction15() {};																			// 0x0053CE50 (0x3C)
	virtual void VirtualFunction16() {};																			// 0x00F90510 (0x40)
	virtual void VirtualFunction17() {};																			// 0x00C6EB60 (0x44)
	virtual void VirtualFunction18() {};																			// 0x009CBC30 (0x48)
	virtual void VirtualFunction19() {};																			// 0x00AEAFA0 (0x4C)
	virtual void VirtualFunction20() {};																			// 0x00A28430 (0x50)
	virtual void VirtualFunction21() {};																			// 0x00601380 (0x54)
	virtual void VirtualFunction22() {};																			// 0x0048AE50 (0x58)
	virtual void VirtualFunction23() {};																			// 0x005F68F0 (0x5C)
	virtual void VirtualFunction24() {};																			// 0x00F90510 (0x60)
	virtual void VirtualFunction25() {};																			// 0x00F90510 (0x64)
	virtual void VirtualFunction26() {};																			// 0x006B8E90 (0x68)
	virtual void VirtualFunction27() {};																			// 0x0048AE50 (0x6C)
	virtual void VirtualFunction28() {};																			// 0x005F68F0 (0x70)
	virtual void VirtualFunction29() {};																			// 0x0048AE50 (0x74)
	virtual void VirtualFunction30() {};																			// 0x005F68F0 (0x78)
	virtual void VirtualFunction31() {};																			// 0x00C611D0 (0x7C)
	virtual void VirtualFunction32() {};																			// 0x0041D5C0 (0x80)
	virtual void VirtualFunction33() {};																			// 0x0108A6C0 (0x84)
	virtual void VirtualFunction34() {};																			// 0x00F90510 (0x88)
	virtual void VirtualFunction35() {};																			// 0x009F3B90 (0x8C)
	virtual void VirtualFunction36() {};																			// 0x00ADAF50 (0x90)
	virtual void VirtualFunction37() {};																			// 0x0080C1C0 (0x94)
	virtual void VirtualFunction38() {};																			// 0x00BFA410 (0x98)
	virtual void VirtualFunction39() {};																			// 0x0048D800 (0x9C)
	virtual void VirtualFunction40() {};																			// 0x00186780 (0xA0)
	virtual void VirtualFunction41() {};																			// 0x00556B50 (0xA4)
	virtual void VirtualFunction42() {};																			// 0x00186780 (0xA8)
	virtual void VirtualFunction43() {};																			// 0x00EA93F0 (0xAC)
	virtual void VirtualFunction44() {};																			// 0x00EA93F0 (0xB0)
	virtual void VirtualFunction45() {};																			// 0x00F90510 (0xB4)
	virtual void VirtualFunction46() {};																			// 0x00186780 (0xB8)
	virtual void VirtualFunction47() {};																			// 0x0094CB90 (0xBC)
	virtual void VirtualFunction48() {};																			// 0x00BC6F40 (0xC0)
	virtual void VirtualFunction49() {};																			// 0x00525190 (0xC4)
	virtual void VirtualFunction50() {};																			// 0x00B01BC0 (0xC8)
	virtual void VirtualFunction51() {};																			// 0x01218070 (0xCC)
	virtual void VirtualFunction52() {};																			// 0x01218070 (0xD0)
	virtual void VirtualFunction53() {};																			// 0x00EA93F0 (0xD4)
	virtual void VirtualFunction54() {};																			// 0x00FA4230 (0xD8)
	virtual void VirtualFunction55() {};																			// 0x0020B6A0 (0xDC)
	virtual void VirtualFunction56() {};																			// 0x00F883C0 (0xE0)
	virtual void VirtualFunction57() {};																			// 0x00186780 (0xE4)
	virtual void VirtualFunction58() {};																			// 0x00D28B70 (0xE8)
	virtual void VirtualFunction59() {};																			// 0x00D57990 (0xEC)
	virtual void VirtualFunction60() {};																			// 0x00676A60 (0xF0)
	virtual void VirtualFunction61() {};																			// 0x00186780 (0xF4)
	virtual void VirtualFunction62() {};																			// 0x00B05370 (0xF8)
	virtual void VirtualFunction63() {};																			// 0x00896B70 (0xFC)
	virtual void VirtualFunction64() {};																			// 0x0028AA90 (0x100)
	virtual void VirtualFunction65() {};																			// 0x00EE7430 (0x104)
	virtual void VirtualFunction66() {};																			// 0x00592990 (0x108)
	virtual void ProcessEvent(class UFunction* pFunction, void* pParms, void* pResult = NULL) {};																			// 0x00F757C0 (0x10C)
	virtual void VirtualFunction68() {};																			// 0x001E10C0 (0x110)
	virtual void VirtualFunction69() {};																			// 0x01218070 (0x114)
	virtual void VirtualFunction70() {};																			// 0x00782B80 (0x118)
	virtual void VirtualFunction71() {};																			// 0x00D15C80 (0x11C)
	virtual void VirtualFunction72() {};																			// 0x00E96F80 (0x120)
	virtual void VirtualFunction73() {};																			// 0x01074DF0 (0x124)
	virtual void VirtualFunction74() {};																			// 0x002A01D0 (0x128)
	virtual void VirtualFunction75() {};																			// 0x00196730 (0x12C)
	virtual void VirtualFunction76() {};																			// 0x005C6A60 (0x130)
	virtual void VirtualFunction77() {};																			// 0x00186780 (0x134)
	virtual void VirtualFunction78() {};																			// 0x00EA93F0 (0x138)
	virtual void VirtualFunction79() {};																			// 0x00A208B0 (0x13C)
	virtual void VirtualFunction80() {};																			// 0x001909C0 (0x140)
	virtual void VirtualFunction81() {};																			// 0x00F9ECE0 (0x144)
	virtual void VirtualFunction82() {};																			// 0x005838A0 (0x148)
	virtual void VirtualFunction83() {};																			// 0x003AF620 (0x14C)
	virtual void VirtualFunction84() {};																			// 0x00C22440 (0x150)
	virtual void VirtualFunction85() {};																			// 0x001BDB80 (0x154)
	virtual void VirtualFunction86() {};																			// 0x00CA2440 (0x158)
	virtual void VirtualFunction87() {};																			// 0x00D78FB0 (0x15C)
	virtual void VirtualFunction88() {};																			// 0x00747BF0 (0x160)
	virtual void VirtualFunction89() {};																			// 0x001F39F0 (0x164)
	virtual void VirtualFunction90() {};																			// 0x00A07A80 (0x168)
	virtual void VirtualFunction91() {};																			// 0x0080EE20 (0x16C)
	virtual void VirtualFunction92() {};																			// 0x005838A0 (0x170)
	virtual void VirtualFunction93() {};																			// 0x006F5530 (0x174)
	virtual void VirtualFunction94() {};																			// 0x00C7E830 (0x178)
	virtual void VirtualFunction95() {};																			// 0x00FBA130 (0x17C)
	virtual void VirtualFunction96() {};																			// 0x01218070 (0x180)
	virtual void VirtualFunction97() {};																			// 0x00F90510 (0x184)
	virtual void VirtualFunction98() {};																			// 0x0073DA00 (0x188)
	virtual void VirtualFunction99() {};																			// 0x0040C150 (0x18C)
	virtual void VirtualFunction100() {};																			// 0x0040C460 (0x190)
	virtual void VirtualFunction101() {};																			// 0x0100ACD0 (0x194)
	virtual void VirtualFunction102() {};																			// 0x005838A0 (0x198)
	virtual void VirtualFunction103() {};																			// 0x008C0E10 (0x19C)
	virtual void VirtualFunction104() {};																			// 0x006BBAE0 (0x1A0)
	virtual void VirtualFunction105() {};																			// 0x00F61D10 (0x1A4)
	virtual void VirtualFunction106() {};																			// 0x00271DD0 (0x1A8)
	virtual void VirtualFunction107() {};																			// 0x0053CE50 (0x1AC)
	virtual void VirtualFunction108() {};																			// 0x00F90510 (0x1B0)
	virtual void VirtualFunction109() {};																			// 0x00C6EB60 (0x1B4)
	virtual void VirtualFunction110() {};																			// 0x009CBC30 (0x1B8)
	virtual void VirtualFunction111() {};																			// 0x00AEAFA0 (0x1BC)
	virtual void VirtualFunction112() {};																			// 0x00A28430 (0x1C0)
	virtual void VirtualFunction113() {};																			// 0x00601380 (0x1C4)
	virtual void VirtualFunction114() {};																			// 0x0048AE50 (0x1C8)
	virtual void VirtualFunction115() {};																			// 0x005F68F0 (0x1CC)
	virtual void VirtualFunction116() {};																			// 0x00F90510 (0x1D0)
	virtual void VirtualFunction117() {};																			// 0x00F90510 (0x1D4)
	virtual void VirtualFunction118() {};																			// 0x006B8E90 (0x1D8)
	virtual void VirtualFunction119() {};																			// 0x0048AE50 (0x1DC)
	virtual void VirtualFunction120() {};																			// 0x005F68F0 (0x1E0)
	virtual void VirtualFunction121() {};																			// 0x0048AE50 (0x1E4)
	virtual void VirtualFunction122() {};																			// 0x005F68F0 (0x1E8)
	virtual void VirtualFunction123() {};																			// 0x00C611D0 (0x1EC)
	virtual void VirtualFunction124() {};																			// 0x0041D5C0 (0x1F0)
	virtual void VirtualFunction125() {};																			// 0x0108A6C0 (0x1F4)
	virtual void VirtualFunction126() {};																			// 0x00F90510 (0x1F8)
	virtual void VirtualFunction127() {};																			// 0x002BF5B0 (0x1FC)
	virtual void VirtualFunction128() {};																			// 0x00ADAF50 (0x200)
	virtual void VirtualFunction129() {};																			// 0x0080C1C0 (0x204)
	virtual void VirtualFunction130() {};																			// 0x00BFA410 (0x208)
	virtual void VirtualFunction131() {};																			// 0x0048D800 (0x20C)
	virtual void VirtualFunction132() {};																			// 0x00186780 (0x210)
	virtual void VirtualFunction133() {};																			// 0x00556B50 (0x214)
	virtual void VirtualFunction134() {};																			// 0x00186780 (0x218)
	virtual void VirtualFunction135() {};																			// 0x00EA93F0 (0x21C)
	virtual void VirtualFunction136() {};																			// 0x00EA93F0 (0x220)
	virtual void VirtualFunction137() {};																			// 0x00F90510 (0x224)
	virtual void VirtualFunction138() {};																			// 0x00186780 (0x228)
	virtual void VirtualFunction139() {};																			// 0x0094CB90 (0x22C)
	virtual void VirtualFunction140() {};																			// 0x00BC6F40 (0x230)
	virtual void VirtualFunction141() {};																			// 0x004EC630 (0x234)
	virtual void VirtualFunction142() {};																			// 0x001C3BE0 (0x238)
	virtual void VirtualFunction143() {};																			// 0x01218070 (0x23C)
	virtual void VirtualFunction144() {};																			// 0x01218070 (0x240)
	virtual void VirtualFunction145() {};																			// 0x00EA93F0 (0x244)
	virtual void VirtualFunction146() {};																			// 0x0064D2A0 (0x248)
	virtual void VirtualFunction147() {};																			// 0x0020B6A0 (0x24C)
	virtual void VirtualFunction148() {};																			// 0x00F883C0 (0x250)
	virtual void VirtualFunction149() {};																			// 0x00186780 (0x254)
	virtual void VirtualFunction150() {};																			// 0x00D28B70 (0x258)
	virtual void VirtualFunction151() {};																			// 0x005A83E0 (0x25C)
	virtual void VirtualFunction152() {};																			// 0x00676A60 (0x260)
	virtual void VirtualFunction153() {};																			// 0x00186780 (0x264)
	virtual void VirtualFunction154() {};																			// 0x00B05370 (0x268)
	virtual void VirtualFunction155() {};																			// 0x00896B70 (0x26C)
	virtual void VirtualFunction156() {};																			// 0x0028AA90 (0x270)
	virtual void VirtualFunction157() {};																			// 0x00EE7430 (0x274)
	virtual void VirtualFunction158() {};																			// 0x01218070 (0x278)
	virtual void VirtualFunction159() {};																			// 0x00F757C0 (0x27C)
	virtual void VirtualFunction160() {};																			// 0x001E10C0 (0x280)
	virtual void VirtualFunction161() {};																			// 0x01218070 (0x284)
	virtual void VirtualFunction162() {};																			// 0x00782B80 (0x288)
	virtual void VirtualFunction163() {};																			// 0x00D15C80 (0x28C)
	virtual void VirtualFunction164() {};																			// 0x00E96F80 (0x290)
	virtual void VirtualFunction165() {};																			// 0x01074DF0 (0x294)
	virtual void VirtualFunction166() {};																			// 0x002A01D0 (0x298)
	virtual void VirtualFunction167() {};																			// 0x00196730 (0x29C)
	virtual void VirtualFunction168() {};																			// 0x005C6A60 (0x2A0)
	virtual void VirtualFunction169() {};																			// 0x00186780 (0x2A4)
	virtual void VirtualFunction170() {};																			// 0x00EA93F0 (0x2A8)
	virtual void VirtualFunction171() {};																			// 0x00A208B0 (0x2AC)
	virtual void VirtualFunction172() {};																			// 0x001909C0 (0x2B0)
	virtual void VirtualFunction173() {};																			// 0x0079C5F0 (0x2B4)
	virtual void VirtualFunction174() {};																			// 0x0049B6B0 (0x2B8)
	virtual void VirtualFunction175() {};																			// 0x00AD2660 (0x2BC)
	virtual void VirtualFunction176() {};																			// 0x00220D10 (0x2C0)
	virtual void VirtualFunction177() {};																			// 0x00D050A0 (0x2C4)
	virtual void VirtualFunction178() {};																			// 0x008CF2C0 (0x2C8)
	virtual void VirtualFunction179() {};																			// 0x0019EBA0 (0x2CC)
	virtual void VirtualFunction180() {};																			// 0x00F90510 (0x2D0)
	virtual void VirtualFunction181() {};																			// 0x00186780 (0x2D4)
	virtual void VirtualFunction182() {};																			// 0x005838A0 (0x2D8)
	virtual void VirtualFunction183() {};																			// 0x0045F890 (0x2DC)
	virtual void VirtualFunction184() {};																			// 0x00B5DA00 (0x2E0)
	virtual void VirtualFunction185() {};																			// 0x00FBA130 (0x2E4)
	virtual void VirtualFunction186() {};																			// 0x01218070 (0x2E8)
	virtual void VirtualFunction187() {};																			// 0x00F90510 (0x2EC)
	virtual void VirtualFunction188() {};																			// 0x0073DA00 (0x2F0)
	virtual void VirtualFunction189() {};																			// 0x0040C150 (0x2F4)
	virtual void VirtualFunction190() {};																			// 0x0040C460 (0x2F8)
	virtual void VirtualFunction191() {};																			// 0x0100ACD0 (0x2FC)
	virtual void VirtualFunction192() {};																			// 0x005838A0 (0x300)
	virtual void VirtualFunction193() {};																			// 0x008C0E10 (0x304)
	virtual void VirtualFunction194() {};																			// 0x006BBAE0 (0x308)
	virtual void VirtualFunction195() {};																			// 0x0051FE00 (0x30C)
	virtual void VirtualFunction196() {};																			// 0x00271DD0 (0x310)
	virtual void VirtualFunction197() {};																			// 0x0053CE50 (0x314)
	virtual void VirtualFunction198() {};																			// 0x00F90510 (0x318)
	virtual void VirtualFunction199() {};																			// 0x00C6EB60 (0x31C)
	virtual void VirtualFunction200() {};																			// 0x009CBC30 (0x320)
	virtual void VirtualFunction201() {};																			// 0x00AEAFA0 (0x324)
	virtual void VirtualFunction202() {};																			// 0x00A28430 (0x328)
	virtual void VirtualFunction203() {};																			// 0x00601380 (0x32C)
	virtual void VirtualFunction204() {};																			// 0x0048AE50 (0x330)
	virtual void VirtualFunction205() {};																			// 0x005F68F0 (0x334)
	virtual void VirtualFunction206() {};																			// 0x00F90510 (0x338)
	virtual void VirtualFunction207() {};																			// 0x00F90510 (0x33C)
	virtual void VirtualFunction208() {};																			// 0x006B8E90 (0x340)
	virtual void VirtualFunction209() {};																			// 0x0048AE50 (0x344)
	virtual void VirtualFunction210() {};																			// 0x005F68F0 (0x348)
	virtual void VirtualFunction211() {};																			// 0x0048AE50 (0x34C)
	virtual void VirtualFunction212() {};																			// 0x005F68F0 (0x350)
	virtual void VirtualFunction213() {};																			// 0x00C611D0 (0x354)
	virtual void VirtualFunction214() {};																			// 0x0041D5C0 (0x358)
	virtual void VirtualFunction215() {};																			// 0x0108A6C0 (0x35C)
	virtual void VirtualFunction216() {};																			// 0x00F90510 (0x360)
	virtual void VirtualFunction217() {};																			// 0x002BF5B0 (0x364)
	virtual void VirtualFunction218() {};																			// 0x00ADAF50 (0x368)
	virtual void VirtualFunction219() {};																			// 0x0080C1C0 (0x36C)
	virtual void VirtualFunction220() {};																			// 0x00BFA410 (0x370)
	virtual void VirtualFunction221() {};																			// 0x0048D800 (0x374)
	virtual void VirtualFunction222() {};																			// 0x00186780 (0x378)
	virtual void VirtualFunction223() {};																			// 0x00556B50 (0x37C)
	virtual void VirtualFunction224() {};																			// 0x00186780 (0x380)
	virtual void VirtualFunction225() {};																			// 0x00EA93F0 (0x384)
	virtual void VirtualFunction226() {};																			// 0x00EA93F0 (0x388)
	virtual void VirtualFunction227() {};																			// 0x00F90510 (0x38C)
	virtual void VirtualFunction228() {};																			// 0x00186780 (0x390)
	virtual void VirtualFunction229() {};																			// 0x0094CB90 (0x394)
	virtual void VirtualFunction230() {};																			// 0x00BC6F40 (0x398)
	virtual void VirtualFunction231() {};																			// 0x004EC630 (0x39C)
	virtual void VirtualFunction232() {};																			// 0x001C3BE0 (0x3A0)
	virtual void VirtualFunction233() {};																			// 0x01218070 (0x3A4)
	virtual void VirtualFunction234() {};																			// 0x01218070 (0x3A8)
	virtual void VirtualFunction235() {};																			// 0x00EA93F0 (0x3AC)
	virtual void VirtualFunction236() {};																			// 0x0064D2A0 (0x3B0)
	virtual void VirtualFunction237() {};																			// 0x0020B6A0 (0x3B4)
	virtual void VirtualFunction238() {};																			// 0x00F883C0 (0x3B8)
	virtual void VirtualFunction239() {};																			// 0x00186780 (0x3BC)
	virtual void VirtualFunction240() {};																			// 0x00D28B70 (0x3C0)
	virtual void VirtualFunction241() {};																			// 0x005A83E0 (0x3C4)
	virtual void VirtualFunction242() {};																			// 0x00676A60 (0x3C8)
	virtual void VirtualFunction243() {};																			// 0x00186780 (0x3CC)
	virtual void VirtualFunction244() {};																			// 0x00B05370 (0x3D0)
	virtual void VirtualFunction245() {};																			// 0x00896B70 (0x3D4)
	virtual void VirtualFunction246() {};																			// 0x0028AA90 (0x3D8)
	virtual void VirtualFunction247() {};																			// 0x00EE7430 (0x3DC)
	virtual void VirtualFunction248() {};																			// 0x01218070 (0x3E0)
	virtual void VirtualFunction249() {};																			// 0x00F757C0 (0x3E4)
	virtual void VirtualFunction250() {};																			// 0x001E10C0 (0x3E8)
	virtual void VirtualFunction251() {};																			// 0x01218070 (0x3EC)
	virtual void VirtualFunction252() {};																			// 0x00782B80 (0x3F0)
	virtual void VirtualFunction253() {};																			// 0x00D15C80 (0x3F4)
	virtual void VirtualFunction254() {};																			// 0x00E96F80 (0x3F8)
	virtual void VirtualFunction255() {};																			// 0x01074DF0 (0x3FC)
};

//UClass* UObject::pClassPointer = NULL;

// Class Core.TextBuffer
// 0x0024 (0x0060 - 0x003C)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x24];                            		// 0x003C (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[1];

		return pClassPointer;
	};
};

//UClass* UTextBuffer::pClassPointer = NULL;

// Class Core.Subsystem
// 0x0004 (0x0040 - 0x003C)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                    		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[6];

		return pClassPointer;
	};
};

//UClass* USubsystem::pClassPointer = NULL;

// Class Core.System
// 0x0104 (0x0144 - 0x0040)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                   		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxStaleCacheSize;                                		// 0x0044 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxOverallCacheSize;                              		// 0x0048 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                PackageSizeSoftLimit;                             		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AsyncIOBandwidthLimit;                            		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     SavePath;                                         		// 0x0054 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CachePath;                                        		// 0x0060 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CacheExt;                                         		// 0x006C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ScreenShotPath;                                   		// 0x0078 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Paths;                                            		// 0x0084 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           IgnoredPaths;                                     		// 0x0090 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCPaths;                                  		// 0x009C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           ScriptPaths;                                      		// 0x00A8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           FRScriptPaths;                                    		// 0x00B4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           FRCheatScriptPaths;                               		// 0x00C0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           CutdownPaths;                                     		// 0x00CC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FName >                             Suppress;                                         		// 0x00D8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Extensions;                                       		// 0x00E4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCExtensions;                             		// 0x00F0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           LocalizationPaths;                                		// 0x00FC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TextureFileCacheExtension;                        		// 0x0108 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     AudioFileCacheExtension;                          		// 0x0114 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           MissingRedirectClassName;                         		// 0x0120 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           MissingRedirectObjectName;                        		// 0x012C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FName >                             Unsuppress;                                       		// 0x0138 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[5];

		return pClassPointer;
	};
};

//UClass* USystem::pClassPointer = NULL;

// Class Core.PackageMap
// 0x0084 (0x00C0 - 0x003C)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x84];                            		// 0x003C (0x0084) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[48];

		return pClassPointer;
	};
};

//UClass* UPackageMap::pClassPointer = NULL;

// Class Core.ObjectSerializer
// 0x000C (0x0048 - 0x003C)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[50];

		return pClassPointer;
	};
};

//UClass* UObjectSerializer::pClassPointer = NULL;

// Class Core.ObjectRedirector
// 0x0004 (0x0040 - 0x003C)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                             		// 0x003C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[52];

		return pClassPointer;
	};
};

//UClass* UObjectRedirector::pClassPointer = NULL;

// Class Core.MetaData
// 0x003C (0x0078 - 0x003C)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                            		// 0x003C (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[54];

		return pClassPointer;
	};
};

//UClass* UMetaData::pClassPointer = NULL;

// Class Core.Linker
// 0x0534 (0x0570 - 0x003C)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x534];                           		// 0x003C (0x0534) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[57];

		return pClassPointer;
	};
};

//UClass* ULinker::pClassPointer = NULL;

// Class Core.LinkerSave
// 0x00A8 (0x0618 - 0x0570)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[0xA8];                            		// 0x0570 (0x00A8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[56];

		return pClassPointer;
	};
};

//UClass* ULinkerSave::pClassPointer = NULL;

// Class Core.LinkerLoad
// 0x05C4 (0x0B34 - 0x0570)
/*
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[0x5C4];                           		// 0x0570 (0x05C4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[60];

		return pClassPointer;
	};
};
*/

//UClass* ULinkerLoad::pClassPointer = NULL;

// Class Core.Interface
// 0x0000 (0x003C - 0x003C)
class UInterface : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[62];

		return pClassPointer;
	};
};

//UClass* UInterface::pClassPointer = NULL;

// Class Core.Field
// 0x0004 (0x0040 - 0x003C)
class UField : public UObject
{
public:
	class UField*                                      Next;                                             		// NOT AUTO-GENERATED PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[66];

		return pClassPointer;
	};
};

//UClass* UField::pClassPointer = NULL;

// Class Core.Struct
// 0x004C (0x008C - 0x0040)
class UStruct : public UField
{
public:
	unsigned char			UnknownData00[0x8];					// NOT AUTO-GENERATED PROPERTY
	class UField*			SuperField;								// NOT AUTO-GENERATED PROPERTY
	class UField*			Children;								// NOT AUTO-GENERATED PROPERTY
	unsigned short			PropertySize;							// NOT AUTO-GENERATED PROPERTY
	unsigned char			UnknownData01[0x3A];					// NOT AUTO-GENERATED PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[65];

		return pClassPointer;
	};
};

//UClass* UStruct::pClassPointer = NULL;

// Class Core.ScriptStruct
// 0x001C (0x00A8 - 0x008C)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x1C];                            		// 0x008C (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[64];

		return pClassPointer;
	};
};

//UClass* UScriptStruct::pClassPointer = NULL;

// Class Core.Function
// 0x0024 (0x00B0 - 0x008C)
class UFunction : public UStruct
{
public:
	unsigned long		FunctionFlags;								// NOT AUTO-GENERATED PROPERTY
	unsigned short		iNative;									// NOT AUTO-GENERATED PROPERTY
	unsigned short		RepOffset;									// NOT AUTO-GENERATED PROPERTY
	struct FName		FriendlyName;								// NOT AUTO-GENERATED PROPERTY
	unsigned short		NumParms;									// NOT AUTO-GENERATED PROPERTY
	unsigned short		ParmsSize;									// NOT AUTO-GENERATED PROPERTY
	unsigned long		ReturnValueOffset;							// NOT AUTO-GENERATED PROPERTY
	unsigned char		UnknownData00[0x4];						// NOT AUTO-GENERATED PROPERTY
	void*				Func;										// NOT AUTO-GENERATED PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[70];

		return pClassPointer;
	};
};

//UClass* UFunction::pClassPointer = NULL;

// Class Core.Property
// 0x0040 (0x0080 - 0x0040)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[0x40];                            		// 0x0040 (0x0040) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[73];

		return pClassPointer;
	};
};

//UClass* UProperty::pClassPointer = NULL;

// Class Core.StructProperty
// 0x0004 (0x0084 - 0x0080)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                             		// 0x0080 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[72];

		return pClassPointer;
	};
};

//UClass* UStructProperty::pClassPointer = NULL;

// Class Core.StrProperty
// 0x0000 (0x0080 - 0x0080)
class UStrProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[76];

		return pClassPointer;
	};
};

//UClass* UStrProperty::pClassPointer = NULL;

// Class Core.ObjectProperty
// 0x0004 (0x0084 - 0x0080)
class UObjectProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                             		// 0x0080 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[79];

		return pClassPointer;
	};
};

//UClass* UObjectProperty::pClassPointer = NULL;

// Class Core.ComponentProperty
// 0x0000 (0x0084 - 0x0084)
class UComponentProperty : public UObjectProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[78];

		return pClassPointer;
	};
};

//UClass* UComponentProperty::pClassPointer = NULL;

// Class Core.ClassProperty
// 0x0004 (0x0088 - 0x0084)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                             		// 0x0084 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[82];

		return pClassPointer;
	};
};

//UClass* UClassProperty::pClassPointer = NULL;

// Class Core.NameProperty
// 0x0000 (0x0080 - 0x0080)
class UNameProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[84];

		return pClassPointer;
	};
};

//UClass* UNameProperty::pClassPointer = NULL;

// Class Core.MapProperty
// 0x0008 (0x0088 - 0x0080)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0080 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[86];

		return pClassPointer;
	};
};

//UClass* UMapProperty::pClassPointer = NULL;

// Class Core.IntProperty
// 0x0000 (0x0080 - 0x0080)
class UIntProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[89];

		return pClassPointer;
	};
};

//UClass* UIntProperty::pClassPointer = NULL;

// Class Core.IntAttributeProperty
// 0x0008 (0x0088 - 0x0080)
class UIntAttributeProperty : public UIntProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0080 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[88];

		return pClassPointer;
	};
};

//UClass* UIntAttributeProperty::pClassPointer = NULL;

// Class Core.InterfaceProperty
// 0x0004 (0x0084 - 0x0080)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                             		// 0x0080 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[92];

		return pClassPointer;
	};
};

//UClass* UInterfaceProperty::pClassPointer = NULL;

// Class Core.FloatProperty
// 0x0000 (0x0080 - 0x0080)
class UFloatProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[95];

		return pClassPointer;
	};
};

//UClass* UFloatProperty::pClassPointer = NULL;

// Class Core.FloatAttributeProperty
// 0x0008 (0x0088 - 0x0080)
class UFloatAttributeProperty : public UFloatProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0080 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[94];

		return pClassPointer;
	};
};

//UClass* UFloatAttributeProperty::pClassPointer = NULL;

// Class Core.DelegateProperty
// 0x0008 (0x0088 - 0x0080)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0080 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[98];

		return pClassPointer;
	};
};

//UClass* UDelegateProperty::pClassPointer = NULL;

// Class Core.ByteProperty
// 0x0004 (0x0084 - 0x0080)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                             		// 0x0080 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[101];

		return pClassPointer;
	};
};

//UClass* UByteProperty::pClassPointer = NULL;

// Class Core.ByteAttributeProperty
// 0x0008 (0x008C - 0x0084)
class UByteAttributeProperty : public UByteProperty
{
public:
	unsigned char                                      UnknownData00[0x8];                             		// 0x0084 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[100];

		return pClassPointer;
	};
};

//UClass* UByteAttributeProperty::pClassPointer = NULL;

// Class Core.BoolProperty
// 0x0004 (0x0084 - 0x0080)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                             		// 0x0080 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[104];

		return pClassPointer;
	};
};

//UClass* UBoolProperty::pClassPointer = NULL;

// Class Core.ArrayProperty
// 0x0004 (0x0084 - 0x0080)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x4];                             		// 0x0080 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[106];

		return pClassPointer;
	};
};

//UClass* UArrayProperty::pClassPointer = NULL;

// Class Core.Enum
// 0x000C (0x004C - 0x0040)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0xC];                             		// 0x0040 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[108];

		return pClassPointer;
	};
};

//UClass* UEnum::pClassPointer = NULL;

// Class Core.Const
// 0x000C (0x004C - 0x0040)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[0xC];                             		// 0x0040 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[110];

		return pClassPointer;
	};
};

//UClass* UConst::pClassPointer = NULL;

// Class Core.Factory
// 0x0034 (0x0070 - 0x003C)
class UFactory : public UObject
{
public:
	class UClass*                                      SupportedClass;                                   		// 0x003C (0x0004) [0x0000000000000000]
	class UClass*                                      ContextClass;                                     		// 0x0040 (0x0004) [0x0000000000000000]
	struct FString                                     Description;                                      		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Formats;                                          		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCreateNew : 1;                                   		// 0x005C (0x0004) [0x0000000000000000] [0x00000001]
	unsigned long                                      bEditAfterNew : 1;                                		// 0x005C (0x0004) [0x0000000000000000] [0x00000002]
	unsigned long                                      bEditorImport : 1;                                		// 0x005C (0x0004) [0x0000000000000000] [0x00000004]
	unsigned long                                      bText : 1;                                        		// 0x005C (0x0004) [0x0000000000000000] [0x00000008]
	int                                                AutoPriority;                                     		// 0x0060 (0x0004) [0x0000000000000000]
	TArray< struct FString >                           ValidGameNames;                                   		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[113];

		return pClassPointer;
	};
};

//UClass* UFactory::pClassPointer = NULL;

// Class Core.TextBufferFactory
// 0x0000 (0x0070 - 0x0070)
class UTextBufferFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[112];

		return pClassPointer;
	};
};

//UClass* UTextBufferFactory::pClassPointer = NULL;

// Class Core.Exporter
// 0x0028 (0x0064 - 0x003C)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                             		// 0x003C (0x0004) MISSED OFFSET
	TArray< struct FString >                           FormatExtension;                                  		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           FormatDescription;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[0xC];                             		// 0x0058 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[116];

		return pClassPointer;
	};
};

//UClass* UExporter::pClassPointer = NULL;

// Class Core.Component
// 0x000C (0x0048 - 0x003C)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                               		// 0x003C (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FName                                       TemplateName;                                     		// 0x0040 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[123];

		return pClassPointer;
	};
};

//UClass* UComponent::pClassPointer = NULL;

// Class Core.DistributionVector
// 0x0008 (0x0050 - 0x0048)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002]

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[122];

		return pClassPointer;
	};

	struct FVector GetVectorValue(float F, int LastExtreme);
};

//UClass* UDistributionVector::pClassPointer = NULL;

// Class Core.DistributionFloat
// 0x0008 (0x0050 - 0x0048)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0048 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x004C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x004C (0x0004) [0x0000000000000000] [0x00000002]

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[126];

		return pClassPointer;
	};

	float GetFloatValue(float F);
};

//UClass* UDistributionFloat::pClassPointer = NULL;

// Class Core.Commandlet
// 0x0040 (0x007C - 0x003C)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                  		// 0x003C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpUsage;                                        		// 0x0048 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpWebLink;                                      		// 0x0054 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamNames;                                   		// 0x0060 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamDescriptions;                            		// 0x006C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      IsServer : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001]
	unsigned long                                      IsClient : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002]
	unsigned long                                      IsEditor : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000004]
	unsigned long                                      LogToConsole : 1;                                 		// 0x0078 (0x0004) [0x0000000000000000] [0x00000008]
	unsigned long                                      ShowErrorCount : 1;                               		// 0x0078 (0x0004) [0x0000000000000000] [0x00000010]

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[129];

		return pClassPointer;
	};

	int eventMain(struct FString Params);
};

//UClass* UCommandlet::pClassPointer = NULL;

// Class Core.HelpCommandlet
// 0x0000 (0x007C - 0x007C)
class UHelpCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[128];

		return pClassPointer;
	};

	int eventMain(struct FString Params);
};

//UClass* UHelpCommandlet::pClassPointer = NULL;

// Class Core.AttributeModifier
// 0x0008 (0x0044 - 0x003C)
class UAttributeModifier : public UObject
{
public:
	unsigned char                                      Type;                                             		// 0x003C (0x0001) [0x0000000000000000]
	float                                              Value;                                            		// 0x0040 (0x0004) [0x0000000000000000]

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[132];

		return pClassPointer;
	};
};

//UClass* UAttributeModifier::pClassPointer = NULL;

// Class Core.State
// 0x0044 (0x00D0 - 0x008C)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x44];                            		// 0x008C (0x0044) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[134];

		return pClassPointer;
	};
};

//UClass* UState::pClassPointer = NULL;

// Class Core.Package
// 0x00A8 (0x00E4 - 0x003C)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                            		// 0x003C (0x00A8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[136];

		return pClassPointer;
	};
};

//UClass* UPackage::pClassPointer = NULL;

// Class Core.Class
// 0x0100 (0x01D0 - 0x00D0)
class UClass : public UState
{
public:
	unsigned char                                      UnknownData00[0x100];                           		// 0x00D0 (0x0100) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[138];

		return pClassPointer;
	};
};

//UClass* UClass::pClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack ( pop )
#endif

#endif