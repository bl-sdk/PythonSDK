#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_Core_structs(py::module &m)
{
	py::class_< FRotator >(m, "FRotator")
		.def_readwrite("int												Pitch", &FRotator::int												Pitch)
		.def_readwrite("int												Yaw", &FRotator::int												Yaw)
		.def_readwrite("int												Roll", &FRotator::int												Roll)
		;
	py::class_< FVector2D >(m, "FVector2D")
		.def_readwrite("X", &FVector2D::X)
		.def_readwrite("Y", &FVector2D::Y)
		;
	py::class_< FPlane2D, UAudioDevice >(m, "FPlane2D")
		.def_readwrite("W", &FPlane2D::W)
		;
	py::class_< FVector >(m, "FVector")
		.def_readwrite("X", &FVector::X)
		.def_readwrite("Y", &FVector::Y)
		.def_readwrite("Z", &FVector::Z)
		;
	py::class_< FGuid >(m, "FGuid")
		.def_readwrite("int												A", &FGuid::int												A)
		.def_readwrite("int												B", &FGuid::int												B)
		.def_readwrite("int												C", &FGuid::int												C)
		.def_readwrite("int												D", &FGuid::int												D)
		;
	py::class_< FVector4 >(m, "FVector4")
		.def_readwrite("X", &FVector4::X)
		.def_readwrite("Y", &FVector4::Y)
		.def_readwrite("Z", &FVector4::Z)
		.def_readwrite("W", &FVector4::W)
		;
	py::class_< FNameBasedObjectPath >(m, "FNameBasedObjectPath")
		.def_readwrite("IsSubobjectMask", &FNameBasedObjectPath::IsSubobjectMask)
		;
	py::class_< FFlag >(m, "FFlag")
		.def_readwrite("Value", &FFlag::Value)
		.def_readwrite("Raised", &FFlag::Raised)
		.def_readwrite("Lowered", &FFlag::Lowered)
		.def_readwrite("Padding", &FFlag::Padding)
		.def_readwrite("RaisedTime", &FFlag::RaisedTime)
		.def_readwrite("LoweredTime", &FFlag::LoweredTime)
		.def_readwrite("Duration", &FFlag::Duration)
		;
	py::class_< FQuat >(m, "FQuat")
		.def_readwrite("X", &FQuat::X)
		.def_readwrite("Y", &FQuat::Y)
		.def_readwrite("Z", &FQuat::Z)
		.def_readwrite("W", &FQuat::W)
		;
	py::class_< FBoneAtom >(m, "FBoneAtom")
		.def_readwrite("Rotation", &FBoneAtom::Rotation, py::return_value_policy::reference)
		.def_readwrite("Translation", &FBoneAtom::Translation, py::return_value_policy::reference)
		.def_readwrite("Scale", &FBoneAtom::Scale)
		;
	py::class_< FSmartVector >(m, "FSmartVector")
		.def_readwrite("Vector", &FSmartVector::Vector, py::return_value_policy::reference)
		.def_readwrite("Flag", &FSmartVector::Flag, py::return_value_policy::reference)
		;
	py::class_< FLinearColor >(m, "FLinearColor")
		.def_readwrite("R", &FLinearColor::R)
		.def_readwrite("G", &FLinearColor::G)
		.def_readwrite("B", &FLinearColor::B)
		.def_readwrite("A", &FLinearColor::A)
		;
	py::class_< FColor >(m, "FColor")
		.def_readwrite("B", &FColor::B)
		.def_readwrite("G", &FColor::G)
		.def_readwrite("R", &FColor::R)
		.def_readwrite("A", &FColor::A)
		;
	py::class_< FInterpCurvePointVector2D >(m, "FInterpCurvePointVector2D")
		.def_readwrite("InVal", &FInterpCurvePointVector2D::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointVector2D::OutVal, py::return_value_policy::reference)
		.def_readwrite("ArriveTangent", &FInterpCurvePointVector2D::ArriveTangent, py::return_value_policy::reference)
		.def_readwrite("LeaveTangent", &FInterpCurvePointVector2D::LeaveTangent, py::return_value_policy::reference)
		.def_readwrite("InterpMode", &FInterpCurvePointVector2D::InterpMode)
		;
	py::class_< FInterpCurveVector2D >(m, "FInterpCurveVector2D")
		.def_readwrite("Points", &FInterpCurveVector2D::Points, py::return_value_policy::reference)
		.def_readwrite("InterpMethod", &FInterpCurveVector2D::InterpMethod)
		;
	py::class_< FInterpCurvePointFloat >(m, "FInterpCurvePointFloat")
		.def_readwrite("InVal", &FInterpCurvePointFloat::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointFloat::OutVal)
		.def_readwrite("ArriveTangent", &FInterpCurvePointFloat::ArriveTangent)
		.def_readwrite("LeaveTangent", &FInterpCurvePointFloat::LeaveTangent)
		.def_readwrite("InterpMode", &FInterpCurvePointFloat::InterpMode)
		;
	py::class_< FInterpCurveFloat >(m, "FInterpCurveFloat")
		.def_readwrite(">			Points", &FInterpCurveFloat::>			Points, py::return_value_policy::reference)
		.def_readwrite("InterpMethod", &FInterpCurveFloat::InterpMethod)
		;
	py::class_< FCylinder >(m, "FCylinder")
		.def_readwrite("Radius", &FCylinder::Radius)
		.def_readwrite("Height", &FCylinder::Height)
		;
	py::class_< FInterpCurvePointVector >(m, "FInterpCurvePointVector")
		.def_readwrite("InVal", &FInterpCurvePointVector::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointVector::OutVal, py::return_value_policy::reference)
		.def_readwrite("ArriveTangent", &FInterpCurvePointVector::ArriveTangent, py::return_value_policy::reference)
		.def_readwrite("LeaveTangent", &FInterpCurvePointVector::LeaveTangent, py::return_value_policy::reference)
		.def_readwrite("InterpMode", &FInterpCurvePointVector::InterpMode)
		;
	py::class_< FInterpCurveVector >(m, "FInterpCurveVector")
		.def_readwrite("Points", &FInterpCurveVector::Points, py::return_value_policy::reference)
		.def_readwrite("InterpMethod", &FInterpCurveVector::InterpMethod)
		;
	py::class_< FPlane, UAudioDevice >(m, "FPlane")
		.def_readwrite("W", &FPlane::W)
		;
	py::class_< FMatrix >(m, "FMatrix")
		.def_readwrite("XPlane", &FMatrix::XPlane, py::return_value_policy::reference)
		.def_readwrite("YPlane", &FMatrix::YPlane, py::return_value_policy::reference)
		.def_readwrite("ZPlane", &FMatrix::ZPlane, py::return_value_policy::reference)
		.def_readwrite("WPlane", &FMatrix::WPlane, py::return_value_policy::reference)
		;
	py::class_< FBoxSphereBounds >(m, "FBoxSphereBounds")
		.def_readwrite("Origin", &FBoxSphereBounds::Origin, py::return_value_policy::reference)
		.def_readwrite("BoxExtent", &FBoxSphereBounds::BoxExtent, py::return_value_policy::reference)
		.def_readwrite("SphereRadius", &FBoxSphereBounds::SphereRadius)
		;
	py::class_< FTwoVectors >(m, "FTwoVectors")
		.def_readwrite("v1", &FTwoVectors::v1, py::return_value_policy::reference)
		.def_readwrite("v2", &FTwoVectors::v2, py::return_value_policy::reference)
		;
	py::class_< FTAlphaBlend >(m, "FTAlphaBlend")
		.def_readwrite("AlphaIn", &FTAlphaBlend::AlphaIn)
		.def_readwrite("AlphaOut", &FTAlphaBlend::AlphaOut)
		.def_readwrite("AlphaTarget", &FTAlphaBlend::AlphaTarget)
		.def_readwrite("BlendTime", &FTAlphaBlend::BlendTime)
		.def_readwrite("BlendTimeToGo", &FTAlphaBlend::BlendTimeToGo)
		.def_readwrite("BlendType", &FTAlphaBlend::BlendType)
		;
	py::class_< FPointer >(m, "FPointer")
		.def_readwrite("int												Dummy", &FPointer::int												Dummy)
		;
	py::class_< FArray_Mirror >(m, "FArray_Mirror")
		.def_readwrite("FPointer									Data", &FArray_Mirror::FPointer									Data, py::return_value_policy::reference)
		.def_readwrite("int												ArrayNum", &FArray_Mirror::int												ArrayNum)
		.def_readwrite("int												ArrayMax", &FArray_Mirror::int												ArrayMax)
		;
	py::class_< FStableArray_Mirror >(m, "FStableArray_Mirror")
		.def_readwrite("int												ArrayNumInUse", &FStableArray_Mirror::int												ArrayNumInUse)
		.def_readwrite("int												ArrayNumAllocated", &FStableArray_Mirror::int												ArrayNumAllocated)
		.def_readwrite("int												ArrayCapacity", &FStableArray_Mirror::int												ArrayCapacity)
		.def_readwrite("int												FreeListHeadIndex", &FStableArray_Mirror::int												FreeListHeadIndex)
		.def_readwrite("Chunks", &FStableArray_Mirror::Chunks, py::return_value_policy::reference)
		;
	py::class_< FOctreeElementId >(m, "FOctreeElementId")
		.def_readwrite("FPointer									Node", &FOctreeElementId::FPointer									Node, py::return_value_policy::reference)
		.def_readwrite("int												ElementIndex", &FOctreeElementId::int												ElementIndex)
		;
	py::class_< FRenderCommandFence >(m, "FRenderCommandFence")
		.def_readwrite("int												NumPendingFences", &FRenderCommandFence::int												NumPendingFences)
		;
	py::class_< FRawDistribution >(m, "FRawDistribution")
		.def_readwrite("Type", &FRawDistribution::Type)
		.def_readwrite("Op", &FRawDistribution::Op)
		.def_readwrite("LookupTableNumElements", &FRawDistribution::LookupTableNumElements)
		.def_readwrite("LookupTableChunkSize", &FRawDistribution::LookupTableChunkSize)
		.def_readwrite(">									LookupTable", &FRawDistribution::>									LookupTable, py::return_value_policy::reference)
		.def_readwrite("LookupTableTimeScale", &FRawDistribution::LookupTableTimeScale)
		.def_readwrite("LookupTableStartTime", &FRawDistribution::LookupTableStartTime)
		;
	py::class_< FInterpCurvePointLinearColor >(m, "FInterpCurvePointLinearColor")
		.def_readwrite("InVal", &FInterpCurvePointLinearColor::InVal)
		.def_readwrite("FLinearColor								OutVal", &FInterpCurvePointLinearColor::FLinearColor								OutVal, py::return_value_policy::reference)
		.def_readwrite("FLinearColor								ArriveTangent", &FInterpCurvePointLinearColor::FLinearColor								ArriveTangent, py::return_value_policy::reference)
		.def_readwrite("FLinearColor								LeaveTangent", &FInterpCurvePointLinearColor::FLinearColor								LeaveTangent, py::return_value_policy::reference)
		.def_readwrite("InterpMode", &FInterpCurvePointLinearColor::InterpMode)
		;
	py::class_< FInterpCurveLinearColor >(m, "FInterpCurveLinearColor")
		.def_readwrite("Points", &FInterpCurveLinearColor::Points, py::return_value_policy::reference)
		.def_readwrite("InterpMethod", &FInterpCurveLinearColor::InterpMethod)
		;
	py::class_< FInterpCurvePointQuat >(m, "FInterpCurvePointQuat")
		.def_readwrite("InVal", &FInterpCurvePointQuat::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointQuat::OutVal, py::return_value_policy::reference)
		.def_readwrite("ArriveTangent", &FInterpCurvePointQuat::ArriveTangent, py::return_value_policy::reference)
		.def_readwrite("LeaveTangent", &FInterpCurvePointQuat::LeaveTangent, py::return_value_policy::reference)
		.def_readwrite("InterpMode", &FInterpCurvePointQuat::InterpMode)
		;
	py::class_< FInterpCurveQuat >(m, "FInterpCurveQuat")
		.def_readwrite("Points", &FInterpCurveQuat::Points, py::return_value_policy::reference)
		.def_readwrite("InterpMethod", &FInterpCurveQuat::InterpMethod)
		;
	py::class_< FInterpCurvePointTwoVectors >(m, "FInterpCurvePointTwoVectors")
		.def_readwrite("InVal", &FInterpCurvePointTwoVectors::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointTwoVectors::OutVal, py::return_value_policy::reference)
		.def_readwrite("ArriveTangent", &FInterpCurvePointTwoVectors::ArriveTangent, py::return_value_policy::reference)
		.def_readwrite("LeaveTangent", &FInterpCurvePointTwoVectors::LeaveTangent, py::return_value_policy::reference)
		.def_readwrite("InterpMode", &FInterpCurvePointTwoVectors::InterpMode)
		;
	py::class_< FInterpCurveTwoVectors >(m, "FInterpCurveTwoVectors")
		.def_readwrite("Points", &FInterpCurveTwoVectors::Points, py::return_value_policy::reference)
		.def_readwrite("InterpMethod", &FInterpCurveTwoVectors::InterpMethod)
		;
	py::class_< FBox >(m, "FBox")
		.def_readwrite("Min", &FBox::Min, py::return_value_policy::reference)
		.def_readwrite("Max", &FBox::Max, py::return_value_policy::reference)
		.def_readwrite("IsValid", &FBox::IsValid)
		;
	py::class_< FTPOV >(m, "FTPOV")
		.def_readwrite("Location", &FTPOV::Location, py::return_value_policy::reference)
		.def_readwrite("FRotator									Rotation", &FTPOV::FRotator									Rotation, py::return_value_policy::reference)
		.def_readwrite("FOV", &FTPOV::FOV)
		;
	py::class_< FSHVector >(m, "FSHVector")
		;
	py::class_< FSHVectorRGB >(m, "FSHVectorRGB")
		.def_readwrite("R", &FSHVectorRGB::R, py::return_value_policy::reference)
		.def_readwrite("G", &FSHVectorRGB::G, py::return_value_policy::reference)
		.def_readwrite("B", &FSHVectorRGB::B, py::return_value_policy::reference)
		;
	py::class_< FIntPoint3D >(m, "FIntPoint3D")
		.def_readwrite("int												X", &FIntPoint3D::int												X)
		.def_readwrite("int												Y", &FIntPoint3D::int												Y)
		.def_readwrite("int												Z", &FIntPoint3D::int												Z)
		;
	py::class_< FIntPoint >(m, "FIntPoint")
		.def_readwrite("int												X", &FIntPoint::int												X)
		.def_readwrite("int												Y", &FIntPoint::int												Y)
		;
	py::class_< FPackedNormal >(m, "FPackedNormal")
		.def_readwrite("X", &FPackedNormal::X)
		.def_readwrite("Y", &FPackedNormal::Y)
		.def_readwrite("Z", &FPackedNormal::Z)
		.def_readwrite("W", &FPackedNormal::W)
		;
	py::class_< FChunkedList_Mirror >(m, "FChunkedList_Mirror")
		.def_readwrite("FPointer									Members", &FChunkedList_Mirror::FPointer									Members, py::return_value_policy::reference)
		;
	py::class_< FIndirectArray_Mirror >(m, "FIndirectArray_Mirror")
		.def_readwrite("FPointer									Data", &FIndirectArray_Mirror::FPointer									Data, py::return_value_policy::reference)
		.def_readwrite("int												ArrayNum", &FIndirectArray_Mirror::int												ArrayNum)
		.def_readwrite("int												ArrayMax", &FIndirectArray_Mirror::int												ArrayMax)
		;
	py::class_< FInlinePointerArray_Mirror >(m, "FInlinePointerArray_Mirror")
		.def_readwrite("FPointer									InlineData", &FInlinePointerArray_Mirror::FPointer									InlineData, py::return_value_policy::reference)
		.def_readwrite("SecondaryData", &FInlinePointerArray_Mirror::SecondaryData, py::return_value_policy::reference)
		;
	py::class_< FFColorVertexBuffer_Mirror >(m, "FFColorVertexBuffer_Mirror")
		.def_readwrite("FPointer									VfTable", &FFColorVertexBuffer_Mirror::FPointer									VfTable, py::return_value_policy::reference)
		.def_readwrite("FPointer									VertexData", &FFColorVertexBuffer_Mirror::FPointer									VertexData, py::return_value_policy::reference)
		.def_readwrite("int												Data", &FFColorVertexBuffer_Mirror::int												Data)
		.def_readwrite("int												Stride", &FFColorVertexBuffer_Mirror::int												Stride)
		.def_readwrite("int												NumVertices", &FFColorVertexBuffer_Mirror::int												NumVertices)
		;
	py::class_< FRenderCommandFence_Mirror >(m, "FRenderCommandFence_Mirror")
		.def_readwrite("int												NumPendingFences", &FRenderCommandFence_Mirror::int												NumPendingFences)
		;
	py::class_< FUntypedBulkData_Mirror >(m, "FUntypedBulkData_Mirror")
		.def_readwrite("FPointer									VfTable", &FUntypedBulkData_Mirror::FPointer									VfTable, py::return_value_policy::reference)
		.def_readwrite("int												BulkDataFlags", &FUntypedBulkData_Mirror::int												BulkDataFlags)
		.def_readwrite("int												ElementCount", &FUntypedBulkData_Mirror::int												ElementCount)
		.def_readwrite("int												BulkDataOffsetInFile", &FUntypedBulkData_Mirror::int												BulkDataOffsetInFile)
		.def_readwrite("int												BulkDataSizeOnDisk", &FUntypedBulkData_Mirror::int												BulkDataSizeOnDisk)
		.def_readwrite("int												SavedBulkDataFlags", &FUntypedBulkData_Mirror::int												SavedBulkDataFlags)
		.def_readwrite("int												SavedElementCount", &FUntypedBulkData_Mirror::int												SavedElementCount)
		.def_readwrite("int												SavedBulkDataOffsetInFile", &FUntypedBulkData_Mirror::int												SavedBulkDataOffsetInFile)
		.def_readwrite("int												SavedBulkDataSizeOnDisk", &FUntypedBulkData_Mirror::int												SavedBulkDataSizeOnDisk)
		.def_readwrite("FPointer									BulkData", &FUntypedBulkData_Mirror::FPointer									BulkData, py::return_value_policy::reference)
		.def_readwrite("int												LockStatus", &FUntypedBulkData_Mirror::int												LockStatus)
		.def_readwrite("FPointer									AttachedAr", &FUntypedBulkData_Mirror::FPointer									AttachedAr, py::return_value_policy::reference)
		.def_readwrite("int												bShouldFreeOnEmpty", &FUntypedBulkData_Mirror::int												bShouldFreeOnEmpty)
		;
	py::class_< FBitArray_Mirror >(m, "FBitArray_Mirror")
		.def_readwrite("FPointer									IndirectData", &FBitArray_Mirror::FPointer									IndirectData, py::return_value_policy::reference)
		.def_readwrite("int												NumBits", &FBitArray_Mirror::int												NumBits)
		.def_readwrite("int												MaxBits", &FBitArray_Mirror::int												MaxBits)
		;
	py::class_< FSparseArray_Mirror >(m, "FSparseArray_Mirror")
		.def_readwrite("Elements", &FSparseArray_Mirror::Elements, py::return_value_policy::reference)
		.def_readwrite("FBitArray_Mirror							AllocationFlags", &FSparseArray_Mirror::FBitArray_Mirror							AllocationFlags, py::return_value_policy::reference)
		.def_readwrite("int												FirstFreeIndex", &FSparseArray_Mirror::int												FirstFreeIndex)
		.def_readwrite("int												NumFreeIndices", &FSparseArray_Mirror::int												NumFreeIndices)
		;
	py::class_< FSet_Mirror >(m, "FSet_Mirror")
		.def_readwrite("Elements", &FSet_Mirror::Elements, py::return_value_policy::reference)
		.def_readwrite("int												InlineHash", &FSet_Mirror::int												InlineHash)
		.def_readwrite("FPointer									Hash", &FSet_Mirror::FPointer									Hash, py::return_value_policy::reference)
		.def_readwrite("int												HashSize", &FSet_Mirror::int												HashSize)
		;
	py::class_< FMultiMap_Mirror >(m, "FMultiMap_Mirror")
		.def_readwrite("Pairs", &FMultiMap_Mirror::Pairs, py::return_value_policy::reference)
		;
	py::class_< FMap_Mirror >(m, "FMap_Mirror")
		.def_readwrite("Pairs", &FMap_Mirror::Pairs, py::return_value_policy::reference)
		;
	py::class_< FThreadSafeCounter >(m, "FThreadSafeCounter")
		.def_readwrite("int												Value", &FThreadSafeCounter::int												Value)
		;
	py::class_< FDouble >(m, "FDouble")
		.def_readwrite("int												A", &FDouble::int												A)
		.def_readwrite("int												B", &FDouble::int												B)
		;
	py::class_< FQWord >(m, "FQWord")
		.def_readwrite("int												A", &FQWord::int												A)
		.def_readwrite("int												B", &FQWord::int												B)
		;
	py::class_< FRawDistributionFloat, UAudioDevice >(m, "FRawDistributionFloat")
		.def_readwrite("Distribution", &FRawDistributionFloat::Distribution, py::return_value_policy::reference)
		;
	py::class_< FRawDistributionVector, UAudioDevice >(m, "FRawDistributionVector")
		.def_readwrite("Distribution", &FRawDistributionVector::Distribution, py::return_value_policy::reference)
		;

}