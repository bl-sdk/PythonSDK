#ifdef UE4

#pragma once

#pragma warning(disable : 4267)

#include <cstdint>
#include <unordered_set>
#include <string>
#include <stdafx.h>
#include "Util.h"
#include <algorithm>

struct FText;

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

	~TArray() {
		DestroyItems(Data, Count);

		// volatile const T* Dummy = &DebugGet(0);
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
		/*
		if ((Count + 1) > Max) {
			size_t sizeOfT = static_cast<size_t>(sizeof(T));
			size_t NewSize = (static_cast<size_t>(Count) + 1) * sizeOfT;
			Data = (T*)UnrealSDK::pRealloc(Data, NewSize, 0);
			Max++;
		}
		Data[Count++] = InputData;
		*/
		
		if (Count + 1 > Max) {
			// This is the equivalent of `ArrayMax = AllocatorInstance.CalculateSlackGrow(ArrayNum, ArrayMax, sizeof(ElementType));`
			Max = CalculateSlackGrow(Count + 1, Max, sizeof(T));
			ResizeAllocation(Count, Max, sizeof(T));
		}
		Data[Count++] = InputData;
		
	};

	/**
	 * Removes an element (or elements) at given location
	 *
	 * @param Index Location in array of the element to remove.
	 * @param num Number of elements to remove.
	 */
	void RemoveAt(int Index, int num, bool bAllowShrinking = true)
	{
		if (num) {
			if( !(Count >= 0 && Max >= Count)) { return; }
			if( !(Index >= 0 && ( (unsigned int)(Index + num) <= Count))) { return; }

			// Call the destructors of the items in the array
			DestroyItems(Data+Index, num);

			// Skip the memmove if we have nothing to move
			int NumToMove = Count - Index - num;
			if (NumToMove) {
				void* dst = (uint8_t*)Data + ( (Index)          *sizeof(T) );
				void* src = (uint8_t*)Data + ( (Index + num)    *sizeof(T) );
				size_t size = NumToMove * sizeof(T);
				memmove(dst, src, size);
			}
			Count = Count - num;

			if (bAllowShrinking) {
				ResizeShrink();
			}
		}
	}

private:
	void DestroyItems(T* Elements, int c) {
		while (c) {
			typedef T ElementType;
			Elements->ElementType::~ElementType();
			++Elements;
			--c;
		}
		Data = Elements;
	}

	void ResizeShrink() {
		const int NewMax = CalculateSlackShrink(Count, Max, sizeof(T));
		if (NewMax != -1 && NewMax != Max) {
			Max = NewMax;
			if (!(Max >= Count)) { return; }
			ResizeAllocation(Count, Max, sizeof(T));
		}
	}

	void ResizeAllocation(int PreviousNumElements, int NumElements, size_t NumBytesPerElement) {
		if (Data || NumElements) {
			Data = (T*)UnrealSDK::pRealloc(Data, NumElements * NumBytesPerElement, 0);
		}
	}

	int CalculateSlackGrow(int NumElements, int NumAllocated, size_t BytesPer, bool bQuantize = false, unsigned int alignment = 0) {
		// These values are if !AGGRESSIVE_MEMORY_SAVING btw
		const size_t FirstGrow = 4; // 1 if AGGRESSIVE_MEMORY_SAVING
		const size_t ConstantGrow = 16; // 0 if ^^^^^

		int retVal;
		size_t Grow = FirstGrow;
		if (NumAllocated || size_t(NumElements) > Grow) {
			Grow = size_t(NumElements) + 3 * size_t(NumElements) / 8 + ConstantGrow;
		}
		if (bQuantize) {

		}
		else {
			retVal = Grow;
		}

		if (NumElements > retVal) {
			retVal = INT32_MAX;
		}

		return retVal;
	}

	int CalculateSlackShrink(int NumElements, int NumAllocated, size_t BytesPer, bool bQuantize = false, unsigned int alignment = 0) {
		int Retval;
		if (NumElements > NumAllocated) { return -1; }

		const int CurrentSlackElements = NumAllocated - NumElements;
		const size_t CurrentSlackBytes = (NumAllocated - NumElements) * BytesPer;
		const bool bTooManySlackBytes = CurrentSlackBytes >= 16384;
		const bool bTooManySlackElements = 3 * NumElements < 2 * NumAllocated;
		if ((bTooManySlackBytes || bTooManySlackElements) && (CurrentSlackElements > 64 || !NumElements)) {
			Retval = NumElements;
			if(Retval > 0 && bQuantize) { }
		}
		else {
			Retval = NumAllocated;
		}

		return Retval;
	}

	const T& DebugGet(int Index) const { return this->Data[Index]; }
};

template<typename KeyType, typename ValueType>
class TPair
{
public:
	KeyType   Key;
	ValueType Value;
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
	// ???
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


	static inline size_t ReverseObjectLookup(UObject* obj) {
		for (size_t i = 0; i < GObjects()->Count; ++i) {
			if (GObjects()->GetByIndex(i) == obj) return i;
		}
		return (size_t)-1;
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

	/* An FName will be valid if:
		- The Index is >= 0
		- The Index is less than the size of GNames
	*/
	const bool IsValid() const {
		return (Index >= 0 && Index < Names()->Count);
	}
};
#pragma endregion

class FString : public TArray<TCHAR>
{
public:
	FString()
	{
	};

