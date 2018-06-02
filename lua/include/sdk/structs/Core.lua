// 0xC 
struct FRotator {
	int Pitch; // 0x0 (0x4)
	int Yaw; // 0x4 (0x4)
	int Roll; // 0x8 (0x4)
};

// 0x8 
struct FVector2D {
	float X; // 0x0 (0x4)
	float Y; // 0x4 (0x4)
};

// 0xC 
struct FPlane2D {
	float X; // 0x0 (0x4)
	float Y; // 0x4 (0x4)
	float W; // 0x8 (0x4)
};

// 0xC 
struct FVector {
	float X; // 0x0 (0x4)
	float Y; // 0x4 (0x4)
	float Z; // 0x8 (0x4)
};

// 0x10 
struct FGuid {
	int A; // 0x0 (0x4)
	int B; // 0x4 (0x4)
	int C; // 0x8 (0x4)
	int D; // 0xC (0x4)
};

// 0x10 (Alignment = 16)
struct FVector4 {
	float X; // 0x0 (0x4)
	float Y; // 0x4 (0x4)
	float Z; // 0x8 (0x4)
	float W; // 0xC (0x4)
};

// 0x31 
struct FNameBasedObjectPath {
	struct FName PathComponentNames[6]; // 0x0 (0x30)
	unsigned char IsSubobjectMask; // 0x30 (0x1)
};

// 0x10 
struct FFlag {
	unsigned char Value; // 0x0 (0x1)
	unsigned char Raised; // 0x1 (0x1)
	unsigned char Lowered; // 0x2 (0x1)
	unsigned char Padding; // 0x3 (0x1)
	float RaisedTime; // 0x4 (0x4)
	float LoweredTime; // 0x8 (0x4)
	float Duration; // 0xC (0x4)
};

// 0x10 (Alignment = 16)
struct FQuat {
	float X; // 0x0 (0x4)
	float Y; // 0x4 (0x4)
	float Z; // 0x8 (0x4)
	float W; // 0xC (0x4)
};

// 0x20 (Alignment = 16)
struct FBoneAtom {
	struct FQuat Rotation; // 0x0 (0x10)
	struct FVector Translation; // 0x10 (0xC)
	float Scale; // 0x1C (0x4)
};

// 0x1C 
struct FSmartVector {
	struct FVector Vector; // 0x0 (0xC)
	struct FFlag Flag; // 0xC (0x10)
};

// 0x10 
struct FLinearColor {
	float R; // 0x0 (0x4)
	float G; // 0x4 (0x4)
	float B; // 0x8 (0x4)
	float A; // 0xC (0x4)
};

// 0x4 
struct FColor {
	unsigned char B; // 0x0 (0x1)
	unsigned char G; // 0x1 (0x1)
	unsigned char R; // 0x2 (0x1)
	unsigned char A; // 0x3 (0x1)
};

// 0x1D 
struct FInterpCurvePointVector2D {
	float InVal; // 0x0 (0x4)
	struct FVector2D OutVal; // 0x4 (0x8)
	struct FVector2D ArriveTangent; // 0xC (0x8)
	struct FVector2D LeaveTangent; // 0x14 (0x8)
	unsigned char InterpMode; // 0x1C (0x1) (Enum = EInterpCurveMode)
};

// 0xD 
struct FInterpCurveVector2D {
	struct TArray_FInterpCurvePointVector2D Points; // 0x0 (0xC)
	unsigned char InterpMethod; // 0xC (0x1) (Enum = EInterpMethodType)
};

// 0x11 
struct FInterpCurvePointFloat {
	float InVal; // 0x0 (0x4)
	float OutVal; // 0x4 (0x4)
	float ArriveTangent; // 0x8 (0x4)
	float LeaveTangent; // 0xC (0x4)
	unsigned char InterpMode; // 0x10 (0x1) (Enum = EInterpCurveMode)
};

