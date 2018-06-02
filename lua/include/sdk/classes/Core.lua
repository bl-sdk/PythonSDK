// 0x60 
struct UTextBuffer_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x24]; // 0x3C (0x24) MISSING END DATA
};

struct UTextBuffer {
	struct UObject_Data UObject;
	struct UTextBuffer_Data UTextBuffer;
};

// 0x40 
struct USubsystem_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_FExec; // 0x3C (0x4)
};

struct USubsystem {
	struct UObject_Data UObject;
	struct USubsystem_Data USubsystem;
};

// 0x144 
struct USystem_Data {
	// Last Offset: 0x40
	int StaleCacheDays; // 0x40 (0x4)
	int MaxStaleCacheSize; // 0x44 (0x4)
	int MaxOverallCacheSize; // 0x48 (0x4)
	int PackageSizeSoftLimit; // 0x4C (0x4)
	float AsyncIOBandwidthLimit; // 0x50 (0x4)
	struct FString SavePath; // 0x54 (0xC)
	struct FString CachePath; // 0x60 (0xC)
	struct FString CacheExt; // 0x6C (0xC)
	struct FString ScreenShotPath; // 0x78 (0xC)
	struct TArray_FString Paths; // 0x84 (0xC)
	struct TArray_FString IgnoredPaths; // 0x90 (0xC)
	struct TArray_FString SeekFreePCPaths; // 0x9C (0xC)
	struct TArray_FString ScriptPaths; // 0xA8 (0xC)
	struct TArray_FString FRScriptPaths; // 0xB4 (0xC)
	struct TArray_FString FRCheatScriptPaths; // 0xC0 (0xC)
	struct TArray_FString CutdownPaths; // 0xCC (0xC)
	struct TArray_FName Suppress; // 0xD8 (0xC)
	struct TArray_FString Extensions; // 0xE4 (0xC)
	struct TArray_FString SeekFreePCExtensions; // 0xF0 (0xC)
	struct TArray_FString LocalizationPaths; // 0xFC (0xC)
	struct FString TextureFileCacheExtension; // 0x108 (0xC)
	struct FString AudioFileCacheExtension; // 0x114 (0xC)
	struct TArray_FString MissingRedirectClassName; // 0x120 (0xC)
	struct TArray_FString MissingRedirectObjectName; // 0x12C (0xC)
	struct TArray_FName Unsuppress; // 0x138 (0xC)
};

struct USystem {
	struct UObject_Data UObject;
	struct USubsystem_Data USubsystem;
	struct USystem_Data USystem;
};

// 0xC0 
struct UPackageMap_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x84]; // 0x3C (0x84) MISSING END DATA
};

struct UPackageMap {
	struct UObject_Data UObject;
	struct UPackageMap_Data UPackageMap;
};

// 0x48 
struct UObjectSerializer_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0xC]; // 0x3C (0xC) MISSING END DATA
};

struct UObjectSerializer {
	struct UObject_Data UObject;
	struct UObjectSerializer_Data UObjectSerializer;
};

// 0x40 
struct UObjectRedirector_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x4]; // 0x3C (0x4) MISSING END DATA
};

struct UObjectRedirector {
	struct UObject_Data UObject;
	struct UObjectRedirector_Data UObjectRedirector;
};

// 0x78 
struct UMetaData_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x3C]; // 0x3C (0x3C) MISSING END DATA
};

struct UMetaData {
	struct UObject_Data UObject;
	struct UMetaData_Data UMetaData;
};

// 0x570 
struct ULinker_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x534]; // 0x3C (0x534) MISSING END DATA
};

struct ULinker {
	struct UObject_Data UObject;
	struct ULinker_Data ULinker;
};

// 0x618 
struct ULinkerSave_Data {
	// Last Offset: 0x570
	const unsigned char Unknown1[0xA8]; // 0x570 (0xA8) MISSING END DATA
};

struct ULinkerSave {
	struct UObject_Data UObject;
	struct ULinker_Data ULinker;
	struct ULinkerSave_Data ULinkerSave;
};

// 0xB34 
struct ULinkerLoad_Data {
	// Last Offset: 0x570
	const unsigned char Unknown1[0x5C4]; // 0x570 (0x5C4) MISSING END DATA
};

