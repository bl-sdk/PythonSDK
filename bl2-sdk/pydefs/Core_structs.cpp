#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_Core_structs(py::module &m)
{
	py::class_< FRotator >(m, "FRotator")
		.def_readwrite("Pitch", &FRotator::Pitch)
		.def_readwrite("Yaw", &FRotator::Yaw)
		.def_readwrite("Roll", &FRotator::Roll)
  ;
	py::class_< FVector2D >(m, "FVector2D")
		.def_readwrite("X", &FVector2D::X)
		.def_readwrite("Y", &FVector2D::Y)
  ;
	py::class_< FVector >(m, "FVector")
		.def_readwrite("X", &FVector::X)
		.def_readwrite("Y", &FVector::Y)
		.def_readwrite("Z", &FVector::Z)
  ;
	py::class_< FGuid >(m, "FGuid")
		.def_readwrite("A", &FGuid::A)
		.def_readwrite("B", &FGuid::B)
		.def_readwrite("C", &FGuid::C)
		.def_readwrite("D", &FGuid::D)
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
		.def_readwrite("Rotation", &FBoneAtom::Rotation)
		.def_readwrite("Translation", &FBoneAtom::Translation)
		.def_readwrite("Scale", &FBoneAtom::Scale)
  ;
	py::class_< FSmartVector >(m, "FSmartVector")
		.def_readwrite("Vector", &FSmartVector::Vector)
		.def_readwrite("Flag", &FSmartVector::Flag)
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
		.def_readwrite("OutVal", &FInterpCurvePointVector2D::OutVal)
		.def_readwrite("ArriveTangent", &FInterpCurvePointVector2D::ArriveTangent)
		.def_readwrite("LeaveTangent", &FInterpCurvePointVector2D::LeaveTangent)
		.def_readwrite("InterpMode", &FInterpCurvePointVector2D::InterpMode)
  ;
	py::class_< FInterpCurveVector2D >(m, "FInterpCurveVector2D")
		.def_readwrite("Points", &FInterpCurveVector2D::Points)
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
		.def_readwrite("Points", &FInterpCurveFloat::Points)
		.def_readwrite("InterpMethod", &FInterpCurveFloat::InterpMethod)
  ;
	py::class_< FCylinder >(m, "FCylinder")
		.def_readwrite("Radius", &FCylinder::Radius)
		.def_readwrite("Height", &FCylinder::Height)
  ;
	py::class_< FInterpCurvePointVector >(m, "FInterpCurvePointVector")
		.def_readwrite("InVal", &FInterpCurvePointVector::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointVector::OutVal)
		.def_readwrite("ArriveTangent", &FInterpCurvePointVector::ArriveTangent)
		.def_readwrite("LeaveTangent", &FInterpCurvePointVector::LeaveTangent)
		.def_readwrite("InterpMode", &FInterpCurvePointVector::InterpMode)
  ;
	py::class_< FInterpCurveVector >(m, "FInterpCurveVector")
		.def_readwrite("Points", &FInterpCurveVector::Points)
		.def_readwrite("InterpMethod", &FInterpCurveVector::InterpMethod)
  ;
	py::class_< FMatrix >(m, "FMatrix")
		.def_readwrite("XPlane", &FMatrix::XPlane)
		.def_readwrite("YPlane", &FMatrix::YPlane)
		.def_readwrite("ZPlane", &FMatrix::ZPlane)
		.def_readwrite("WPlane", &FMatrix::WPlane)
  ;
	py::class_< FBoxSphereBounds >(m, "FBoxSphereBounds")
		.def_readwrite("Origin", &FBoxSphereBounds::Origin)
		.def_readwrite("BoxExtent", &FBoxSphereBounds::BoxExtent)
		.def_readwrite("SphereRadius", &FBoxSphereBounds::SphereRadius)
  ;
	py::class_< FTwoVectors >(m, "FTwoVectors")
		.def_readwrite("v1", &FTwoVectors::v1)
		.def_readwrite("v2", &FTwoVectors::v2)
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
		.def_readwrite("Dummy", &FPointer::Dummy)
  ;
	py::class_< FArray_Mirror >(m, "FArray_Mirror")
		.def_readwrite("Data", &FArray_Mirror::Data)
		.def_readwrite("ArrayNum", &FArray_Mirror::ArrayNum)
		.def_readwrite("ArrayMax", &FArray_Mirror::ArrayMax)
  ;
	py::class_< FStableArray_Mirror >(m, "FStableArray_Mirror")
		.def_readwrite("ArrayNumInUse", &FStableArray_Mirror::ArrayNumInUse)
		.def_readwrite("ArrayNumAllocated", &FStableArray_Mirror::ArrayNumAllocated)
		.def_readwrite("ArrayCapacity", &FStableArray_Mirror::ArrayCapacity)
		.def_readwrite("FreeListHeadIndex", &FStableArray_Mirror::FreeListHeadIndex)
		.def_readwrite("Chunks", &FStableArray_Mirror::Chunks)
  ;
	py::class_< FOctreeElementId >(m, "FOctreeElementId")
		.def_readwrite("Node", &FOctreeElementId::Node)
		.def_readwrite("ElementIndex", &FOctreeElementId::ElementIndex)
  ;
	py::class_< FRenderCommandFence >(m, "FRenderCommandFence")
		.def_readwrite("NumPendingFences", &FRenderCommandFence::NumPendingFences)
  ;
	py::class_< FRawDistribution >(m, "FRawDistribution")
		.def_readwrite("Type", &FRawDistribution::Type)
		.def_readwrite("Op", &FRawDistribution::Op)
		.def_readwrite("LookupTableNumElements", &FRawDistribution::LookupTableNumElements)
		.def_readwrite("LookupTableChunkSize", &FRawDistribution::LookupTableChunkSize)
		.def_readwrite("LookupTable", &FRawDistribution::LookupTable)
		.def_readwrite("LookupTableTimeScale", &FRawDistribution::LookupTableTimeScale)
		.def_readwrite("LookupTableStartTime", &FRawDistribution::LookupTableStartTime)
  ;
	py::class_< FInterpCurvePointLinearColor >(m, "FInterpCurvePointLinearColor")
		.def_readwrite("InVal", &FInterpCurvePointLinearColor::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointLinearColor::OutVal)
		.def_readwrite("ArriveTangent", &FInterpCurvePointLinearColor::ArriveTangent)
		.def_readwrite("LeaveTangent", &FInterpCurvePointLinearColor::LeaveTangent)
		.def_readwrite("InterpMode", &FInterpCurvePointLinearColor::InterpMode)
  ;
	py::class_< FInterpCurveLinearColor >(m, "FInterpCurveLinearColor")
		.def_readwrite("Points", &FInterpCurveLinearColor::Points)
		.def_readwrite("InterpMethod", &FInterpCurveLinearColor::InterpMethod)
  ;
	py::class_< FInterpCurvePointQuat >(m, "FInterpCurvePointQuat")
		.def_readwrite("InVal", &FInterpCurvePointQuat::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointQuat::OutVal)
		.def_readwrite("ArriveTangent", &FInterpCurvePointQuat::ArriveTangent)
		.def_readwrite("LeaveTangent", &FInterpCurvePointQuat::LeaveTangent)
		.def_readwrite("InterpMode", &FInterpCurvePointQuat::InterpMode)
  ;
	py::class_< FInterpCurveQuat >(m, "FInterpCurveQuat")
		.def_readwrite("Points", &FInterpCurveQuat::Points)
		.def_readwrite("InterpMethod", &FInterpCurveQuat::InterpMethod)
  ;
	py::class_< FInterpCurvePointTwoVectors >(m, "FInterpCurvePointTwoVectors")
		.def_readwrite("InVal", &FInterpCurvePointTwoVectors::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointTwoVectors::OutVal)
		.def_readwrite("ArriveTangent", &FInterpCurvePointTwoVectors::ArriveTangent)
		.def_readwrite("LeaveTangent", &FInterpCurvePointTwoVectors::LeaveTangent)
		.def_readwrite("InterpMode", &FInterpCurvePointTwoVectors::InterpMode)
  ;
	py::class_< FInterpCurveTwoVectors >(m, "FInterpCurveTwoVectors")
		.def_readwrite("Points", &FInterpCurveTwoVectors::Points)
		.def_readwrite("InterpMethod", &FInterpCurveTwoVectors::InterpMethod)
  ;
	py::class_< FBox >(m, "FBox")
		.def_readwrite("Min", &FBox::Min)
		.def_readwrite("Max", &FBox::Max)
		.def_readwrite("IsValid", &FBox::IsValid)
  ;
	py::class_< FTPOV >(m, "FTPOV")
		.def_readwrite("Location", &FTPOV::Location)
		.def_readwrite("Rotation", &FTPOV::Rotation)
		.def_readwrite("FOV", &FTPOV::FOV)
  ;
	py::class_< FSHVector >(m, "FSHVector")
  ;
	py::class_< FSHVectorRGB >(m, "FSHVectorRGB")
		.def_readwrite("R", &FSHVectorRGB::R)
		.def_readwrite("G", &FSHVectorRGB::G)
		.def_readwrite("B", &FSHVectorRGB::B)
  ;
	py::class_< FIntPoint3D >(m, "FIntPoint3D")
		.def_readwrite("X", &FIntPoint3D::X)
		.def_readwrite("Y", &FIntPoint3D::Y)
		.def_readwrite("Z", &FIntPoint3D::Z)
  ;
	py::class_< FIntPoint >(m, "FIntPoint")
		.def_readwrite("X", &FIntPoint::X)
		.def_readwrite("Y", &FIntPoint::Y)
  ;
	py::class_< FPackedNormal >(m, "FPackedNormal")
		.def_readwrite("X", &FPackedNormal::X)
		.def_readwrite("Y", &FPackedNormal::Y)
		.def_readwrite("Z", &FPackedNormal::Z)
		.def_readwrite("W", &FPackedNormal::W)
  ;
	py::class_< FChunkedList_Mirror >(m, "FChunkedList_Mirror")
		.def_readwrite("Members", &FChunkedList_Mirror::Members)
  ;
	py::class_< FIndirectArray_Mirror >(m, "FIndirectArray_Mirror")
		.def_readwrite("Data", &FIndirectArray_Mirror::Data)
		.def_readwrite("ArrayNum", &FIndirectArray_Mirror::ArrayNum)
		.def_readwrite("ArrayMax", &FIndirectArray_Mirror::ArrayMax)
  ;
	py::class_< FInlinePointerArray_Mirror >(m, "FInlinePointerArray_Mirror")
		.def_readwrite("InlineData", &FInlinePointerArray_Mirror::InlineData)
		.def_readwrite("SecondaryData", &FInlinePointerArray_Mirror::SecondaryData)
  ;
	py::class_< FFColorVertexBuffer_Mirror >(m, "FFColorVertexBuffer_Mirror")
		.def_readwrite("VfTable", &FFColorVertexBuffer_Mirror::VfTable)
		.def_readwrite("VertexData", &FFColorVertexBuffer_Mirror::VertexData)
		.def_readwrite("Data", &FFColorVertexBuffer_Mirror::Data)
		.def_readwrite("Stride", &FFColorVertexBuffer_Mirror::Stride)
		.def_readwrite("NumVertices", &FFColorVertexBuffer_Mirror::NumVertices)
  ;
	py::class_< FRenderCommandFence_Mirror >(m, "FRenderCommandFence_Mirror")
		.def_readwrite("NumPendingFences", &FRenderCommandFence_Mirror::NumPendingFences)
  ;
	py::class_< FUntypedBulkData_Mirror >(m, "FUntypedBulkData_Mirror")
		.def_readwrite("VfTable", &FUntypedBulkData_Mirror::VfTable)
		.def_readwrite("BulkDataFlags", &FUntypedBulkData_Mirror::BulkDataFlags)
		.def_readwrite("ElementCount", &FUntypedBulkData_Mirror::ElementCount)
		.def_readwrite("BulkDataOffsetInFile", &FUntypedBulkData_Mirror::BulkDataOffsetInFile)
		.def_readwrite("BulkDataSizeOnDisk", &FUntypedBulkData_Mirror::BulkDataSizeOnDisk)
		.def_readwrite("SavedBulkDataFlags", &FUntypedBulkData_Mirror::SavedBulkDataFlags)
		.def_readwrite("SavedElementCount", &FUntypedBulkData_Mirror::SavedElementCount)
		.def_readwrite("SavedBulkDataOffsetInFile", &FUntypedBulkData_Mirror::SavedBulkDataOffsetInFile)
		.def_readwrite("SavedBulkDataSizeOnDisk", &FUntypedBulkData_Mirror::SavedBulkDataSizeOnDisk)
		.def_readwrite("BulkData", &FUntypedBulkData_Mirror::BulkData)
		.def_readwrite("LockStatus", &FUntypedBulkData_Mirror::LockStatus)
		.def_readwrite("AttachedAr", &FUntypedBulkData_Mirror::AttachedAr)
		.def_readwrite("bShouldFreeOnEmpty", &FUntypedBulkData_Mirror::bShouldFreeOnEmpty)
  ;
	py::class_< FBitArray_Mirror >(m, "FBitArray_Mirror")
		.def_readwrite("IndirectData", &FBitArray_Mirror::IndirectData)
		.def_readwrite("NumBits", &FBitArray_Mirror::NumBits)
		.def_readwrite("MaxBits", &FBitArray_Mirror::MaxBits)
  ;
	py::class_< FSparseArray_Mirror >(m, "FSparseArray_Mirror")
		.def_readwrite("Elements", &FSparseArray_Mirror::Elements)
		.def_readwrite("AllocationFlags", &FSparseArray_Mirror::AllocationFlags)
		.def_readwrite("FirstFreeIndex", &FSparseArray_Mirror::FirstFreeIndex)
		.def_readwrite("NumFreeIndices", &FSparseArray_Mirror::NumFreeIndices)
  ;
	py::class_< FSet_Mirror >(m, "FSet_Mirror")
		.def_readwrite("Elements", &FSet_Mirror::Elements)
		.def_readwrite("InlineHash", &FSet_Mirror::InlineHash)
		.def_readwrite("Hash", &FSet_Mirror::Hash)
		.def_readwrite("HashSize", &FSet_Mirror::HashSize)
  ;
	py::class_< FMultiMap_Mirror >(m, "FMultiMap_Mirror")
		.def_readwrite("Pairs", &FMultiMap_Mirror::Pairs)
  ;
	py::class_< FMap_Mirror >(m, "FMap_Mirror")
		.def_readwrite("Pairs", &FMap_Mirror::Pairs)
  ;
	py::class_< FThreadSafeCounter >(m, "FThreadSafeCounter")
		.def_readwrite("Value", &FThreadSafeCounter::Value)
  ;
	py::class_< FDouble >(m, "FDouble")
		.def_readwrite("A", &FDouble::A)
		.def_readwrite("B", &FDouble::B)
  ;
	py::class_< FQWord >(m, "FQWord")
		.def_readwrite("A", &FQWord::A)
		.def_readwrite("B", &FQWord::B)
  ;
	py::class_< FRawDistributionFloat >(m, "FRawDistributionFloat")
		.def_readwrite("Distribution", &FRawDistributionFloat::Distribution)
		.def_readwrite("Type", &FRawDistribution::Type)
		.def_readwrite("Op", &FRawDistribution::Op)
		.def_readwrite("LookupTableNumElements", &FRawDistribution::LookupTableNumElements)
		.def_readwrite("LookupTableChunkSize", &FRawDistribution::LookupTableChunkSize)
		.def_readwrite("LookupTable", &FRawDistribution::LookupTable)
		.def_readwrite("LookupTableTimeScale", &FRawDistribution::LookupTableTimeScale)
		.def_readwrite("LookupTableStartTime", &FRawDistribution::LookupTableStartTime)
  ;

}