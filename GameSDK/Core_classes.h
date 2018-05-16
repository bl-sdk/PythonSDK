/*
#############################################################################################
# Borderlands 2 (1.0.35.4705) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#pragma once
#ifndef CORECLASSES
#define CORECLASSES

#include "Log.h"

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
class UProperty;

// Class Core.Object
// 0x003C
class UObject
{
public:
	//struct FPointer VfTableObject; // 0x0000 (0x0004) [0x0000000000821002] ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer HashNext; // 0x0004 (0x0004) [0x0000000000021002] ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FQWord ObjectFlags; // 0x0008 (0x0008) [0x0000000000021002] ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer HashOuterNext; // 0x0010 (0x0004) [0x0000000000021002] ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer StateFrame; // 0x0014 (0x0004) [0x0000000000021002] ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject* Linker; // 0x0018 (0x0004) [0x0000000000821002] ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer LinkerIndex; // 0x001C (0x0004) [0x0000000000821002] ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int ObjectInternalInteger; // 0x0020 (0x0004) [0x0000000000821002] ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int NetIndex; // 0x0024 (0x0004) [0x0000000000821002] ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	class UObject* Outer; // 0x0028 (0x0004) [0x0000000000021002] ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FName Name; // 0x002C (0x0008) [0x0000000000021003] ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
	class UClass* Class; // 0x0034 (0x0004) [0x0000000000021002] ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject* ObjectArchetype; // 0x0038 (0x0004) [0x0000000000021003] ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
private:
	static UClass* pClassPointer;
public:
	static TArray< UObject* >* GObjObjects();
	char* GetName();
	char* GetNameCPP();
	char* GetFullNameOld();
	void GetPathName(std::string& result);
	void AppendName(std::string& result);
	std::string GetFullName();
	template< class T > static T* FindObject(const std::string& ObjectFullName)
	{
		while (!UObject::GObjObjects())
			Sleep(100);
		while (!FName::Names())
			Sleep(100);
		for (int i = 0; i < UObject::GObjObjects()->Count; ++i)
		{
			UObject* Object = UObject::GObjObjects()->Data[i];
			// skip no T class objects
			if (!Object) continue;
			if (!Object->IsA(T::StaticClass())) continue;
			// check
			if (Object->GetFullName() == ObjectFullName)
				return (T*)Object;
		}
		return nullptr;
	}

	static void dumpObjects()
	{
		while (!UObject::GObjObjects())
			Sleep(100);
		while (!FName::Names())
			Sleep(100);
		for (int i = 0; i < UObject::GObjObjects()->Count; ++i)
		{
			UObject* Object = UObject::GObjObjects()->Data[i];
			// skip no T class objects
			if(!Object)
				continue;
			Log::info("Object | %s", Object->GetFullName().c_str());
		}
	}

	bool IsA(UClass* pClass);
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[2];
		return pClassPointer;
	};
	int GetBuildChangelistNumber();
	int GetEngineVersion();
	// Virtual Functions
	virtual void VirtualFunction00(); // 0x00D70090 (0x00)
	virtual void VirtualFunction01(); // 0x00C63010 (0x04)
	virtual void VirtualFunction02(); // 0x00892230 (0x08)
	virtual void VirtualFunction03(); // 0x007DB380 (0x0C)
	virtual void VirtualFunction04(); // 0x00637C30 (0x10)
	virtual void VirtualFunction05(); // 0x00FB3390 (0x14)
	virtual void VirtualFunction06(); // 0x009670B0 (0x18)
	virtual void VirtualFunction07(); // 0x00A52920 (0x1C)
	virtual void VirtualFunction08(); // 0x00DF1450 (0x20)
	virtual void VirtualFunction09(); // 0x007F1B50 (0x24)
	virtual void VirtualFunction10(); // 0x00D70090 (0x28)
	virtual void VirtualFunction11(); // 0x00CB56F0 (0x2C)
	virtual void VirtualFunction12(); // 0x01075C30 (0x30)
	virtual void VirtualFunction13(); // 0x011E2420 (0x34)
	virtual void VirtualFunction14(); // 0x00D11930 (0x38)
	virtual void VirtualFunction15(); // 0x0053E170 (0x3C)
	virtual void VirtualFunction16(); // 0x00FB3390 (0x40)
	virtual void VirtualFunction17(); // 0x00B78400 (0x44)
	virtual void VirtualFunction18(); // 0x00EFDEF0 (0x48)
	virtual void VirtualFunction19(); // 0x00CE0970 (0x4C)
	virtual void VirtualFunction20(); // 0x008DAD80 (0x50)
	virtual void VirtualFunction21(); // 0x00831F00 (0x54)
	virtual void VirtualFunction22(); // 0x00935660 (0x58)
	virtual void VirtualFunction23(); // 0x00695390 (0x5C)
	virtual void VirtualFunction24(); // 0x00FB3390 (0x60)
	virtual void VirtualFunction25(); // 0x00FB3390 (0x64)
	virtual void VirtualFunction26(); // 0x00B7D170 (0x68)
	virtual void VirtualFunction27(); // 0x00935660 (0x6C)
	virtual void VirtualFunction28(); // 0x00695390 (0x70)
	virtual void VirtualFunction29(); // 0x00935660 (0x74)
	virtual void VirtualFunction30(); // 0x00695390 (0x78)
	virtual void VirtualFunction31(); // 0x00651670 (0x7C)
	virtual void VirtualFunction32(); // 0x00AB03D0 (0x80)
	virtual void VirtualFunction33(); // 0x00D792E0 (0x84)
	virtual void VirtualFunction34(); // 0x00FB3390 (0x88)
	virtual void VirtualFunction35(); // 0x00734D80 (0x8C)
	virtual void VirtualFunction36(); // 0x00430330 (0x90)
	virtual void VirtualFunction37(); // 0x009AC560 (0x94)
	virtual void VirtualFunction38(); // 0x00BCD940 (0x98)
	virtual void VirtualFunction39(); // 0x004C9A60 (0x9C)
	virtual void VirtualFunction40(); // 0x00F9BD10 (0xA0)
	virtual void VirtualFunction41(); // 0x00EA4350 (0xA4)
	virtual void VirtualFunction42(); // 0x00F9BD10 (0xA8)
	virtual void VirtualFunction43(); // 0x00665380 (0xAC)
	virtual void VirtualFunction44(); // 0x00665380 (0xB0)
	virtual void VirtualFunction45(); // 0x00FB3390 (0xB4)
	virtual void VirtualFunction46(); // 0x00F9BD10 (0xB8)
	virtual void VirtualFunction47(); // 0x01034CD0 (0xBC)
	virtual void VirtualFunction48(); // 0x00F43CB0 (0xC0)
	virtual void VirtualFunction49(); // 0x009BD180 (0xC4)
	virtual void VirtualFunction50(); // 0x00E71120 (0xC8)
	virtual void VirtualFunction51(); // 0x00637C30 (0xCC)
	virtual void VirtualFunction52(); // 0x00637C30 (0xD0)
	virtual void VirtualFunction53(); // 0x00665380 (0xD4)
	virtual void VirtualFunction54(); // 0x00575B90 (0xD8)
	virtual void VirtualFunction55(); // 0x0101CF50 (0xDC)
	virtual void VirtualFunction56(); // 0x00562170 (0xE0)
	virtual void VirtualFunction57(); // 0x00F9BD10 (0xE4)
	virtual void VirtualFunction58(); // 0x004C4660 (0xE8)
	virtual void VirtualFunction59(); // 0x01198490 (0xEC)
	virtual void VirtualFunction60(); // 0x010E8860 (0xF0)
	virtual void VirtualFunction61(); // 0x00F9BD10 (0xF4)
	virtual void VirtualFunction62(); // 0x007D5480 (0xF8)
	virtual void VirtualFunction63(); // 0x0107EE60 (0xFC)
	virtual void VirtualFunction64(); // 0x00FEA9F0 (0x100)
	virtual void VirtualFunction65(); // 0x00DB03E0 (0x104)
	virtual void VirtualFunction66(); // 0x00BBF1C0 (0x108)
	virtual void ProcessEvent(class UFunction* pFunction, void* pParms, void* pResult = nullptr); // 0x0065C820 (0x10C)
};


// Class Core.TextBuffer
// 0x0024 (0x0060 - 0x003C)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x003C (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1 ];

		return pClassPointer;
	};

};

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 6 ];

		return pClassPointer;
	};

};

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 5 ];

		return pClassPointer;
	};

};

// Class Core.PackageMap
// 0x0084 (0x00C0 - 0x003C)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x84 ];                            		// 0x003C (0x0084) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 48 ];

		return pClassPointer;
	};

};

// Class Core.ObjectSerializer
// 0x000C (0x0048 - 0x003C)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x003C (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 50 ];

		return pClassPointer;
	};

};

// Class Core.ObjectRedirector
// 0x0004 (0x0040 - 0x003C)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 52 ];

		return pClassPointer;
	};

};

// Class Core.MetaData
// 0x003C (0x0078 - 0x003C)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x003C (0x003C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 54 ];

		return pClassPointer;
	};

};

// Class Core.Linker
// 0x0534 (0x0570 - 0x003C)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x534 ];                           		// 0x003C (0x0534) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 57 ];

		return pClassPointer;
	};

};

// Class Core.LinkerSave
// 0x00A8 (0x0618 - 0x0570)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0xA8 ];                            		// 0x0570 (0x00A8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 56 ];

		return pClassPointer;
	};

};

/*// Class Core.LinkerLoad
// 0x05C4 (0x0B34 - 0x0570)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0x5C4 ];                           		// 0x0570 (0x05C4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 60 ];

		return pClassPointer;
	};

};*/

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 62 ];

		return pClassPointer;
	};

};

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 66 ];

		return pClassPointer;
	};

};