// 0xD 
struct FInterpCurveFloat {
	struct TArray_FInterpCurvePointFloat Points; // 0x0 (0xC)
	unsigned char InterpMethod; // 0xC (0x1) (Enum = EInterpMethodType)
};

// 0x8 
struct FCylinder {
	float Radius; // 0x0 (0x4)
	float Height; // 0x4 (0x4)
};

// 0x29 
struct FInterpCurvePointVector {
	float InVal; // 0x0 (0x4)
	struct FVector OutVal; // 0x4 (0xC)
	struct FVector ArriveTangent; // 0x10 (0xC)
	struct FVector LeaveTangent; // 0x1C (0xC)
	unsigned char InterpMode; // 0x28 (0x1) (Enum = EInterpCurveMode)
};

// 0xD 
struct FInterpCurveVector {
	struct TArray_FInterpCurvePointVector Points; // 0x0 (0xC)
	unsigned char InterpMethod; // 0xC (0x1) (Enum = EInterpMethodType)
};

// 0x10 (Alignment = 16)
struct FPlane {
	float X; // 0x0 (0x4)
	float Y; // 0x4 (0x4)
	float Z; // 0x8 (0x4)
	float W; // 0xC (0x4)
};

// 0x40 (Alignment = 16)
struct FMatrix {
	struct FPlane XPlane; // 0x0 (0x10)
	struct FPlane YPlane; // 0x10 (0x10)
	struct FPlane ZPlane; // 0x20 (0x10)
	struct FPlane WPlane; // 0x30 (0x10)
};

// 0x1C 
struct FBoxSphereBounds {
	struct FVector Origin; // 0x0 (0xC)
	struct FVector BoxExtent; // 0xC (0xC)
	float SphereRadius; // 0x18 (0x4)
};

// 0x18 
struct FTwoVectors {
	struct FVector v1; // 0x0 (0xC)
	struct FVector v2; // 0xC (0xC)
};

// 0x15 
struct FTAlphaBlend {
	const float AlphaIn; // 0x0 (0x4)
	const float AlphaOut; // 0x4 (0x4)
	float AlphaTarget; // 0x8 (0x4)
	float BlendTime; // 0xC (0x4)
	const float BlendTimeToGo; // 0x10 (0x4)
	unsigned char BlendType; // 0x14 (0x1) (Enum = AlphaBlendType)
};

// 0x4 
struct FPointer {
	const int Dummy; // 0x0 (0x4)
};

// 0xC 
struct FArray_Mirror {
	const struct FPointer Data; // 0x0 (0x4)
	const int ArrayNum; // 0x4 (0x4)
	const int ArrayMax; // 0x8 (0x4)
};

// 0x1C 
struct FStableArray_Mirror {
	const int ArrayNumInUse; // 0x0 (0x4)
	const int ArrayNumAllocated; // 0x4 (0x4)
	const int ArrayCapacity; // 0x8 (0x4)
	const int FreeListHeadIndex; // 0xC (0x4)
	const struct FArray_Mirror Chunks; // 0x10 (0xC)
};

// 0x8 
struct FOctreeElementId {
	const struct FPointer Node; // 0x0 (0x4)
	const int ElementIndex; // 0x4 (0x4)
};

// 0x4 
struct FRenderCommandFence {
	const int NumPendingFences; // 0x0 (0x4)
};

// 0x18 
struct FRawDistribution {
	unsigned char Type; // 0x0 (0x1)
	unsigned char Op; // 0x1 (0x1)
	unsigned char LookupTableNumElements; // 0x2 (0x1)
	unsigned char LookupTableChunkSize; // 0x3 (0x1)
	struct TArray_float LookupTable; // 0x4 (0xC)
	float LookupTableTimeScale; // 0x10 (0x4)
	float LookupTableStartTime; // 0x14 (0x4)
};