struct ULinkerLoad {
	struct UObject_Data UObject;
	struct ULinker_Data ULinker;
	struct ULinkerLoad_Data ULinkerLoad;
};

// 0x3C 
struct UInterface_Data {
	// Last Offset: 0x3C
};

struct UInterface {
	struct UObject_Data UObject;
	struct UInterface_Data UInterface;
};

// 0x88 
struct UIntAttributeProperty_Data {
	// Last Offset: 0x80
	const unsigned char Unknown1[0x8]; // 0x80 (0x8) MISSING END DATA
};

struct UIntAttributeProperty {
	struct UObject_Data UObject;
	struct UField_Data UField;
	struct UProperty_Data UProperty;
	struct UIntProperty_Data UIntProperty;
	struct UIntAttributeProperty_Data UIntAttributeProperty;
};

// 0x88 
struct UFloatAttributeProperty_Data {
	// Last Offset: 0x80
	const unsigned char Unknown1[0x8]; // 0x80 (0x8) MISSING END DATA
};

struct UFloatAttributeProperty {
	struct UObject_Data UObject;
	struct UField_Data UField;
	struct UProperty_Data UProperty;
	struct UFloatProperty_Data UFloatProperty;
	struct UFloatAttributeProperty_Data UFloatAttributeProperty;
};

// 0x8C 
struct UByteAttributeProperty_Data {
	// Last Offset: 0x84
	const unsigned char Unknown1[0x8]; // 0x84 (0x8) MISSING END DATA
};

struct UByteAttributeProperty {
	struct UObject_Data UObject;
	struct UField_Data UField;
	struct UProperty_Data UProperty;
	struct UByteProperty_Data UByteProperty;
	struct UByteAttributeProperty_Data UByteAttributeProperty;
};

// 0x70 
struct UFactory_Data {
	// Last Offset: 0x3C
	struct UClass* SupportedClass; // 0x3C (0x4)
	struct UClass* ContextClass; // 0x40 (0x4)
	struct FString Description; // 0x44 (0xC)
	struct TArray_FString Formats; // 0x50 (0xC)
	BOOL bCreateNew :1 ; // 0x5C (0x4)
	BOOL bEditAfterNew :1 ; // 0x5C (0x4)
	BOOL bEditorImport :1 ; // 0x5C (0x4)
	BOOL bText :1 ; // 0x5C (0x4)
	const unsigned long: 0;
	int AutoPriority; // 0x60 (0x4)
	struct TArray_FString ValidGameNames; // 0x64 (0xC)
};

struct UFactory {
	struct UObject_Data UObject;
	struct UFactory_Data UFactory;
};

// 0x70 
struct UTextBufferFactory_Data {
	// Last Offset: 0x70
};

struct UTextBufferFactory {
	struct UObject_Data UObject;
	struct UFactory_Data UFactory;
	struct UTextBufferFactory_Data UTextBufferFactory;
};

// 0x64 
struct UExporter_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0x4]; // 0x3C (0x4) > LAST OFFSET
	struct TArray_FString FormatExtension; // 0x40 (0xC)
	struct TArray_FString FormatDescription; // 0x4C (0xC)
	const unsigned char Unknown2[0xC]; // 0x58 (0xC) MISSING END DATA
};

struct UExporter {
	struct UObject_Data UObject;
	struct UExporter_Data UExporter;
};

// 0x48 
struct UComponent_Data {
	// Last Offset: 0x3C
	struct UClass* TemplateOwnerClass; // 0x3C (0x4)
	struct FName TemplateName; // 0x40 (0x8)
};

struct UComponent {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
};

// 0x50 
struct UDistributionVector_Data {
	// Last Offset: 0x48
	struct FPointer VfTable_FCurveEdInterface; // 0x48 (0x4)
	BOOL bCanBeBaked :1 ; // 0x4C (0x4)
	BOOL bIsDirty :1 ; // 0x4C (0x4)
	const unsigned long: 0;
};

struct UDistributionVector {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UDistributionVector_Data UDistributionVector;
};

// 0x50 
struct UDistributionFloat_Data {
	// Last Offset: 0x48
	struct FPointer VfTable_FCurveEdInterface; // 0x48 (0x4)
	BOOL bCanBeBaked :1 ; // 0x4C (0x4)
	BOOL bIsDirty :1 ; // 0x4C (0x4)
	const unsigned long: 0;
};

