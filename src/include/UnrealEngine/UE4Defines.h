#ifdef UE4

#pragma once

#pragma warning(disable : 4267)

#include <cstdint>
#include <unordered_set>
#include <string>
#include <stdafx.h>
#include <Util.h>

/** Objects flags for internal use (GC, low level UObject code) */
enum class EInternalObjectFlags : int
{
	None = 0,
	//~ All the other bits are reserved, DO NOT ADD NEW FLAGS HERE!

	ReachableInCluster = 1 << 23, // External reference to object in cluster exists
	ClusterRoot = 1 << 24, // Root of a cluster
	Native = 1 << 25, // Native (UClass only). 
	Async = 1 << 26, // Object exists only on a different thread than the game thread.
	AsyncLoading = 1 << 27, // Object is being asynchronously loaded.
	Unreachable = 1 << 28, // Object is not reachable on the object graph.
	PendingKill = 1 << 29, // Objects that are pending destruction (invalid for gameplay but valid objects)
	RootSet = 1 << 30, // Object will not be garbage collected, even if unreferenced.

	GarbageCollectionKeepFlags = Native | Async | AsyncLoading,
	AllFlags = ReachableInCluster | ClusterRoot | Native | Async | AsyncLoading | Unreachable | PendingKill | RootSet
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

	void Empty() {
		Count = 0;
	}

	T& Get(size_t i)
	{
		return this->Data[i];
	}

	const T& operator()(int i) const
	{
		return this->Data[i];
	}

	void Add(T InputData)
	{
		if ((Count + 1) > Max) {
			Data = (T*)UnrealSDK::pRealloc(Data, sizeof(T) * (Count + 1), 0);
			Max++;
		}
		Data[Count++] = InputData;
	};

	/**
	 * Removes an element (or elements) at given location
	 *
	 * @param Index Location in array of the element to remove.
	 * @param NumToRemove Number of elements to remove.
	 */
	void RemoveAt(int Index, int NumToRemove)
	{
		if (NumToRemove)
		{
			int NumToMove = Count - Index - NumToRemove;
			if (NumToMove)
			{
				memmove
				(
					(uint8_t*)Data + (Index * sizeof(T)),
					(uint8_t*)Data + ((Index + NumToRemove) * sizeof(T)),
					NumToMove * sizeof(T)
				);
			}
			Count -= NumToRemove;
		}
	}
};

class UObject;


#pragma region GObjects
struct FUObjectItem
{
	// Pointer to the allocated object
	class UObject* Object;
	// Internal flags
	int Flags;
	// UObject Owner Cluster Index
	int ClusterRootIndex;
	// Weak Object Pointer Serial number associated with the object
	int SerialNumber;
	// Weak Object Pointer Serial number associated with the object
	int Unknown;

	inline bool IsUnreachable() const {
		return !!(Flags & int(EInternalObjectFlags::Unreachable));
	}

	inline bool IsPendingKill() const {
		return !!(Flags & int(EInternalObjectFlags::PendingKill));
	}
};

struct FChunkedFixedUObjectArray
{
	enum
	{
		NumElementsPerChunk = 64 * 1024,
	};

	/** Master table to chunks of pointers **/
	FUObjectItem** Objects;
	/** If requested, a contiguous memory where all objects are allocated **/
	FUObjectItem* PreAllocatedObjects;
	/** Maximum number of elements **/
	int Max;
	/** Number of elements we currently have **/
	int Count;
	/** Maximum number of chunks **/
	int MaxChunks;
	/** Number of chunks we currently have **/
	int NumChunks;

	UObject* Get(size_t index) {
		return Objects[index / NumElementsPerChunk][index % NumElementsPerChunk].Object;
	}

	UObject* GetByIndex(size_t index) {
		return Objects[index / NumElementsPerChunk][index % NumElementsPerChunk].Object;
	}

	UObject* operator[](size_t index)
	{
		return Get(index);
	}

	FUObjectItem GetObjectItem(size_t index) {
		return Objects[index / NumElementsPerChunk][index % NumElementsPerChunk];
	}

	inline bool IsValid(FUObjectItem* ObjectItem, bool bEvenIfPendingKill = true) {
		if (ObjectItem) 
			return bEvenIfPendingKill ? !ObjectItem->IsUnreachable() : !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
		return false;
	}
};

class FUObjectArray
{
public:
	int ObjFirstGCIndex;
	int ObjLastNonGCIndex;
	int MaxObjectsNotConsideredByGC;
	bool OpenForDisregardForGC;
	FChunkedFixedUObjectArray ObjObjects;

	// This is kinda a round-about way of fixing an issue (but it kinda should be here anyway meh)
	static inline FChunkedFixedUObjectArray* GObjects()
	{
		return static_cast<FChunkedFixedUObjectArray*>(UnrealSDK::pGObjects);
	}
};


#pragma endregion

#pragma region GNames
class FNameEntry
{
public:
	static const auto NAME_WIDE_MASK = 0x1;
	static const auto NAME_INDEX_SHIFT = 1;

	int32_t Index;
	char UnknownData00[0x04];
	FNameEntry* HashNext;
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

struct FChunkedFNameEntryArray
{
	enum
	{
		NumElementsPerChunk = 0x4000,
		MaxChunkCount = 0x80,
		ChunkTableSize = (2 * 1024 * 1024 + NumElementsPerChunk - 1) / NumElementsPerChunk
	};

	FNameEntry** Objects[ChunkTableSize];
	int Count;
	int ChunksCount;

	FNameEntry* Get(size_t index) {
		return Objects[index / NumElementsPerChunk][index % NumElementsPerChunk];
	}