// 0x35 
struct FInterpCurvePointLinearColor {
	float InVal; // 0x0 (0x4)
	struct FLinearColor OutVal; // 0x4 (0x10)
	struct FLinearColor ArriveTangent; // 0x14 (0x10)
	struct FLinearColor LeaveTangent; // 0x24 (0x10)
	unsigned char InterpMode; // 0x34 (0x1) (Enum = EInterpCurveMode)
};

// 0xD 
struct FInterpCurveLinearColor {
	struct TArray_FInterpCurvePointLinearColor Points; // 0x0 (0xC)
	unsigned char InterpMethod; // 0xC (0x1) (Enum = EInterpMethodType)
};

// 0x41 (Alignment = 16)
struct FInterpCurvePointQuat {
	float InVal; // 0x0 (0x4)
	const unsigned char Unknown1[0xC]; // 0x4 (0xC) > LAST OFFSET
	struct FQuat OutVal; // 0x10 (0x10)
	struct FQuat ArriveTangent; // 0x20 (0x10)
	struct FQuat LeaveTangent; // 0x30 (0x10)
	unsigned char InterpMode; // 0x40 (0x1) (Enum = EInterpCurveMode)
};

// 0xD 
struct FInterpCurveQuat {
	struct TArray_FInterpCurvePointQuat Points; // 0x0 (0xC)
	unsigned char InterpMethod; // 0xC (0x1) (Enum = EInterpMethodType)
};

// 0x4D 
struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0 (0x4)
	struct FTwoVectors OutVal; // 0x4 (0x18)
	struct FTwoVectors ArriveTangent; // 0x1C (0x18)
	struct FTwoVectors LeaveTangent; // 0x34 (0x18)
	unsigned char InterpMode; // 0x4C (0x1) (Enum = EInterpCurveMode)
};

// 0xD 
struct FInterpCurveTwoVectors {
	struct TArray_FInterpCurvePointTwoVectors Points; // 0x0 (0xC)
	unsigned char InterpMethod; // 0xC (0x1) (Enum = EInterpMethodType)
};

// 0x19 
struct FBox {
	struct FVector Min; // 0x0 (0xC)
	struct FVector Max; // 0xC (0xC)
	unsigned char IsValid; // 0x18 (0x1)
};

// 0x1C 
struct FTPOV {
	struct FVector Location; // 0x0 (0xC)
	struct FRotator Rotation; // 0xC (0xC)
	float FOV; // 0x18 (0x4)
};

// 0x30 (Alignment = 16)
struct FSHVector {
	float V[9]; // 0x0 (0x24)
	float Padding[3]; // 0x24 (0xC)
};

// 0x90 (Alignment = 16)
struct FSHVectorRGB {
	struct FSHVector R; // 0x0 (0x30)
	struct FSHVector G; // 0x30 (0x30)
	struct FSHVector B; // 0x60 (0x30)
};

// 0xC 
struct FIntPoint3D {
	int X; // 0x0 (0x4)
	int Y; // 0x4 (0x4)
	int Z; // 0x8 (0x4)
};

// 0x8 
struct FIntPoint {
	int X; // 0x0 (0x4)
	int Y; // 0x4 (0x4)
};

// 0x4 
struct FPackedNormal {
	unsigned char X; // 0x0 (0x1)
	unsigned char Y; // 0x1 (0x1)
	unsigned char Z; // 0x2 (0x1)
	unsigned char W; // 0x3 (0x1)
};

// 0x4 
struct FChunkedList_Mirror {
	const struct FPointer Members; // 0x0 (0x4)
};

// 0xC 
struct FIndirectArray_Mirror {
	const struct FPointer Data; // 0x0 (0x4)
	const int ArrayNum; // 0x4 (0x4)
	const int ArrayMax; // 0x8 (0x4)
};

// 0x10 
struct FInlinePointerArray_Mirror {
	const struct FPointer InlineData; // 0x0 (0x4)
	const struct FArray_Mirror SecondaryData; // 0x4 (0xC)
};