struct UDistributionFloat {
	struct UObject_Data UObject;
	struct UComponent_Data UComponent;
	struct UDistributionFloat_Data UDistributionFloat;
};

// 0x7C 
struct UCommandlet_Data {
	// Last Offset: 0x3C
	struct FString HelpDescription; // 0x3C (0xC)
	struct FString HelpUsage; // 0x48 (0xC)
	struct FString HelpWebLink; // 0x54 (0xC)
	struct TArray_FString HelpParamNames; // 0x60 (0xC)
	struct TArray_FString HelpParamDescriptions; // 0x6C (0xC)
	BOOL IsServer :1 ; // 0x78 (0x4)
	BOOL IsClient :1 ; // 0x78 (0x4)
	BOOL IsEditor :1 ; // 0x78 (0x4)
	BOOL LogToConsole :1 ; // 0x78 (0x4)
	BOOL ShowErrorCount :1 ; // 0x78 (0x4)
	const unsigned long: 0;
};

struct UCommandlet {
	struct UObject_Data UObject;
	struct UCommandlet_Data UCommandlet;
};

// 0x7C 
struct UHelpCommandlet_Data {
	// Last Offset: 0x7C
};

struct UHelpCommandlet {
	struct UObject_Data UObject;
	struct UCommandlet_Data UCommandlet;
	struct UHelpCommandlet_Data UHelpCommandlet;
};

// 0x44 
struct UAttributeModifier_Data {
	// Last Offset: 0x3C
	unsigned char Type; // 0x3C (0x1) (Enum = EModifierType)
	const unsigned char Unknown1[0x3]; // 0x3D (0x3) > LAST OFFSET
	float Value; // 0x40 (0x4)
};

struct UAttributeModifier {
	struct UObject_Data UObject;
	struct UAttributeModifier_Data UAttributeModifier;
};

// 0xE4 
struct UPackage_Data {
	// Last Offset: 0x3C
	const unsigned char Unknown1[0xA8]; // 0x3C (0xA8) MISSING END DATA
};

struct UPackage {
	struct UObject_Data UObject;
	struct UPackage_Data UPackage;
};

table.insert(g_loadedClasses, { "UTextBuffer", 1, "UObject" })
table.insert(g_loadedClasses, { "USubsystem", 6, "UObject" })
table.insert(g_loadedClasses, { "USystem", 5, "USubsystem" })
table.insert(g_loadedClasses, { "UPackageMap", 48, "UObject" })
table.insert(g_loadedClasses, { "UObjectSerializer", 50, "UObject" })
table.insert(g_loadedClasses, { "UObjectRedirector", 52, "UObject" })
table.insert(g_loadedClasses, { "UMetaData", 54, "UObject" })
table.insert(g_loadedClasses, { "ULinker", 57, "UObject" })
table.insert(g_loadedClasses, { "ULinkerSave", 56, "ULinker" })
table.insert(g_loadedClasses, { "ULinkerLoad", 60, "ULinker" })
table.insert(g_loadedClasses, { "UInterface", 62, "UObject" })
table.insert(g_loadedClasses, { "UIntAttributeProperty", 88, "UIntProperty" })
table.insert(g_loadedClasses, { "UFloatAttributeProperty", 94, "UFloatProperty" })
table.insert(g_loadedClasses, { "UByteAttributeProperty", 100, "UByteProperty" })
table.insert(g_loadedClasses, { "UFactory", 113, "UObject" })
table.insert(g_loadedClasses, { "UTextBufferFactory", 112, "UFactory" })
table.insert(g_loadedClasses, { "UExporter", 116, "UObject" })
table.insert(g_loadedClasses, { "UComponent", 123, "UObject" })
table.insert(g_loadedClasses, { "UDistributionVector", 122, "UComponent" })
table.insert(g_loadedClasses, { "UDistributionFloat", 126, "UComponent" })
table.insert(g_loadedClasses, { "UCommandlet", 129, "UObject" })
table.insert(g_loadedClasses, { "UHelpCommandlet", 128, "UCommandlet" })
table.insert(g_loadedClasses, { "UAttributeModifier", 132, "UObject" })
table.insert(g_loadedClasses, { "UPackage", 136, "UObject" })
