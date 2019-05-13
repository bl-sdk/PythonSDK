#ifndef GAMEDEFINES_H
#define GAMEDEFINES_H

#pragma once
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "Util.h"
#include "stdafx.h"

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/
namespace py = pybind11;

class PyTArray {
public:
	PyTArray() {}
};

template<class T> struct TArray
{
public:
	T * Data;
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

	T& operator() (int i)
	{
		return this->Data[i];
	}

	const T& operator() (int i) const
	{
		return this->Data[i];
	}
};

struct FNameEntry
{
	unsigned char UnknownData00[0x10];
	char Name[1024];

	void AppendNameToString(std::string& out)
	{
		out += Name;
	}
};

struct FName
{
	int Index;
	int Number;

public:
	FName() {
		Index = 0;
		Number = 0;
	};

public:
	FName(const std::string& FindName)
	{
		BL2SDK::pFNameInit(this, (wchar_t *)Util::Widen(FindName).c_str(), 0, 1, 1);
	}

	FName(const std::string& FindName, int number)
	{
		BL2SDK::pFNameInit(this, (wchar_t *)Util::Widen(FindName).c_str(), number, 1, 1);
	}

	static TArray<FNameEntry*>* Names()
	{
		return (TArray<FNameEntry*>*)BL2SDK::pGNames;
	}

	char* GetName()
	{
		if (Index < 0 || Index > this->Names()->Num())
			return (char*)"UnknownName";
		else
			return this->Names()->Data[Index]->Name;
	};

	char *GetFullName() {
		if (Index < 0 || Index > this->Names()->Num())
			return (char*)"UnknownName";
		char buffer[1000] = "";
		memset(buffer, 0, 1000);
		strcpy(buffer, GetName());
		if (Number > 0) {
			buffer[strlen(buffer)] = '_';
			itoa(Number, buffer + strlen(buffer), 10);
		}
		return buffer;
	}

	void AppendString(std::string& out)
	{
		FNameEntry* entry = Names()->Data[Index];
		entry->AppendNameToString(out);
		if (Number != 0)
		{
			out += "_";
			out += std::to_string(Number - 1);
		}
	}

	bool operator == (const FName& A) const
	{
		return Index == A.Index;
	}
};

struct FString : public TArray<wchar_t>
{
	FString() {};

	FString(wchar_t* Other)
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

	~FString() {};

	FString operator = (wchar_t* Other)
	{
		if (this->Data != Other)
		{
			this->Max = this->Count = *Other ? (wcslen(Other) + 1) : 0;

			if (this->Count)
				this->Data = Other;
		}

		return *this;
	};

	char *AsString() {
		if (this->Data == nullptr || this->Count == 0)
			return (char *)"";
		char *output = (char *)calloc(this->Count + 1, sizeof(char));
		wcstombs(output, this->Data, this->Count);
		return output;
	}
};

struct FScriptDelegate
{
	struct FName FunctionName;
	class UObject *Object;
};

struct FScriptInterface
{
	UObject* ObjectPointer;
	void* InterfacePointer;
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
	}	KeyStates;
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

struct FMalloc
{
	void** VfTable;
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
