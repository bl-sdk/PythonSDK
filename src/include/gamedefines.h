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
#include "UnrealEngine/Engine/UE3/Engine_classes.h"
#include "UnrealEngine/Core/UE3/Core_classes.h"
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



#ifndef UE4
struct FString : public TArray<wchar_t>
{
	FString()
	{
	};

	FString(wchar_t* Other)
	{
		this->Max = this->Count = Other ? (wcslen(Other) + 1) : 0;
		this->Data = (wchar_t *)calloc(this->Count, sizeof(wchar_t));

		if (this->Count && this->Data != 0)
			wcscpy(this->Data, Other);
	};

	FString(const char* Other)
	{
		this->Max = this->Count = Other ? (strlen(Other) + 1) : 0;
		this->Data = (wchar_t *)calloc(this->Count, sizeof(wchar_t));

		if (this->Count)
			mbstowcs(this->Data, Other, this->Count);
	};


	char* AsString()
	{
		if (this->Data == nullptr || this->Count == 0)
			return (char*)"";
		char* output = (char*)calloc(this->Count + 1, sizeof(char));
		wcstombs(output, this->Data, this->Count);
		return output;
	}

	~FString()
	{
	};

	FString operator =(wchar_t* Other)
	{
		if (this->Data != Other)
		{
			this->Max = this->Count = *Other ? (wcslen(Other) + 1) : 0;

			if (this->Count)
				this->Data = Other;
		}

		return *this;
	};

	

};
#endif

#ifndef UE4

struct FScriptInterface
{
	UObject* ObjectPointer; //A pointer to a UObject that implements a native interface.
	void* InterfacePointer;
	//Pointer to the location of the interface object within the UObject referenced by ObjectPointer.
};

#else

#endif


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


/*
struct TStringArray : TArray<void *> {
	struct FString GetItem(int i) {
		return ((FString *)Data)[i];
	}

	void SetItem(int i, FString d) {
		((FString *)Data)[i] = d;
	}
};

struct TObjectArray : TArray<void *> {
	class UObject *GetItem(int i) {
		return ((UObject **)Data)[i];
	}

	void SetItem(int i, UObject * d) {
		((UObject **)Data)[i] = d;
	}
};

struct TComponentArray : TArray<void *> {
	class UComponent *GetItem(int i) {
		return ((UComponent **)Data)[i];
	}

	void SetItem(int i, UComponent * d) {
		((UComponent **)Data)[i] = d;
	}
};

struct TClassArray : TArray<void *> {
	class UClass *GetItem(int i) {
		return ((UClass **)Data)[i];
	}

	void SetItem(int i, UClass * d) {
		((UClass **)Data)[i] = d;
	}
};

struct TNameArray : TArray<void *> {
	struct FName GetItem(int i) {
		return ((FName *)Data)[i];
	}

	void SetItem(int i, FName d) {
		((FName *)Data)[i] = d;
	}
};

struct TNameEntryArray : TArray<void *> {
	struct FNameEntry GetItem(int i) {
		return ((FNameEntry *)Data)[i];
	}

	void SetItem(int i, FNameEntry d) {
		((FNameEntry *)Data)[i] = d;
	}
};

struct TIntArray : TArray<void *> {
	int GetItem(int i) {
		return ((int *)Data)[i];
	}

	void SetItem(int i, int d) {
		((int *)Data)[i] = d;
	}
};

struct TInterfaceArray : TArray<void *> {
	class UInterface *GetItem(int i) {
		return ((UInterface **)Data)[i];
	}

	void SetItem(int i, UInterface *d) {
		((UInterface **)Data)[i] = d;
	}
};

struct TFloatArray : TArray<void *> {
	float GetItem(int i) {
		return ((float *)Data)[i];
	}

	void SetItem(int i, float d) {
		((float *)Data)[i] = d;
	}
};

struct TDelegateArray : TArray<void *> {
	struct FScriptDelegate GetItem(int i) {
		return ((FScriptDelegate *)Data)[i];
	}

	void SetItem(int i, FScriptDelegate d) {
		((FScriptDelegate *)Data)[i] = d;
	}
};

struct TCharArray : TArray<void *> {
	char GetItem(int i) {
		return ((char *)Data)[i];
	}

	void SetItem(int i, char d) {
		((char *)Data)[i] = d;
	}
};

struct TWCharArray : TArray<void *> {
	wchar_t GetItem(int i) {
		return ((wchar_t *)Data)[i];
	}

	void SetItem(int i, wchar_t d) {
		((wchar_t *)Data)[i] = d;
	}
};
*/


#endif