// Class Core.Struct
// 0x004C (0x008C - 0x0040)
class UStruct : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                                    // NOT AUTO-GENERATED PROPERTY 
	class UField*                                      SuperField;                                              // NOT AUTO-GENERATED PROPERTY 
	class UField*                                      Children;                                                // NOT AUTO-GENERATED PROPERTY 
	unsigned short									   PropertySize;			                                // NOT AUTO-GENERATED PROPERTY 
	unsigned short									   UnknownData01;			                                // NOT AUTO-GENERATED PROPERTY 
    unsigned char									   UnknownData02[ 0x38 ];			                        // NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 65 ];

		return pClassPointer;
	};

};

// Class Core.ScriptStruct
// 0x001C (0x00A8 - 0x008C)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x1C ];                            		// 0x008C (0x001C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 64 ];

		return pClassPointer;
	};

};

// Class Core.Function
// 0x0024 (0x00B0 - 0x008C)
class UFunction : public UStruct
{
public:
	unsigned long                                      FunctionFlags;                                            // NOT AUTO-GENERATED PROPERTY 
	unsigned short                                     iNative;                                                  // NOT AUTO-GENERATED PROPERTY 
	unsigned short                                     RepOffset;                                                // NOT AUTO-GENERATED PROPERTY 
	struct FName                                       FriendlyName;                                             // NOT AUTO-GENERATED PROPERTY 
	unsigned short                                     NumParms;                                                 // NOT AUTO-GENERATED PROPERTY 
	unsigned short                                     ParmsSize;                                                // NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      ReturnValueOffset;                                        // NOT AUTO-GENERATED PROPERTY 
	unsigned char                                      UnknownData00[ 0x4 ];                                     // NOT AUTO-GENERATED PROPERTY 
	void*                                              Func;                                                     // NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 70 ];

