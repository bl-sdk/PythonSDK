#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WinDrv.WindowsClient
// 0x01A0 (0x0050 - 0x01F0)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[0x15C];                                     // 0x0050(0x015C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                         // 0x01AC(0x0004) (Config)
	unsigned char                                      UnknownData01[0x30];                                      // 0x01B0(0x0030) MISSED OFFSET
	int                                                AllowJoystickInput;                                       // 0x01E0(0x0004) (Config)
	unsigned char                                      UnknownData02[0xC];                                       // 0x01E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WindowsClient");
		return ptr;
	}

};


// Class WinDrv.XnaForceFeedbackManager
// 0x0000 (0x0058 - 0x0058)
class UXnaForceFeedbackManager : public UForceFeedbackManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("XnaForceFeedbackManager");
		return ptr;
	}

};


// Class WinDrv.FacebookWindows
// 0x0038 (0x00B4 - 0x00EC)
class UFacebookWindows : public UFacebookIntegration
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B4(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("FacebookWindows");
		return ptr;
	}

};


#ifdef _MSC_VER
#pragma pack(pop)
#endif
