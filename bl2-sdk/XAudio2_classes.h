#include "BL2-SDK.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: XAudio2_classes.h
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

// Class XAudio2.XAudio2Device
// 0x009C (0x0360 - 0x02C4)
class UXAudio2Device : public UAudioDevice
{
public:
	unsigned char                                      UnknownData00[0x9C];                            		// 0x02C4 (0x009C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3520];

		return pClassPointer;
	};
};

UClass* UXAudio2Device::pClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack ( pop )
#endif