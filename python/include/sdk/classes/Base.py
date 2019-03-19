from ctypes import *
import BL2SDK


class UObject_Data(Structure):
    pass


class UObject(Structure):
    pass


class UField_Data(Structure):
    pass


class UField(Structure):
    pass

class UEnum_Data(Structure):
    pass


class UEnum(Structure):
    pass


class UConst_Data(Structure):
    pass


class UConst(Structure):
    pass


class TArray_char(Structure):
    pass


class UStruct_Data(Structure):
    pass


class UStruct(Structure):
    pass


class UScriptStruct_Data(Structure):
    pass


class UScriptStruct(Structure):
    pass


class UFunction_Data(Structure):
    pass


class UFunction(Structure):
    pass


class UState_Data(Structure):
    pass


class UState(Structure):
    pass


class UClass_Data(Structure):
    pass


class UClass(Structure):
    pass


class UProperty_Data(Structure):
    pass


class UProperty(Structure):
    pass


class UByteProperty_Data(Structure):
    pass


class UByteProperty(Structure):
    pass


class UIntProperty_Data(Structure):
    pass


class UIntProperty(Structure):
    pass


class UFloatProperty_Data(Structure):
    pass


class UFloatProperty(Structure):
    pass


class UBoolProperty_Data(Structure):
    pass


class UBoolProperty(Structure):
    pass


class UStrProperty_Data(Structure):
    pass


class UStrProperty(Structure):
    pass


class UNameProperty_Data(Structure):
    pass


class UNameProperty(Structure):
    pass


class UDelegateProperty_Data(Structure):
    pass


class UDelegateProperty(Structure):
    pass


class UObjectProperty_Data(Structure):
    pass


class UObjectProperty(Structure):
    pass


class UComponentProperty_Data(Structure):
    pass


class UComponentProperty(Structure):
    pass


class UClassProperty_Data(Structure):
    pass


class UClassProperty(Structure):
    pass


class UInterfaceProperty_Data(Structure):
    pass


class UInterfaceProperty(Structure):
    pass


class UStructProperty_Data(Structure):
    pass


class UStructProperty(Structure):
    pass


class UArrayProperty_Data(Structure):
    pass


class UArrayProperty(Structure):
    pass


class UMapProperty_Data(Structure):
    pass


class UMapProperty(Structure):
    pass

from ..structs.Base import *

class TArray_FName(Structure):
    _fields_ = [("Data", POINTER(FName)), ("Count", c_int), ("Max", c_int)]

from ..TArrayTypes import *