	FString(const wchar_t* Other)
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


	const wchar_t* AsString()
	{
		if (this->Data == nullptr || this->Count == 0)
			return L"";
		return this->Data;
	}

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

	bool IsValid() {
		// An FString is valid if:
		//	* Data is not nullptr
		//  * Count is greater than 0
		//  * Count is less than (or equal to) the max
		return (this->Data != nullptr && (this->Count > 0) && (this->Count <= this->Max));
	}
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
	// A pointer to a UObject that implements a native interface
	UObject* ObjectPointer;

	// A pointer to the location of the interface object within the UObject referenced by ObjectPointer.
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

/* Information about any given FText */
namespace ETextFlag
{
	enum Type /* Information about any given FText */
	{
		Transient = (1 << 0), // Practically all FStrings set in game will use this (See: definition of transient for more :P)
		CultureInvariant = (1 << 1), // A string that does not care about any culture
		ConvertedProperty = (1 << 2),
		Immutable = (1 << 3),
		InitializedFromString = (1 << 4),  // This FText was created by using FText::FromString
	};
}

/*
* No complexity to it, just holds the source string. 
* This is *usually* the class that is used for FText-s, but sometimes they use other things like ones from a pool of FStrings
*/
class FTextHistory {
public:
	void** __vfptr;

	/* Revision index of this history, rebuilds when it is out of sync with the FTextLocalizationManager */
	uint16_t Revision;

	unsigned char UnknownData0[14]; /* Unknown Data */

	/* 
	* Technically this isn't the proper format, but instead something different in most cases
	* But it should work in place, the PooledString will be used if its valid (i.e. not nullptr && `Count > Max` && `Count <= 0`)
	* Normally the pooled version is a subclass of FTextHistory, but this seems to work and you can just check if PooledString is valid
	*/
	class FString* PooledString;

	unsigned char UnknownData[24]; /* Unknown Data */

	/* The actual FText data, stored as an FString */
	class FString SourceString;

	FString* GetSourceString() {
		if (PooledString != nullptr && PooledString->IsValid()) {
			return PooledString;
		}
		return &SourceString;
	}

	void SetSourceString(FString* val) {
		// When setting the source string, we want to override both the PooledString AND the SourceString for consistency

		if (PooledString != nullptr && PooledString->IsValid()) { // Don't copy if it is nullptr or invalid (if its invalid, then that means its not used)
			memcpy(PooledString, val, sizeof(FString*));
			PooledString->Count = val->Count;
			PooledString->Max = val->Max;
		}
		if (&SourceString != nullptr) { // Always copy to SourceString if the pointer is fine
			memcpy(&SourceString, val, sizeof(FString*));
			SourceString.Count = val->Count;
			SourceString.Max = val->Max;
		}
	}
};

struct FText {
	unsigned char UnknownData[0x8]; // Unknown

	FTextHistory* Data; 

	uint32_t Flags; /* Flags with various information on what sort of FText this is, see: ETextFlag::Type */

	const wchar_t* ToString() const {
		if (Data) {
			FString* result = Data->GetSourceString();
			if (result == nullptr || !result->IsValid()) return nullptr;
			return result->AsString();
		}
		return nullptr;
	}

	FString* GetFString() {
		if (Data) {
			FString* src = Data->GetSourceString();
			// Return nullptr if src is nullptr or the string isn't valid
			if (src == nullptr || !src->IsValid()) return nullptr;
			return src;
		}
		return nullptr;
	}

	void SetString(FString* str) {
		if (Data) {
			Data->SetSourceString(str);
		}
	}
};



template<typename Key, typename Value>
class TMap
{
	char UnknownData[0x50];
};



struct FWeakObjectPtr
{
public:
	int32_t ObjectIndex;
	int32_t ObjectSerialNumber;

	inline FUObjectItem* GetObjectItem() const {
		// If the serial is 0 and the index is <= 0, that means the obj pointer has been corrupted
		if (ObjectSerialNumber == 0 && ObjectIndex <= 0) { return nullptr; }

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

	inline void Set(UObject* obj) {
		// If the obj is null we wanna do some other stuff instead
		if(obj != nullptr) {
			size_t index = FUObjectArray::ReverseObjectLookup(obj);
			if (index == -1) return;

			ObjectIndex = (int)index;
			FUObjectItem objItem = FUObjectArray::GObjects()->GetObjectItem(ObjectIndex);
			ObjectSerialNumber = objItem.SerialNumber;
		}
		else {
			ObjectIndex = 0;
			ObjectSerialNumber = -1;
		}
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

	inline void SetObjectPtr(UObject* obj) {
		TWeakObjectPtrBase::Set(obj);
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


struct FScriptMulticastDelegate
{
	FName FunctionName; // Name of the function to call on the bound object
	FWeakObjectPtr Object; // The object bound to this delegate, or nullptr if no object is bound
};


#endif