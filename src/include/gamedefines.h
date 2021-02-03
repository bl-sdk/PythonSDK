#ifndef GAMEDEFINES_H
#define GAMEDEFINES_H

#pragma once
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <stdlib.h>
#include <string>
#include "Util.h"
#include "stdafx.h"
#include "UnrealSDK.h"
#include "logging.h"

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

template <class T>
struct TArray
{
public:
	T* Data;
	unsigned int Count;
	unsigned int Max;

	TArray()
	{
		Data = nullptr;
		Count = 0;
		Max = 0;
	}

	int Num()
	{
		return this->Count;
	}

	T& operator()(int i)
	{
		return this->Data[i];
	}

	const T& operator()(int i) const
	{
		return this->Data[i];
	}
};

struct FNameEntry
{
	unsigned char UnknownData00[0x10];
	char Name[1024];
};

struct FName
{
	int Index;
	int Number;

public:
	FName()
	{
		Index = 0;
		Number = 0;
	};

public:
	FName(const std::string& FindName)
	{
		if (UnrealSDK::EngineVersion <= 8631)
			((UnrealSDK::tFNameInitOld)(UnrealSDK::pFNameInit))(this, (wchar_t *)Util::Widen(FindName).c_str(), 0, 1, 1, 0);
		else
			((UnrealSDK::tFNameInitNew)(UnrealSDK::pFNameInit))(this, (wchar_t *)Util::Widen(FindName).c_str(), 0, 1, 1);
		Logging::LogD("Made FName; Index: %d, Number: %d, Name: %s\n", Index, Number, GetName());
	}

	FName(const std::string& FindName, int number)
	{
		if (UnrealSDK::EngineVersion <= 8631)
			((UnrealSDK::tFNameInitOld)(UnrealSDK::pFNameInit))(this, (wchar_t *)Util::Widen(FindName).c_str(), number, 1, 1,
			                                              0);
		else
			((UnrealSDK::tFNameInitNew)(UnrealSDK::pFNameInit))(this, (wchar_t *)Util::Widen(FindName).c_str(), number, 1, 1);
	}

	static TArray<FNameEntry*>* Names()
	{
		return (TArray<FNameEntry*>*)UnrealSDK::pGNames;
	}

	const char* GetName() const
	{
		if (Index < 0 || Index > Names()->Num())
			return "UnknownName";
		return Names()->Data[Index]->Name;
	};

	bool operator ==(const FName& A) const
	{
		return Index == A.Index;
	}
};

struct FString : public TArray<wchar_t>
{
	FString()
	{
	};

	FString(const wchar_t* Other)
	{
		this->Max = this->Count = Other ? (wcslen(Other) + 1) : 0;
		this->Data = (wchar_t *)calloc(this->Count, sizeof(wchar_t));

		if (this->Count)
			wcscpy(this->Data, Other);
	};

	FString(const char* Other)
	{
		this->Max = this->Count = Other ? (strlen(Other) + 1) : 0;
		this->Data = (wchar_t *)calloc(this->Count, sizeof(wchar_t));

		if (this->Count)
			mbstowcs(this->Data, Other, this->Count);
	};

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

	char* AsString()
	{
		if (this->Data == nullptr || this->Count == 0)
			return (char *)"";
		char* output = (char *)calloc(this->Count + 1, sizeof(char));
		wcstombs(output, this->Data, this->Count);
		return output;
	}
};

struct FScriptDelegate
{
	struct FName FunctionName;
	class UObject* Object;
};

struct FScriptInterface
{
	UObject* ObjectPointer; //A pointer to a UObject that implements a native interface.
	void* InterfacePointer;
	//Pointer to the location of the interface object within the UObject referenced by ObjectPointer.
};

struct FOutputDevice
{
	void* VfTable;
	unsigned long bAllowSuppression;
	unsigned long bSuppressEventTag;
	unsigned long bAutoEmitLineTerminator;
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
