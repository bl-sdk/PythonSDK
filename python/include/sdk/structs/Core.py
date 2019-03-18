from ctypes import *
import BL2SDK


class FVector2D(Structure):
    _fields_ = [("X", c_float), ("Y", c_float)]


class FPlane2D(Structure):
    _fields_ = [("X", c_float), ("Y", c_float), ("W", c_float)]


class FVector(Structure):
    _fields_ = [("X", c_float), ("Y", c_float), ("Z", c_float)]


class FGuid(Structure):
    _fields_ = [("A", c_int), ("B", c_int), ("C", c_int), ("D", c_int)]


class FVector4(Structure):
    _fields_ = [("X", c_float), ("Y", c_float), ("Z", c_float), ("W", c_float)]


class FNameBasedObjectPath(Structure):
    _fields_ = [("PathComponentNames", FName * 6), ("IsSubobjectMask", c_ubyte)]


class FFlag(Structure):
    _fields_ = [
        ("Value", c_ubyte),
        ("Raised", c_ubyte),
        ("Lowered", c_ubyte),
        ("Padding", c_ubyte),
        ("RaisedTime", c_float),
        ("LoweredTime", c_float),
        ("Duration", c_float),
    ]


class FQuat(Structure):
    _fields_ = [("X", c_float), ("Y", c_float), ("Z", c_float), ("W", c_float)]


class FBoneAtom(Structure):
    _fields_ = [("Rotation", FQuat), ("Translation", FVector), ("Scale", c_float)]


class FSmartVector(Structure):
    _fields_ = [("Vector", FVector), ("Flag", FFlag)]


class FLinearColor(Structure):
    _fields_ = [("R", c_float), ("G", c_float), ("B", c_float), ("A", c_float)]


class FColor(Structure):
    _fields_ = [("B", c_ubyte), ("G", c_ubyte), ("R", c_ubyte), ("A", c_ubyte)]


class FInterpCurvePointVector2D(Structure):
    _fields_ = [
        ("InVal", c_float),
        ("OutVal", FVector2D),
        ("ArriveTangent", FVector2D),
        ("LeaveTangent", FVector2D),
        ("InterpMode", c_ubyte),
    ]


class FInterpCurveVector2D(Structure):
    _fields_ = [("Points", TArray_FInterpCurvePointVector2D), ("InterpMethod", c_ubyte)]


class FInterpCurvePointFloat(Structure):
    _fields_ = [
        ("InVal", c_float),
        ("OutVal", c_float),
        ("ArriveTangent", c_float),
        ("LeaveTangent", c_float),
        ("InterpMode", c_ubyte),
    ]


class FInterpCurveFloat(Structure):
    _fields_ = [("Points", TArray_FInterpCurvePointFloat), ("InterpMethod", c_ubyte)]


class FCylinder(Structure):
    _fields_ = [("Radius", c_float), ("Height", c_float)]


class FInterpCurvePointVector(Structure):
    _fields_ = [
        ("InVal", c_float),
        ("OutVal", FVector),
        ("ArriveTangent", FVector),
        ("LeaveTangent", FVector),
        ("InterpMode", c_ubyte),
    ]


class FInterpCurveVector(Structure):
    _fields_ = [("Points", TArray_FInterpCurvePointVector), ("InterpMethod", c_ubyte)]


class FPlane(Structure):
    _fields_ = [("X", c_float), ("Y", c_float), ("Z", c_float), ("W", c_float)]


class FMatrix(Structure):
    _fields_ = [
        ("XPlane", FPlane),
        ("YPlane", FPlane),
        ("ZPlane", FPlane),
        ("WPlane", FPlane),
    ]


class FBoxSphereBounds(Structure):
    _fields_ = [("Origin", FVector), ("BoxExtent", FVector), ("SphereRadius", c_float)]


class FTwoVectors(Structure):
    _fields_ = [("v1", FVector), ("v2", FVector)]


class FTAlphaBlend(Structure):
    _fields_ = [
        ("AlphaIn", c_float),
        ("AlphaOut", c_float),
        ("AlphaTarget", c_float),
        ("BlendTime", c_float),
        ("BlendTimeToGo", c_float),
        ("BlendType", c_ubyte),
    ]


class FArray_Mirror(Structure):
    _fields_ = [("Data", FPointer), ("ArrayNum", int), ("ArrayMax", int)]


class FStableArray_Mirror(Structure):
    _fields_ = [
        ("ArrayNumInUse", int),
        ("ArrayNumAllocated", int),
        ("ArrayCapacity", int),
        ("FreeListHeadIndex", int),
        ("Chunks", FArray_Mirror),
    ]


class FOctreeElementId(Structure):
    _fields_ = [("Node", FPointer), ("ElementIndex", int)]


class FRenderCommandFence(Structure):
    _fields_ = [("NumPendingFences", int)]


class FRawDistribution(Structure):
    _fields_ = [
        ("Type", c_ubyte),
        ("Op", c_ubyte),
        ("LookupTableNumElements", c_ubyte),
        ("LookupTableChunkSize", c_ubyte),
        ("LookupTable", TArray_float),
        ("LookupTableTimeScale", c_float),
        ("LookupTableStartTime", c_float),
    ]


class FInterpCurvePointLinearColor(Structure):
    _fields_ = [
        ("InVal", c_float),
        ("OutVal", FLinearColor),
        ("ArriveTangent", FLinearColor),
        ("LeaveTangent", FLinearColor),
        ("InterpMode", c_ubyte),
    ]


