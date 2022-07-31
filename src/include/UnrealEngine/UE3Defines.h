#ifndef UE4
#pragma once
#include "stdafx.h"

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


	T& Get(size_t i)
	{
		return this->Data[i];
	}

	const T& operator()(int i) const
	{
		return this->Data[i];
	}

	void Empty() {
		Count = 0;
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
		this->Data = (wchar_t*)calloc(this->Count, sizeof(wchar_t));

		if (this->Count && this->Data != 0)
			wcscpy_s(this->Data, this->Max, Other);
	};

	FString(const char* Other)
	{
		this->Max = this->Count = Other ? (strlen(Other) + 1) : 0;
		this->Data = (wchar_t*)calloc(this->Count, sizeof(wchar_t));

		if (this->Count)
		{
			size_t ret;
			mbstowcs_s(&ret, this->Data, this->Max, Other, this->Count);
		}
	};


	const wchar_t* AsString()
	{
		if (this->Data == nullptr || this->Count == 0)
			return L"";
		return this->Data;
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

class FNameEntry
{
public:
	static const auto NAME_WIDE_MASK = 0x1;
	static const auto NAME_INDEX_SHIFT = 1;

	char UnknownData00[0x08];
	int32_t Index;
	char UnknownData01[0x04];
	union
	{
		char AnsiName[1024];
		wchar_t WideName[1024];
	};

	inline const int32_t GetIndex() const
	{
		return Index >> NAME_INDEX_SHIFT;
	}

	inline bool IsWide() const
	{
		return Index & NAME_WIDE_MASK;
	}

	inline const char* GetAnsiName() const
	{
		return AnsiName;
	}
	inline const wchar_t* GetWideName() const
	{
		return WideName;
	}
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
		Index = 0;
		Number = 0;
		if (UnrealSDK::EngineVersion <= 8630)
			((UnrealSDK::tFNameInitOld)(UnrealSDK::pFNameInit))(this, (wchar_t*)Util::Widen(FindName).c_str(), 0, 1, 1, 0);
		else
			((UnrealSDK::tFNameInitNew)(UnrealSDK::pFNameInit))(this, (wchar_t*)Util::Widen(FindName).c_str(), 0, 1, 1);
		LOG(INTERNAL, "Made FName; Index: %d, Number: %d, Name: %s", Index, Number, GetName());
	}

	FName(const std::string& FindName, int number)
	{
		Index = 0;
		Number = 0;
		if (UnrealSDK::EngineVersion <= 8630)
			((UnrealSDK::tFNameInitOld)(UnrealSDK::pFNameInit))(this, (wchar_t*)Util::Widen(FindName).c_str(), number, 1, 1,
				0);
		else
			((UnrealSDK::tFNameInitNew)(UnrealSDK::pFNameInit))(this, (wchar_t*)Util::Widen(FindName).c_str(), number, 1, 1);
	}


	static TArray<FNameEntry*>* Names()
	{
		return (TArray<FNameEntry*>*)UnrealSDK::pGNames;
	}

	const char* GetName() const
	{
		if (Index < 0 || (unsigned int)Index > Names()->Count)
			return "UnknownName";
		return Names()->Get(Index)->GetAnsiName();
	};

	bool operator ==(const FName& A) const
	{
		return Index == A.Index;
	}
};




#endif
