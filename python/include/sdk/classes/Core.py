
from ctypes import *
import BL2SDK





class  UTextBuffer_Data(Structure):
	_fields_ = [
	
		("Unknown1", c_ubyte, 0x),
	]

class  UTextBuffer(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UTextBuffer", UTextBuffer_Data),
	]


class  USubsystem_Data(Structure):
	_fields_ = [
		("VfTable_FExec", FPointer),
	]

class  USubsystem(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("USubsystem", USubsystem_Data),
	]


class  USystem_Data(Structure):
	_fields_ = [
		("StaleCacheDays", c_int),
		("MaxStaleCacheSize", c_int),
		("MaxOverallCacheSize", c_int),
		("PackageSizeSoftLimit", c_int),
		("AsyncIOBandwidthLimit", c_float),
		("SavePath", FString),
		("CachePath", FString),
		("CacheExt", FString),
		("ScreenShotPath", FString),
		("Paths", TArray_FString),
		("IgnoredPaths", TArray_FString),
		("SeekFreePCPaths", TArray_FString),
		("ScriptPaths", TArray_FString),
		("FRScriptPaths", TArray_FString),
		("FRCheatScriptPaths", TArray_FString),
		("CutdownPaths", TArray_FString),
		("Suppress", TArray_FName),
		("Extensions", TArray_FString),
		("SeekFreePCExtensions", TArray_FString),
		("LocalizationPaths", TArray_FString),
		("TextureFileCacheExtension", FString),
		("AudioFileCacheExtension", FString),
		("MissingRedirectClassName", TArray_FString),
		("MissingRedirectObjectName", TArray_FString),
		("Unsuppress", TArray_FName),
	]

class  USystem(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("USubsystem", USubsystem_Data),
		("USystem", USystem_Data),
	]


class  UPackageMap_Data(Structure):
	_fields_ = [
	
		("Unknown1", c_ubyte, 0x),
	]

class  UPackageMap(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UPackageMap", UPackageMap_Data),
	]


class  UObjectSerializer_Data(Structure):
	_fields_ = [
	
		("Unknown1", c_ubyte, 0x),
	]

class  UObjectSerializer(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UObjectSerializer", UObjectSerializer_Data),
	]


class  UObjectRedirector_Data(Structure):
	_fields_ = [
	
		("Unknown1", c_ubyte, 0x),
	]

class  UObjectRedirector(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UObjectRedirector", UObjectRedirector_Data),
	]


class  UMetaData_Data(Structure):
	_fields_ = [
	
		("Unknown1", c_ubyte, 0x),
	]

class  UMetaData(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UMetaData", UMetaData_Data),
	]


class  ULinker_Data(Structure):
	_fields_ = [
	
		("Unknown1", c_ubyte, 0x),
	]

class  ULinker(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("ULinker", ULinker_Data),
	]


class  ULinkerSave_Data(Structure):
	_fields_ = [
	
		("Unknown1", c_ubyte, 0x),
	]

class  ULinkerSave(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("ULinker", ULinker_Data),
		("ULinkerSave", ULinkerSave_Data),
	]


class  ULinkerLoad_Data(Structure):
	_fields_ = [
	
		("Unknown1", c_ubyte, 0x),
	]

class  ULinkerLoad(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("ULinker", ULinker_Data),
		("ULinkerLoad", ULinkerLoad_Data),
	]


class  UInterface_Data(Structure):
	_fields_ = []

class  UInterface(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UInterface", UInterface_Data),
	]


class  UIntAttributeProperty_Data(Structure):
	_fields_ = [
	
		("Unknown1", c_ubyte, 0x),
	]

class  UIntAttributeProperty(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UField", UField_Data),
		("UProperty", UProperty_Data),
		("UIntProperty", UIntProperty_Data),
		("UIntAttributeProperty", UIntAttributeProperty_Data),
	]


class  UFloatAttributeProperty_Data(Structure):
	_fields_ = [
	
		("Unknown1", c_ubyte, 0x),
	]

class  UFloatAttributeProperty(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UField", UField_Data),
		("UProperty", UProperty_Data),
		("UFloatProperty", UFloatProperty_Data),
		("UFloatAttributeProperty", UFloatAttributeProperty_Data),
	]


class  UByteAttributeProperty_Data(Structure):
	_fields_ = [
	
		("Unknown1", c_ubyte, 0x),
	]

class  UByteAttributeProperty(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UField", UField_Data),
		("UProperty", UProperty_Data),
		("UByteProperty", UByteProperty_Data),
		("UByteAttributeProperty", UByteAttributeProperty_Data),
	]


class  UFactory_Data(Structure):
	_fields_ = [
		("SupportedClass", POINTER(UClass)),
		("ContextClass", POINTER(UClass)),
		("Description", FString),
		("Formats", TArray_FString),
		("bCreateNew", c_bool, 1),
		("bEditAfterNew", c_bool, 1),
		("bEditorImport", c_bool, 1),
		("bText", c_bool, 1),
		("", c_ulong, 0),
		("AutoPriority", c_int),
		("ValidGameNames", TArray_FString),
	]

