#ifdef UE4

#pragma once
#include <cstdint>

#include "gamedefines.h"

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

	UObject* operator()(size_t index)
	{
		return Get(index);
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
};

struct FNameEntryHeader
{
	uint16_t bIsWide : 1;
#if WITH_CASE_PRESERVING_NAME
	uint16 Len : 15;
#else
	static constexpr uint32_t ProbeHashBits = 5;
	uint16_t LowercaseProbeHash : ProbeHashBits;
	uint16_t Len : 10;
#endif
};

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

/// <summary>
/// Enum for the flags that go onto a UProperty
/// </summary>
enum EPropertyFlags : unsigned long long
{
	CPF_None = 0,
	CPF_Edit = 0x0000000000000001,
	CPF_ConstParm = 0x0000000000000002,
	CPF_BlueprintVisible = 0x0000000000000004,
	CPF_ExportObject = 0x0000000000000008,
	CPF_BlueprintReadOnly = 0x0000000000000010,
	CPF_Net = 0x0000000000000020,
	CPF_EditFixedSize = 0x0000000000000040,
	CPF_Parm = 0x0000000000000080,
	CPF_OutParm = 0x0000000000000100,
	CPF_ZeroConstructor = 0x0000000000000200,
	CPF_ReturnParm = 0x0000000000000400,
	CPF_DisableEditOnTemplate = 0x0000000000000800,
	CPF_Transient = 0x0000000000002000,
	CPF_Config = 0x0000000000004000,
	CPF_DisableEditOnInstance = 0x0000000000010000,
	CPF_EditConst = 0x0000000000020000,
	CPF_GlobalConfig = 0x0000000000040000,
	CPF_InstancedReference = 0x0000000000080000,
	CPF_DuplicateTransient = 0x0000000000200000,
	CPF_SubobjectReference = 0x0000000000400000,
	CPF_SaveGame = 0x0000000001000000,
	CPF_NoClear = 0x0000000002000000,
	CPF_ReferenceParm = 0x0000000008000000,
	CPF_BlueprintAssignable = 0x0000000010000000,
	CPF_Deprecated = 0x0000000020000000,
	CPF_IsPlainOldData = 0x0000000040000000,
	CPF_RepSkip = 0x0000000080000000,
	CPF_RepNotify = 0x0000000100000000,
	CPF_Interp = 0x0000000200000000,
	CPF_NonTransactional = 0x0000000400000000,
	CPF_EditorOnly = 0x0000000800000000,
	CPF_NoDestructor = 0x0000001000000000,
	CPF_AutoWeak = 0x0000004000000000,
	CPF_ContainsInstancedReference = 0x0000008000000000,
	CPF_AssetRegistrySearchable = 0x0000010000000000,
	CPF_SimpleDisplay = 0x0000020000000000,
	CPF_AdvancedDisplay = 0x0000040000000000,
	CPF_Protected = 0x0000080000000000,
	CPF_BlueprintCallable = 0x0000100000000000,
	CPF_BlueprintAuthorityOnly = 0x0000200000000000,
	CPF_TextExportTransient = 0x0000400000000000,
	CPF_NonPIEDuplicateTransient = 0x0000800000000000,
	CPF_ExposeOnSpawn = 0x0001000000000000,
	CPF_PersistentInstance = 0x0002000000000000,
	CPF_UObjectWrapper = 0x0004000000000000,
	CPF_HasGetValueTypeHash = 0x0008000000000000,
	CPF_NativeAccessSpecifierPublic = 0x0010000000000000,
	CPF_NativeAccessSpecifierProtected = 0x0020000000000000,
	CPF_NativeAccessSpecifierPrivate = 0x0040000000000000,
	CPF_SkipSerialization = 0x0080000000000000,
};

enum EFunctionFlags : unsigned long
{
	FUNC_None = 0x00000000,
	FUNC_Final = 0x00000001,
	FUNC_RequiredAPI = 0x00000002,
	FUNC_BlueprintAuthorityOnly = 0x00000004,
	FUNC_BlueprintCosmetic = 0x00000008,
	FUNC_Net = 0x00000040,
	FUNC_NetReliable = 0x00000080,
	FUNC_NetRequest = 0x00000100,
	FUNC_Exec = 0x00000200,
	FUNC_Native = 0x00000400,
	FUNC_Event = 0x00000800,
	FUNC_NetResponse = 0x00001000,
	FUNC_Static = 0x00002000,
	FUNC_NetMulticast = 0x00004000,
	FUNC_UbergraphFunction = 0x00008000,
	FUNC_MulticastDelegate = 0x00010000,
	FUNC_Public = 0x00020000,
	FUNC_Private = 0x00040000,
	FUNC_Protected = 0x00080000,
	FUNC_Delegate = 0x00100000,
	FUNC_NetServer = 0x00200000,
	FUNC_HasOutParms = 0x00400000,
	FUNC_HasDefaults = 0x00800000,
	FUNC_NetClient = 0x01000000,
	FUNC_DLLImport = 0x02000000,
	FUNC_BlueprintCallable = 0x04000000,
	FUNC_BlueprintEvent = 0x08000000,
	FUNC_BlueprintPure = 0x10000000,
	FUNC_EditorOnly = 0x20000000,
	FUNC_Const = 0x40000000,
	FUNC_NetValidate = 0x80000000,
	FUNC_AllFlags = 0xFFFFFFFF,
};

enum ELifetimeCondition
{
	COND_None = 0,
	COND_InitialOnly = 1,
	COND_OwnerOnly = 2,
	COND_SkipOwner = 3,
	COND_SimulatedOnly = 4,
	COND_AutonomousOnly = 5,
	COND_SimulatedOrPhysics = 6,
	COND_InitialOrOwner = 7,
	COND_Custom = 8,
	COND_ReplayOrOwner = 9,
	COND_ReplayOnly = 10,
	COND_SimulatedOnlyNoReplay = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay = 13,
	COND_Never = 15,
	COND_Max = 16,
};

struct FOutputDevice
{
	void* VfTable;
	unsigned long bSuppressEventTag;
	unsigned long bAutoEmitLineTerminator;
};




#endif