class FInterpCurveLinearColor(Structure):
    _fields_ = [
        ("Points", TArray_FInterpCurvePointLinearColor),
        ("InterpMethod", c_ubyte),
    ]


class FInterpCurvePointQuat(Structure):
    _fields_ = [
        ("InVal", c_float),
        ("Unknown1", c_ubyte, 0xC),
        ("OutVal", FQuat),
        ("ArriveTangent", FQuat),
        ("LeaveTangent", FQuat),
        ("InterpMode", c_ubyte),
    ]


class FInterpCurveQuat(Structure):
    _fields_ = [("Points", TArray_FInterpCurvePointQuat), ("InterpMethod", c_ubyte)]


class FInterpCurvePointTwoVectors(Structure):
    _fields_ = [
        ("InVal", c_float),
        ("OutVal", FTwoVectors),
        ("ArriveTangent", FTwoVectors),
        ("LeaveTangent", FTwoVectors),
        ("InterpMode", c_ubyte),
    ]


class FInterpCurveTwoVectors(Structure):
    _fields_ = [
        ("Points", TArray_FInterpCurvePointTwoVectors),
        ("InterpMethod", c_ubyte),
    ]


class FBox(Structure):
    _fields_ = [("Min", FVector), ("Max", FVector), ("IsValid", c_ubyte)]


class FTPOV(Structure):
    _fields_ = [("Location", FVector), ("Rotation", FRotator), ("FOV", c_float)]


class FSHVector(Structure):
    _fields_ = [("V", c_float * 9), ("Padding", c_float * 3)]


class FSHVectorRGB(Structure):
    _fields_ = [("R", FSHVector), ("G", FSHVector), ("B", FSHVector)]


class FIntPoint3D(Structure):
    _fields_ = [("X", c_int), ("Y", c_int), ("Z", c_int)]


class FIntPoint(Structure):
    _fields_ = [("X", c_int), ("Y", c_int)]


class FPackedNormal(Structure):
    _fields_ = [("X", c_ubyte), ("Y", c_ubyte), ("Z", c_ubyte), ("W", c_ubyte)]


class FChunkedList_Mirror(Structure):
    _fields_ = [("Members", FPointer)]


class FIndirectArray_Mirror(Structure):
    _fields_ = [("Data", FPointer), ("ArrayNum", int), ("ArrayMax", int)]


class FInlinePointerArray_Mirror(Structure):
    _fields_ = [("InlineData", FPointer), ("SecondaryData", FArray_Mirror)]


class FFColorVertexBuffer_Mirror(Structure):
    _fields_ = [
        ("VfTable", FPointer),
        ("VertexData", FPointer),
        ("Data", int),
        ("Stride", int),
        ("NumVertices", int),
    ]


class FRenderCommandFence_Mirror(Structure):
    _fields_ = [("NumPendingFences", int)]


class FUntypedBulkData_Mirror(Structure):
    _fields_ = [
        ("VfTable", FPointer),
        ("BulkDataFlags", int),
        ("ElementCount", int),
        ("BulkDataOffsetInFile", int),
        ("BulkDataSizeOnDisk", int),
        ("SavedBulkDataFlags", int),
        ("SavedElementCount", int),
        ("SavedBulkDataOffsetInFile", int),
        ("SavedBulkDataSizeOnDisk", int),
        ("BulkData", FPointer),
        ("LockStatus", int),
        ("AttachedAr", FPointer),
        ("bShouldFreeOnEmpty", int),
    ]


class FBitArray_Mirror(Structure):
    _fields_ = [
        ("IndirectData", FPointer),
        ("InlineData", int * 4),
        ("NumBits", int),
        ("MaxBits", int),
    ]


class FSparseArray_Mirror(Structure):
    _fields_ = [
        ("Elements", TArray_int),
        ("AllocationFlags", FBitArray_Mirror),
        ("FirstFreeIndex", int),
        ("NumFreeIndices", int),
    ]


class FSet_Mirror(Structure):
    _fields_ = [
        ("Elements", FSparseArray_Mirror),
        ("InlineHash", int),
        ("Hash", FPointer),
        ("HashSize", int),
    ]


class FMultiMap_Mirror(Structure):
    _fields_ = [("Pairs", FSet_Mirror)]


class FMap_Mirror(Structure):
    _fields_ = [("Pairs", FSet_Mirror)]


class FThreadSafeCounter(Structure):
    _fields_ = [("Value", int)]


class FDouble(Structure):
    _fields_ = [("A", int), ("B", int)]


class FRawDistributionFloat(Structure):
    _fields_ = [
        ("Type", c_ubyte),
        ("Op", c_ubyte),
        ("LookupTableNumElements", c_ubyte),
        ("LookupTableChunkSize", c_ubyte),
        ("LookupTable", TArray_float),
        ("LookupTableTimeScale", c_float),
        ("LookupTableStartTime", c_float),
        ("Distribution", POINTER(UDistributionFloat)),
    ]


class FRawDistributionVector(Structure):
    _fields_ = [
        ("Type", c_ubyte),
        ("Op", c_ubyte),
        ("LookupTableNumElements", c_ubyte),
        ("LookupTableChunkSize", c_ubyte),
        ("LookupTable", TArray_float),
        ("LookupTableTimeScale", c_float),
        ("LookupTableStartTime", c_float),
        ("Distribution", POINTER(UDistributionVector)),
    ]