class  UFactory(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UFactory", UFactory_Data),
	]


class  UTextBufferFactory_Data(Structure):
	_fields_ = []

class  UTextBufferFactory(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UFactory", UFactory_Data),
		("UTextBufferFactory", UTextBufferFactory_Data),
	]


class  UExporter_Data(Structure):
	_fields_ = [
	
		("Unknown1", c_ubyte, 0x),
		("FormatExtension", TArray_FString),
		("FormatDescription", TArray_FString),
		("Unknown2", c_ubyte, 0x),
	]

class  UExporter(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UExporter", UExporter_Data),
	]


class  UComponent_Data(Structure):
	_fields_ = [
		("TemplateOwnerClass", POINTER(UClass)),
		("TemplateName", FName),
	]

class  UComponent(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UComponent", UComponent_Data),
	]


class  UDistributionVector_Data(Structure):
	_fields_ = [
		("VfTable_FCurveEdInterface", FPointer),
		("bCanBeBaked", c_bool, 1),
		("bIsDirty", c_bool, 1),
		("", c_ulong, 0),
	]

class  UDistributionVector(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UComponent", UComponent_Data),
		("UDistributionVector", UDistributionVector_Data),
	]


class  UDistributionFloat_Data(Structure):
	_fields_ = [
		("VfTable_FCurveEdInterface", FPointer),
		("bCanBeBaked", c_bool, 1),
		("bIsDirty", c_bool, 1),
		("", c_ulong, 0),
	]

class  UDistributionFloat(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UComponent", UComponent_Data),
		("UDistributionFloat", UDistributionFloat_Data),
	]


class  UCommandlet_Data(Structure):
	_fields_ = [
		("HelpDescription", FString),
		("HelpUsage", FString),
		("HelpWebLink", FString),
		("HelpParamNames", TArray_FString),
		("HelpParamDescriptions", TArray_FString),
		("IsServer", c_bool, 1),
		("IsClient", c_bool, 1),
		("IsEditor", c_bool, 1),
		("LogToConsole", c_bool, 1),
		("ShowErrorCount", c_bool, 1),
		("", c_ulong, 0),
	]

class  UCommandlet(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UCommandlet", UCommandlet_Data),
	]


class  UHelpCommandlet_Data(Structure):
	_fields_ = []

class  UHelpCommandlet(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UCommandlet", UCommandlet_Data),
		("UHelpCommandlet", UHelpCommandlet_Data),
	]


class  UAttributeModifier_Data(Structure):
	_fields_ = [
		("Type", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("Value", c_float),
	]

class  UAttributeModifier(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UAttributeModifier", UAttributeModifier_Data),
	]


class  UPackage_Data(Structure):
	_fields_ = [
	
		("Unknown1", c_ubyte, 0x),
	]

class  UPackage(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UPackage", UPackage_Data),
	]

BL2SDK.g_loadedClasses += [("UTextBuffer", 1, "UObject")]
BL2SDK.g_loadedClasses += [("USubsystem", 6, "UObject")]
BL2SDK.g_loadedClasses += [("USystem", 5, "USubsystem")]
BL2SDK.g_loadedClasses += [("UPackageMap", 48, "UObject")]
BL2SDK.g_loadedClasses += [("UObjectSerializer", 50, "UObject")]
BL2SDK.g_loadedClasses += [("UObjectRedirector", 52, "UObject")]
BL2SDK.g_loadedClasses += [("UMetaData", 54, "UObject")]
BL2SDK.g_loadedClasses += [("ULinker", 57, "UObject")]
BL2SDK.g_loadedClasses += [("ULinkerSave", 56, "ULinker")]
BL2SDK.g_loadedClasses += [("ULinkerLoad", 60, "ULinker")]
BL2SDK.g_loadedClasses += [("UInterface", 62, "UObject")]
BL2SDK.g_loadedClasses += [("UIntAttributeProperty", 88, "UIntProperty")]
BL2SDK.g_loadedClasses += [("UFloatAttributeProperty", 94, "UFloatProperty")]
BL2SDK.g_loadedClasses += [("UByteAttributeProperty", 100, "UByteProperty")]
BL2SDK.g_loadedClasses += [("UFactory", 113, "UObject")]
BL2SDK.g_loadedClasses += [("UTextBufferFactory", 112, "UFactory")]
BL2SDK.g_loadedClasses += [("UExporter", 116, "UObject")]
BL2SDK.g_loadedClasses += [("UComponent", 123, "UObject")]
BL2SDK.g_loadedClasses += [("UDistributionVector", 122, "UComponent")]
BL2SDK.g_loadedClasses += [("UDistributionFloat", 126, "UComponent")]
BL2SDK.g_loadedClasses += [("UCommandlet", 129, "UObject")]
BL2SDK.g_loadedClasses += [("UHelpCommandlet", 128, "UCommandlet")]
BL2SDK.g_loadedClasses += [("UAttributeModifier", 132, "UObject")]
BL2SDK.g_loadedClasses += [("UPackage", 136, "UObject")]