		return pClassPointer;
	};

};

// Class Core.Property
// 0x0040 (0x0080 - 0x0040)
class UProperty : public UField
{
public:
	unsigned long		ArrayDim;									// 0x0040 (0x04)					
	unsigned long		ElementSize;								// 0x0044 (0x04)
	FQWord				PropertyFlags;								// 0x0048 (0x08)
	unsigned short		PropertySize;								// 0x0050 (0x02)
	unsigned short		UnknownData00;								// 0x0052 (0x02)
	unsigned char		UnknownData01[ 0xC ];						// 0x0054 (0xC)
	unsigned long		Offset;										// 0x0060 (0x04)
	unsigned char		UnknownData02[ 0x1C ];						// 0x0064 (0x1C)

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 73 ];

		return pClassPointer;
	};

	void PushToLua(void* data);
	void PushToLua(UObject* object, int index = 0);
	void PushAsStaticArray(UObject* object);
};

// Class Core.StructProperty
// 0x0004 (0x0084 - 0x0080)
class UStructProperty : public UProperty
{
public:
	class UStruct*		Struct;                             		// 0x0080 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 72 ];

		return pClassPointer;
	};

};

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 76 ];

		return pClassPointer;
	};

};

// Class Core.ObjectProperty
// 0x0004 (0x0084 - 0x0080)
class UObjectProperty : public UProperty
{
public:
	class UClass*		PropertyClass;                            		// 0x0080 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 79 ];

