#pragma once

#include <SDKDDKVer.h>
#define WIN32_LEAN_AND_MEAN

#include <pybind11/pybind11.h>

#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <ShlObj.h>
#include <string>

#include <Shlwapi.h>
#pragma comment (lib, "Shlwapi.lib")

#include <lua.hpp>
#include <luajit.h>

namespace BL2SDK
{
	extern void* pGObjects;
	extern void* pGNames;
	extern void* pGObjHash;
	extern void* pGCRCTable;
	extern void* pNameHash;
}

#include "gamedefines.h"
#include "logging.h"

namespace BL2SDK
{
	extern void* pTextureFixLocation;
	extern FMalloc** pGMalloc;
}

#include "Core_structs.h"
#include "Core_f_structs.h"
#include "Core_classes.h"
//#include "Core_functions.h"

#include "Engine_structs.h"
#include "Engine_f_structs.h"
#include "Engine_classes.h"
//#include "Engine_functions.h"

#include "GameFramework_structs.h"
#include "GameFramework_f_structs.h"
#include "GameFramework_classes.h"
//#include "GameFramework_functions.h"

#include "GFxUI_structs.h"
#include "GFxUI_f_structs.h"
#include "GFxUI_classes.h"
//#include "GFxUI_functions.h"

#include "GearboxFramework_structs.h"
#include "GearboxFramework_f_structs.h"
#include "GearboxFramework_classes.h"
//#include "GearboxFramework_functions.h"

#include "IpDrv_structs.h"
#include "IpDrv_f_structs.h"
#include "IpDrv_classes.h"
//#include "IpDrv_functions.h

#include "OnlineSubsystemSteamworks_structs.h"
#include "OnlineSubsystemSteamworks_f_structs.h"
#include "OnlineSubsystemSteamworks_classes.h"
//#include "OnlineSubsystemSteamworks_functions.h"

#include "WillowGame_structs.h"
#include "WillowGame_f_structs.h"
#include "WillowGame_classes.h"
//#include "WillowGame_functions.h"

#include "WinDrv_structs.h"
#include "WinDrv_f_structs.h"
#include "WinDrv_classes.h"
//#include "WinDrv_functions.h"

#include "XAudio2_structs.h"
#include "XAudio2_f_structs.h"
#include "XAudio2_classes.h"
//#include "XAudio2_functions.h"

#include "AkAudio_structs.h"
#include "AkAudio_f_structs.h"
#include "AkAudio_classes.h"
//#include "AkAudio_functions.h"

//#include "BL2-SDK.h"