	FNameEntry* operator()(size_t index)
	{
		return Get(index);
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
		FName output = ((UnrealSDK::UE4FNameInit)(UnrealSDK::pFNameInit))(Util::Widen(FindName).c_str(), 0, 1);
		*this = output;

		Logging::LogD("Made FName; Index: %d, Number: %d, Name: %s\n", Index, Number, GetName());
	}

	FName(const std::string& FindName, int number)
	{
		Index = 0;
		Number = 0;

		FName output = ((UnrealSDK::UE4FNameInit)(UnrealSDK::pFNameInit))(Util::Widen(FindName).c_str(), number, 1);
		*this = output;
	}

	static FChunkedFNameEntryArray* Names()
	{

		return (FChunkedFNameEntryArray*)UnrealSDK::pGNames;
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
#pragma endregion

class FString : public TArray<wchar_t>
{
public:
	FString()
	{
	};

	FString(wchar_t* Other)
	{
		this->Max = this->Count = Other ? (wcslen(Other) + 1) : 0;
		this->Data = (wchar_t*)calloc(this->Count, sizeof(wchar_t));

		if (this->Count && this->Data != 0)
			wcscpy(this->Data, Other);
	};

	FString(const char* Other)
	{
		this->Max = this->Count = Other ? (strlen(Other) + 1) : 0;
		this->Data = (wchar_t*)calloc(this->Count, sizeof(wchar_t));

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


struct FScriptDelegate
{
	struct FName FunctionName;
	class UObject* Object;
};

template<class TEnum>
class TEnumAsByte
{
public:
	inline TEnumAsByte()
	{
	}

	inline TEnumAsByte(TEnum _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(int32_t _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(uint8_t _value)
		: value(_value)
	{
	}

	inline operator TEnum() const
	{
		return (TEnum)value;
	}

	inline TEnum GetValue() const
	{
		return (TEnum)value;
	}

private:
	uint8_t value;
};

class FScriptInterface
{
public:
	UObject* ObjectPointer;
	void* InterfacePointer;

public:
	inline UObject* GetObject() const
	{
		return ObjectPointer;
	}

	inline UObject*& GetObjectRef()
	{
		return ObjectPointer;
	}

	inline void* GetInterface() const
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}
};


template<class InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
	inline InterfaceType* operator->() const
	{
		return (InterfaceType*)GetInterface();
	}

	inline InterfaceType& operator*() const
	{
		return *((InterfaceType*)GetInterface());
	}

	inline operator bool() const
	{
		return GetInterface() != nullptr;
	}
};

struct FTextData {
	unsigned char UnknownData[0x30];

	const wchar_t* Name;
	int Length;
};

struct FText {
	unsigned char UnknownData[0x8];

	FTextData* Data;
	const wchar_t* GetName() const {
		if (Data) return Data->Name;
		return nullptr;
	}
};



template<typename Key, typename Value>
class TMap
{
	char UnknownData[0x50];
};

struct FScriptMulticastDelegate
{
	char UnknownData[0x10];
};


struct FWeakObjectPtr
{
public:
	int32_t ObjectIndex;
	int32_t ObjectSerialNumber;

	inline FUObjectItem* GetObjectItem() const {
		if (ObjectSerialNumber == 0 || ObjectIndex < 0) { return nullptr; }

		FUObjectItem objItem = FUObjectArray::GObjects()->GetObjectItem(ObjectIndex);
		if (ObjectSerialNumber != objItem.SerialNumber) return nullptr;

		return &objItem;
	}

	inline UObject* Get() const {
		FUObjectItem* objItem = GetObjectItem();
		if (objItem == nullptr) return nullptr;

		UObject* obj = objItem->Object;
		// imo its not a good idea to give out an object that's in the process of getting destroyed (or near to it atleast)
		if (FUObjectArray::GObjects()->IsValid(objItem, false)) 
			return obj;
		return nullptr;
	}

	inline bool IsValid() {
		FUObjectItem* objItem = GetObjectItem();
		return (objItem != nullptr) && (FUObjectArray::GObjects()->IsValid(objItem) );
	}
};

template<class T = UObject, class TWeakObjectPtrBase = FWeakObjectPtr>
struct TWeakObjectPtr : private TWeakObjectPtrBase
{
public:

	inline UObject* GetObjectPtr() const
	{
		UObject* obj = TWeakObjectPtrBase::Get();
		return obj;
	}

	inline T* Get() const
	{
		return TWeakObjectPtrBase::Get();
	}

	inline T& operator*() const
	{
		return *Get();
	}

	inline T* operator->() const
	{
		return Get();
	}

	inline bool IsValid() const
	{
		return TWeakObjectPtrBase::IsValid();
	}
};

template<class T, class TBASE>
class TAutoPointer : public TBASE
{
public:
	inline operator T* () const
	{
		return TBASE::Get();
	}

	inline operator const T* () const
	{
		return (const T*)TBASE::Get();
	}

	explicit inline operator bool() const
	{
		return TBASE::Get() != nullptr;
	}
};

template<class T>
class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
{
public:
};

template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	int32_t TagAtLastTest;
	TObjectID ObjectID;
};

struct FStringAssetReference_
{
	char UnknownData[0x10];
};

class FAssetPtr : public TPersistentObjectPtr<FStringAssetReference_>
{

};

template<typename ObjectType>
class TAssetPtr : FAssetPtr
{

};

struct FSoftObjectPath
{
	FName AssetPathName;
	FString SubPathString;
};

class FSoftObjectPtr : public TPersistentObjectPtr<FSoftObjectPath>
{

};

template<typename ObjectType>
class TSoftObjectPtr : FSoftObjectPtr
{

};

struct FUniqueObjectGuid_
{
	char UnknownData[0x10];
};

class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
{

};

template<typename ObjectType>
class TLazyObjectPtr : FLazyObjectPtr
{

};


#endif