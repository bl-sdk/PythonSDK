#pragma once
//#include "stdafx.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: WinDrv_classes.h
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

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// 0x01A0 (0x01F0 - 0x0050)
class UWindowsClient : public UClient
{
public:
	unsigned char                                      UnknownData00[0x15C];                           		// 0x0050 (0x015C) MISSED OFFSET
	class UClass*                                      AudioDeviceClass;                                 		// 0x01AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData01[0x30];                            		// 0x01B0 (0x0030) MISSED OFFSET
	int                                                AllowJoystickInput;                               		// 0x01E0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData02[0xC];                             		// 0x01E4 (0x000C) MISSED OFFSET
};

// 0x0000 (0x0058 - 0x0058)
class UXnaForceFeedbackManager : public UForceFeedbackManager {};

// 0x0038 (0x00EC - 0x00B4)
class UFacebookWindows : public UFacebookIntegration
{
public:
	unsigned char                                      UnknownData00[0x38];                            		// 0x00B4 (0x0038) MISSED OFFSET
};

#ifdef _MSC_VER
#pragma pack ( pop )
#endif