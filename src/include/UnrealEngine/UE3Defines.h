#ifndef UE4

#pragma once

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
		Logging::LogD("Made FName; Index: %d, Number: %d, Name: %s\n", Index, Number, GetName());
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
		if (Index < 0 || Index > Names()->Count)
			return "UnknownName";
		return Names()->Get(Index)->GetAnsiName();
	};

	bool operator ==(const FName& A) const
	{
		return Index == A.Index;
	}
};

struct FScriptDelegate
{
	struct FName FunctionName;
	class UObject* Object;
};


#endif