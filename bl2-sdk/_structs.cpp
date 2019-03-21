#include "stdafx.h"

// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_structs()
{

	class_< FPointer >("FPointer", init<  >())
		.def(init< const FPointer& >())
		.def_readwrite("Dummy", &FPointer::Dummy)
		;

	class_< FQWord >("FQWord", init<  >())
		.def(init< const FQWord& >())
		.def_readwrite("A", &FQWord::A)
		.def_readwrite("B", &FQWord::B)
		;

	class_< FVector >("FVector", init<  >())
		.def(init< const FVector& >())
		.def_readwrite("X", &FVector::X)
		.def_readwrite("Y", &FVector::Y)
		.def_readwrite("Z", &FVector::Z)
		;

	class_< FRotator >("FRotator", init<  >())
		.def(init< const FRotator& >())
		.def_readwrite("Pitch", &FRotator::Pitch)
		.def_readwrite("Yaw", &FRotator::Yaw)
		.def_readwrite("Roll", &FRotator::Roll)
		;

	class_< FVector2D >("FVector2D", init<  >())
		.def(init< const FVector2D& >())
		.def_readwrite("X", &FVector2D::X)
		.def_readwrite("Y", &FVector2D::Y)
		;

	class_< FNameBasedObjectPath >("FNameBasedObjectPath", init<  >())
		.def(init< const FNameBasedObjectPath& >())
		.def_readonly("PathComponentNames", &FNameBasedObjectPath::PathComponentNames)
		.def_readwrite("IsSubobjectMask", &FNameBasedObjectPath::IsSubobjectMask)
		;

	class_< FFlag >("FFlag", init<  >())
		.def(init< const FFlag& >())
		.def_readwrite("Value", &FFlag::Value)
		.def_readwrite("Raised", &FFlag::Raised)
		.def_readwrite("Lowered", &FFlag::Lowered)
		.def_readwrite("Padding", &FFlag::Padding)
		.def_readwrite("RaisedTime", &FFlag::RaisedTime)
		.def_readwrite("LoweredTime", &FFlag::LoweredTime)
		.def_readwrite("Duration", &FFlag::Duration)
		;

	class_< FSmartVector >("FSmartVector", init<  >())
		.def(init< const FSmartVector& >())
		.def_readwrite("Vector", &FSmartVector::Vector)
		.def_readwrite("Flag", &FSmartVector::Flag)
		;

	class_< FLinearColor >("FLinearColor", init<  >())
		.def(init< const FLinearColor& >())
		.def_readwrite("R", &FLinearColor::R)
		.def_readwrite("G", &FLinearColor::G)
		.def_readwrite("B", &FLinearColor::B)
		.def_readwrite("A", &FLinearColor::A)
		;

	class_< FColor >("FColor", init<  >())
		.def(init< const FColor& >())
		.def_readwrite("B", &FColor::B)
		.def_readwrite("G", &FColor::G)
		.def_readwrite("R", &FColor::R)
		.def_readwrite("A", &FColor::A)
		;

	class_< FInterpCurveVector2D >("FInterpCurveVector2D", init<  >())
		.def(init< const FInterpCurveVector2D& >())
		.def_readwrite("Points", &FInterpCurveVector2D::Points)
		.def_readwrite("InterpMethod", &FInterpCurveVector2D::InterpMethod)
		;

	class_< FInterpCurvePointVector2D >("FInterpCurvePointVector2D", init<  >())
		.def(init< const FInterpCurvePointVector2D& >())
		.def_readwrite("InVal", &FInterpCurvePointVector2D::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointVector2D::OutVal)
		.def_readwrite("ArriveTangent", &FInterpCurvePointVector2D::ArriveTangent)
		.def_readwrite("LeaveTangent", &FInterpCurvePointVector2D::LeaveTangent)
		.def_readwrite("InterpMode", &FInterpCurvePointVector2D::InterpMode)
		;

	class_< FInterpCurveVector >("FInterpCurveVector", init<  >())
		.def(init< const FInterpCurveVector& >())
		.def_readwrite("Points", &FInterpCurveVector::Points)
		.def_readwrite("InterpMethod", &FInterpCurveVector::InterpMethod)
		;

	class_< FInterpCurvePointVector >("FInterpCurvePointVector", init<  >())
		.def(init< const FInterpCurvePointVector& >())
		.def_readwrite("InVal", &FInterpCurvePointVector::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointVector::OutVal)
		.def_readwrite("ArriveTangent", &FInterpCurvePointVector::ArriveTangent)
		.def_readwrite("LeaveTangent", &FInterpCurvePointVector::LeaveTangent)
		.def_readwrite("InterpMode", &FInterpCurvePointVector::InterpMode)
		;

	class_< FInterpCurveFloat >("FInterpCurveFloat", init<  >())
		.def(init< const FInterpCurveFloat& >())
		.def_readwrite("Points", &FInterpCurveFloat::Points)
		.def_readwrite("InterpMethod", &FInterpCurveFloat::InterpMethod)
		;

	class_< FInterpCurvePointFloat >("FInterpCurvePointFloat", init<  >())
		.def(init< const FInterpCurvePointFloat& >())
		.def_readwrite("InVal", &FInterpCurvePointFloat::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointFloat::OutVal)
		.def_readwrite("ArriveTangent", &FInterpCurvePointFloat::ArriveTangent)
		.def_readwrite("LeaveTangent", &FInterpCurvePointFloat::LeaveTangent)
		.def_readwrite("InterpMode", &FInterpCurvePointFloat::InterpMode)
		;

	class_< FQuat >("FQuat", init<  >())
		.def(init< const FQuat& >())
		.def_readwrite("X", &FQuat::X)
		.def_readwrite("Y", &FQuat::Y)
		.def_readwrite("Z", &FQuat::Z)
		.def_readwrite("W", &FQuat::W)
		;

	class_< FMatrix >("FMatrix", init<  >())
		.def(init< const FMatrix& >())
		.def_readwrite("XPlane", &FMatrix::XPlane)
		.def_readwrite("YPlane", &FMatrix::YPlane)
		.def_readwrite("ZPlane", &FMatrix::ZPlane)
		.def_readwrite("WPlane", &FMatrix::WPlane)
		;

	class_< FPlane, bases< FVector >  >("FPlane", init<  >())
		.def(init< const FPlane& >())
		.def_readwrite("W", &FPlane::W)
		;

	class_< FGuid >("FGuid", init<  >())
		.def(init< const FGuid& >())
		.def_readwrite("A", &FGuid::A)
		.def_readwrite("B", &FGuid::B)
		.def_readwrite("C", &FGuid::C)
		.def_readwrite("D", &FGuid::D)
		;

	class_< FRenderCommandFence >("FRenderCommandFence", init<  >())
		.def(init< const FRenderCommandFence& >())
		.def_readwrite("NumPendingFences", &FRenderCommandFence::NumPendingFences)
		;

	class_< FBox >("FBox", init<  >())
		.def(init< const FBox& >())
		.def_readwrite("Min", &FBox::Min)
		.def_readwrite("Max", &FBox::Max)
		.def_readwrite("IsValid", &FBox::IsValid)
		;

	class_< FBoxSphereBounds >("FBoxSphereBounds", init<  >())
		.def(init< const FBoxSphereBounds& >())
		.def_readwrite("Origin", &FBoxSphereBounds::Origin)
		.def_readwrite("BoxExtent", &FBoxSphereBounds::BoxExtent)
		.def_readwrite("SphereRadius", &FBoxSphereBounds::SphereRadius)
		;

	class_< FRenderCommandFence_Mirror >("FRenderCommandFence_Mirror", init<  >())
		.def(init< const FRenderCommandFence_Mirror& >())
		.def_readwrite("NumPendingFences", &FRenderCommandFence_Mirror::NumPendingFences)
		;

	class_< FIndirectArray_Mirror >("FIndirectArray_Mirror", init<  >())
		.def(init< const FIndirectArray_Mirror& >())
		.def_readwrite("Data", &FIndirectArray_Mirror::Data)
		.def_readwrite("ArrayNum", &FIndirectArray_Mirror::ArrayNum)
		.def_readwrite("ArrayMax", &FIndirectArray_Mirror::ArrayMax)
		;

	class_< FThreadSafeCounter >("FThreadSafeCounter", init<  >())
		.def(init< const FThreadSafeCounter& >())
		.def_readwrite("Value", &FThreadSafeCounter::Value)
		;

	class_< FRawDistributionFloat >("FRawDistributionFloat", init<  >())
		.def(init< const FRawDistributionFloat& >())
		.def_readwrite("Distribution", &FRawDistributionFloat::Distribution)
		.def_readwrite("Type", &FRawDistribution::Type)
		.def_readwrite("Op", &FRawDistribution::Op)
		.def_readwrite("LookupTableNumElements", &FRawDistribution::LookupTableNumElements)
		.def_readwrite("LookupTableChunkSize", &FRawDistribution::LookupTableChunkSize)
		.def_readwrite("LookupTable", &FRawDistribution::LookupTable)
		.def_readwrite("LookupTableTimeScale", &FRawDistribution::LookupTableTimeScale)
		.def_readwrite("LookupTableStartTime", &FRawDistribution::LookupTableStartTime)
		;

	class_< FRawDistribution >("FRawDistribution", init<  >())
		.def(init< const FRawDistribution& >())
		.def_readwrite("Type", &FRawDistribution::Type)
		.def_readwrite("Op", &FRawDistribution::Op)
		.def_readwrite("LookupTableNumElements", &FRawDistribution::LookupTableNumElements)
		.def_readwrite("LookupTableChunkSize", &FRawDistribution::LookupTableChunkSize)
		.def_readwrite("LookupTable", &FRawDistribution::LookupTable)
		.def_readwrite("LookupTableTimeScale", &FRawDistribution::LookupTableTimeScale)
		.def_readwrite("LookupTableStartTime", &FRawDistribution::LookupTableStartTime)
		;

	class_< FRawDistributionVector, bases< FRawDistribution >  >("FRawDistributionVector", init<  >())
		.def(init< const FRawDistributionVector& >())
		.def_readwrite("Distribution", &FRawDistributionVector::Distribution)
		;

	class_< FBoneAtom >("FBoneAtom", init<  >())
		.def(init< const FBoneAtom& >())
		.def_readwrite("Rotation", &FBoneAtom::Rotation)
		.def_readwrite("Translation", &FBoneAtom::Translation)
		.def_readwrite("Scale", &FBoneAtom::Scale)
		;

	class_< FMap_Mirror >("FMap_Mirror", init<  >())
		.def(init< const FMap_Mirror& >())
		.def_readwrite("Pairs", &FMap_Mirror::Pairs)
		;

	class_< FSet_Mirror >("FSet_Mirror", init<  >())
		.def(init< const FSet_Mirror& >())
		.def_readwrite("Elements", &FSet_Mirror::Elements)
		.def_readwrite("InlineHash", &FSet_Mirror::InlineHash)
		.def_readwrite("Hash", &FSet_Mirror::Hash)
		.def_readwrite("HashSize", &FSet_Mirror::HashSize)
		;

	class_< FSparseArray_Mirror >("FSparseArray_Mirror", init<  >())
		.def(init< const FSparseArray_Mirror& >())
		.def_readwrite("Elements", &FSparseArray_Mirror::Elements)
		.def_readwrite("AllocationFlags", &FSparseArray_Mirror::AllocationFlags)
		.def_readwrite("FirstFreeIndex", &FSparseArray_Mirror::FirstFreeIndex)
		.def_readwrite("NumFreeIndices", &FSparseArray_Mirror::NumFreeIndices)
		;

	class_< FBitArray_Mirror >("FBitArray_Mirror", init<  >())
		.def(init< const FBitArray_Mirror& >())
		.def_readwrite("IndirectData", &FBitArray_Mirror::IndirectData)
		.def_readonly("InlineData", &FBitArray_Mirror::InlineData)
		.def_readwrite("NumBits", &FBitArray_Mirror::NumBits)
		.def_readwrite("MaxBits", &FBitArray_Mirror::MaxBits)
		;

	class_< FArray_Mirror >("FArray_Mirror", init<  >())
		.def(init< const FArray_Mirror& >())
		.def_readwrite("Data", &FArray_Mirror::Data)
		.def_readwrite("ArrayNum", &FArray_Mirror::ArrayNum)
		.def_readwrite("ArrayMax", &FArray_Mirror::ArrayMax)
		;

	class_< FUntypedBulkData_Mirror >("FUntypedBulkData_Mirror", init<  >())
		.def(init< const FUntypedBulkData_Mirror& >())
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

	class_< FMultiMap_Mirror >("FMultiMap_Mirror", init<  >())
		.def(init< const FMultiMap_Mirror& >())
		.def_readwrite("Pairs", &FMultiMap_Mirror::Pairs)
		;

	class_< FDouble >("FDouble", init<  >())
		.def(init< const FDouble& >())
		.def_readwrite("A", &FDouble::A)
		.def_readwrite("B", &FDouble::B)
		;

	class_< FOctreeElementId >("FOctreeElementId", init<  >())
		.def(init< const FOctreeElementId& >())
		.def_readwrite("Node", &FOctreeElementId::Node)
		.def_readwrite("ElementIndex", &FOctreeElementId::ElementIndex)
		;

	class_< FCylinder >("FCylinder", init<  >())
		.def(init< const FCylinder& >())
		.def_readwrite("Radius", &FCylinder::Radius)
		.def_readwrite("Height", &FCylinder::Height)
		;

	class_< FTPOV >("FTPOV", init<  >())
		.def(init< const FTPOV& >())
		.def_readwrite("Location", &FTPOV::Location)
		.def_readwrite("Rotation", &FTPOV::Rotation)
		.def_readwrite("FOV", &FTPOV::FOV)
		;

	class_< FIntPoint >("FIntPoint", init<  >())
		.def(init< const FIntPoint& >())
		.def_readwrite("X", &FIntPoint::X)
		.def_readwrite("Y", &FIntPoint::Y)
		;

	class_< FChunkedList_Mirror >("FChunkedList_Mirror", init<  >())
		.def(init< const FChunkedList_Mirror& >())
		.def_readwrite("Members", &FChunkedList_Mirror::Members)
		;

	class_< FStableArray_Mirror >("FStableArray_Mirror", init<  >())
		.def(init< const FStableArray_Mirror& >())
		.def_readwrite("ArrayNumInUse", &FStableArray_Mirror::ArrayNumInUse)
		.def_readwrite("ArrayNumAllocated", &FStableArray_Mirror::ArrayNumAllocated)
		.def_readwrite("ArrayCapacity", &FStableArray_Mirror::ArrayCapacity)
		.def_readwrite("FreeListHeadIndex", &FStableArray_Mirror::FreeListHeadIndex)
		.def_readwrite("Chunks", &FStableArray_Mirror::Chunks)
		;

	class_< FTAlphaBlend >("FTAlphaBlend", init<  >())
		.def(init< const FTAlphaBlend& >())
		.def_readwrite("AlphaIn", &FTAlphaBlend::AlphaIn)
		.def_readwrite("AlphaOut", &FTAlphaBlend::AlphaOut)
		.def_readwrite("AlphaTarget", &FTAlphaBlend::AlphaTarget)
		.def_readwrite("BlendTime", &FTAlphaBlend::BlendTime)
		.def_readwrite("BlendTimeToGo", &FTAlphaBlend::BlendTimeToGo)
		.def_readwrite("BlendType", &FTAlphaBlend::BlendType)
		;

	class_< FTwoVectors >("FTwoVectors", init<  >())
		.def(init< const FTwoVectors& >())
		.def_readwrite("v1", &FTwoVectors::v1)
		.def_readwrite("v2", &FTwoVectors::v2)
		;

	class_< FPlane2D, bases< FVector2D >  >("FPlane2D", init<  >())
		.def(init< const FPlane2D& >())
		.def_readwrite("W", &FPlane2D::W)
		;

	class_< FVector4 >("FVector4", init<  >())
		.def(init< const FVector4& >())
		.def_readwrite("X", &FVector4::X)
		.def_readwrite("Y", &FVector4::Y)
		.def_readwrite("Z", &FVector4::Z)
		.def_readwrite("W", &FVector4::W)
		;

	class_< FSHVectorRGB >("FSHVectorRGB", init<  >())
		.def(init< const FSHVectorRGB& >())
		.def_readwrite("R", &FSHVectorRGB::R)
		.def_readwrite("G", &FSHVectorRGB::G)
		.def_readwrite("B", &FSHVectorRGB::B)
		;

	class_< FSHVector >("FSHVector", init<  >())
		.def(init< const FSHVector& >())
		.def_readonly("V", &FSHVector::V)
		.def_readonly("Padding", &FSHVector::Padding)
		;

	class_< FInterpCurvePointLinearColor >("FInterpCurvePointLinearColor", init<  >())
		.def(init< const FInterpCurvePointLinearColor& >())
		.def_readwrite("InVal", &FInterpCurvePointLinearColor::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointLinearColor::OutVal)
		.def_readwrite("ArriveTangent", &FInterpCurvePointLinearColor::ArriveTangent)
		.def_readwrite("LeaveTangent", &FInterpCurvePointLinearColor::LeaveTangent)
		.def_readwrite("InterpMode", &FInterpCurvePointLinearColor::InterpMode)
		;

	class_< FInterpCurveTwoVectors >("FInterpCurveTwoVectors", init<  >())
		.def(init< const FInterpCurveTwoVectors& >())
		.def_readwrite("Points", &FInterpCurveTwoVectors::Points)
		.def_readwrite("InterpMethod", &FInterpCurveTwoVectors::InterpMethod)
		;

	class_< FInterpCurvePointTwoVectors >("FInterpCurvePointTwoVectors", init<  >())
		.def(init< const FInterpCurvePointTwoVectors& >())
		.def_readwrite("InVal", &FInterpCurvePointTwoVectors::InVal)
		.def_readwrite("OutVal", &FInterpCurvePointTwoVectors::OutVal)
		.def_readwrite("ArriveTangent", &FInterpCurvePointTwoVectors::ArriveTangent)
		.def_readwrite("LeaveTangent", &FInterpCurvePointTwoVectors::LeaveTangent)
		.def_readwrite("InterpMode", &FInterpCurvePointTwoVectors::InterpMode)
		;

	class_< FPackedNormal >("FPackedNormal", init<  >())
		.def(init< const FPackedNormal& >())
		.def_readwrite("X", &FPackedNormal::X)
		.def_readwrite("Y", &FPackedNormal::Y)
		.def_readwrite("Z", &FPackedNormal::Z)
		.def_readwrite("W", &FPackedNormal::W)
		;

	class_< FInterpCurveLinearColor >("FInterpCurveLinearColor", init<  >())
		.def(init< const FInterpCurveLinearColor& >())
		.def_readwrite("Points", &FInterpCurveLinearColor::Points)
		.def_readwrite("InterpMethod", &FInterpCurveLinearColor::InterpMethod)
		;

	class_< FInterpCurvePointQuat >("FInterpCurvePointQuat", init<  >())
		.def(init< const FInterpCurvePointQuat& >())
		.def_readwrite("InVal", &FInterpCurvePointQuat::InVal)
		.def_readonly("UnknownData00", &FInterpCurvePointQuat::UnknownData00)
		.def_readwrite("OutVal", &FInterpCurvePointQuat::OutVal)
		.def_readwrite("ArriveTangent", &FInterpCurvePointQuat::ArriveTangent)
		.def_readwrite("LeaveTangent", &FInterpCurvePointQuat::LeaveTangent)
		.def_readwrite("InterpMode", &FInterpCurvePointQuat::InterpMode)
		;

	class_< FFColorVertexBuffer_Mirror >("FFColorVertexBuffer_Mirror", init<  >())
		.def(init< const FFColorVertexBuffer_Mirror& >())
		.def_readwrite("VfTable", &FFColorVertexBuffer_Mirror::VfTable)
		.def_readwrite("VertexData", &FFColorVertexBuffer_Mirror::VertexData)
		.def_readwrite("Data", &FFColorVertexBuffer_Mirror::Data)
		.def_readwrite("Stride", &FFColorVertexBuffer_Mirror::Stride)
		.def_readwrite("NumVertices", &FFColorVertexBuffer_Mirror::NumVertices)
		;

	class_< FInterpCurveQuat >("FInterpCurveQuat", init<  >())
		.def(init< const FInterpCurveQuat& >())
		.def_readwrite("Points", &FInterpCurveQuat::Points)
		.def_readwrite("InterpMethod", &FInterpCurveQuat::InterpMethod)
		;

	class_< FInlinePointerArray_Mirror >("FInlinePointerArray_Mirror", init<  >())
		.def(init< const FInlinePointerArray_Mirror& >())
		.def_readwrite("InlineData", &FInlinePointerArray_Mirror::InlineData)
		.def_readwrite("SecondaryData", &FInlinePointerArray_Mirror::SecondaryData)
		;

	class_< FIntPoint3D >("FIntPoint3D", init<  >())
		.def(init< const FIntPoint3D& >())
		.def_readwrite("X", &FIntPoint3D::X)
		.def_readwrite("Y", &FIntPoint3D::Y)
		.def_readwrite("Z", &FIntPoint3D::Z)
		;

}