		return pClassPointer;
	};

};

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 78 ];

		return pClassPointer;
	};

};

// Class Core.ClassProperty
// 0x0004 (0x0088 - 0x0084)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0084 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 82 ];

		return pClassPointer;
	};

};

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 84 ];

		return pClassPointer;
	};

};

// Class Core.MapProperty
// 0x0008 (0x0088 - 0x0080)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0080 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 86 ];

		return pClassPointer;
	};

};

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 89 ];

		return pClassPointer;
	};

};

// Class Core.IntAttributeProperty
// 0x0008 (0x0088 - 0x0080)
class UIntAttributeProperty : public UIntProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0080 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 88 ];

		return pClassPointer;
	};

};

// Class Core.InterfaceProperty
// 0x0004 (0x0084 - 0x0080)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0080 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 92 ];

		return pClassPointer;
	};

};

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 95 ];

		return pClassPointer;
	};

};

// Class Core.FloatAttributeProperty
// 0x0008 (0x0088 - 0x0080)
class UFloatAttributeProperty : public UFloatProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0080 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 94 ];

		return pClassPointer;
	};

};

// Class Core.DelegateProperty
// 0x0008 (0x0088 - 0x0080)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0080 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 98 ];

		return pClassPointer;
	};

};

// Class Core.ByteProperty
// 0x0004 (0x0084 - 0x0080)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0080 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 101 ];

		return pClassPointer;
	};

};

// Class Core.ByteAttributeProperty
// 0x0008 (0x008C - 0x0084)
class UByteAttributeProperty : public UByteProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0084 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 100 ];

		return pClassPointer;
	};

};

// Class Core.BoolProperty
// 0x0004 (0x0084 - 0x0080)
class UBoolProperty : public UProperty
{
public:
	unsigned long                                      BitMask;                             				// 0x0080 (0x0004)

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 104 ];

		return pClassPointer;
	};

};

// Class Core.ArrayProperty
// 0x0004 (0x0084 - 0x0080)
class UArrayProperty : public UProperty
{
public:
	class UProperty*	Inner;                             		// 0x0080 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 106 ];

		return pClassPointer;
	};

};

// Class Core.Enum
// 0x000C (0x004C - 0x0040)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0040 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 108 ];

		return pClassPointer;
	};

};

// Class Core.Const
// 0x000C (0x004C - 0x0040)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[ 0xC ];                             		// 0x0040 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 110 ];

		return pClassPointer;
	};

};

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 113 ];

		return pClassPointer;
	};

};

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 112 ];

		return pClassPointer;
	};

};

// Class Core.Exporter
// 0x0028 (0x0064 - 0x003C)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x003C (0x0004) MISSED OFFSET
	TArray< struct FString >                           FormatExtension;                                  		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           FormatDescription;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0xC ];                             		// 0x0058 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 116 ];

		return pClassPointer;
	};

};

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 123 ];

		return pClassPointer;
	};

};

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 122 ];

		return pClassPointer;
	};

	struct FVector GetVectorValue ( float F, int LastExtreme );
};

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 126 ];

		return pClassPointer;
	};

	float GetFloatValue ( float F );
};

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 129 ];

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 128 ];

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

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
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 132 ];

		return pClassPointer;
	};

};

// Class Core.State
// 0x0044 (0x00D0 - 0x008C)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x44 ];                            		// 0x008C (0x0044) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 134 ];

		return pClassPointer;
	};

};

// Class Core.Package
// 0x00BC (0x00F8 - 0x003C)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xBC ];                            		// 0x003C (0x00BC) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 136 ];

		return pClassPointer;
	};

};

// Class Core.Class
// 0x0100 (0x01D0 - 0x00D0)
class UClass : public UState
{
public:
	unsigned char                                      UnknownData00[ 0x100 ];                           		// 0x00D0 (0x0100) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 138 ];

		return pClassPointer;
	};

};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif

#endif
