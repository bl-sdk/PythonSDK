from ctypes import *
import BL2SDK


from ..TArrayTypes import *
from ..structs.Base import *
from ..structs.Core import *

from ..classes.Base import *

class UTextBuffer_Data(BL2SDK.UObject_Base):
    pass


class UTextBuffer(BL2SDK.UObject_Base):
    pass


class USubsystem_Data(BL2SDK.UObject_Base):
    pass


class USubsystem(BL2SDK.UObject_Base):
    pass


class USystem_Data(BL2SDK.UObject_Base):
    pass


class USystem(BL2SDK.UObject_Base):
    pass


class UPackageMap_Data(BL2SDK.UObject_Base):
    pass


class UPackageMap(BL2SDK.UObject_Base):
    pass


class UObjectSerializer_Data(BL2SDK.UObject_Base):
    pass


class UObjectSerializer(BL2SDK.UObject_Base):
    pass


class UObjectRedirector_Data(BL2SDK.UObject_Base):
    pass


class UObjectRedirector(BL2SDK.UObject_Base):
    pass


class UMetaData_Data(BL2SDK.UObject_Base):
    pass


class UMetaData(BL2SDK.UObject_Base):
    pass


class ULinker_Data(BL2SDK.UObject_Base):
    pass


class ULinker(BL2SDK.UObject_Base):
    pass


class ULinkerSave_Data(BL2SDK.UObject_Base):
    pass


class ULinkerSave(BL2SDK.UObject_Base):
    pass


class ULinkerLoad_Data(BL2SDK.UObject_Base):
    pass


class ULinkerLoad(BL2SDK.UObject_Base):
    pass


class UInterface_Data(BL2SDK.UObject_Base):
    pass


class UInterface(BL2SDK.UObject_Base):
    pass


class UIntAttributeProperty_Data(BL2SDK.UObject_Base):
    pass


class UIntAttributeProperty(BL2SDK.UObject_Base):
    pass


class UFloatAttributeProperty_Data(BL2SDK.UObject_Base):
    pass


class UFloatAttributeProperty(BL2SDK.UObject_Base):
    pass


class UByteAttributeProperty_Data(BL2SDK.UObject_Base):
    pass


class UByteAttributeProperty(BL2SDK.UObject_Base):
    pass


class UFactory_Data(BL2SDK.UObject_Base):
    pass


class UFactory(BL2SDK.UObject_Base):
    pass


class UTextBufferFactory_Data(BL2SDK.UObject_Base):
    pass


class UTextBufferFactory(BL2SDK.UObject_Base):
    pass


class UExporter_Data(BL2SDK.UObject_Base):
    pass


class UExporter(BL2SDK.UObject_Base):
    pass


class UComponent_Data(BL2SDK.UObject_Base):
    pass


class UComponent(BL2SDK.UObject_Base):
    pass


class UDistributionVector_Data(BL2SDK.UObject_Base):
    pass


class UDistributionVector(BL2SDK.UObject_Base):
    pass


class UDistributionFloat_Data(BL2SDK.UObject_Base):
    pass


class UDistributionFloat(BL2SDK.UObject_Base):
    pass


class UCommandlet_Data(BL2SDK.UObject_Base):
    pass


class UCommandlet(BL2SDK.UObject_Base):
    pass


class UHelpCommandlet_Data(BL2SDK.UObject_Base):
    pass


class UHelpCommandlet(BL2SDK.UObject_Base):
    pass


class UAttributeModifier_Data(BL2SDK.UObject_Base):
    pass


class UAttributeModifier(BL2SDK.UObject_Base):
    pass


class TArray_UAttributeModifierPtr(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(POINTER(UAttributeModifier))),
        ("Count", c_int),
        ("Max", c_int),
    ]


class UPackage_Data(BL2SDK.UObject_Base):
    pass


class UPackage(BL2SDK.UObject_Base):
    pass


class TArray_UPackagePtr(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(POINTER(UPackage))), ("Count", c_int), ("Max", c_int)]

