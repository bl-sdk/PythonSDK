#ifndef GAMEDEFINES_H
#define GAMEDEFINES_H

#pragma once
#include <Windows.h>
#include <stdlib.h>
#include <string>
#include "Util.h"
#include "stdafx.h"
#include "UnrealSDK.h"
#include "logging.h"

#ifdef UE4
#include "UnrealEngine/Engine/UE4/UE4EngineClasses.h"
#include "UnrealEngine/Core/UE4/UE4CoreClasses.h"
#include "UnrealEngine/UE4Defines.h"
#else
#include "UnrealEngine/UE3Defines.h"
#endif

#pragma warning(disable: 4267)

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/
namespace py = pybind11;

class PyTArray
{
public:
	PyTArray()
	{
	}
};

struct FWindowsViewport;

struct FDeferredMessage
{
	FWindowsViewport* Viewport;
	UINT Message;
	WPARAM wParam;
	LPARAM lParam;

	struct
	{
		SHORT LeftControl;
		SHORT RightControl;
		SHORT LeftShift;
		SHORT RightShift;
		SHORT Menu;
	} KeyStates;
};

struct FArchive
{
};

struct FArchiveAsync : FArchive
{
	unsigned char Unknown[0x9C];
	INT CurrentPos;
};

struct ULinkerLoad : FArchive
{
	void* VfTable;
	unsigned char Unknown[0x498];
	FArchiveAsync* Loader;
};


#endif
