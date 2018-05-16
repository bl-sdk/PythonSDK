#ifndef GAMEDEFINES_H
#define GAMEDEFINES_H

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "GameSDK.h"
#include "UHook.h"

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

template<class T> struct TArray 
{ 
public: 
	T* Data;
	int Count; 
	int Max;

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
	FName() {};

public:
	FName(const std::string& FindName)
	{
		Number = 0;

		for(int i = 0; i < this->Names()->Count; i++) 
		{ 
			if(this->Names()->Data[i]) 
			{ 
				if(this->Names()->Data[i]->Name == FindName) 
				{
					Index = i;
				}
			}
		}
	}

	static TArray<FNameEntry*>* Names()
	{ 
		return (TArray<FNameEntry*>*)UHook::pGNames; 
	}

	char* GetName()
	{ 
		if ( Index < 0 || Index > this->Names()->Num() ) 
			return "UnknownName"; 
		else 
			return this->Names()->Data[ Index ]->Name; 
	};

	void AppendString(std::string& out)
	{
		FNameEntry* entry = Names()->Data[Index];
		entry->AppendNameToString(out);
		if(Number != 0)
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

	FString ( wchar_t* Other ) 
	{ 
		this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; 

		if ( this->Count ) 
			this->Data = Other; 
	}; 

	~FString() {}; 

	FString operator = ( wchar_t* Other ) 
	{ 
		if ( this->Data != Other ) 
		{ 
			this->Max = this->Count = *Other ? ( wcslen ( Other ) + 1 ) : 0; 

			if ( this->Count ) 
				this->Data = Other; 
		} 

		return *this; 
	}; 
}; 

struct FScriptDelegate 
{ 
	unsigned char UnknownData00[ 0xC ]; 
};

struct FOutputDevice
{
	void* VfTable;
	unsigned long bAllowSuppression;
	unsigned long bSuppressEventTag;
	unsigned long bAutoEmitLineTerminator;
};

struct FFrame : public FOutputDevice
{
	class UStruct* Node;
	class UObject* Object;
	unsigned char* Code;
	unsigned char* Locals;

	struct FFrame* PreviousFrame;
	struct FOutParmRec* OutParms;
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

#endif
