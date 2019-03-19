from ctypes import *
import BL2SDK


class FVector2D(Structure):
    pass


class TArray_FVector2D(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FVector2D)), ("Count", c_int), ("Max", c_int)]


class FPlane2D(Structure):
    pass


class FVector(Structure):
    pass


class TArray_FVector(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FVector)), ("Count", c_int), ("Max", c_int)]


class FGuid(Structure):
    pass


class TArray_FGuid(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FGuid)), ("Count", c_int), ("Max", c_int)]


class FVector4(Structure):
    pass


class FNameBasedObjectPath(Structure):
    pass


class TArray_FNameBasedObjectPath(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FNameBasedObjectPath)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FFlag(Structure):
    pass


class FQuat(Structure):
    pass


class TArray_FQuat(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FQuat)), ("Count", c_int), ("Max", c_int)]


class FBoneAtom(Structure):
    pass


class TArray_FBoneAtom(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FBoneAtom)), ("Count", c_int), ("Max", c_int)]


class FSmartVector(Structure):
    pass


class FLinearColor(Structure):
    pass


class TArray_FLinearColor(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FLinearColor)), ("Count", c_int), ("Max", c_int)]


class FColor(Structure):
    pass


class TArray_FColor(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FColor)), ("Count", c_int), ("Max", c_int)]


class FInterpCurvePointVector2D(Structure):
    pass


class TArray_FInterpCurvePointVector2D(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInterpCurvePointVector2D)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FInterpCurveVector2D(Structure):
    pass


class FInterpCurvePointFloat(Structure):
    pass


class TArray_FInterpCurvePointFloat(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInterpCurvePointFloat)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FInterpCurveFloat(Structure):
    pass


class FCylinder(Structure):
    pass


class FInterpCurvePointVector(Structure):
    pass


class TArray_FInterpCurvePointVector(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInterpCurvePointVector)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FInterpCurveVector(Structure):
    pass


class FPlane(Structure):
    pass


class TArray_FPlane(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPlane)), ("Count", c_int), ("Max", c_int)]


class FMatrix(Structure):
    pass


class TArray_FMatrix(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FMatrix)), ("Count", c_int), ("Max", c_int)]


class FBoxSphereBounds(Structure):
    pass


class FTwoVectors(Structure):
    pass


class FTAlphaBlend(Structure):
    pass


class FArray_Mirror(Structure):
    pass


class FStableArray_Mirror(Structure):
    pass


class FOctreeElementId(Structure):
    pass


class FRenderCommandFence(Structure):
    pass


class FRawDistribution(Structure):
    pass


class FInterpCurvePointLinearColor(Structure):
    pass


class TArray_FInterpCurvePointLinearColor(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInterpCurvePointLinearColor)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FInterpCurveLinearColor(Structure):
    pass


class FInterpCurvePointQuat(Structure):
    pass


class TArray_FInterpCurvePointQuat(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInterpCurvePointQuat)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FInterpCurveQuat(Structure):
    pass


class FInterpCurvePointTwoVectors(Structure):
    pass


class TArray_FInterpCurvePointTwoVectors(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FInterpCurvePointTwoVectors)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FInterpCurveTwoVectors(Structure):
    pass


class FBox(Structure):
    pass


class FTPOV(Structure):
    pass


class FSHVector(Structure):
    pass


class FSHVectorRGB(Structure):
    pass


class FIntPoint3D(Structure):
    pass


class FIntPoint(Structure):
    pass


class FPackedNormal(Structure):
    pass


class FChunkedList_Mirror(Structure):
    pass


class FIndirectArray_Mirror(Structure):
    pass


class FInlinePointerArray_Mirror(Structure):
    pass


class FFColorVertexBuffer_Mirror(Structure):
    pass


class FRenderCommandFence_Mirror(Structure):
    pass


class FUntypedBulkData_Mirror(Structure):
    pass


class FBitArray_Mirror(Structure):
    pass


class FSparseArray_Mirror(Structure):
    pass


class FSet_Mirror(Structure):
    pass


class FMultiMap_Mirror(Structure):
    pass


class FMap_Mirror(Structure):
    pass


class FThreadSafeCounter(Structure):
    pass


class FDouble(Structure):
    pass


class TArray_FDouble(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FDouble)), ("Count", c_int), ("Max", c_int)]


class FRawDistributionFloat(Structure):
    pass


class FRawDistributionVector(Structure):
    pass


from ..TArrayTypes import *
from ..structs.Base import *

from ..classes.Base import *
from ..classes.Core import *


