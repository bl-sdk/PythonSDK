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

	FString(char* Other)
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

class FScriptInterface
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

struct FStruct
{
	void* base;
private:
	int bitfield = 0;
	unsigned long currentField = NULL;
public:
	FStruct(void *base) {
		this->base = base;
	};
	UObject *popObject() {
		bitfield = 0;
		class UObject *object = ((UObject **)(this->base))[0];
		this->base = (void*)((UObject **)this->base + 1);
		return object;
	};
	struct FName *popFName() {
		bitfield = 0;
		struct FName *object = (FName *)(this->base);
		this->base = (void *)((FName *)this->base + 1);
		return object;
	};
	struct FString *popFString() {
		bitfield = 0;
		struct FString *object = (FString *)(this->base);
		this->base = (void *)((FString *)this->base + 1);
		return object;
	};
	struct FVector *popFVector() {
		bitfield = 0;
		struct FVector *object = (FVector *)(this->base);
		this->base = (void *)((int)this->base + 0xC);
		return object;
	};
	float *popFloat() {
		bitfield = 0;
		float *object = (float *)(this->base);
		this->base = (void *)((float *)this->base + 1);
		return object;
	};
	unsigned char popByte() {
		bitfield = 0;
		unsigned char object = ((char *)(this->base))[0];
		this->base = (void *)((char *)this->base + 1);
		return object;
	};
	int popInt() {
		bitfield = 0;
		int object = ((int *)(this->base))[0];
		this->base = (void *)((int *)this->base + 1);
		return object;
	};
	unsigned long popULong() {
		bitfield = 0;
		unsigned long object = ((unsigned long *)(this->base))[0];
		this->base = (void *)((unsigned long *)this->base + 1);
		return object;
	};
	bool popBool() {
		if (bitfield % 64 == 0) {
			currentField = popULong();
			bitfield = 0;
		}
		return (currentField & (1 << (63 - bitfield++))) == 1;
	};
};

struct FFrame : public FOutputDevice
{
	class UStruct* Node;
	class UObject* Object;
	unsigned char* Code;
	unsigned char* Locals;

	struct FFrame* PreviousFrame;
	struct FOutParmRec* Outparams;

private:
	int bitfield = 0;
	unsigned long currentField = NULL;
public:
	void SkipFunction() {
		while ((this->Code++)[0] != 0x16)
			;
	}
	UObject *popObject() {
		bitfield = 0;
		UObject *obj = nullptr;
		BL2SDK::pFrameStep(this, this->Object, &obj);
		return obj;
	};
	struct FName *popFName() {
		bitfield = 0;
		FName *obj = new FName();
		BL2SDK::pFrameStep(this, this->Object, obj);
		return obj;
	};
	struct FString *popFString() {
		bitfield = 0;
		FString *obj = new FString();
		BL2SDK::pFrameStep(this, this->Object, obj);
		return obj;
	};
	float popFloat() {
		bitfield = 0;
		float obj = 0;
		BL2SDK::pFrameStep(this, this->Object, &obj);
		return obj;
	};
	unsigned char popByte() {
		bitfield = 0;
		unsigned char obj = 0;
		BL2SDK::pFrameStep(this, this->Object, &obj);
		return obj;
	};
	int popInt() {
		bitfield = 0;
		int obj = 0;
		BL2SDK::pFrameStep(this, this->Object, &obj);
		return obj;
	};
	unsigned long popULong() {
		bitfield = 0;
		unsigned long obj = 0;
		BL2SDK::pFrameStep(this, this->Object, &obj);
		return obj;
	};
	bool popBool() {
		if (bitfield % 64 == 0) {
			currentField = popULong();
			bitfield = 0;
		}
		return (currentField & (1 << (63 - bitfield++))) == 1;
	};
	TArray<UObject *> *popTArrayObjects() {
		bitfield = 0;
		TArray<UObject *> *obj = new TArray<UObject *>();
		BL2SDK::pFrameStep(this, this->Object, obj);
		return obj;
	};
	py::tuple popRawTArray() {
		bitfield = 0;
		TArray<void *> *obj = &TArray<void *>();
		BL2SDK::pFrameStep(this, this->Object, obj);
		return py::make_tuple(FStruct((void *)obj->Data), obj->Count);
	};
};

#endif
