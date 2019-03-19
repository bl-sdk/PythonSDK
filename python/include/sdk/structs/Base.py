from ctypes import *
import BL2SDK


class TArray(Structure):
    pass


class FNameEntry(Structure):
    pass


class FName(Structure):
    pass


class FString(Structure):
    pass


class FScriptDelegate(Structure):
    pass


class FPointer(Structure):
    pass


class FQWord(Structure):
    pass


class FScriptInterface(Structure):
    pass


class FOutputDevice(Structure):
    pass


class FOutParmRec(Structure):
    pass


class FFrame(Structure):
    pass


class FNameEntry(Structure):
    pass


from ..classes.Base import *


def init():
    TArray._fields_ = [("Data", POINTER(c_ubyte)), ("Count", c_int), ("Max", c_int)]

    FNameEntry._fields_ = [
        ("Unknown", c_ubyte * 8),
        ("Index", c_int),
        ("HashNext", POINTER(FNameEntry)),
        ("Name", c_char * 1024),
    ]

    FName._fields_ = [("Index", c_int), ("Number", c_int)]

    FString._fields_ = [("Data", POINTER(c_wchar)), ("Count", c_int), ("Max", c_int)]

    FScriptDelegate._fields_ = [("Object", POINTER(UObject)), ("FunctionName", FName)]

    FPointer._fields_ = [("Pointer", c_void_p)]

    FQWord._fields_ = [("A", c_int), ("B", c_int)]

    FScriptInterface._fields_ = [
        ("ObjectPointer", POINTER(UObject)),
        ("InterfacePointer", c_void_p),
    ]

    FOutputDevice._fields_ = [
        ("VfTable", c_void_p),
        ("bAllowSuppression", c_ulong),
        ("bSuppressEventTag", c_ulong),
        ("bAutoEmitLineTerminator", c_ulong),
    ]

    FOutParmRec._fields_ = [
        ("Property", POINTER(UProperty)),
        ("PropAddr", POINTER(c_ubyte)),
        ("NextOutParm", POINTER(FOutParmRec)),
    ]

    FFrame._fields_ = [
        ("VfTable", c_void_p),
        ("bAllowSuppression", c_ulong),
        ("bSuppressEventTag", c_ulong),
        ("bAutoEmitLineTerminator", c_ulong),
        ("Node", POINTER(UStruct)),
        ("Object", POINTER(UObject)),
        ("Code", POINTER(c_ubyte)),
        ("Locals", POINTER(c_ubyte)),
        ("PreviousFrame", POINTER(FFrame)),
        ("OutParms", POINTER(FOutParmRec)),
    ]