def init():

    UTextBuffer_Data._fields_ = [("Unknown1", c_ubyte * 0x24)]

    UTextBuffer._fields_ = [
        ("UObject", UObject_Data),
        ("UTextBuffer", UTextBuffer_Data),
    ]

    USubsystem_Data._fields_ = [("VfTable_FExec", FPointer)]

    USubsystem._fields_ = [("UObject", UObject_Data), ("USubsystem", USubsystem_Data)]

    USystem_Data._fields_ = [
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

    USystem._fields_ = [
        ("UObject", UObject_Data),
        ("USubsystem", USubsystem_Data),
        ("USystem", USystem_Data),
    ]

    UPackageMap_Data._fields_ = [("Unknown1", c_ubyte * 0x84)]

    UPackageMap._fields_ = [
        ("UObject", UObject_Data),
        ("UPackageMap", UPackageMap_Data),
    ]

    UObjectSerializer_Data._fields_ = [("Unknown1", c_ubyte * 0xC)]

    UObjectSerializer._fields_ = [
        ("UObject", UObject_Data),
        ("UObjectSerializer", UObjectSerializer_Data),
    ]

    UObjectRedirector_Data._fields_ = [("Unknown1", c_ubyte * 0x4)]

    UObjectRedirector._fields_ = [
        ("UObject", UObject_Data),
        ("UObjectRedirector", UObjectRedirector_Data),
    ]

    UMetaData_Data._fields_ = [("Unknown1", c_ubyte * 0x3C)]

    UMetaData._fields_ = [("UObject", UObject_Data), ("UMetaData", UMetaData_Data)]

    ULinker_Data._fields_ = [("Unknown1", c_ubyte * 0x534)]

    ULinker._fields_ = [("UObject", UObject_Data), ("ULinker", ULinker_Data)]

    ULinkerSave_Data._fields_ = [("Unknown1", c_ubyte * 0xA8)]

    ULinkerSave._fields_ = [
        ("UObject", UObject_Data),
        ("ULinker", ULinker_Data),
        ("ULinkerSave", ULinkerSave_Data),
    ]

    ULinkerLoad_Data._fields_ = [("Unknown1", c_ubyte * 0x5C4)]

    ULinkerLoad._fields_ = [
        ("UObject", UObject_Data),
        ("ULinker", ULinker_Data),
        ("ULinkerLoad", ULinkerLoad_Data),
    ]

    UInterface_Data._fields_ = []

    UInterface._fields_ = [("UObject", UObject_Data), ("UInterface", UInterface_Data)]

    UIntAttributeProperty_Data._fields_ = [("Unknown1", c_ubyte * 0x8)]

    UIntAttributeProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UIntProperty", UIntProperty_Data),
        ("UIntAttributeProperty", UIntAttributeProperty_Data),
    ]

    UFloatAttributeProperty_Data._fields_ = [("Unknown1", c_ubyte * 0x8)]

    UFloatAttributeProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UFloatProperty", UFloatProperty_Data),
        ("UFloatAttributeProperty", UFloatAttributeProperty_Data),
    ]

    UByteAttributeProperty_Data._fields_ = [("Unknown1", c_ubyte * 0x8)]

    UByteAttributeProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UByteProperty", UByteProperty_Data),
        ("UByteAttributeProperty", UByteAttributeProperty_Data),
    ]

    UFactory_Data._fields_ = [
        ("SupportedClass", POINTER(UClass)),
        ("ContextClass", POINTER(UClass)),
        ("Description", FString),
        ("Formats", TArray_FString),
        ("bCreateNew", c_bool, 1),
        ("bEditAfterNew", c_bool, 1),
        ("bEditorImport", c_bool, 1),
        ("bText", c_bool, 1),
        ("AutoPriority", c_int),
        ("ValidGameNames", TArray_FString),
    ]

    UFactory._fields_ = [("UObject", UObject_Data), ("UFactory", UFactory_Data)]

    UTextBufferFactory_Data._fields_ = []

    UTextBufferFactory._fields_ = [
        ("UObject", UObject_Data),
        ("UFactory", UFactory_Data),
        ("UTextBufferFactory", UTextBufferFactory_Data),
    ]

    UExporter_Data._fields_ = [
        ("Unknown1", c_ubyte * 0x4),
        ("FormatExtension", TArray_FString),
        ("FormatDescription", TArray_FString),
        ("Unknown2", c_ubyte * 0xC),
    ]

    UExporter._fields_ = [("UObject", UObject_Data), ("UExporter", UExporter_Data)]

    UComponent_Data._fields_ = [
        ("TemplateOwnerClass", POINTER(UClass)),
        ("TemplateName", FName),
    ]

    UComponent._fields_ = [("UObject", UObject_Data), ("UComponent", UComponent_Data)]

    UDistributionVector_Data._fields_ = [
        ("VfTable_FCurveEdInterface", FPointer),
        ("bCanBeBaked", c_bool, 1),
        ("bIsDirty", c_bool, 1),
    ]

    UDistributionVector._fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UDistributionVector", UDistributionVector_Data),
    ]

    UDistributionFloat_Data._fields_ = [
        ("VfTable_FCurveEdInterface", FPointer),
        ("bCanBeBaked", c_bool, 1),
        ("bIsDirty", c_bool, 1),
    ]

    UDistributionFloat._fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UDistributionFloat", UDistributionFloat_Data),
    ]

    UCommandlet_Data._fields_ = [
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
    ]

    UCommandlet._fields_ = [
        ("UObject", UObject_Data),
        ("UCommandlet", UCommandlet_Data),
    ]

    UHelpCommandlet_Data._fields_ = []

    UHelpCommandlet._fields_ = [
        ("UObject", UObject_Data),
        ("UCommandlet", UCommandlet_Data),
        ("UHelpCommandlet", UHelpCommandlet_Data),
    ]

    UAttributeModifier_Data._fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Value", c_float),
    ]

    UAttributeModifier._fields_ = [
        ("UObject", UObject_Data),
        ("UAttributeModifier", UAttributeModifier_Data),
    ]

    UPackage_Data._fields_ = [("Unknown1", c_ubyte * 0xA8)]

    UPackage._fields_ = [("UObject", UObject_Data), ("UPackage", UPackage_Data)]

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