def init():
    UObject_Data._fields_ = [
        ("VfTableObject", FPointer),
        ("HashNext", POINTER(UObject)),
        ("ObjectFlags", FQWord),
        ("HashOuterNext", POINTER(UObject)),
        ("StateFrame", FPointer),
        ("Linker", POINTER(UObject)),
        ("LinkerIndex", FPointer),
        ("Index", c_int),
        ("NetIndex", c_int),
        ("Outer", POINTER(UObject)),
        ("Name", FName),
        ("Class", POINTER(UClass)),
        ("ObjectArchetype", POINTER(UObject)),
    ]

    UObject._fields_ = [("UObject", UObject_Data)]

    UField_Data._fields_ = [("Next", POINTER(UField))]

    UField._fields_ = [("UObject", UObject_Data), ("UField", UField_Data)]

    UEnum_Data._fields_ = [("Names", TArray_FName)]

    UEnum._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UEnum", UEnum_Data),
    ]

    UConst_Data._fields_ = [("Value", FString)]

    UConst._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UConst", UConst_Data),
    ]

    TArray_char._fields_ = [("Data", POINTER(c_char)), ("Count", c_int), ("Max", c_int)]

    UStruct_Data._fields_ = [
        ("Unknown1", c_ubyte * 0x8),
        ("SuperField", POINTER(UField)),
        ("Children", POINTER(UField)),
        ("PropertySize", c_ushort),
        ("Unknown2", c_ubyte),
        ("MinAlignment", c_ubyte),
        ("Script", TArray_char),
        ("Unknown3", c_ubyte * 0x2C),
    ]

    UStruct._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UStruct", UStruct_Data),
    ]

    UScriptStruct_Data._fields_ = [("Unknown", c_ubyte * 0x1C)]

    UScriptStruct._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UStruct", UStruct_Data),
        ("UScriptStruct", UScriptStruct_Data),
    ]

    UFunction_Data._fields_ = [
        ("FunctionFlags", c_ulong),
        ("iNative", c_ushort),
        ("RepOffset", c_ushort),
        ("FriendlyName", FName),
        ("NumParms", c_ushort),
        ("ParmsSize", c_ushort),
        ("ReturnValueOffset", c_ulong),
        ("Unknown", c_ubyte * 0x4),
        ("Func", c_void_p),
    ]

    UFunction._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UStruct", UStruct_Data),
        ("UFunction", UFunction_Data),
    ]

    UState_Data._fields_ = [("Unknown", c_ubyte * 0x44)]

    UState._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UStruct", UStruct_Data),
        ("UState", UState_Data),
    ]

    UClass_Data._fields_ = [("Unknown", c_ubyte * 0x100)]

    UClass._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UStruct", UStruct_Data),
        ("UState", UState_Data),
        ("UClass", UClass_Data),
    ]

    UProperty_Data._fields_ = [
        ("ArrayDim", c_ulong),
        ("ElementSize", c_ulong),
        ("PropertyFlags", FQWord),
        ("PropertySize", c_ushort),
        ("Unknown1", c_ushort),
        ("Unknown2", c_ubyte * 0xC),
        ("Offset", c_ulong),
        ("Unknown3", c_ubyte * 0x1C),
    ]

    UProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
    ]

    UByteProperty_Data._fields_ = [("Enum", POINTER(UEnum))]

    UByteProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UByteProperty", UByteProperty_Data),
    ]

    UIntProperty_Data._fields_ = []

    UIntProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UIntProperty", UIntProperty_Data),
    ]

    UFloatProperty_Data._fields_ = []

    UFloatProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UFloatProperty", UFloatProperty_Data),
    ]

    UBoolProperty_Data._fields_ = [("BitMask", c_ulong)]

    UBoolProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UBoolProperty", UBoolProperty_Data),
    ]

    UStrProperty_Data._fields_ = []

    UStrProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UStrProperty", UStrProperty_Data),
    ]

    UNameProperty_Data._fields_ = []

    UNameProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UNameProperty", UNameProperty_Data),
    ]

    UDelegateProperty_Data._fields_ = [("Unknown", c_ubyte * 0x8)]

    UDelegateProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UDelegateProperty", UDelegateProperty_Data),
    ]

    UObjectProperty_Data._fields_ = [("PropertyClass", POINTER(UClass))]

    UObjectProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UObjectProperty", UObjectProperty_Data),
    ]

    UComponentProperty_Data._fields_ = []

    UComponentProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UObjectProperty", UObjectProperty_Data),
        ("UComponentProperty", UComponentProperty_Data),
    ]

    UClassProperty_Data._fields_ = [("MetaClass", POINTER(UClass))]

    UClassProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UObjectProperty", UObjectProperty_Data),
        ("UClassProperty", UClassProperty_Data),
    ]

    UInterfaceProperty_Data._fields_ = [("InterfaceClass", POINTER(UClass))]

    UInterfaceProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UInterfaceProperty", UInterfaceProperty_Data),
    ]

    UStructProperty_Data._fields_ = [("Struct", POINTER(UStruct))]

    UStructProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UStructProperty", UStructProperty_Data),
    ]

    UArrayProperty_Data._fields_ = [("Inner", POINTER(UProperty))]

    UArrayProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UArrayProperty", UArrayProperty_Data),
    ]

    UMapProperty_Data._fields_ = [
        ("Key", POINTER(UProperty)),
        ("Value", POINTER(UProperty)),
    ]

    UMapProperty._fields_ = [
        ("UObject", UObject_Data),
        ("UField", UField_Data),
        ("UProperty", UProperty_Data),
        ("UMapProperty", UMapProperty_Data),
    ]

    # 					  Class Name -   Engine Name   - Base Class
    BL2SDK.g_loadedClasses += [("UObject", "Class Core.Object", None)]
    BL2SDK.g_loadedClasses += [("UField", "Class Core.Field", "UObject")]
    BL2SDK.g_loadedClasses += [("UEnum", "Class Core.Enum", "UField")]
    BL2SDK.g_loadedClasses += [("UConst", "Class Core.Const", "UField")]
    BL2SDK.g_loadedClasses += [("UStruct", "Class Core.Struct", "UField")]
    BL2SDK.g_loadedClasses += [("UScriptStruct", "Class Core.ScriptStruct", "UStruct")]
    BL2SDK.g_loadedClasses += [("UFunction", "Class Core.Function", "UStruct")]
    BL2SDK.g_loadedClasses += [("UState", "Class Core.State", "UStruct")]
    BL2SDK.g_loadedClasses += [("UClass", "Class Core.Class", "UState")]
    BL2SDK.g_loadedClasses += [("UProperty", "Class Core.Property", "UField")]
    BL2SDK.g_loadedClasses += [
        ("UByteProperty", "Class Core.ByteProperty", "UProperty")
    ]
    BL2SDK.g_loadedClasses += [("UIntProperty", "Class Core.IntProperty", "UProperty")]
    BL2SDK.g_loadedClasses += [
        ("UFloatProperty", "Class Core.FloatProperty", "UProperty")
    ]
    BL2SDK.g_loadedClasses += [
        ("UBoolProperty", "Class Core.BoolProperty", "UProperty")
    ]
    BL2SDK.g_loadedClasses += [("UStrProperty", "Class Core.StrProperty", "UProperty")]
    BL2SDK.g_loadedClasses += [
        ("UNameProperty", "Class Core.NameProperty", "UProperty")
    ]
    BL2SDK.g_loadedClasses += [
        ("UDelegateProperty", "Class Core.DelegateProperty", "UProperty")
    ]
    BL2SDK.g_loadedClasses += [
        ("UObjectProperty", "Class Core.ObjectProperty", "UProperty")
    ]
    BL2SDK.g_loadedClasses += [
        ("UComponentProperty", "Class Core.ComponentProperty", "UObjectProperty")
    ]
    BL2SDK.g_loadedClasses += [
        ("UClassProperty", "Class Core.ClassProperty", "UObjectProperty")
    ]
    BL2SDK.g_loadedClasses += [
        ("UInterfaceProperty", "Class Core.InterfaceProperty", "UProperty")
    ]
    BL2SDK.g_loadedClasses += [
        ("UStructProperty", "Class Core.StructProperty", "UProperty")
    ]
    BL2SDK.g_loadedClasses += [
        ("UArrayProperty", "Class Core.ArrayProperty", "UProperty")
    ]
    BL2SDK.g_loadedClasses += [("UMapProperty", "Class Core.MapProperty", "UProperty")]