// 0x14 
struct FFColorVertexBuffer_Mirror {
	const struct FPointer VfTable; // 0x0 (0x4)
	const struct FPointer VertexData; // 0x4 (0x4)
	const int Data; // 0x8 (0x4)
	const int Stride; // 0xC (0x4)
	const int NumVertices; // 0x10 (0x4)
};

// 0x4 
struct FRenderCommandFence_Mirror {
	const int NumPendingFences; // 0x0 (0x4)
};

// 0x34 
struct FUntypedBulkData_Mirror {
	const struct FPointer VfTable; // 0x0 (0x4)
	const int BulkDataFlags; // 0x4 (0x4)
	const int ElementCount; // 0x8 (0x4)
	const int BulkDataOffsetInFile; // 0xC (0x4)
	const int BulkDataSizeOnDisk; // 0x10 (0x4)
	const int SavedBulkDataFlags; // 0x14 (0x4)
	const int SavedElementCount; // 0x18 (0x4)
	const int SavedBulkDataOffsetInFile; // 0x1C (0x4)
	const int SavedBulkDataSizeOnDisk; // 0x20 (0x4)
	const struct FPointer BulkData; // 0x24 (0x4)
	const int LockStatus; // 0x28 (0x4)
	const struct FPointer AttachedAr; // 0x2C (0x4)
	const int bShouldFreeOnEmpty; // 0x30 (0x4)
};

// 0x1C 
struct FBitArray_Mirror {
	const struct FPointer IndirectData; // 0x0 (0x4)
	const int InlineData[4]; // 0x4 (0x10)
	const int NumBits; // 0x14 (0x4)
	const int MaxBits; // 0x18 (0x4)
};

// 0x30 
struct FSparseArray_Mirror {
	const struct TArray_int Elements; // 0x0 (0xC)
	const struct FBitArray_Mirror AllocationFlags; // 0xC (0x1C)
	const int FirstFreeIndex; // 0x28 (0x4)
	const int NumFreeIndices; // 0x2C (0x4)
};

// 0x3C 
struct FSet_Mirror {
	const struct FSparseArray_Mirror Elements; // 0x0 (0x30)
	const int InlineHash; // 0x30 (0x4)
	const struct FPointer Hash; // 0x34 (0x4)
	const int HashSize; // 0x38 (0x4)
};

// 0x3C 
struct FMultiMap_Mirror {
	const struct FSet_Mirror Pairs; // 0x0 (0x3C)
};

// 0x3C 
struct FMap_Mirror {
	const struct FSet_Mirror Pairs; // 0x0 (0x3C)
};

// 0x4 
struct FThreadSafeCounter {
	const int Value; // 0x0 (0x4)
};

// 0x8 
struct FDouble {
	const int A; // 0x0 (0x4)
	const int B; // 0x4 (0x4)
};

// 0x8 
struct FQWord {
	const int A; // 0x0 (0x4)
	const int B; // 0x4 (0x4)
};

// 0x1C 
struct FRawDistributionFloat {
	unsigned char Type; // 0x0 (0x1)
	unsigned char Op; // 0x1 (0x1)
	unsigned char LookupTableNumElements; // 0x2 (0x1)
	unsigned char LookupTableChunkSize; // 0x3 (0x1)
	struct TArray_float LookupTable; // 0x4 (0xC)
	float LookupTableTimeScale; // 0x10 (0x4)
	float LookupTableStartTime; // 0x14 (0x4)
	struct UDistributionFloat* Distribution; // 0x18 (0x4)
};

// 0x1C 
struct FRawDistributionVector {
	unsigned char Type; // 0x0 (0x1)
	unsigned char Op; // 0x1 (0x1)
	unsigned char LookupTableNumElements; // 0x2 (0x1)
	unsigned char LookupTableChunkSize; // 0x3 (0x1)
	struct TArray_float LookupTable; // 0x4 (0xC)
	float LookupTableTimeScale; // 0x10 (0x4)
	float LookupTableStartTime; // 0x14 (0x4)
	struct UDistributionVector* Distribution; // 0x18 (0x4)
};