def init():
    FVector2D._fields_ = [("X", c_float), ("Y", c_float)]

    FPlane2D._fields_ = [("X", c_float), ("Y", c_float), ("W", c_float)]

    FVector._fields_ = [("X", c_float), ("Y", c_float), ("Z", c_float)]

    FGuid._fields_ = [("A", c_int), ("B", c_int), ("C", c_int), ("D", c_int)]

    FVector4._fields_ = [("X", c_float), ("Y", c_float), ("Z", c_float), ("W", c_float)]

    FNameBasedObjectPath._fields_ = [
        ("PathComponentNames", FName * 6),
        ("IsSubobjectMask", c_ubyte),
    ]

    FFlag._fields_ = [
        ("Value", c_ubyte),
        ("Raised", c_ubyte),
        ("Lowered", c_ubyte),
        ("Padding", c_ubyte),
        ("RaisedTime", c_float),
        ("LoweredTime", c_float),
        ("Duration", c_float),
    ]

    FQuat._fields_ = [("X", c_float), ("Y", c_float), ("Z", c_float), ("W", c_float)]

    FBoneAtom._fields_ = [
        ("Rotation", FQuat),
        ("Translation", FVector),
        ("Scale", c_float),
    ]

    FSmartVector._fields_ = [("Vector", FVector), ("Flag", FFlag)]

    FLinearColor._fields_ = [
        ("R", c_float),
        ("G", c_float),
        ("B", c_float),
        ("A", c_float),
    ]

    FColor._fields_ = [("B", c_ubyte), ("G", c_ubyte), ("R", c_ubyte), ("A", c_ubyte)]

    FInterpCurvePointVector2D._fields_ = [
        ("InVal", c_float),
        ("OutVal", FVector2D),
        ("ArriveTangent", FVector2D),
        ("LeaveTangent", FVector2D),
        ("InterpMode", c_ubyte),
    ]

    FInterpCurveVector2D._fields_ = [
        ("Points", TArray_FInterpCurvePointVector2D),
        ("InterpMethod", c_ubyte),
    ]

    FInterpCurvePointFloat._fields_ = [
        ("InVal", c_float),
        ("OutVal", c_float),
        ("ArriveTangent", c_float),
        ("LeaveTangent", c_float),
        ("InterpMode", c_ubyte),
    ]

    FInterpCurveFloat._fields_ = [
        ("Points", TArray_FInterpCurvePointFloat),
        ("InterpMethod", c_ubyte),
    ]

    FCylinder._fields_ = [("Radius", c_float), ("Height", c_float)]

    FInterpCurvePointVector._fields_ = [
        ("InVal", c_float),
        ("OutVal", FVector),
        ("ArriveTangent", FVector),
        ("LeaveTangent", FVector),
        ("InterpMode", c_ubyte),
    ]

    FInterpCurveVector._fields_ = [
        ("Points", TArray_FInterpCurvePointVector),
        ("InterpMethod", c_ubyte),
    ]

    FPlane._fields_ = [("X", c_float), ("Y", c_float), ("Z", c_float), ("W", c_float)]

    FMatrix._fields_ = [
        ("XPlane", FPlane),
        ("YPlane", FPlane),
        ("ZPlane", FPlane),
        ("WPlane", FPlane),
    ]

    FBoxSphereBounds._fields_ = [
        ("Origin", FVector),
        ("BoxExtent", FVector),
        ("SphereRadius", c_float),
    ]

    FTwoVectors._fields_ = [("v1", FVector), ("v2", FVector)]

    FTAlphaBlend._fields_ = [
        ("AlphaIn", c_float),
        ("AlphaOut", c_float),
        ("AlphaTarget", c_float),
        ("BlendTime", c_float),
        ("BlendTimeToGo", c_float),
        ("BlendType", c_ubyte),
    ]

    FArray_Mirror._fields_ = [
        ("Data", FPointer),
        ("ArrayNum", c_int),
        ("ArrayMax", c_int),
    ]

    FStableArray_Mirror._fields_ = [
        ("ArrayNumInUse", c_int),
        ("ArrayNumAllocated", c_int),
        ("ArrayCapacity", c_int),
        ("FreeListHeadIndex", c_int),
        ("Chunks", FArray_Mirror),
    ]

    FOctreeElementId._fields_ = [("Node", FPointer), ("ElementIndex", c_int)]

    FRenderCommandFence._fields_ = [("NumPendingFences", c_int)]

    FRawDistribution._fields_ = [
        ("Type", c_ubyte),
        ("Op", c_ubyte),
        ("LookupTableNumElements", c_ubyte),
        ("LookupTableChunkSize", c_ubyte),
        ("LookupTable", TArray_float),
        ("LookupTableTimeScale", c_float),
        ("LookupTableStartTime", c_float),
    ]

    FInterpCurvePointLinearColor._fields_ = [
        ("InVal", c_float),
        ("OutVal", FLinearColor),
        ("ArriveTangent", FLinearColor),
        ("LeaveTangent", FLinearColor),
        ("InterpMode", c_ubyte),
    ]

    FInterpCurveLinearColor._fields_ = [
        ("Points", TArray_FInterpCurvePointLinearColor),
        ("InterpMethod", c_ubyte),
    ]

    FInterpCurvePointQuat._fields_ = [
        ("InVal", c_float),
        ("Unknown1", c_ubyte * 0xC),
        ("OutVal", FQuat),
        ("ArriveTangent", FQuat),
        ("LeaveTangent", FQuat),
        ("InterpMode", c_ubyte),
    ]

    FInterpCurveQuat._fields_ = [
        ("Points", TArray_FInterpCurvePointQuat),
        ("InterpMethod", c_ubyte),
    ]

    FInterpCurvePointTwoVectors._fields_ = [
        ("InVal", c_float),
        ("OutVal", FTwoVectors),
        ("ArriveTangent", FTwoVectors),
        ("LeaveTangent", FTwoVectors),
        ("InterpMode", c_ubyte),
    ]

    FInterpCurveTwoVectors._fields_ = [
        ("Points", TArray_FInterpCurvePointTwoVectors),
        ("InterpMethod", c_ubyte),
    ]

    FBox._fields_ = [("Min", FVector), ("Max", FVector), ("IsValid", c_ubyte)]

    FTPOV._fields_ = [("Location", FVector), ("Rotation", FRotator), ("FOV", c_float)]

    FSHVector._fields_ = [("V", c_float * 9), ("Padding", c_float * 3)]

    FSHVectorRGB._fields_ = [("R", FSHVector), ("G", FSHVector), ("B", FSHVector)]

    FIntPoint3D._fields_ = [("X", c_int), ("Y", c_int), ("Z", c_int)]

    FIntPoint._fields_ = [("X", c_int), ("Y", c_int)]

    FPackedNormal._fields_ = [
        ("X", c_ubyte),
        ("Y", c_ubyte),
        ("Z", c_ubyte),
        ("W", c_ubyte),
    ]

    FChunkedList_Mirror._fields_ = [("Members", FPointer)]

    FIndirectArray_Mirror._fields_ = [
        ("Data", FPointer),
        ("ArrayNum", c_int),
        ("ArrayMax", c_int),
    ]

    FInlinePointerArray_Mirror._fields_ = [
        ("InlineData", FPointer),
        ("SecondaryData", FArray_Mirror),
    ]

    FFColorVertexBuffer_Mirror._fields_ = [
        ("VfTable", FPointer),
        ("VertexData", FPointer),
        ("Data", c_int),
        ("Stride", c_int),
        ("NumVertices", c_int),
    ]

    FRenderCommandFence_Mirror._fields_ = [("NumPendingFences", c_int)]

    FUntypedBulkData_Mirror._fields_ = [
        ("VfTable", FPointer),
        ("BulkDataFlags", c_int),
        ("ElementCount", c_int),
        ("BulkDataOffsetInFile", c_int),
        ("BulkDataSizeOnDisk", c_int),
        ("SavedBulkDataFlags", c_int),
        ("SavedElementCount", c_int),
        ("SavedBulkDataOffsetInFile", c_int),
        ("SavedBulkDataSizeOnDisk", c_int),
        ("BulkData", FPointer),
        ("LockStatus", c_int),
        ("AttachedAr", FPointer),
        ("bShouldFreeOnEmpty", c_int),
    ]

    FBitArray_Mirror._fields_ = [
        ("IndirectData", FPointer),
        ("InlineData", c_int * 4),
        ("NumBits", c_int),
        ("MaxBits", c_int),
    ]

    FSparseArray_Mirror._fields_ = [
        ("Elements", TArray_int),
        ("AllocationFlags", FBitArray_Mirror),
        ("FirstFreeIndex", c_int),
        ("NumFreeIndices", c_int),
    ]

    FSet_Mirror._fields_ = [
        ("Elements", FSparseArray_Mirror),
        ("InlineHash", c_int),
        ("Hash", FPointer),
        ("HashSize", c_int),
    ]

    FMultiMap_Mirror._fields_ = [("Pairs", FSet_Mirror)]

    FMap_Mirror._fields_ = [("Pairs", FSet_Mirror)]

    FThreadSafeCounter._fields_ = [("Value", c_int)]

    FDouble._fields_ = [("A", c_int), ("B", c_int)]

    FRawDistributionFloat._fields_ = [
        ("Type", c_ubyte),
        ("Op", c_ubyte),
        ("LookupTableNumElements", c_ubyte),
        ("LookupTableChunkSize", c_ubyte),
        ("LookupTable", TArray_float),
        ("LookupTableTimeScale", c_float),
        ("LookupTableStartTime", c_float),
        ("Distribution", POINTER(UDistributionFloat)),
    ]

    FRawDistributionVector._fields_ = [
        ("Type", c_ubyte),
        ("Op", c_ubyte),
        ("LookupTableNumElements", c_ubyte),
        ("LookupTableChunkSize", c_ubyte),
        ("LookupTable", TArray_float),
        ("LookupTableTimeScale", c_float),
        ("LookupTableStartTime", c_float),
        ("Distribution", POINTER(UDistributionVector)),
    ]
