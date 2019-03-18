from ctypes import *
import BL2SDK


class FSoundThemeBinding(Structure):
    _fields_ = [("ThemeName", FName), ("Theme", POINTER(UUISoundTheme))]


class FASValue(Structure):
    _fields_ = [
        ("Type", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("B", c_bool, 1),
        ("", c_ulong, 0),
        ("N", c_float),
        ("S", FString),
    ]


class FGFxWidgetBinding(Structure):
    _fields_ = [("WidgetName", FName), ("WidgetClass", POINTER(UClass))]


class FGFxDataStoreBinding(Structure):
    _fields_ = [
        ("DataSource", FUIDataStoreBinding),
        ("VarPath", FString),
        ("ModelId", FString),
        ("ControlId", FString),
        ("bEditable", c_bool, 1),
        ("", c_ulong, 0),
        ("CellTags", TArray_FName),
        ("ModelIdUtf8", TArray_unsigned_char),
        ("ControlIdUtf8", TArray_unsigned_char),
        ("ListDataProvider", FScriptInterface),
        ("FullCellTags", TArray_FName),
        ("ModelRef", FPointer),
        ("ControlRef", FPointer),
    ]


class FExternalTexture(Structure):
    _fields_ = [("Resource", FString), ("Texture", POINTER(UTexture))]


class FASDisplayInfo(Structure):
    _fields_ = [
        ("X", c_float),
        ("Y", c_float),
        ("Z", c_float),
        ("Rotation", c_float),
        ("XRotation", c_float),
        ("YRotation", c_float),
        ("XScale", c_float),
        ("YScale", c_float),
        ("ZScale", c_float),
        ("Alpha", c_float),
        ("Visible", c_bool, 1),
        ("hasX", c_bool, 1),
        ("hasY", c_bool, 1),
        ("hasZ", c_bool, 1),
        ("hasRotation", c_bool, 1),
        ("hasXRotation", c_bool, 1),
        ("hasYRotation", c_bool, 1),
        ("hasXScale", c_bool, 1),
        ("hasYScale", c_bool, 1),
        ("hasZScale", c_bool, 1),
        ("hasAlpha", c_bool, 1),
        ("hasVisible", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FASColorTransform(Structure):
    _fields_ = [("Multiply", FLinearColor), ("Add", FLinearColor)]


class FEventData(Structure):
    _fields_ = [
        ("Type", FString),
        ("Data", c_int),
        ("mouseIndex", c_int),
        ("Button", c_int),
        ("Index", c_int),
        ("lastIndex", c_int),
        ("controllerIdx", c_int),
    ]


class FGCReference(Structure):
    _fields_ = [("m_object", POINTER(UObject)), ("m_count", c_int), ("m_statid", c_int)]


class FAkEventResolver(Structure):
    _fields_ = [("Interaction", FName), ("AkEvent", POINTER(UAkEvent))]
