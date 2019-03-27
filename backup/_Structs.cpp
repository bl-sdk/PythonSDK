#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_Structs()
{
    class_< FPointer >("FPointer", no_init)
        .def_readwrite("Dummy", &FPointer::Dummy)
    ;

    class_< FQWord >("FQWord", no_init)
        .def_readwrite("A", &FQWord::A)
        .def_readwrite("B", &FQWord::B)
    ;

    class_< FVector >("FVector", no_init)
        .def_readwrite("X", &FVector::X)
        .def_readwrite("Y", &FVector::Y)
        .def_readwrite("Z", &FVector::Z)
    ;

    class_< FRotator >("FRotator", no_init)
        .def_readwrite("Pitch", &FRotator::Pitch)
        .def_readwrite("Yaw", &FRotator::Yaw)
        .def_readwrite("Roll", &FRotator::Roll)
    ;

    class_< FVector2D >("FVector2D", no_init)
        .def_readwrite("X", &FVector2D::X)
        .def_readwrite("Y", &FVector2D::Y)
    ;

    class_< FNameBasedObjectPath >("FNameBasedObjectPath", no_init)
        .def_readonly("PathComponentNames", &FNameBasedObjectPath::PathComponentNames)
        .def_readwrite("IsSubobjectMask", &FNameBasedObjectPath::IsSubobjectMask)
    ;

    class_< FFlag >("FFlag", no_init)
        .def_readwrite("Value", &FFlag::Value)
        .def_readwrite("Raised", &FFlag::Raised)
        .def_readwrite("Lowered", &FFlag::Lowered)
        .def_readwrite("Padding", &FFlag::Padding)
        .def_readwrite("RaisedTime", &FFlag::RaisedTime)
        .def_readwrite("LoweredTime", &FFlag::LoweredTime)
        .def_readwrite("Duration", &FFlag::Duration)
    ;

    class_< FSmartVector >("FSmartVector", no_init)
        .def_readwrite("Vector", &FSmartVector::Vector)
        .def_readwrite("Flag", &FSmartVector::Flag)
    ;

    class_< FLinearColor >("FLinearColor", no_init)
        .def_readwrite("R", &FLinearColor::R)
        .def_readwrite("G", &FLinearColor::G)
        .def_readwrite("B", &FLinearColor::B)
        .def_readwrite("A", &FLinearColor::A)
    ;

    class_< FColor >("FColor", no_init)
        .def_readwrite("B", &FColor::B)
        .def_readwrite("G", &FColor::G)
        .def_readwrite("R", &FColor::R)
        .def_readwrite("A", &FColor::A)
    ;

    class_< FInterpCurveVector2D >("FInterpCurveVector2D", no_init)
        .def_readwrite("Points", &FInterpCurveVector2D::Points)
        .def_readwrite("InterpMethod", &FInterpCurveVector2D::InterpMethod)
    ;

    class_< FInterpCurvePointVector2D >("FInterpCurvePointVector2D", no_init)
        .def_readwrite("InVal", &FInterpCurvePointVector2D::InVal)
        .def_readwrite("OutVal", &FInterpCurvePointVector2D::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointVector2D::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointVector2D::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointVector2D::InterpMode)
    ;

    class_< FInterpCurveVector >("FInterpCurveVector", no_init)
        .def_readwrite("Points", &FInterpCurveVector::Points)
        .def_readwrite("InterpMethod", &FInterpCurveVector::InterpMethod)
    ;

    class_< FInterpCurvePointVector >("FInterpCurvePointVector", no_init)
        .def_readwrite("InVal", &FInterpCurvePointVector::InVal)
        .def_readwrite("OutVal", &FInterpCurvePointVector::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointVector::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointVector::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointVector::InterpMode)
    ;

    class_< FInterpCurveFloat >("FInterpCurveFloat", no_init)
        .def_readwrite("Points", &FInterpCurveFloat::Points)
        .def_readwrite("InterpMethod", &FInterpCurveFloat::InterpMethod)
    ;

    class_< FInterpCurvePointFloat >("FInterpCurvePointFloat", no_init)
        .def_readwrite("InVal", &FInterpCurvePointFloat::InVal)
        .def_readwrite("OutVal", &FInterpCurvePointFloat::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointFloat::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointFloat::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointFloat::InterpMode)
    ;

    class_< FQuat >("FQuat", no_init)
        .def_readwrite("X", &FQuat::X)
        .def_readwrite("Y", &FQuat::Y)
        .def_readwrite("Z", &FQuat::Z)
        .def_readwrite("W", &FQuat::W)
    ;

    class_< FMatrix >("FMatrix", no_init)
        .def_readwrite("XPlane", &FMatrix::XPlane)
        .def_readwrite("YPlane", &FMatrix::YPlane)
        .def_readwrite("ZPlane", &FMatrix::ZPlane)
        .def_readwrite("WPlane", &FMatrix::WPlane)
    ;

    class_< FPlane, bases< FVector >  >("FPlane", no_init)
        .def_readwrite("W", &FPlane::W)
    ;

    class_< FGuid >("FGuid", no_init)
        .def_readwrite("A", &FGuid::A)
        .def_readwrite("B", &FGuid::B)
        .def_readwrite("C", &FGuid::C)
        .def_readwrite("D", &FGuid::D)
    ;

    class_< FRenderCommandFence >("FRenderCommandFence", no_init)
        .def_readwrite("NumPendingFences", &FRenderCommandFence::NumPendingFences)
    ;

    class_< FBox >("FBox", no_init)
        .def_readwrite("Min", &FBox::Min)
        .def_readwrite("Max", &FBox::Max)
        .def_readwrite("IsValid", &FBox::IsValid)
    ;

    class_< FBoxSphereBounds >("FBoxSphereBounds", no_init)
        .def_readwrite("Origin", &FBoxSphereBounds::Origin)
        .def_readwrite("BoxExtent", &FBoxSphereBounds::BoxExtent)
        .def_readwrite("SphereRadius", &FBoxSphereBounds::SphereRadius)
    ;

    class_< FRenderCommandFence_Mirror >("FRenderCommandFence_Mirror", no_init)
        .def_readwrite("NumPendingFences", &FRenderCommandFence_Mirror::NumPendingFences)
    ;

    class_< FIndirectArray_Mirror >("FIndirectArray_Mirror", no_init)
        .def_readwrite("Data", &FIndirectArray_Mirror::Data)
        .def_readwrite("ArrayNum", &FIndirectArray_Mirror::ArrayNum)
        .def_readwrite("ArrayMax", &FIndirectArray_Mirror::ArrayMax)
    ;

    class_< FThreadSafeCounter >("FThreadSafeCounter", no_init)
        .def_readwrite("Value", &FThreadSafeCounter::Value)
    ;

    class_< FRawDistributionFloat >("FRawDistributionFloat", no_init)
        .def_readwrite("Distribution", &FRawDistributionFloat::Distribution)
        .def_readwrite("Type", &FRawDistribution::Type)
        .def_readwrite("Op", &FRawDistribution::Op)
        .def_readwrite("LookupTableNumElements", &FRawDistribution::LookupTableNumElements)
        .def_readwrite("LookupTableChunkSize", &FRawDistribution::LookupTableChunkSize)
        .def_readwrite("LookupTable", &FRawDistribution::LookupTable)
        .def_readwrite("LookupTableTimeScale", &FRawDistribution::LookupTableTimeScale)
        .def_readwrite("LookupTableStartTime", &FRawDistribution::LookupTableStartTime)
    ;

    class_< FRawDistribution >("FRawDistribution", no_init)
        .def_readwrite("Type", &FRawDistribution::Type)
        .def_readwrite("Op", &FRawDistribution::Op)
        .def_readwrite("LookupTableNumElements", &FRawDistribution::LookupTableNumElements)
        .def_readwrite("LookupTableChunkSize", &FRawDistribution::LookupTableChunkSize)
        .def_readwrite("LookupTable", &FRawDistribution::LookupTable)
        .def_readwrite("LookupTableTimeScale", &FRawDistribution::LookupTableTimeScale)
        .def_readwrite("LookupTableStartTime", &FRawDistribution::LookupTableStartTime)
    ;

    class_< FRawDistributionVector, bases< FRawDistribution >  >("FRawDistributionVector", no_init)
        .def_readwrite("Distribution", &FRawDistributionVector::Distribution)
    ;

    class_< FBoneAtom >("FBoneAtom", no_init)
        .def_readwrite("Rotation", &FBoneAtom::Rotation)
        .def_readwrite("Translation", &FBoneAtom::Translation)
        .def_readwrite("Scale", &FBoneAtom::Scale)
    ;

    class_< FMap_Mirror >("FMap_Mirror", no_init)
        .def_readwrite("Pairs", &FMap_Mirror::Pairs)
    ;

    class_< FSet_Mirror >("FSet_Mirror", no_init)
        .def_readwrite("Elements", &FSet_Mirror::Elements)
        .def_readwrite("InlineHash", &FSet_Mirror::InlineHash)
        .def_readwrite("Hash", &FSet_Mirror::Hash)
        .def_readwrite("HashSize", &FSet_Mirror::HashSize)
    ;

    class_< FSparseArray_Mirror >("FSparseArray_Mirror", no_init)
        .def_readwrite("Elements", &FSparseArray_Mirror::Elements)
        .def_readwrite("AllocationFlags", &FSparseArray_Mirror::AllocationFlags)
        .def_readwrite("FirstFreeIndex", &FSparseArray_Mirror::FirstFreeIndex)
        .def_readwrite("NumFreeIndices", &FSparseArray_Mirror::NumFreeIndices)
    ;

    class_< FBitArray_Mirror >("FBitArray_Mirror", no_init)
        .def_readwrite("IndirectData", &FBitArray_Mirror::IndirectData)
        .def_readonly("InlineData", &FBitArray_Mirror::InlineData)
        .def_readwrite("NumBits", &FBitArray_Mirror::NumBits)
        .def_readwrite("MaxBits", &FBitArray_Mirror::MaxBits)
    ;

    class_< FArray_Mirror >("FArray_Mirror", no_init)
        .def_readwrite("Data", &FArray_Mirror::Data)
        .def_readwrite("ArrayNum", &FArray_Mirror::ArrayNum)
        .def_readwrite("ArrayMax", &FArray_Mirror::ArrayMax)
    ;

    class_< FUntypedBulkData_Mirror >("FUntypedBulkData_Mirror", no_init)
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

    class_< FMultiMap_Mirror >("FMultiMap_Mirror", no_init)
        .def_readwrite("Pairs", &FMultiMap_Mirror::Pairs)
    ;

    class_< FDouble >("FDouble", no_init)
        .def_readwrite("A", &FDouble::A)
        .def_readwrite("B", &FDouble::B)
    ;

    class_< FOctreeElementId >("FOctreeElementId", no_init)
        .def_readwrite("Node", &FOctreeElementId::Node)
        .def_readwrite("ElementIndex", &FOctreeElementId::ElementIndex)
    ;

    class_< FCylinder >("FCylinder", no_init)
        .def_readwrite("Radius", &FCylinder::Radius)
        .def_readwrite("Height", &FCylinder::Height)
    ;

    class_< FTPOV >("FTPOV", no_init)
        .def_readwrite("Location", &FTPOV::Location)
        .def_readwrite("Rotation", &FTPOV::Rotation)
        .def_readwrite("FOV", &FTPOV::FOV)
    ;

    class_< FIntPoint >("FIntPoint", no_init)
        .def_readwrite("X", &FIntPoint::X)
        .def_readwrite("Y", &FIntPoint::Y)
    ;

    class_< FChunkedList_Mirror >("FChunkedList_Mirror", no_init)
        .def_readwrite("Members", &FChunkedList_Mirror::Members)
    ;

    class_< FStableArray_Mirror >("FStableArray_Mirror", no_init)
        .def_readwrite("ArrayNumInUse", &FStableArray_Mirror::ArrayNumInUse)
        .def_readwrite("ArrayNumAllocated", &FStableArray_Mirror::ArrayNumAllocated)
        .def_readwrite("ArrayCapacity", &FStableArray_Mirror::ArrayCapacity)
        .def_readwrite("FreeListHeadIndex", &FStableArray_Mirror::FreeListHeadIndex)
        .def_readwrite("Chunks", &FStableArray_Mirror::Chunks)
    ;

    class_< FTAlphaBlend >("FTAlphaBlend", no_init)
        .def_readwrite("AlphaIn", &FTAlphaBlend::AlphaIn)
        .def_readwrite("AlphaOut", &FTAlphaBlend::AlphaOut)
        .def_readwrite("AlphaTarget", &FTAlphaBlend::AlphaTarget)
        .def_readwrite("BlendTime", &FTAlphaBlend::BlendTime)
        .def_readwrite("BlendTimeToGo", &FTAlphaBlend::BlendTimeToGo)
        .def_readwrite("BlendType", &FTAlphaBlend::BlendType)
    ;

    class_< FTwoVectors >("FTwoVectors", no_init)
        .def_readwrite("v1", &FTwoVectors::v1)
        .def_readwrite("v2", &FTwoVectors::v2)
    ;

    class_< FPlane2D, bases< FVector2D >  >("FPlane2D", no_init)
        .def_readwrite("W", &FPlane2D::W)
    ;

    class_< FVector4 >("FVector4", no_init)
        .def_readwrite("X", &FVector4::X)
        .def_readwrite("Y", &FVector4::Y)
        .def_readwrite("Z", &FVector4::Z)
        .def_readwrite("W", &FVector4::W)
    ;

    class_< FSHVectorRGB >("FSHVectorRGB", no_init)
        .def_readwrite("R", &FSHVectorRGB::R)
        .def_readwrite("G", &FSHVectorRGB::G)
        .def_readwrite("B", &FSHVectorRGB::B)
    ;

    class_< FSHVector >("FSHVector", no_init)
        .def_readonly("V", &FSHVector::V)
        .def_readonly("Padding", &FSHVector::Padding)
    ;

    class_< FInterpCurvePointLinearColor >("FInterpCurvePointLinearColor", no_init)
        .def_readwrite("InVal", &FInterpCurvePointLinearColor::InVal)
        .def_readwrite("OutVal", &FInterpCurvePointLinearColor::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointLinearColor::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointLinearColor::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointLinearColor::InterpMode)
    ;

    class_< FInterpCurveTwoVectors >("FInterpCurveTwoVectors", no_init)
        .def_readwrite("Points", &FInterpCurveTwoVectors::Points)
        .def_readwrite("InterpMethod", &FInterpCurveTwoVectors::InterpMethod)
    ;

    class_< FInterpCurvePointTwoVectors >("FInterpCurvePointTwoVectors", no_init)
        .def_readwrite("InVal", &FInterpCurvePointTwoVectors::InVal)
        .def_readwrite("OutVal", &FInterpCurvePointTwoVectors::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointTwoVectors::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointTwoVectors::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointTwoVectors::InterpMode)
    ;

    class_< FPackedNormal >("FPackedNormal", no_init)
        .def_readwrite("X", &FPackedNormal::X)
        .def_readwrite("Y", &FPackedNormal::Y)
        .def_readwrite("Z", &FPackedNormal::Z)
        .def_readwrite("W", &FPackedNormal::W)
    ;

    class_< FInterpCurveLinearColor >("FInterpCurveLinearColor", no_init)
        .def_readwrite("Points", &FInterpCurveLinearColor::Points)
        .def_readwrite("InterpMethod", &FInterpCurveLinearColor::InterpMethod)
    ;

    class_< FInterpCurvePointQuat >("FInterpCurvePointQuat", no_init)
        .def_readwrite("InVal", &FInterpCurvePointQuat::InVal)
        .def_readonly("UnknownData00", &FInterpCurvePointQuat::UnknownData00)
        .def_readwrite("OutVal", &FInterpCurvePointQuat::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointQuat::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointQuat::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointQuat::InterpMode)
    ;

    class_< FFColorVertexBuffer_Mirror >("FFColorVertexBuffer_Mirror", no_init)
        .def_readwrite("VfTable", &FFColorVertexBuffer_Mirror::VfTable)
        .def_readwrite("VertexData", &FFColorVertexBuffer_Mirror::VertexData)
        .def_readwrite("Data", &FFColorVertexBuffer_Mirror::Data)
        .def_readwrite("Stride", &FFColorVertexBuffer_Mirror::Stride)
        .def_readwrite("NumVertices", &FFColorVertexBuffer_Mirror::NumVertices)
    ;

    class_< FInterpCurveQuat >("FInterpCurveQuat", no_init)
        .def_readwrite("Points", &FInterpCurveQuat::Points)
        .def_readwrite("InterpMethod", &FInterpCurveQuat::InterpMethod)
    ;

    class_< FInlinePointerArray_Mirror >("FInlinePointerArray_Mirror", no_init)
        .def_readwrite("InlineData", &FInlinePointerArray_Mirror::InlineData)
        .def_readwrite("SecondaryData", &FInlinePointerArray_Mirror::SecondaryData)
    ;

    class_< FIntPoint3D >("FIntPoint3D", no_init)
        .def_readwrite("X", &FIntPoint3D::X)
        .def_readwrite("Y", &FIntPoint3D::Y)
        .def_readwrite("Z", &FIntPoint3D::Z)
    ;

    class_< FTimerData >("FTimerData", no_init)
        .def_readwrite("FuncName", &FTimerData::FuncName)
        .def_readwrite("Rate", &FTimerData::Rate)
        .def_readwrite("Count", &FTimerData::Count)
        .def_readwrite("TimerTimeDilation", &FTimerData::TimerTimeDilation)
        .def_readwrite("TimerObj", &FTimerData::TimerObj)
    ;

    class_< FNavigationOctreeObject >("FNavigationOctreeObject", no_init)
        .def_readwrite("BoundingBox", &FNavigationOctreeObject::BoundingBox)
        .def_readwrite("BoxCenter", &FNavigationOctreeObject::BoxCenter)
        .def_readwrite("OctreeNode", &FNavigationOctreeObject::OctreeNode)
        .def_readwrite("Owner", &FNavigationOctreeObject::Owner)
        .def_readwrite("OwnerType", &FNavigationOctreeObject::OwnerType)
    ;

    class_< FActorReference >("FActorReference", no_init)
        .def_readwrite("Actor", &FActorReference::Actor)
        .def_readwrite("Guid", &FActorReference::Guid)
    ;

    class_< FLightmassMaterialInterfaceSettings >("FLightmassMaterialInterfaceSettings", no_init)
        .def_readwrite("DistanceFieldPenumbraScale", &FLightmassMaterialInterfaceSettings::DistanceFieldPenumbraScale)
    ;

    class_< FFontCharacter >("FFontCharacter", no_init)
        .def_readwrite("StartU", &FFontCharacter::StartU)
        .def_readwrite("StartV", &FFontCharacter::StartV)
        .def_readwrite("USize", &FFontCharacter::USize)
        .def_readwrite("VSize", &FFontCharacter::VSize)
        .def_readwrite("TextureIndex", &FFontCharacter::TextureIndex)
        .def_readwrite("VerticalOffset", &FFontCharacter::VerticalOffset)
    ;

    class_< FTextureLinkedListMirror >("FTextureLinkedListMirror", no_init)
        .def_readwrite("Element", &FTextureLinkedListMirror::Element)
        .def_readwrite("Next", &FTextureLinkedListMirror::Next)
        .def_readwrite("PrevLink", &FTextureLinkedListMirror::PrevLink)
    ;

    class_< FFontImportOptionsData >("FFontImportOptionsData", no_init)
        .def_readwrite("FontName", &FFontImportOptionsData::FontName)
        .def_readwrite("Height", &FFontImportOptionsData::Height)
        .def_readwrite("CharacterSet", &FFontImportOptionsData::CharacterSet)
        .def_readwrite("Chars", &FFontImportOptionsData::Chars)
        .def_readwrite("UnicodeRange", &FFontImportOptionsData::UnicodeRange)
        .def_readwrite("CharsFilePath", &FFontImportOptionsData::CharsFilePath)
        .def_readwrite("CharsFileWildcard", &FFontImportOptionsData::CharsFileWildcard)
        .def_readwrite("ForegroundColor", &FFontImportOptionsData::ForegroundColor)
        .def_readwrite("TexturePageWidth", &FFontImportOptionsData::TexturePageWidth)
        .def_readwrite("TexturePageMaxHeight", &FFontImportOptionsData::TexturePageMaxHeight)
        .def_readwrite("XPadding", &FFontImportOptionsData::XPadding)
        .def_readwrite("YPadding", &FFontImportOptionsData::YPadding)
        .def_readwrite("ExtendBoxTop", &FFontImportOptionsData::ExtendBoxTop)
        .def_readwrite("ExtendBoxBottom", &FFontImportOptionsData::ExtendBoxBottom)
        .def_readwrite("ExtendBoxRight", &FFontImportOptionsData::ExtendBoxRight)
        .def_readwrite("ExtendBoxLeft", &FFontImportOptionsData::ExtendBoxLeft)
        .def_readwrite("Kerning", &FFontImportOptionsData::Kerning)
        .def_readwrite("DistanceFieldScaleFactor", &FFontImportOptionsData::DistanceFieldScaleFactor)
        .def_readwrite("DistanceFieldScanRadiusScale", &FFontImportOptionsData::DistanceFieldScanRadiusScale)
    ;

    class_< FParticleBurst >("FParticleBurst", no_init)
        .def_readwrite("Count", &FParticleBurst::Count)
        .def_readwrite("CountLow", &FParticleBurst::CountLow)
        .def_readwrite("Time", &FParticleBurst::Time)
        .def_readwrite("CountDistribution", &FParticleBurst::CountDistribution)
    ;

    class_< FParticleEvent_GenerateInfo >("FParticleEvent_GenerateInfo", no_init)
        .def_readwrite("Type", &FParticleEvent_GenerateInfo::Type)
        .def_readwrite("Frequency", &FParticleEvent_GenerateInfo::Frequency)
        .def_readwrite("LowFreq", &FParticleEvent_GenerateInfo::LowFreq)
        .def_readwrite("ParticleFrequency", &FParticleEvent_GenerateInfo::ParticleFrequency)
        .def_readwrite("CustomName", &FParticleEvent_GenerateInfo::CustomName)
        .def_readwrite("ParticleModuleEventsToSendToGame", &FParticleEvent_GenerateInfo::ParticleModuleEventsToSendToGame)
    ;

    class_< FOrbitOptions >("FOrbitOptions", no_init)
    ;

    class_< FFontParameterValue >("FFontParameterValue", no_init)
        .def_readwrite("ParameterName", &FFontParameterValue::ParameterName)
        .def_readwrite("FontValue", &FFontParameterValue::FontValue)
        .def_readwrite("FontPage", &FFontParameterValue::FontPage)
        .def_readwrite("ExpressionGUID", &FFontParameterValue::ExpressionGUID)
    ;

    class_< FScalarParameterValue >("FScalarParameterValue", no_init)
        .def_readwrite("ParameterName", &FScalarParameterValue::ParameterName)
        .def_readwrite("ParameterValue", &FScalarParameterValue::ParameterValue)
        .def_readwrite("ExpressionGUID", &FScalarParameterValue::ExpressionGUID)
    ;

    class_< FTextureParameterValue >("FTextureParameterValue", no_init)
        .def_readwrite("ParameterName", &FTextureParameterValue::ParameterName)
        .def_readwrite("ParameterValue", &FTextureParameterValue::ParameterValue)
        .def_readwrite("ExpressionGUID", &FTextureParameterValue::ExpressionGUID)
    ;

    class_< FVectorParameterValue >("FVectorParameterValue", no_init)
        .def_readwrite("ParameterName", &FVectorParameterValue::ParameterName)
        .def_readwrite("ParameterValue", &FVectorParameterValue::ParameterValue)
        .def_readwrite("ExpressionGUID", &FVectorParameterValue::ExpressionGUID)
    ;

    class_< FFontParameterValueOverTime >("FFontParameterValueOverTime", no_init)
        .def_readwrite("FontValue", &FFontParameterValueOverTime::FontValue)
        .def_readwrite("FontPage", &FFontParameterValueOverTime::FontPage)
        .def_readwrite("ExpressionGUID", &FParameterValueOverTime::ExpressionGUID)
        .def_readwrite("StartTime", &FParameterValueOverTime::StartTime)
        .def_readwrite("ParameterName", &FParameterValueOverTime::ParameterName)
        .def_readwrite("CycleTime", &FParameterValueOverTime::CycleTime)
        .def_readwrite("OffsetTime", &FParameterValueOverTime::OffsetTime)
    ;

    class_< FParameterValueOverTime >("FParameterValueOverTime", no_init)
        .def_readwrite("ExpressionGUID", &FParameterValueOverTime::ExpressionGUID)
        .def_readwrite("StartTime", &FParameterValueOverTime::StartTime)
        .def_readwrite("ParameterName", &FParameterValueOverTime::ParameterName)
        .def_readwrite("CycleTime", &FParameterValueOverTime::CycleTime)
        .def_readwrite("OffsetTime", &FParameterValueOverTime::OffsetTime)
    ;

    class_< FScalarParameterValueOverTime, bases< FParameterValueOverTime >  >("FScalarParameterValueOverTime", no_init)
        .def_readwrite("ParameterValue", &FScalarParameterValueOverTime::ParameterValue)
        .def_readwrite("ParameterValueCurve", &FScalarParameterValueOverTime::ParameterValueCurve)
    ;

    class_< FTextureParameterValueOverTime, bases< FParameterValueOverTime >  >("FTextureParameterValueOverTime", no_init)
        .def_readwrite("ParameterValue", &FTextureParameterValueOverTime::ParameterValue)
    ;

    class_< FVectorParameterValueOverTime, bases< FParameterValueOverTime >  >("FVectorParameterValueOverTime", no_init)
        .def_readwrite("ParameterValue", &FVectorParameterValueOverTime::ParameterValue)
        .def_readwrite("ParameterValueCurve", &FVectorParameterValueOverTime::ParameterValueCurve)
    ;

    class_< FStaticMeshLODInfo >("FStaticMeshLODInfo", no_init)
        .def_readwrite("Elements", &FStaticMeshLODInfo::Elements)
    ;

    class_< FStaticMeshLODElement >("FStaticMeshLODElement", no_init)
        .def_readwrite("Material", &FStaticMeshLODElement::Material)
        .def_readonly("UnknownData00", &FStaticMeshLODElement::UnknownData00)
    ;

    class_< FKAggregateGeom >("FKAggregateGeom", no_init)
        .def_readwrite("SphereElems", &FKAggregateGeom::SphereElems)
        .def_readwrite("BoxElems", &FKAggregateGeom::BoxElems)
        .def_readwrite("SphylElems", &FKAggregateGeom::SphylElems)
        .def_readwrite("ConvexElems", &FKAggregateGeom::ConvexElems)
        .def_readwrite("RenderInfo", &FKAggregateGeom::RenderInfo)
    ;

    class_< FKSphereElem >("FKSphereElem", no_init)
        .def_readwrite("TM", &FKSphereElem::TM)
        .def_readwrite("Radius", &FKSphereElem::Radius)
    ;

    class_< FKBoxElem >("FKBoxElem", no_init)
        .def_readwrite("TM", &FKBoxElem::TM)
        .def_readwrite("X", &FKBoxElem::X)
        .def_readwrite("Y", &FKBoxElem::Y)
        .def_readwrite("Z", &FKBoxElem::Z)
    ;

    class_< FKSphylElem >("FKSphylElem", no_init)
        .def_readwrite("TM", &FKSphylElem::TM)
        .def_readwrite("Radius", &FKSphylElem::Radius)
        .def_readwrite("Length", &FKSphylElem::Length)
    ;

    class_< FKConvexElem >("FKConvexElem", no_init)
        .def_readwrite("VertexData", &FKConvexElem::VertexData)
        .def_readwrite("PermutedVertexData", &FKConvexElem::PermutedVertexData)
        .def_readwrite("FaceTriData", &FKConvexElem::FaceTriData)
        .def_readwrite("EdgeDirections", &FKConvexElem::EdgeDirections)
        .def_readwrite("FaceNormalDirections", &FKConvexElem::FaceNormalDirections)
        .def_readwrite("FacePlaneData", &FKConvexElem::FacePlaneData)
        .def_readwrite("ElemBox", &FKConvexElem::ElemBox)
    ;

    class_< FKCachedConvexData >("FKCachedConvexData", no_init)
        .def_readwrite("CachedConvexElements", &FKCachedConvexData::CachedConvexElements)
    ;

    class_< FKCachedConvexDataElement >("FKCachedConvexDataElement", no_init)
        .def_readwrite("ConvexElementData", &FKCachedConvexDataElement::ConvexElementData)
    ;

    class_< FStaticMeshComponentLODInfo >("FStaticMeshComponentLODInfo", no_init)
        .def_readwrite("ShadowMaps", &FStaticMeshComponentLODInfo::ShadowMaps)
        .def_readwrite("ShadowVertexBuffers", &FStaticMeshComponentLODInfo::ShadowVertexBuffers)
        .def_readwrite("LightMap", &FStaticMeshComponentLODInfo::LightMap)
        .def_readwrite("OverrideVertexColors", &FStaticMeshComponentLODInfo::OverrideVertexColors)
    ;

    class_< FInstancedStaticMeshInstanceData >("FInstancedStaticMeshInstanceData", no_init)
        .def_readwrite("Transform", &FInstancedStaticMeshInstanceData::Transform)
        .def_readwrite("LightmapUVBias", &FInstancedStaticMeshInstanceData::LightmapUVBias)
        .def_readwrite("ShadowmapUVBias", &FInstancedStaticMeshInstanceData::ShadowmapUVBias)
    ;

    class_< FInstancedStaticMeshMappingInfo >("FInstancedStaticMeshMappingInfo", no_init)
        .def_readwrite("Mapping", &FInstancedStaticMeshMappingInfo::Mapping)
        .def_readwrite("LightMap", &FInstancedStaticMeshMappingInfo::LightMap)
        .def_readwrite("LightmapTexture", &FInstancedStaticMeshMappingInfo::LightmapTexture)
        .def_readwrite("ShadowmapTexture", &FInstancedStaticMeshMappingInfo::ShadowmapTexture)
    ;

    class_< FBoneMirrorInfo >("FBoneMirrorInfo", no_init)
        .def_readwrite("SourceIndex", &FBoneMirrorInfo::SourceIndex)
        .def_readwrite("BoneFlipAxis", &FBoneMirrorInfo::BoneFlipAxis)
    ;

    class_< FSkeletalMeshLODInfo >("FSkeletalMeshLODInfo", no_init)
        .def_readwrite("DisplayFactor", &FSkeletalMeshLODInfo::DisplayFactor)
        .def_readwrite("LODHysteresis", &FSkeletalMeshLODInfo::LODHysteresis)
        .def_readwrite("LODMaterialMap", &FSkeletalMeshLODInfo::LODMaterialMap)
        .def_readwrite("bEnableShadowCasting", &FSkeletalMeshLODInfo::bEnableShadowCasting)
        .def_readwrite("TriangleSorting", &FSkeletalMeshLODInfo::TriangleSorting)
        .def_readwrite("TriangleSortSettings", &FSkeletalMeshLODInfo::TriangleSortSettings)
    ;

    class_< FTriangleSortSettings >("FTriangleSortSettings", no_init)
        .def_readwrite("TriangleSorting", &FTriangleSortSettings::TriangleSorting)
        .def_readwrite("CustomLeftRightAxis", &FTriangleSortSettings::CustomLeftRightAxis)
        .def_readwrite("CustomLeftRightBoneName", &FTriangleSortSettings::CustomLeftRightBoneName)
    ;

    class_< FGroupAnimationAndSoundIdentifier >("FGroupAnimationAndSoundIdentifier", no_init)
        .def_readwrite("SoundNodeWaveName", &FGroupAnimationAndSoundIdentifier::SoundNodeWaveName)
        .def_readwrite("FaceFXGroupName", &FGroupAnimationAndSoundIdentifier::FaceFXGroupName)
        .def_readwrite("FaceFXAnimName", &FGroupAnimationAndSoundIdentifier::FaceFXAnimName)
    ;

    class_< FClothSpecialBoneInfo >("FClothSpecialBoneInfo", no_init)
        .def_readwrite("BoneName", &FClothSpecialBoneInfo::BoneName)
        .def_readwrite("BoneType", &FClothSpecialBoneInfo::BoneType)
        .def_readwrite("AttachedVertexIndices", &FClothSpecialBoneInfo::AttachedVertexIndices)
    ;

    class_< FSoftBodyTetraLink >("FSoftBodyTetraLink", no_init)
        .def_readwrite("Index", &FSoftBodyTetraLink::Index)
        .def_readwrite("Bary", &FSoftBodyTetraLink::Bary)
    ;

    class_< FSoftBodySpecialBoneInfo >("FSoftBodySpecialBoneInfo", no_init)
        .def_readwrite("BoneName", &FSoftBodySpecialBoneInfo::BoneName)
        .def_readwrite("BoneType", &FSoftBodySpecialBoneInfo::BoneType)
        .def_readwrite("AttachedVertexIndices", &FSoftBodySpecialBoneInfo::AttachedVertexIndices)
    ;

    class_< FGestaltDataContainer >("FGestaltDataContainer", no_init)
        .def_readwrite("SkeletalMesh", &FGestaltDataContainer::SkeletalMesh)
        .def_readwrite("LODModelData", &FGestaltDataContainer::LODModelData)
        .def_readwrite("SocketMappings", &FGestaltDataContainer::SocketMappings)
        .def_readwrite("GestaltAccessoryList", &FGestaltDataContainer::GestaltAccessoryList)
        .def_readwrite("GestaltPartMatricesContainer", &FGestaltDataContainer::GestaltPartMatricesContainer)
        .def_readwrite("ReferencePoseBounds", &FGestaltDataContainer::ReferencePoseBounds)
    ;

    class_< FGestaltLODModel >("FGestaltLODModel", no_init)
        .def_readwrite("GestaltFragments", &FGestaltLODModel::GestaltFragments)
    ;

    class_< FGestaltLODModelFragment >("FGestaltLODModelFragment", no_init)
        .def_readwrite("MaterialIndex", &FGestaltLODModelFragment::MaterialIndex)
        .def_readwrite("FirstIndex", &FGestaltLODModelFragment::FirstIndex)
        .def_readwrite("NumPrimitives", &FGestaltLODModelFragment::NumPrimitives)
    ;

    class_< FSocketRemapEntry >("FSocketRemapEntry", no_init)
        .def_readwrite("OriginalSocketName", &FSocketRemapEntry::OriginalSocketName)
        .def_readwrite("MangledSocketName", &FSocketRemapEntry::MangledSocketName)
    ;

    class_< FGestaltAccessoryEntry >("FGestaltAccessoryEntry", no_init)
        .def_readwrite("TransformIndex", &FGestaltAccessoryEntry::TransformIndex)
        .def_readwrite("OriginalBoneIndex", &FGestaltAccessoryEntry::OriginalBoneIndex)
        .def_readwrite("GPUBoneIndex", &FGestaltAccessoryEntry::GPUBoneIndex)
    ;

    class_< FGestaltAccessoryMeshEntry >("FGestaltAccessoryMeshEntry", no_init)
        .def_readwrite("MeshName", &FGestaltAccessoryMeshEntry::MeshName)
        .def_readwrite("GestaltAccessoryGroupList", &FGestaltAccessoryMeshEntry::GestaltAccessoryGroupList)
    ;

    class_< FGestaltAccessoryGroupEntry >("FGestaltAccessoryGroupEntry", no_init)
        .def_readwrite("GroupName", &FGestaltAccessoryGroupEntry::GroupName)
        .def_readwrite("GestaltAccessoryPartList", &FGestaltAccessoryGroupEntry::GestaltAccessoryPartList)
    ;

    class_< FGestaltAccessoryPartEntry >("FGestaltAccessoryPartEntry", no_init)
        .def_readwrite("PartName", &FGestaltAccessoryPartEntry::PartName)
        .def_readwrite("BoneName", &FGestaltAccessoryPartEntry::BoneName)
        .def_readwrite("MatrixIndex", &FGestaltAccessoryPartEntry::MatrixIndex)
    ;

    class_< FCurveKey >("FCurveKey", no_init)
        .def_readwrite("CurveName", &FCurveKey::CurveName)
        .def_readwrite("Weight", &FCurveKey::Weight)
    ;

    class_< FAnimBlendChild >("FAnimBlendChild", no_init)
        .def_readwrite("Name", &FAnimBlendChild::Name)
        .def_readwrite("Anim", &FAnimBlendChild::Anim)
        .def_readwrite("Weight", &FAnimBlendChild::Weight)
        .def_readwrite("BlendWeight", &FAnimBlendChild::BlendWeight)
        .def_readwrite("AdditiveWeightScale", &FAnimBlendChild::AdditiveWeightScale)
    ;

    class_< FAnimGroup >("FAnimGroup", no_init)
        .def_readwrite("SeqNodes", &FAnimGroup::SeqNodes)
        .def_readwrite("SynchMaster", &FAnimGroup::SynchMaster)
        .def_readwrite("NotifyMaster", &FAnimGroup::NotifyMaster)
        .def_readwrite("GroupName", &FAnimGroup::GroupName)
        .def_readwrite("RateScale", &FAnimGroup::RateScale)
        .def_readwrite("SynchPctPosition", &FAnimGroup::SynchPctPosition)
    ;

    class_< FAnimNotifyEvent >("FAnimNotifyEvent", no_init)
        .def_readwrite("Time", &FAnimNotifyEvent::Time)
        .def_readwrite("Notify", &FAnimNotifyEvent::Notify)
        .def_readwrite("Duration", &FAnimNotifyEvent::Duration)
    ;

    class_< FSkelControlModifier >("FSkelControlModifier", no_init)
        .def_readwrite("SkelControlName", &FSkelControlModifier::SkelControlName)
        .def_readwrite("Modifiers", &FSkelControlModifier::Modifiers)
    ;

    class_< FTimeModifier >("FTimeModifier", no_init)
        .def_readwrite("Time", &FTimeModifier::Time)
        .def_readwrite("TargetStrength", &FTimeModifier::TargetStrength)
    ;

    class_< FRawAnimSequenceTrack >("FRawAnimSequenceTrack", no_init)
        .def_readwrite("PosKeys", &FRawAnimSequenceTrack::PosKeys)
        .def_readwrite("RotKeys", &FRawAnimSequenceTrack::RotKeys)
    ;

    class_< FTranslationTrack >("FTranslationTrack", no_init)
        .def_readwrite("PosKeys", &FTranslationTrack::PosKeys)
        .def_readwrite("Times", &FTranslationTrack::Times)
    ;

    class_< FRotationTrack >("FRotationTrack", no_init)
        .def_readwrite("RotKeys", &FRotationTrack::RotKeys)
        .def_readwrite("Times", &FRotationTrack::Times)
    ;

    class_< FCurveTrack >("FCurveTrack", no_init)
        .def_readwrite("CurveName", &FCurveTrack::CurveName)
        .def_readwrite("CurveWeights", &FCurveTrack::CurveWeights)
    ;

    class_< FDeltaTrackInfo >("FDeltaTrackInfo", no_init)
        .def_readonly("RotKey", &FDeltaTrackInfo::RotKey)
        .def_readonly("PosKey", &FDeltaTrackInfo::PosKey)
        .def_readonly("RotKeyIndex", &FDeltaTrackInfo::RotKeyIndex)
        .def_readonly("PosKeyIndex", &FDeltaTrackInfo::PosKeyIndex)
    ;

    class_< FAnimSetMeshLinkup >("FAnimSetMeshLinkup", no_init)
        .def_readwrite("BoneToTrackTable", &FAnimSetMeshLinkup::BoneToTrackTable)
    ;

    class_< FPostProcessSettings >("FPostProcessSettings", no_init)
        .def_readwrite("Bloom_Scale", &FPostProcessSettings::Bloom_Scale)
        .def_readwrite("Bloom_Threshold", &FPostProcessSettings::Bloom_Threshold)
        .def_readwrite("Bloom_Tint", &FPostProcessSettings::Bloom_Tint)
        .def_readwrite("Bloom_ScreenBlendThreshold", &FPostProcessSettings::Bloom_ScreenBlendThreshold)
        .def_readwrite("Bloom_InterpolationDuration", &FPostProcessSettings::Bloom_InterpolationDuration)
        .def_readwrite("DOF_BlurBloomKernelSize", &FPostProcessSettings::DOF_BlurBloomKernelSize)
        .def_readwrite("DOF_FalloffExponent", &FPostProcessSettings::DOF_FalloffExponent)
        .def_readwrite("DOF_BlurKernelSize", &FPostProcessSettings::DOF_BlurKernelSize)
        .def_readwrite("DOF_MaxNearBlurAmount", &FPostProcessSettings::DOF_MaxNearBlurAmount)
        .def_readwrite("DOF_MinBlurAmount", &FPostProcessSettings::DOF_MinBlurAmount)
        .def_readwrite("DOF_MaxFarBlurAmount", &FPostProcessSettings::DOF_MaxFarBlurAmount)
        .def_readwrite("DOF_FocusType", &FPostProcessSettings::DOF_FocusType)
        .def_readwrite("DOF_FocusInnerRadius", &FPostProcessSettings::DOF_FocusInnerRadius)
        .def_readwrite("DOF_FocusDistance", &FPostProcessSettings::DOF_FocusDistance)
        .def_readwrite("DOF_FocusPosition", &FPostProcessSettings::DOF_FocusPosition)
        .def_readwrite("DOF_TunnelVisionScale", &FPostProcessSettings::DOF_TunnelVisionScale)
        .def_readwrite("DOF_TunnelVisionYOffset", &FPostProcessSettings::DOF_TunnelVisionYOffset)
        .def_readwrite("DOF_InterpolationDuration", &FPostProcessSettings::DOF_InterpolationDuration)
        .def_readwrite("DOF_BokehTexture", &FPostProcessSettings::DOF_BokehTexture)
        .def_readwrite("MotionBlur_MaxVelocity", &FPostProcessSettings::MotionBlur_MaxVelocity)
        .def_readwrite("MotionBlur_Amount", &FPostProcessSettings::MotionBlur_Amount)
        .def_readwrite("MotionBlur_CameraRotationThreshold", &FPostProcessSettings::MotionBlur_CameraRotationThreshold)
        .def_readwrite("MotionBlur_CameraTranslationThreshold", &FPostProcessSettings::MotionBlur_CameraTranslationThreshold)
        .def_readwrite("MotionBlur_InterpolationDuration", &FPostProcessSettings::MotionBlur_InterpolationDuration)
        .def_readwrite("Scene_Desaturation", &FPostProcessSettings::Scene_Desaturation)
        .def_readwrite("Scene_Colorize", &FPostProcessSettings::Scene_Colorize)
        .def_readwrite("Scene_TonemapperScale", &FPostProcessSettings::Scene_TonemapperScale)
        .def_readwrite("Scene_ImageGrainScale", &FPostProcessSettings::Scene_ImageGrainScale)
        .def_readwrite("Scene_HighLights", &FPostProcessSettings::Scene_HighLights)
        .def_readwrite("Scene_MidTones", &FPostProcessSettings::Scene_MidTones)
        .def_readwrite("Scene_Shadows", &FPostProcessSettings::Scene_Shadows)
        .def_readwrite("Scene_InterpolationDuration", &FPostProcessSettings::Scene_InterpolationDuration)
        .def_readwrite("RimShader_Color", &FPostProcessSettings::RimShader_Color)
        .def_readwrite("RimShader_InterpolationDuration", &FPostProcessSettings::RimShader_InterpolationDuration)
        .def_readwrite("ColorGrading_LookupTable", &FPostProcessSettings::ColorGrading_LookupTable)
        .def_readwrite("ColorGradingLUT", &FPostProcessSettings::ColorGradingLUT)
    ;

    class_< FLUTBlender >("FLUTBlender", no_init)
        .def_readwrite("LUTTextures", &FLUTBlender::LUTTextures)
        .def_readwrite("LUTWeights", &FLUTBlender::LUTWeights)
    ;

    class_< FInterpLookupTrack >("FInterpLookupTrack", no_init)
        .def_readwrite("Points", &FInterpLookupTrack::Points)
    ;

    class_< FInterpLookupPoint >("FInterpLookupPoint", no_init)
        .def_readwrite("GroupName", &FInterpLookupPoint::GroupName)
        .def_readwrite("Time", &FInterpLookupPoint::Time)
    ;

    class_< FSkelControlListHead >("FSkelControlListHead", no_init)
        .def_readwrite("BoneName", &FSkelControlListHead::BoneName)
        .def_readwrite("ControlHead", &FSkelControlListHead::ControlHead)
    ;

    class_< FLinearDOFSetup >("FLinearDOFSetup", no_init)
        .def_readwrite("bLimited", &FLinearDOFSetup::bLimited)
        .def_readwrite("LimitSize", &FLinearDOFSetup::LimitSize)
    ;

    class_< FActiveMorph >("FActiveMorph", no_init)
        .def_readwrite("Target", &FActiveMorph::Target)
        .def_readwrite("Weight", &FActiveMorph::Weight)
    ;

    class_< FAttachment >("FAttachment", no_init)
        .def_readwrite("Component", &FAttachment::Component)
        .def_readwrite("BoneName", &FAttachment::BoneName)
        .def_readwrite("RelativeLocation", &FAttachment::RelativeLocation)
        .def_readwrite("RelativeRotation", &FAttachment::RelativeRotation)
        .def_readwrite("RelativeScale", &FAttachment::RelativeScale)
    ;

    class_< FBonePair >("FBonePair", no_init)
        .def_readonly("Bones", &FBonePair::Bones)
    ;

    class_< FSkelMeshComponentLODInfo >("FSkelMeshComponentLODInfo", no_init)
        .def_readwrite("HiddenMaterials", &FSkelMeshComponentLODInfo::HiddenMaterials)
        .def_readwrite("InstanceWeightUsage", &FSkelMeshComponentLODInfo::InstanceWeightUsage)
        .def_readwrite("InstanceWeightIdx", &FSkelMeshComponentLODInfo::InstanceWeightIdx)
    ;

    class_< FRBCollisionChannelContainer >("FRBCollisionChannelContainer", no_init)
    ;

    class_< FColorMaterialInput >("FColorMaterialInput", no_init)
        .def_readwrite("Constant", &FColorMaterialInput::Constant)
        .def_readwrite("Expression", &FMaterialInput::Expression)
        .def_readwrite("Mask", &FMaterialInput::Mask)
        .def_readwrite("MaskR", &FMaterialInput::MaskR)
        .def_readwrite("MaskG", &FMaterialInput::MaskG)
        .def_readwrite("MaskB", &FMaterialInput::MaskB)
        .def_readwrite("MaskA", &FMaterialInput::MaskA)
        .def_readwrite("GCC64_Padding", &FMaterialInput::GCC64_Padding)
    ;

    class_< FMaterialInput >("FMaterialInput", no_init)
        .def_readwrite("Expression", &FMaterialInput::Expression)
        .def_readwrite("Mask", &FMaterialInput::Mask)
        .def_readwrite("MaskR", &FMaterialInput::MaskR)
        .def_readwrite("MaskG", &FMaterialInput::MaskG)
        .def_readwrite("MaskB", &FMaterialInput::MaskB)
        .def_readwrite("MaskA", &FMaterialInput::MaskA)
        .def_readwrite("GCC64_Padding", &FMaterialInput::GCC64_Padding)
    ;

    class_< FScalarMaterialInput, bases< FMaterialInput >  >("FScalarMaterialInput", no_init)
        .def_readwrite("Constant", &FScalarMaterialInput::Constant)
    ;

    class_< FVectorMaterialInput, bases< FMaterialInput >  >("FVectorMaterialInput", no_init)
        .def_readwrite("Constant", &FVectorMaterialInput::Constant)
    ;

    class_< FVector2MaterialInput, bases< FMaterialInput >  >("FVector2MaterialInput", no_init)
        .def_readwrite("ConstantX", &FVector2MaterialInput::ConstantX)
        .def_readwrite("ConstantY", &FVector2MaterialInput::ConstantY)
    ;

    class_< FAudioComponentParam >("FAudioComponentParam", no_init)
        .def_readwrite("ParamName", &FAudioComponentParam::ParamName)
        .def_readwrite("FloatParam", &FAudioComponentParam::FloatParam)
        .def_readwrite("WaveParam", &FAudioComponentParam::WaveParam)
    ;

    class_< FSubtitleCue >("FSubtitleCue", no_init)
        .def_readwrite("Text", &FSubtitleCue::Text)
        .def_readwrite("Time", &FSubtitleCue::Time)
    ;

    class_< FLocalizedSubtitle >("FLocalizedSubtitle", no_init)
        .def_readwrite("LanguageExt", &FLocalizedSubtitle::LanguageExt)
        .def_readwrite("Subtitles", &FLocalizedSubtitle::Subtitles)
    ;

    class_< FKCachedConvexData_Mirror >("FKCachedConvexData_Mirror", no_init)
        .def_readwrite("CachedConvexElements", &FKCachedConvexData_Mirror::CachedConvexElements)
    ;

    class_< FGeomSelection >("FGeomSelection", no_init)
        .def_readwrite("Type", &FGeomSelection::Type)
        .def_readwrite("Index", &FGeomSelection::Index)
        .def_readwrite("SelectionIndex", &FGeomSelection::SelectionIndex)
    ;

    class_< FOpinionData >("FOpinionData", no_init)
        .def_readwrite("Opinion", &FOpinionData::Opinion)
        .def_readwrite("Allegiance", &FOpinionData::Allegiance)
    ;

    class_< FInfoBarData >("FInfoBarData", no_init)
        .def_readwrite("Type", &FInfoBarData::Type)
        .def_readwrite("Amount", &FInfoBarData::Amount)
    ;

    class_< FActivateOp >("FActivateOp", no_init)
        .def_readwrite("ActivatorOp", &FActivateOp::ActivatorOp)
        .def_readwrite("Op", &FActivateOp::Op)
        .def_readwrite("InputIdx", &FActivateOp::InputIdx)
        .def_readwrite("RemainingDelay", &FActivateOp::RemainingDelay)
    ;

    class_< FQueuedActivationInfo >("FQueuedActivationInfo", no_init)
        .def_readwrite("ActivatedEvent", &FQueuedActivationInfo::ActivatedEvent)
        .def_readwrite("InOriginator", &FQueuedActivationInfo::InOriginator)
        .def_readwrite("InInstigator", &FQueuedActivationInfo::InInstigator)
        .def_readwrite("ActivateIndices", &FQueuedActivationInfo::ActivateIndices)
    ;

    class_< FReverbSettings >("FReverbSettings", no_init)
        .def_readwrite("ReverbType", &FReverbSettings::ReverbType)
        .def_readwrite("Volume", &FReverbSettings::Volume)
        .def_readwrite("FadeTime", &FReverbSettings::FadeTime)
        .def_readwrite("ReflectionsDelayOverride", &FReverbSettings::ReflectionsDelayOverride)
        .def_readwrite("LateDelayOverride", &FReverbSettings::LateDelayOverride)
        .def_readwrite("DecayHighFrequencyRatioOverride", &FReverbSettings::DecayHighFrequencyRatioOverride)
    ;

    class_< FInteriorSettings >("FInteriorSettings", no_init)
        .def_readwrite("ExteriorVolume", &FInteriorSettings::ExteriorVolume)
        .def_readwrite("ExteriorTime", &FInteriorSettings::ExteriorTime)
        .def_readwrite("ExteriorLPF", &FInteriorSettings::ExteriorLPF)
        .def_readwrite("ExteriorLPFTime", &FInteriorSettings::ExteriorLPFTime)
        .def_readwrite("InteriorVolume", &FInteriorSettings::InteriorVolume)
        .def_readwrite("InteriorTime", &FInteriorSettings::InteriorTime)
        .def_readwrite("InteriorLPF", &FInteriorSettings::InteriorLPF)
        .def_readwrite("InteriorLPFTime", &FInteriorSettings::InteriorLPFTime)
    ;

    class_< FWorldEventSource >("FWorldEventSource", no_init)
        .def_readwrite("AkEvent", &FWorldEventSource::AkEvent)
        .def_readwrite("GroupActor", &FWorldEventSource::GroupActor)
        .def_readwrite("AkComponents", &FWorldEventSource::AkComponents)
        .def_readwrite("Sources", &FWorldEventSource::Sources)
        .def_readwrite("LastUpdateTime", &FWorldEventSource::LastUpdateTime)
    ;

    class_< FPendingFaceFXInfo >("FPendingFaceFXInfo", no_init)
        .def_readwrite("PendingFaceFXPlayingInfoPtr", &FPendingFaceFXInfo::PendingFaceFXPlayingInfoPtr)
        .def_readwrite("AnimName", &FPendingFaceFXInfo::AnimName)
        .def_readwrite("RawData", &FPendingFaceFXInfo::RawData)
    ;

    class_< FPendingSubtitleInfo >("FPendingSubtitleInfo", no_init)
        .def_readwrite("PendingSubtitlePlayingInfoPtr", &FPendingSubtitleInfo::PendingSubtitlePlayingInfoPtr)
        .def_readwrite("OriginalFileName", &FPendingSubtitleInfo::OriginalFileName)
        .def_readwrite("StreamedSubtitleData", &FPendingSubtitleInfo::StreamedSubtitleData)
    ;

    class_< FAkPlayingInfo >("FAkPlayingInfo", no_init)
        .def_readwrite("SourceComponent", &FAkPlayingInfo::SourceComponent)
        .def_readwrite("AkPlayingId", &FAkPlayingInfo::AkPlayingId)
    ;

    class_< ALevelStreamingVolume_FCheckpointRecord >("ALevelStreamingVolume_FCheckpointRecord", no_init)
    ;

    class_< FUniqueNetId >("FUniqueNetId", no_init)
        .def_readwrite("Uid", &FUniqueNetId::Uid)
        .def_readonly("NpId", &FUniqueNetId::NpId)
    ;

    class_< FAutomatedTestingDatum >("FAutomatedTestingDatum", no_init)
        .def_readwrite("NumberOfMatchesPlayed", &FAutomatedTestingDatum::NumberOfMatchesPlayed)
        .def_readwrite("NumMapListCyclesDone", &FAutomatedTestingDatum::NumMapListCyclesDone)
    ;

    class_< FAttributeInitializationData >("FAttributeInitializationData", no_init)
        .def_readwrite("BaseValueConstant", &FAttributeInitializationData::BaseValueConstant)
        .def_readwrite("BaseValueAttribute", &FAttributeInitializationData::BaseValueAttribute)
        .def_readwrite("InitializationDefinition", &FAttributeInitializationData::InitializationDefinition)
        .def_readwrite("BaseValueScaleConstant", &FAttributeInitializationData::BaseValueScaleConstant)
    ;

    class_< FBalanceFormula >("FBalanceFormula", no_init)
        .def_readwrite("Multiplier", &FBalanceFormula::Multiplier)
        .def_readwrite("Level", &FBalanceFormula::Level)
        .def_readwrite("Power", &FBalanceFormula::Power)
        .def_readwrite("Offset", &FBalanceFormula::Offset)
    ;

    class_< FConditionalInitializationExpressions >("FConditionalInitializationExpressions", no_init)
        .def_readwrite("ConditionalExpressionList", &FConditionalInitializationExpressions::ConditionalExpressionList)
        .def_readwrite("DefaultBaseValue", &FConditionalInitializationExpressions::DefaultBaseValue)
    ;

    class_< FConditionalValueExpression >("FConditionalValueExpression", no_init)
        .def_readwrite("BaseValueIfTrue", &FConditionalValueExpression::BaseValueIfTrue)
        .def_readwrite("Expressions", &FConditionalValueExpression::Expressions)
    ;

    class_< FAttributeExpressionData >("FAttributeExpressionData", no_init)
        .def_readwrite("AttributeOperand1", &FAttributeExpressionData::AttributeOperand1)
        .def_readwrite("ComparisonOperator", &FAttributeExpressionData::ComparisonOperator)
        .def_readwrite("Operand2Usage", &FAttributeExpressionData::Operand2Usage)
        .def_readwrite("AttributeOperand2", &FAttributeExpressionData::AttributeOperand2)
        .def_readwrite("ConstantOperand2", &FAttributeExpressionData::ConstantOperand2)
    ;

    class_< FVariance >("FVariance", no_init)
        .def_readwrite("LowerBound", &FVariance::LowerBound)
        .def_readwrite("UpperBound", &FVariance::UpperBound)
    ;

    class_< FRange >("FRange", no_init)
        .def_readwrite("MinValue", &FRange::MinValue)
        .def_readwrite("MaxValue", &FRange::MaxValue)
    ;

    class_< FBehaviorContextData >("FBehaviorContextData", no_init)
        .def_readwrite("InstancedDataContextName", &FBehaviorContextData::InstancedDataContextName)
        .def_readwrite("ContextObject", &FBehaviorContextData::ContextObject)
        .def_readwrite("BehaviorContext", &FBehaviorContextData::BehaviorContext)
        .def_readwrite("bSupportsDefaultOutputLink", &FBehaviorContextData::bSupportsDefaultOutputLink)
    ;

    class_< FBehaviorParameters >("FBehaviorParameters", no_init)
        .def_readwrite("Parameters", &FBehaviorParameters::Parameters)
    ;

    class_< FBehaviorParameterUnion >("FBehaviorParameterUnion", no_init)
        .def_readwrite("ParameterName", &FBehaviorParameterUnion::ParameterName)
        .def_readwrite("VectorData", &FBehaviorParameterUnion::VectorData)
        .def_readwrite("ActorData", &FBehaviorParameterUnion::ActorData)
        .def_readwrite("ImpactInfoData", &FBehaviorParameterUnion::ImpactInfoData)
    ;

    class_< FImpactInfo >("FImpactInfo", no_init)
        .def_readwrite("HitActor", &FImpactInfo::HitActor)
        .def_readwrite("HitLocation", &FImpactInfo::HitLocation)
        .def_readwrite("HitNormal", &FImpactInfo::HitNormal)
        .def_readwrite("RayDir", &FImpactInfo::RayDir)
        .def_readwrite("StartTrace", &FImpactInfo::StartTrace)
        .def_readwrite("HitInfo", &FImpactInfo::HitInfo)
        .def_readwrite("EndTrace", &FImpactInfo::EndTrace)
    ;

    class_< FTraceHitInfo >("FTraceHitInfo", no_init)
        .def_readwrite("Material", &FTraceHitInfo::Material)
        .def_readwrite("PhysMaterial", &FTraceHitInfo::PhysMaterial)
        .def_readwrite("Item", &FTraceHitInfo::Item)
        .def_readwrite("LevelIndex", &FTraceHitInfo::LevelIndex)
        .def_readwrite("BoneName", &FTraceHitInfo::BoneName)
        .def_readwrite("HitComponent", &FTraceHitInfo::HitComponent)
    ;

    class_< FBehaviorKernelInfo >("FBehaviorKernelInfo", no_init)
        .def_readwrite("StateForThreadRunningThisBehavior", &FBehaviorKernelInfo::StateForThreadRunningThisBehavior)
        .def_readwrite("WorldTime", &FBehaviorKernelInfo::WorldTime)
        .def_readwrite("ExecutionTime", &FBehaviorKernelInfo::ExecutionTime)
        .def_readwrite("WorldDeltaTime", &FBehaviorKernelInfo::WorldDeltaTime)
        .def_readwrite("ExecutionDelayError", &FBehaviorKernelInfo::ExecutionDelayError)
        .def_readwrite("NextExecutionDelayTime", &FBehaviorKernelInfo::NextExecutionDelayTime)
    ;

    class_< FResourcePoolIdentityState >("FResourcePoolIdentityState", no_init)
        .def_readwrite("PoolDefinition", &FResourcePoolIdentityState::PoolDefinition)
        .def_readwrite("PoolGUID", &FResourcePoolIdentityState::PoolGUID)
    ;

    class_< FRarelyChangedPoolState >("FRarelyChangedPoolState", no_init)
        .def_readwrite("ConsumptionRate", &FRarelyChangedPoolState::ConsumptionRate)
        .def_readwrite("ActiveRegenerationRate", &FRarelyChangedPoolState::ActiveRegenerationRate)
        .def_readwrite("OnIdleRegenerationRate", &FRarelyChangedPoolState::OnIdleRegenerationRate)
        .def_readwrite("OnIdleRegenerationDelay", &FRarelyChangedPoolState::OnIdleRegenerationDelay)
        .def_readwrite("PassiveRegenerationRate", &FRarelyChangedPoolState::PassiveRegenerationRate)
    ;

    class_< FResourcePoolReference >("FResourcePoolReference", no_init)
        .def_readwrite("PoolManager", &FResourcePoolReference::PoolManager)
        .def_readwrite("PoolIndexInManager", &FResourcePoolReference::PoolIndexInManager)
        .def_readwrite("PoolGUID", &FResourcePoolReference::PoolGUID)
        .def_readwrite("Data", &FResourcePoolReference::Data)
    ;

    class_< FMusicStateInfo >("FMusicStateInfo", no_init)
        .def_readwrite("State", &FMusicStateInfo::State)
        .def_readwrite("CustomCombatMusicAkState", &FMusicStateInfo::CustomCombatMusicAkState)
        .def_readwrite("CustomAmbientMusicAkState", &FMusicStateInfo::CustomAmbientMusicAkState)
    ;

    class_< FRecentDamageTracker >("FRecentDamageTracker", no_init)
        .def_readwrite("TotalDamage", &FRecentDamageTracker::TotalDamage)
        .def_readwrite("HealthDamage", &FRecentDamageTracker::HealthDamage)
        .def_readwrite("ShieldDamage", &FRecentDamageTracker::ShieldDamage)
    ;

    class_< FConditionalSoundData >("FConditionalSoundData", no_init)
        .def_readwrite("Event", &FConditionalSoundData::Event)
        .def_readwrite("Cue", &FConditionalSoundData::Cue)
        .def_readwrite("Expressions", &FConditionalSoundData::Expressions)
    ;

    class_< FUIStatData >("FUIStatData", no_init)
        .def_readwrite("AttributeStyle", &FUIStatData::AttributeStyle)
        .def_readwrite("SupplementalAttributeStyle", &FUIStatData::SupplementalAttributeStyle)
        .def_readwrite("StatCombinationMethod", &FUIStatData::StatCombinationMethod)
        .def_readwrite("Attribute", &FUIStatData::Attribute)
        .def_readwrite("ConstraintAttribute", &FUIStatData::ConstraintAttribute)
        .def_readwrite("SupplementalAttributeExpression", &FUIStatData::SupplementalAttributeExpression)
        .def_readwrite("SupplementalAttributeToAppend", &FUIStatData::SupplementalAttributeToAppend)
    ;

    class_< FAttributeSlotEffectData >("FAttributeSlotEffectData", no_init)
        .def_readwrite("SlotName", &FAttributeSlotEffectData::SlotName)
        .def_readwrite("AttributeToModify", &FAttributeSlotEffectData::AttributeToModify)
        .def_readwrite("ConstraintAttribute", &FAttributeSlotEffectData::ConstraintAttribute)
        .def_readwrite("ModifierType", &FAttributeSlotEffectData::ModifierType)
        .def_readwrite("BaseModifierValue", &FAttributeSlotEffectData::BaseModifierValue)
        .def_readwrite("PerGradeUpgrade", &FAttributeSlotEffectData::PerGradeUpgrade)
        .def_readwrite("MinimumGrade", &FAttributeSlotEffectData::MinimumGrade)
        .def_readwrite("MaximumGrade", &FAttributeSlotEffectData::MaximumGrade)
        .def_readwrite("TargetInstanceDataName", &FAttributeSlotEffectData::TargetInstanceDataName)
    ;

    class_< FAttributeSlotUpgradeData >("FAttributeSlotUpgradeData", no_init)
        .def_readwrite("SlotName", &FAttributeSlotUpgradeData::SlotName)
        .def_readwrite("GradeIncrease", &FAttributeSlotUpgradeData::GradeIncrease)
    ;

    class_< FCollisionImpactData >("FCollisionImpactData", no_init)
        .def_readwrite("ContactInfos", &FCollisionImpactData::ContactInfos)
        .def_readwrite("TotalNormalForceVector", &FCollisionImpactData::TotalNormalForceVector)
        .def_readwrite("TotalFrictionForceVector", &FCollisionImpactData::TotalFrictionForceVector)
    ;

    class_< FRigidBodyContactInfo >("FRigidBodyContactInfo", no_init)
        .def_readwrite("ContactPosition", &FRigidBodyContactInfo::ContactPosition)
        .def_readwrite("ContactNormal", &FRigidBodyContactInfo::ContactNormal)
        .def_readwrite("ContactPenetration", &FRigidBodyContactInfo::ContactPenetration)
        .def_readonly("ContactVelocity", &FRigidBodyContactInfo::ContactVelocity)
        .def_readonly("PhysMaterial", &FRigidBodyContactInfo::PhysMaterial)
    ;

    class_< FLightMapRef >("FLightMapRef", no_init)
        .def_readwrite("Reference", &FLightMapRef::Reference)
    ;

    class_< FDamageEventSummary >("FDamageEventSummary", no_init)
        .def_readwrite("InitialDamage", &FDamageEventSummary::InitialDamage)
        .def_readwrite("AIDamageScaleReduction", &FDamageEventSummary::AIDamageScaleReduction)
        .def_readwrite("DamageSourceReduction", &FDamageEventSummary::DamageSourceReduction)
        .def_readwrite("InstigatorDamageTypeReduction", &FDamageEventSummary::InstigatorDamageTypeReduction)
        .def_readwrite("ExpLevelDifferenceReduction", &FDamageEventSummary::ExpLevelDifferenceReduction)
        .def_readwrite("RecipientDamageTypeReduction", &FDamageEventSummary::RecipientDamageTypeReduction)
        .def_readwrite("HitRegionReduction", &FDamageEventSummary::HitRegionReduction)
        .def_readwrite("ShieldReduction", &FDamageEventSummary::ShieldReduction)
        .def_readwrite("IntrinsicArmorReduction", &FDamageEventSummary::IntrinsicArmorReduction)
        .def_readwrite("DamageSurfaceReduction", &FDamageEventSummary::DamageSurfaceReduction)
        .def_readwrite("HitRegionCapReduction", &FDamageEventSummary::HitRegionCapReduction)
        .def_readwrite("ProtectionTimerReduction", &FDamageEventSummary::ProtectionTimerReduction)
        .def_readwrite("ProjectileReflectionReduction", &FDamageEventSummary::ProjectileReflectionReduction)
        .def_readwrite("DamageSeverityPercent", &FDamageEventSummary::DamageSeverityPercent)
        .def_readwrite("DamageDealtToShields", &FDamageEventSummary::DamageDealtToShields)
        .def_readwrite("ExtraDamageDealtDueToAmplify", &FDamageEventSummary::ExtraDamageDealtDueToAmplify)
        .def_readwrite("FinalDamage", &FDamageEventSummary::FinalDamage)
        .def_readwrite("PreviousHealth", &FDamageEventSummary::PreviousHealth)
        .def_readwrite("HitRegion", &FDamageEventSummary::HitRegion)
        .def_readwrite("ReflectionData", &FDamageEventSummary::ReflectionData)
        .def_readonly("DamageTakenSkillEventsTriggered", &FDamageEventSummary::DamageTakenSkillEventsTriggered)
        .def_readonly("DamageDealtSkillEventsTriggered", &FDamageEventSummary::DamageDealtSkillEventsTriggered)
    ;

    class_< FReflectionInfo >("FReflectionInfo", no_init)
        .def_readwrite("ReflectionType", &FReflectionInfo::ReflectionType)
        .def_readwrite("ReflectedDamageScale", &FReflectionInfo::ReflectedDamageScale)
        .def_readwrite("ReflectedDamageToReflector", &FReflectionInfo::ReflectedDamageToReflector)
        .def_readwrite("ReflectedInaccuracyModifier", &FReflectionInfo::ReflectedInaccuracyModifier)
    ;

    class_< FManufacturerGradeData >("FManufacturerGradeData", no_init)
        .def_readwrite("DisplayName", &FManufacturerGradeData::DisplayName)
    ;

    class_< FConsoleMessage >("FConsoleMessage", no_init)
        .def_readwrite("Text", &FConsoleMessage::Text)
        .def_readwrite("TextColor", &FConsoleMessage::TextColor)
        .def_readwrite("MessageLife", &FConsoleMessage::MessageLife)
        .def_readwrite("PRI", &FConsoleMessage::PRI)
    ;

    class_< FCanvasIcon >("FCanvasIcon", no_init)
        .def_readwrite("Texture", &FCanvasIcon::Texture)
        .def_readwrite("U", &FCanvasIcon::U)
        .def_readwrite("V", &FCanvasIcon::V)
        .def_readwrite("UL", &FCanvasIcon::UL)
        .def_readwrite("VL", &FCanvasIcon::VL)
    ;

    class_< FFontRenderInfo >("FFontRenderInfo", no_init)
        .def_readwrite("GlowInfo", &FFontRenderInfo::GlowInfo)
    ;

    class_< FDepthFieldGlowInfo >("FDepthFieldGlowInfo", no_init)
        .def_readwrite("GlowColor", &FDepthFieldGlowInfo::GlowColor)
        .def_readwrite("GlowOuterRadius", &FDepthFieldGlowInfo::GlowOuterRadius)
        .def_readwrite("GlowInnerRadius", &FDepthFieldGlowInfo::GlowInnerRadius)
    ;

    class_< FCanvasUVTri >("FCanvasUVTri", no_init)
        .def_readwrite("V0_Pos", &FCanvasUVTri::V0_Pos)
        .def_readwrite("V0_UV", &FCanvasUVTri::V0_UV)
        .def_readwrite("V1_Pos", &FCanvasUVTri::V1_Pos)
        .def_readwrite("V1_UV", &FCanvasUVTri::V1_UV)
        .def_readwrite("V2_Pos", &FCanvasUVTri::V2_Pos)
        .def_readwrite("V2_UV", &FCanvasUVTri::V2_UV)
    ;

    class_< FKismetDrawTextInfo >("FKismetDrawTextInfo", no_init)
        .def_readwrite("MessageText", &FKismetDrawTextInfo::MessageText)
        .def_readwrite("AppendedText", &FKismetDrawTextInfo::AppendedText)
        .def_readwrite("MessageFont", &FKismetDrawTextInfo::MessageFont)
        .def_readwrite("MessageFontScale", &FKismetDrawTextInfo::MessageFontScale)
        .def_readwrite("MessageOffset", &FKismetDrawTextInfo::MessageOffset)
        .def_readwrite("MessageColor", &FKismetDrawTextInfo::MessageColor)
        .def_readwrite("MessageEndTime", &FKismetDrawTextInfo::MessageEndTime)
    ;

    class_< FAttributeSlotData >("FAttributeSlotData", no_init)
        .def_readwrite("SlotName", &FAttributeSlotData::SlotName)
        .def_readwrite("MinimumGrade", &FAttributeSlotData::MinimumGrade)
        .def_readwrite("MaximumGrade", &FAttributeSlotData::MaximumGrade)
        .def_readwrite("TargetInstanceDataName", &FAttributeSlotData::TargetInstanceDataName)
        .def_readwrite("EffectGrade", &FAttributeSlotData::EffectGrade)
        .def_readwrite("AttributeToModify", &FAttributeSlotData::AttributeToModify)
        .def_readwrite("ConstraintAttribute", &FAttributeSlotData::ConstraintAttribute)
        .def_readwrite("ModifierType", &FAttributeSlotData::ModifierType)
        .def_readwrite("BaseModifierValue", &FAttributeSlotData::BaseModifierValue)
        .def_readwrite("PerGradeUpgrade", &FAttributeSlotData::PerGradeUpgrade)
        .def_readwrite("ComputedModifierValue", &FAttributeSlotData::ComputedModifierValue)
    ;

    class_< FAppliedAttributeEffect >("FAppliedAttributeEffect", no_init)
        .def_readwrite("Context", &FAppliedAttributeEffect::Context)
        .def_readwrite("Attribute", &FAppliedAttributeEffect::Attribute)
        .def_readwrite("Modifier", &FAppliedAttributeEffect::Modifier)
    ;

    class_< FInventorySerialNumber >("FInventorySerialNumber", no_init)
        .def_readonly("Buffer", &FInventorySerialNumber::Buffer)
        .def_readwrite("State", &FInventorySerialNumber::State)
        .def_readwrite("RunningCounter", &FInventorySerialNumber::RunningCounter)
        .def_readwrite("EncryptedLength", &FInventorySerialNumber::EncryptedLength)
    ;

    class_< FAchievementDetails >("FAchievementDetails", no_init)
        .def_readwrite("Id", &FAchievementDetails::Id)
        .def_readwrite("AchievementName", &FAchievementDetails::AchievementName)
        .def_readwrite("Description", &FAchievementDetails::Description)
        .def_readwrite("HowTo", &FAchievementDetails::HowTo)
        .def_readwrite("Image", &FAchievementDetails::Image)
        .def_readwrite("MonthEarned", &FAchievementDetails::MonthEarned)
        .def_readwrite("DayEarned", &FAchievementDetails::DayEarned)
        .def_readwrite("YearEarned", &FAchievementDetails::YearEarned)
        .def_readwrite("DayOfWeekEarned", &FAchievementDetails::DayOfWeekEarned)
        .def_readwrite("GamerPoints", &FAchievementDetails::GamerPoints)
    ;

    class_< FOnlineFriendMessage >("FOnlineFriendMessage", no_init)
        .def_readwrite("SendingPlayerId", &FOnlineFriendMessage::SendingPlayerId)
        .def_readwrite("SendingPlayerNick", &FOnlineFriendMessage::SendingPlayerNick)
        .def_readwrite("Message", &FOnlineFriendMessage::Message)
    ;

    class_< FLocalizedStringSetting >("FLocalizedStringSetting", no_init)
        .def_readwrite("Id", &FLocalizedStringSetting::Id)
        .def_readwrite("ValueIndex", &FLocalizedStringSetting::ValueIndex)
        .def_readwrite("AdvertisementType", &FLocalizedStringSetting::AdvertisementType)
    ;

    class_< FSettingsProperty >("FSettingsProperty", no_init)
        .def_readwrite("PropertyId", &FSettingsProperty::PropertyId)
        .def_readwrite("Data", &FSettingsProperty::Data)
        .def_readwrite("AdvertisementType", &FSettingsProperty::AdvertisementType)
    ;

    class_< FSettingsData >("FSettingsData", no_init)
        .def_readwrite("Type", &FSettingsData::Type)
        .def_readwrite("Value1", &FSettingsData::Value1)
        .def_readwrite("Value2", &FSettingsData::Value2)
    ;

    class_< FOnlineFriend >("FOnlineFriend", no_init)
        .def_readwrite("UniqueId", &FOnlineFriend::UniqueId)
        .def_readwrite("SessionId", &FOnlineFriend::SessionId)
        .def_readwrite("SessionInfo", &FOnlineFriend::SessionInfo)
        .def_readwrite("NickName", &FOnlineFriend::NickName)
        .def_readwrite("PresenceInfo", &FOnlineFriend::PresenceInfo)
        .def_readwrite("FriendState", &FOnlineFriend::FriendState)
    ;

    class_< FOnlineProfileSetting >("FOnlineProfileSetting", no_init)
        .def_readwrite("Owner", &FOnlineProfileSetting::Owner)
        .def_readwrite("ProfileSetting", &FOnlineProfileSetting::ProfileSetting)
    ;

    class_< FSettingsPropertyPropertyMetaData >("FSettingsPropertyPropertyMetaData", no_init)
        .def_readwrite("Id", &FSettingsPropertyPropertyMetaData::Id)
        .def_readwrite("Name", &FSettingsPropertyPropertyMetaData::Name)
        .def_readwrite("ColumnHeaderText", &FSettingsPropertyPropertyMetaData::ColumnHeaderText)
        .def_readwrite("MappingType", &FSettingsPropertyPropertyMetaData::MappingType)
        .def_readwrite("ValueMappings", &FSettingsPropertyPropertyMetaData::ValueMappings)
        .def_readwrite("PredefinedValues", &FSettingsPropertyPropertyMetaData::PredefinedValues)
        .def_readwrite("MinVal", &FSettingsPropertyPropertyMetaData::MinVal)
        .def_readwrite("MaxVal", &FSettingsPropertyPropertyMetaData::MaxVal)
        .def_readwrite("RangeIncrement", &FSettingsPropertyPropertyMetaData::RangeIncrement)
    ;

    class_< FIdToStringMapping >("FIdToStringMapping", no_init)
        .def_readwrite("Id", &FIdToStringMapping::Id)
        .def_readwrite("Name", &FIdToStringMapping::Name)
    ;

    class_< FFriendsQuery >("FFriendsQuery", no_init)
        .def_readwrite("UniqueId", &FFriendsQuery::UniqueId)
    ;

    class_< FOnlineGameSearchResult >("FOnlineGameSearchResult", no_init)
        .def_readwrite("GameSettings", &FOnlineGameSearchResult::GameSettings)
        .def_readwrite("PlatformData", &FOnlineGameSearchResult::PlatformData)
    ;

    class_< FLocalizedStringSettingMetaData >("FLocalizedStringSettingMetaData", no_init)
        .def_readwrite("Id", &FLocalizedStringSettingMetaData::Id)
        .def_readwrite("Name", &FLocalizedStringSettingMetaData::Name)
        .def_readwrite("ColumnHeaderText", &FLocalizedStringSettingMetaData::ColumnHeaderText)
        .def_readwrite("ValueMappings", &FLocalizedStringSettingMetaData::ValueMappings)
    ;

    class_< FStringIdToStringMapping >("FStringIdToStringMapping", no_init)
        .def_readwrite("Id", &FStringIdToStringMapping::Id)
        .def_readwrite("Name", &FStringIdToStringMapping::Name)
    ;

    class_< FOnlineArbitrationRegistrant >("FOnlineArbitrationRegistrant", no_init)
        .def_readwrite("MachineId", &FOnlineArbitrationRegistrant::MachineId)
        .def_readwrite("Trustworthiness", &FOnlineArbitrationRegistrant::Trustworthiness)
        .def_readwrite("PlayerNetId", &FOnlineRegistrant::PlayerNetId)
    ;

    class_< FOnlineRegistrant >("FOnlineRegistrant", no_init)
        .def_readwrite("PlayerNetId", &FOnlineRegistrant::PlayerNetId)
    ;

    class_< FOverrideSkill >("FOverrideSkill", no_init)
        .def_readwrite("LeaderboardId", &FOverrideSkill::LeaderboardId)
        .def_readwrite("Players", &FOverrideSkill::Players)
        .def_readwrite("Mus", &FOverrideSkill::Mus)
        .def_readwrite("Sigmas", &FOverrideSkill::Sigmas)
    ;

    class_< FNamedObjectProperty >("FNamedObjectProperty", no_init)
        .def_readwrite("ObjectPropertyName", &FNamedObjectProperty::ObjectPropertyName)
        .def_readwrite("ObjectPropertyValue", &FNamedObjectProperty::ObjectPropertyValue)
    ;

    class_< FOnlineGameSearchQuery >("FOnlineGameSearchQuery", no_init)
        .def_readwrite("OrClauses", &FOnlineGameSearchQuery::OrClauses)
        .def_readwrite("SortClauses", &FOnlineGameSearchQuery::SortClauses)
    ;

    class_< FOnlineGameSearchORClause >("FOnlineGameSearchORClause", no_init)
        .def_readwrite("OrParams", &FOnlineGameSearchORClause::OrParams)
    ;

    class_< FOnlineGameSearchParameter >("FOnlineGameSearchParameter", no_init)
        .def_readwrite("EntryId", &FOnlineGameSearchParameter::EntryId)
        .def_readwrite("CompareValueId", &FOnlineGameSearchParameter::CompareValueId)
        .def_readwrite("ObjectPropertyName", &FOnlineGameSearchParameter::ObjectPropertyName)
        .def_readwrite("EntryType", &FOnlineGameSearchParameter::EntryType)
        .def_readwrite("ComparisonType", &FOnlineGameSearchParameter::ComparisonType)
    ;

    class_< FOnlineGameSearchSortClause >("FOnlineGameSearchSortClause", no_init)
        .def_readwrite("EntryId", &FOnlineGameSearchSortClause::EntryId)
        .def_readwrite("ObjectPropertyName", &FOnlineGameSearchSortClause::ObjectPropertyName)
        .def_readwrite("EntryType", &FOnlineGameSearchSortClause::EntryType)
        .def_readwrite("SortType", &FOnlineGameSearchSortClause::SortType)
    ;

    class_< FMarketplaceContent >("FMarketplaceContent", no_init)
        .def_readwrite("UserIndex", &FMarketplaceContent::UserIndex)
        .def_readwrite("OfferId", &FMarketplaceContent::OfferId)
        .def_readwrite("PreviewOfferId", &FMarketplaceContent::PreviewOfferId)
        .def_readwrite("OfferName", &FMarketplaceContent::OfferName)
        .def_readwrite("OfferType", &FMarketplaceContent::OfferType)
        .def_readwrite("ContentId", &FMarketplaceContent::ContentId)
        .def_readwrite("LicenseMask", &FMarketplaceContent::LicenseMask)
        .def_readwrite("TitleId", &FMarketplaceContent::TitleId)
        .def_readwrite("ContentCategory", &FMarketplaceContent::ContentCategory)
        .def_readwrite("TitleName", &FMarketplaceContent::TitleName)
        .def_readwrite("PackageSize", &FMarketplaceContent::PackageSize)
        .def_readwrite("InstallSize", &FMarketplaceContent::InstallSize)
        .def_readwrite("SellText", &FMarketplaceContent::SellText)
        .def_readwrite("AssetId", &FMarketplaceContent::AssetId)
        .def_readwrite("PurchaseQuantity", &FMarketplaceContent::PurchaseQuantity)
        .def_readwrite("PointsPrice", &FMarketplaceContent::PointsPrice)
        .def_readwrite("PriceText", &FMarketplaceContent::PriceText)
        .def_readwrite("OfferIdText", &FMarketplaceContent::OfferIdText)
    ;

    class_< FOnlineContent >("FOnlineContent", no_init)
        .def_readwrite("ContentType", &FOnlineContent::ContentType)
        .def_readwrite("UserIndex", &FOnlineContent::UserIndex)
        .def_readwrite("DeviceID", &FOnlineContent::DeviceID)
        .def_readwrite("LicenseMask", &FOnlineContent::LicenseMask)
        .def_readwrite("FriendlyName", &FOnlineContent::FriendlyName)
        .def_readwrite("Filename", &FOnlineContent::Filename)
        .def_readwrite("ContentPath", &FOnlineContent::ContentPath)
        .def_readwrite("ContentPackages", &FOnlineContent::ContentPackages)
        .def_readwrite("ContentFiles", &FOnlineContent::ContentFiles)
        .def_readwrite("CachedAppIdInfo", &FOnlineContent::CachedAppIdInfo)
        .def_readwrite("TOCInfo", &FOnlineContent::TOCInfo)
    ;

    class_< FAppIdLicenseInfo >("FAppIdLicenseInfo", no_init)
        .def_readwrite("AppID", &FAppIdLicenseInfo::AppID)
        .def_readwrite("LicenseMask", &FAppIdLicenseInfo::LicenseMask)
    ;

    class_< FTOCInfo >("FTOCInfo", no_init)
        .def_readwrite("TOC", &FTOCInfo::TOC)
        .def_readwrite("RootPath", &FTOCInfo::RootPath)
        .def_readwrite("Path", &FTOCInfo::Path)
    ;

    class_< FOnlineCrossTitleContent, bases< FOnlineContent >  >("FOnlineCrossTitleContent", no_init)
        .def_readwrite("TitleId", &FOnlineCrossTitleContent::TitleId)
    ;

    class_< FRecogVocabulary >("FRecogVocabulary", no_init)
        .def_readwrite("WhoDictionary", &FRecogVocabulary::WhoDictionary)
        .def_readwrite("WhatDictionary", &FRecogVocabulary::WhatDictionary)
        .def_readwrite("WhereDictionary", &FRecogVocabulary::WhereDictionary)
        .def_readwrite("VocabName", &FRecogVocabulary::VocabName)
        .def_readwrite("VocabData", &FRecogVocabulary::VocabData)
        .def_readwrite("WorkingVocabData", &FRecogVocabulary::WorkingVocabData)
    ;

    class_< FRecognisableWord >("FRecognisableWord", no_init)
        .def_readwrite("Id", &FRecognisableWord::Id)
        .def_readwrite("ReferenceWord", &FRecognisableWord::ReferenceWord)
        .def_readwrite("PhoneticWord", &FRecognisableWord::PhoneticWord)
    ;

    class_< FRecogUserData >("FRecogUserData", no_init)
        .def_readwrite("ActiveVocabularies", &FRecogUserData::ActiveVocabularies)
        .def_readwrite("UserData", &FRecogUserData::UserData)
    ;

    class_< FSpeechRecognizedWord >("FSpeechRecognizedWord", no_init)
        .def_readwrite("WordId", &FSpeechRecognizedWord::WordId)
        .def_readwrite("WordText", &FSpeechRecognizedWord::WordText)
        .def_readwrite("Confidence", &FSpeechRecognizedWord::Confidence)
    ;

    class_< FOnlinePlayerScore >("FOnlinePlayerScore", no_init)
        .def_readwrite("PlayerID", &FOnlinePlayerScore::PlayerID)
        .def_readwrite("TeamID", &FOnlinePlayerScore::TeamID)
        .def_readwrite("Score", &FOnlinePlayerScore::Score)
    ;

    class_< FOnlineStatsRow >("FOnlineStatsRow", no_init)
        .def_readwrite("PlayerID", &FOnlineStatsRow::PlayerID)
        .def_readwrite("Rank", &FOnlineStatsRow::Rank)
        .def_readwrite("NickName", &FOnlineStatsRow::NickName)
        .def_readwrite("Columns", &FOnlineStatsRow::Columns)
    ;

    class_< FOnlineStatsColumn >("FOnlineStatsColumn", no_init)
        .def_readwrite("ColumnNo", &FOnlineStatsColumn::ColumnNo)
        .def_readwrite("StatValue", &FOnlineStatsColumn::StatValue)
    ;

    class_< FColumnMetaData >("FColumnMetaData", no_init)
        .def_readwrite("Id", &FColumnMetaData::Id)
        .def_readwrite("Name", &FColumnMetaData::Name)
        .def_readwrite("ColumnName", &FColumnMetaData::ColumnName)
    ;

    class_< FOnlinePartyMember >("FOnlinePartyMember", no_init)
        .def_readwrite("UniqueId", &FOnlinePartyMember::UniqueId)
        .def_readwrite("NickName", &FOnlinePartyMember::NickName)
        .def_readwrite("LocalUserNum", &FOnlinePartyMember::LocalUserNum)
        .def_readwrite("NatType", &FOnlinePartyMember::NatType)
        .def_readwrite("TitleId", &FOnlinePartyMember::TitleId)
        .def_readwrite("SessionId", &FOnlinePartyMember::SessionId)
        .def_readwrite("Data1", &FOnlinePartyMember::Data1)
        .def_readwrite("Data2", &FOnlinePartyMember::Data2)
        .def_readwrite("Data3", &FOnlinePartyMember::Data3)
        .def_readwrite("Data4", &FOnlinePartyMember::Data4)
    ;

    class_< FNamedInterface >("FNamedInterface", no_init)
        .def_readwrite("InterfaceName", &FNamedInterface::InterfaceName)
        .def_readwrite("InterfaceObject", &FNamedInterface::InterfaceObject)
    ;

    class_< FNamedInterfaceDef >("FNamedInterfaceDef", no_init)
        .def_readwrite("InterfaceName", &FNamedInterfaceDef::InterfaceName)
        .def_readwrite("InterfaceClassName", &FNamedInterfaceDef::InterfaceClassName)
    ;

    class_< FNamedSession >("FNamedSession", no_init)
        .def_readwrite("SessionName", &FNamedSession::SessionName)
        .def_readwrite("SessionInfo", &FNamedSession::SessionInfo)
        .def_readwrite("GameSettings", &FNamedSession::GameSettings)
        .def_readwrite("Registrants", &FNamedSession::Registrants)
        .def_readwrite("ArbitrationRegistrants", &FNamedSession::ArbitrationRegistrants)
    ;

    class_< FIniLocFileEntry >("FIniLocFileEntry", no_init)
        .def_readwrite("Filename", &FIniLocFileEntry::Filename)
        .def_readwrite("ReadState", &FIniLocFileEntry::ReadState)
    ;

    class_< FAuthSession >("FAuthSession", no_init)
        .def_readwrite("AuthStatus", &FAuthSession::AuthStatus)
        .def_readwrite("AuthBlobUID", &FAuthSession::AuthBlobUID)
        .def_readwrite("EndPointIP", &FBaseAuthSession::EndPointIP)
        .def_readwrite("EndPointPort", &FBaseAuthSession::EndPointPort)
        .def_readwrite("EndPointUID", &FBaseAuthSession::EndPointUID)
    ;

    class_< FBaseAuthSession >("FBaseAuthSession", no_init)
        .def_readwrite("EndPointIP", &FBaseAuthSession::EndPointIP)
        .def_readwrite("EndPointPort", &FBaseAuthSession::EndPointPort)
        .def_readwrite("EndPointUID", &FBaseAuthSession::EndPointUID)
    ;

    class_< FLocalAuthSession, bases< FBaseAuthSession >  >("FLocalAuthSession", no_init)
        .def_readwrite("SessionUID", &FLocalAuthSession::SessionUID)
    ;

    class_< FPendingClientAuth >("FPendingClientAuth", no_init)
        .def_readwrite("ClientConnection", &FPendingClientAuth::ClientConnection)
        .def_readwrite("ClientUID", &FPendingClientAuth::ClientUID)
        .def_readwrite("AuthTimestamp", &FPendingClientAuth::AuthTimestamp)
        .def_readwrite("AuthRetryCount", &FPendingClientAuth::AuthRetryCount)
    ;

    class_< FServerAuthRetry >("FServerAuthRetry", no_init)
        .def_readwrite("ClientUID", &FServerAuthRetry::ClientUID)
        .def_readwrite("AuthRetryCount", &FServerAuthRetry::AuthRetryCount)
    ;

    class_< FCoverReplicationInfo >("FCoverReplicationInfo", no_init)
        .def_readwrite("Link", &FCoverReplicationInfo::Link)
        .def_readwrite("SlotsEnabled", &FCoverReplicationInfo::SlotsEnabled)
        .def_readwrite("SlotsDisabled", &FCoverReplicationInfo::SlotsDisabled)
        .def_readwrite("SlotsAdjusted", &FCoverReplicationInfo::SlotsAdjusted)
        .def_readwrite("SlotsCoverTypeChanged", &FCoverReplicationInfo::SlotsCoverTypeChanged)
    ;

    class_< FCoverSlot >("FCoverSlot", no_init)
        .def_readwrite("SlotOwner", &FCoverSlot::SlotOwner)
        .def_readwrite("SlotValidAfterTime", &FCoverSlot::SlotValidAfterTime)
        .def_readwrite("ForceCoverType", &FCoverSlot::ForceCoverType)
        .def_readwrite("CoverType", &FCoverSlot::CoverType)
        .def_readwrite("LocationDescription", &FCoverSlot::LocationDescription)
        .def_readwrite("LocationOffset", &FCoverSlot::LocationOffset)
        .def_readwrite("RotationOffset", &FCoverSlot::RotationOffset)
        .def_readwrite("Actions", &FCoverSlot::Actions)
        .def_readwrite("FireLinks", &FCoverSlot::FireLinks)
        .def_readwrite("RejectedFireLinks", &FCoverSlot::RejectedFireLinks)
        .def_readwrite("ExposedCoverPackedProperties", &FCoverSlot::ExposedCoverPackedProperties)
        .def_readwrite("TurnTargetPackedProperties", &FCoverSlot::TurnTargetPackedProperties)
        .def_readwrite("SlipRefs", &FCoverSlot::SlipRefs)
        .def_readwrite("OverlapClaimsList", &FCoverSlot::OverlapClaimsList)
    ;

    class_< FFireLink >("FFireLink", no_init)
        .def_readwrite("Interactions", &FFireLink::Interactions)
        .def_readwrite("PackedProperties_CoverPairRefAndDynamicInfo", &FFireLink::PackedProperties_CoverPairRefAndDynamicInfo)
    ;

    class_< FSlotMoveRef >("FSlotMoveRef", no_init)
        .def_readwrite("Poly", &FSlotMoveRef::Poly)
        .def_readwrite("Dest", &FSlotMoveRef::Dest)
        .def_readwrite("Direction", &FSlotMoveRef::Direction)
    ;

    class_< FPolyReference >("FPolyReference", no_init)
        .def_readwrite("OwningPylon", &FPolyReference::OwningPylon)
        .def_readwrite("PolyId", &FPolyReference::PolyId)
        .def_readwrite("CachedPoly", &FPolyReference::CachedPoly)
    ;

    class_< FBasedPosition >("FBasedPosition", no_init)
        .def_readwrite("Base", &FBasedPosition::Base)
        .def_readwrite("Position", &FBasedPosition::Position)
        .def_readwrite("CachedBaseLocation", &FBasedPosition::CachedBaseLocation)
        .def_readwrite("CachedBaseRotation", &FBasedPosition::CachedBaseRotation)
        .def_readwrite("CachedTransPosition", &FBasedPosition::CachedTransPosition)
    ;

    class_< FCoverInfo >("FCoverInfo", no_init)
        .def_readwrite("Link", &FCoverInfo::Link)
        .def_readwrite("SlotIdx", &FCoverInfo::SlotIdx)
    ;

    class_< FDynamicLinkInfo >("FDynamicLinkInfo", no_init)
        .def_readwrite("LastTargetLocation", &FDynamicLinkInfo::LastTargetLocation)
        .def_readwrite("LastSrcLocation", &FDynamicLinkInfo::LastSrcLocation)
    ;

    class_< FPathSizeInfo >("FPathSizeInfo", no_init)
        .def_readwrite("Desc", &FPathSizeInfo::Desc)
        .def_readwrite("Radius", &FPathSizeInfo::Radius)
        .def_readwrite("Height", &FPathSizeInfo::Height)
        .def_readwrite("CrouchHeight", &FPathSizeInfo::CrouchHeight)
        .def_readwrite("PathColor", &FPathSizeInfo::PathColor)
    ;

    class_< ANavigationPoint_FCheckpointRecord >("ANavigationPoint_FCheckpointRecord", no_init)
    ;

    class_< FManualCoverTypeInfo >("FManualCoverTypeInfo", no_init)
        .def_readwrite("SlotIndex", &FManualCoverTypeInfo::SlotIndex)
        .def_readwrite("ManualCoverType", &FManualCoverTypeInfo::ManualCoverType)
    ;

    class_< FGameClassShortName >("FGameClassShortName", no_init)
        .def_readwrite("ShortName", &FGameClassShortName::ShortName)
        .def_readwrite("GameClassName", &FGameClassShortName::GameClassName)
    ;

    class_< FGameTypePrefix >("FGameTypePrefix", no_init)
        .def_readwrite("Prefix", &FGameTypePrefix::Prefix)
        .def_readwrite("GameType", &FGameTypePrefix::GameType)
        .def_readwrite("AdditionalGameTypes", &FGameTypePrefix::AdditionalGameTypes)
        .def_readwrite("ForcedObjects", &FGameTypePrefix::ForcedObjects)
    ;

    class_< FNavMeshPathSize >("FNavMeshPathSize", no_init)
        .def_readwrite("Size", &FNavMeshPathSize::Size)
        .def_readwrite("Height", &FNavMeshPathSize::Height)
        .def_readwrite("PolyColor", &FNavMeshPathSize::PolyColor)
        .def_readwrite("ObstacleColor", &FNavMeshPathSize::ObstacleColor)
    ;

    class_< FGBXConnectedNavMesh >("FGBXConnectedNavMesh", no_init)
        .def_readwrite("Mesh", &FGBXConnectedNavMesh::Mesh)
        .def_readwrite("MeshID", &FGBXConnectedNavMesh::MeshID)
    ;

    class_< FGBXNavMeshVertex, bases< FVector >  >("FGBXNavMeshVertex", no_init)
    ;

    class_< FGBXNavMeshPoly >("FGBXNavMeshPoly", no_init)
        .def_readonly("Verts", &FGBXNavMeshPoly::Verts)
        .def_readonly("ConnectedPolys", &FGBXNavMeshPoly::ConnectedPolys)
        .def_readonly("PolyDataIdx", &FGBXNavMeshPoly::PolyDataIdx)
    ;

    class_< FGBXNavMeshPolyData >("FGBXNavMeshPolyData", no_init)
        .def_readwrite("CrossLevelConnections", &FGBXNavMeshPolyData::CrossLevelConnections)
        .def_readwrite("SpecialMoves", &FGBXNavMeshPolyData::SpecialMoves)
        .def_readonly("Obstacles", &FGBXNavMeshPolyData::Obstacles)
    ;

    class_< FGBXNavmeshCrossLevelConnection >("FGBXNavmeshCrossLevelConnection", no_init)
        .def_readonly("EdgeIdx", &FGBXNavmeshCrossLevelConnection::EdgeIdx)
        .def_readonly("ConnectedNavmeshIdx", &FGBXNavmeshCrossLevelConnection::ConnectedNavmeshIdx)
        .def_readonly("PolyIdx", &FGBXNavmeshCrossLevelConnection::PolyIdx)
    ;

    class_< FGBXNavMeshSpecialMove >("FGBXNavMeshSpecialMove", no_init)
        .def_readwrite("DestinationPolyIdx", &FGBXNavMeshSpecialMove::DestinationPolyIdx)
        .def_readwrite("DestinationMeshIdx", &FGBXNavMeshSpecialMove::DestinationMeshIdx)
        .def_readwrite("CrossLevelMoverIdx", &FGBXNavMeshSpecialMove::CrossLevelMoverIdx)
        .def_readwrite("ActorSpecialMoveId", &FGBXNavMeshSpecialMove::ActorSpecialMoveId)
        .def_readwrite("Mover", &FGBXNavMeshSpecialMove::Mover)
        .def_readonly("UnknownData00", &FGBXNavMeshSpecialMove::UnknownData00)
        .def_readwrite("LocalSpaceSrcLocation", &FGBXNavMeshSpecialMove::LocalSpaceSrcLocation)
        .def_readwrite("LocalSpaceDestLocation", &FGBXNavMeshSpecialMove::LocalSpaceDestLocation)
    ;

    class_< FGBXNavMeshPathSize >("FGBXNavMeshPathSize", no_init)
        .def_readwrite("Radius", &FGBXNavMeshPathSize::Radius)
        .def_readwrite("Height", &FGBXNavMeshPathSize::Height)
        .def_readwrite("DrawColor", &FGBXNavMeshPathSize::DrawColor)
        .def_readwrite("ObstacleDrawColor", &FGBXNavMeshPathSize::ObstacleDrawColor)
        .def_readwrite("StartIndex", &FGBXNavMeshPathSize::StartIndex)
    ;

    class_< FGBXNavMeshObstacleData >("FGBXNavMeshObstacleData", no_init)
        .def_readwrite("Obstacle", &FGBXNavMeshObstacleData::Obstacle)
        .def_readwrite("MinAffectedPathSize", &FGBXNavMeshObstacleData::MinAffectedPathSize)
    ;

    class_< FGBXNavMeshPolyLookup >("FGBXNavMeshPolyLookup", no_init)
        .def_readwrite("XCells", &FGBXNavMeshPolyLookup::XCells)
        .def_readwrite("YCells", &FGBXNavMeshPolyLookup::YCells)
        .def_readwrite("Origin", &FGBXNavMeshPolyLookup::Origin)
        .def_readwrite("CellSize", &FGBXNavMeshPolyLookup::CellSize)
        .def_readwrite("CellIndices", &FGBXNavMeshPolyLookup::CellIndices)
        .def_readwrite("Cells", &FGBXNavMeshPolyLookup::Cells)
    ;

    class_< FGBXNavMeshLookupCell >("FGBXNavMeshLookupCell", no_init)
        .def_readwrite("IntersectingPolys", &FGBXNavMeshLookupCell::IntersectingPolys)
    ;

    class_< FNetViewer >("FNetViewer", no_init)
        .def_readwrite("InViewer", &FNetViewer::InViewer)
        .def_readwrite("Viewer", &FNetViewer::Viewer)
        .def_readwrite("ViewLocation", &FNetViewer::ViewLocation)
        .def_readwrite("ViewDir", &FNetViewer::ViewDir)
    ;

    class_< FEmitterBaseInfo >("FEmitterBaseInfo", no_init)
        .def_readwrite("PSC", &FEmitterBaseInfo::PSC)
        .def_readwrite("Base", &FEmitterBaseInfo::Base)
        .def_readwrite("RelativeLocation", &FEmitterBaseInfo::RelativeLocation)
        .def_readwrite("RelativeRotation", &FEmitterBaseInfo::RelativeRotation)
    ;

    class_< FActiveDecalInfo >("FActiveDecalInfo", no_init)
        .def_readwrite("Decal", &FActiveDecalInfo::Decal)
        .def_readwrite("LifetimeRemaining", &FActiveDecalInfo::LifetimeRemaining)
    ;

    class_< FPhysXSceneProperties >("FPhysXSceneProperties", no_init)
        .def_readwrite("PrimaryScene", &FPhysXSceneProperties::PrimaryScene)
        .def_readwrite("CompartmentRigidBody", &FPhysXSceneProperties::CompartmentRigidBody)
        .def_readwrite("CompartmentFluid", &FPhysXSceneProperties::CompartmentFluid)
        .def_readwrite("CompartmentCloth", &FPhysXSceneProperties::CompartmentCloth)
        .def_readwrite("CompartmentSoftBody", &FPhysXSceneProperties::CompartmentSoftBody)
    ;

    class_< FPhysXSimulationProperties >("FPhysXSimulationProperties", no_init)
        .def_readwrite("TimeStep", &FPhysXSimulationProperties::TimeStep)
        .def_readwrite("MaxSubSteps", &FPhysXSimulationProperties::MaxSubSteps)
    ;

    class_< FCompartmentRunList >("FCompartmentRunList", no_init)
    ;

    class_< FApexModuleDestructibleSettings >("FApexModuleDestructibleSettings", no_init)
        .def_readwrite("MaxChunkIslandCount", &FApexModuleDestructibleSettings::MaxChunkIslandCount)
        .def_readwrite("MaxRrbActorCount", &FApexModuleDestructibleSettings::MaxRrbActorCount)
        .def_readwrite("MaxChunkSeparationLOD", &FApexModuleDestructibleSettings::MaxChunkSeparationLOD)
    ;

    class_< FPhysXVerticalProperties >("FPhysXVerticalProperties", no_init)
        .def_readwrite("Emitters", &FPhysXVerticalProperties::Emitters)
    ;

    class_< FPhysXEmitterVerticalProperties >("FPhysXEmitterVerticalProperties", no_init)
        .def_readwrite("ParticlesLodMin", &FPhysXEmitterVerticalProperties::ParticlesLodMin)
        .def_readwrite("ParticlesLodMax", &FPhysXEmitterVerticalProperties::ParticlesLodMax)
        .def_readwrite("PacketsPerPhysXParticleSystemMax", &FPhysXEmitterVerticalProperties::PacketsPerPhysXParticleSystemMax)
        .def_readwrite("SpawnLodVsFifoBias", &FPhysXEmitterVerticalProperties::SpawnLodVsFifoBias)
    ;

    class_< FScreenMessageString >("FScreenMessageString", no_init)
        .def_readwrite("Key", &FScreenMessageString::Key)
        .def_readwrite("ScreenMessage", &FScreenMessageString::ScreenMessage)
        .def_readwrite("DisplayColor", &FScreenMessageString::DisplayColor)
        .def_readwrite("TimeToDisplay", &FScreenMessageString::TimeToDisplay)
        .def_readwrite("CurrentTimeDisplayed", &FScreenMessageString::CurrentTimeDisplayed)
    ;

    class_< FLightmassWorldInfoSettings >("FLightmassWorldInfoSettings", no_init)
        .def_readwrite("StaticLightingLevelScale", &FLightmassWorldInfoSettings::StaticLightingLevelScale)
        .def_readwrite("NumIndirectLightingBounces", &FLightmassWorldInfoSettings::NumIndirectLightingBounces)
        .def_readwrite("EnvironmentColor", &FLightmassWorldInfoSettings::EnvironmentColor)
        .def_readwrite("EnvironmentIntensity", &FLightmassWorldInfoSettings::EnvironmentIntensity)
        .def_readwrite("EmissiveBoost", &FLightmassWorldInfoSettings::EmissiveBoost)
        .def_readwrite("DiffuseBoost", &FLightmassWorldInfoSettings::DiffuseBoost)
        .def_readwrite("SpecularBoost", &FLightmassWorldInfoSettings::SpecularBoost)
        .def_readwrite("IndirectNormalInfluenceBoost", &FLightmassWorldInfoSettings::IndirectNormalInfluenceBoost)
        .def_readwrite("DirectIlluminationOcclusionFraction", &FLightmassWorldInfoSettings::DirectIlluminationOcclusionFraction)
        .def_readwrite("IndirectIlluminationOcclusionFraction", &FLightmassWorldInfoSettings::IndirectIlluminationOcclusionFraction)
        .def_readwrite("OcclusionExponent", &FLightmassWorldInfoSettings::OcclusionExponent)
        .def_readwrite("FullyOccludedSamplesFraction", &FLightmassWorldInfoSettings::FullyOccludedSamplesFraction)
        .def_readwrite("MaxOcclusionDistance", &FLightmassWorldInfoSettings::MaxOcclusionDistance)
    ;

    class_< FHostMigrationState >("FHostMigrationState", no_init)
        .def_readwrite("HostMigrationProgress", &FHostMigrationState::HostMigrationProgress)
        .def_readwrite("HostMigrationElapsedTime", &FHostMigrationState::HostMigrationElapsedTime)
        .def_readwrite("HostMigrationTravelCountdown", &FHostMigrationState::HostMigrationTravelCountdown)
        .def_readwrite("HostMigrationTravelURL", &FHostMigrationState::HostMigrationTravelURL)
    ;

    class_< FNavigationArea >("FNavigationArea", no_init)
        .def_readwrite("AreaName", &FNavigationArea::AreaName)
        .def_readwrite("AreaColor", &FNavigationArea::AreaColor)
    ;

    class_< FWorldFractureSettings >("FWorldFractureSettings", no_init)
        .def_readwrite("ChanceOfPhysicsChunkOverride", &FWorldFractureSettings::ChanceOfPhysicsChunkOverride)
        .def_readwrite("MaxExplosionChunkSize", &FWorldFractureSettings::MaxExplosionChunkSize)
        .def_readwrite("MaxDamageChunkSize", &FWorldFractureSettings::MaxDamageChunkSize)
        .def_readwrite("MaxNumFacturedChunksToSpawnInAFrame", &FWorldFractureSettings::MaxNumFacturedChunksToSpawnInAFrame)
        .def_readwrite("FractureExplosionVelScale", &FWorldFractureSettings::FractureExplosionVelScale)
    ;

    class_< APhysicsVolume_FCheckpointRecord >("APhysicsVolume_FCheckpointRecord", no_init)
    ;

    class_< FPathStore >("FPathStore", no_init)
        .def_readwrite("EdgeList", &FPathStore::EdgeList)
        .def_readwrite("PathDistances", &FPathStore::PathDistances)
    ;

    class_< FEdgePointer >("FEdgePointer", no_init)
        .def_readwrite("Dummy", &FEdgePointer::Dummy)
    ;

    class_< FNavMeshPathParams >("FNavMeshPathParams", no_init)
        .def_readwrite("Interface", &FNavMeshPathParams::Interface)
        .def_readwrite("PhysicsJumpCostMultiplier", &FNavMeshPathParams::PhysicsJumpCostMultiplier)
        .def_readwrite("SearchExtent", &FNavMeshPathParams::SearchExtent)
        .def_readwrite("SearchLaneMultiplier", &FNavMeshPathParams::SearchLaneMultiplier)
        .def_readwrite("SearchStart", &FNavMeshPathParams::SearchStart)
        .def_readwrite("MaxDropHeight", &FNavMeshPathParams::MaxDropHeight)
        .def_readwrite("MinWalkableZ", &FNavMeshPathParams::MinWalkableZ)
        .def_readwrite("MaxHoverDistance", &FNavMeshPathParams::MaxHoverDistance)
        .def_readwrite("ObstaclesToIgnore", &FNavMeshPathParams::ObstaclesToIgnore)
        .def_readwrite("LookAheadDistance", &FNavMeshPathParams::LookAheadDistance)
        .def_readwrite("CornerCutDistance", &FNavMeshPathParams::CornerCutDistance)
        .def_readwrite("LookInterpRate", &FNavMeshPathParams::LookInterpRate)
    ;

    class_< FSeqOpInputLink >("FSeqOpInputLink", no_init)
        .def_readwrite("LinkDesc", &FSeqOpInputLink::LinkDesc)
        .def_readwrite("QueuedActivations", &FSeqOpInputLink::QueuedActivations)
        .def_readwrite("LinkedOp", &FSeqOpInputLink::LinkedOp)
        .def_readwrite("ActivateDelay", &FSeqOpInputLink::ActivateDelay)
    ;

    class_< FSeqOpOutputLink >("FSeqOpOutputLink", no_init)
        .def_readwrite("Links", &FSeqOpOutputLink::Links)
        .def_readwrite("LinkDesc", &FSeqOpOutputLink::LinkDesc)
        .def_readwrite("LinkedOp", &FSeqOpOutputLink::LinkedOp)
        .def_readwrite("ActivateDelay", &FSeqOpOutputLink::ActivateDelay)
    ;

    class_< FSeqOpOutputInputLink >("FSeqOpOutputInputLink", no_init)
        .def_readwrite("LinkedOp", &FSeqOpOutputInputLink::LinkedOp)
        .def_readwrite("InputLinkIdx", &FSeqOpOutputInputLink::InputLinkIdx)
    ;

    class_< FSeqVarLink >("FSeqVarLink", no_init)
        .def_readwrite("ExpectedType", &FSeqVarLink::ExpectedType)
        .def_readwrite("LinkedVariables", &FSeqVarLink::LinkedVariables)
        .def_readwrite("LinkDesc", &FSeqVarLink::LinkDesc)
        .def_readwrite("LinkVar", &FSeqVarLink::LinkVar)
        .def_readwrite("PropertyName", &FSeqVarLink::PropertyName)
        .def_readwrite("MinVars", &FSeqVarLink::MinVars)
        .def_readwrite("MaxVars", &FSeqVarLink::MaxVars)
        .def_readwrite("CachedProperty", &FSeqVarLink::CachedProperty)
    ;

    class_< FSeqEventLink >("FSeqEventLink", no_init)
        .def_readwrite("LinkedEvents", &FSeqEventLink::LinkedEvents)
        .def_readwrite("LinkDesc", &FSeqEventLink::LinkDesc)
    ;

    class_< FCurveEdTab >("FCurveEdTab", no_init)
        .def_readwrite("TabName", &FCurveEdTab::TabName)
        .def_readwrite("Curves", &FCurveEdTab::Curves)
        .def_readwrite("ViewStartInput", &FCurveEdTab::ViewStartInput)
        .def_readwrite("ViewEndInput", &FCurveEdTab::ViewEndInput)
        .def_readwrite("ViewStartOutput", &FCurveEdTab::ViewStartOutput)
        .def_readwrite("ViewEndOutput", &FCurveEdTab::ViewEndOutput)
    ;

    class_< FCurveEdEntry >("FCurveEdEntry", no_init)
        .def_readwrite("CurveObject", &FCurveEdEntry::CurveObject)
        .def_readwrite("CurveColor", &FCurveEdEntry::CurveColor)
        .def_readwrite("CurveName", &FCurveEdEntry::CurveName)
        .def_readwrite("bHideCurve", &FCurveEdEntry::bHideCurve)
        .def_readwrite("bColorCurve", &FCurveEdEntry::bColorCurve)
        .def_readwrite("bFloatingPointColorCurve", &FCurveEdEntry::bFloatingPointColorCurve)
        .def_readwrite("bClamp", &FCurveEdEntry::bClamp)
        .def_readwrite("ClampLow", &FCurveEdEntry::ClampLow)
        .def_readwrite("ClampHigh", &FCurveEdEntry::ClampHigh)
    ;

    class_< FAnimSetBakeAndPruneStatus >("FAnimSetBakeAndPruneStatus", no_init)
        .def_readwrite("AnimSetName", &FAnimSetBakeAndPruneStatus::AnimSetName)
    ;

    class_< FMorphNodeConn >("FMorphNodeConn", no_init)
        .def_readwrite("ChildNodes", &FMorphNodeConn::ChildNodes)
        .def_readwrite("ConnName", &FMorphNodeConn::ConnName)
        .def_readwrite("DrawY", &FMorphNodeConn::DrawY)
    ;

    class_< FViewParticleEmitterInstanceMotionBlurInfo >("FViewParticleEmitterInstanceMotionBlurInfo", no_init)
        .def_readwrite("EmitterInstanceMBInfoMap", &FViewParticleEmitterInstanceMotionBlurInfo::EmitterInstanceMBInfoMap)
    ;

    class_< FParticleSysParam >("FParticleSysParam", no_init)
        .def_readwrite("Name", &FParticleSysParam::Name)
        .def_readwrite("ParamType", &FParticleSysParam::ParamType)
        .def_readwrite("Scalar", &FParticleSysParam::Scalar)
        .def_readwrite("Scalar_Low", &FParticleSysParam::Scalar_Low)
        .def_readwrite("Vector", &FParticleSysParam::Vector)
        .def_readwrite("Vector_Low", &FParticleSysParam::Vector_Low)
        .def_readwrite("Color", &FParticleSysParam::Color)
        .def_readwrite("Actor", &FParticleSysParam::Actor)
        .def_readwrite("Material", &FParticleSysParam::Material)
        .def_readwrite("Socket", &FParticleSysParam::Socket)
    ;

    class_< FMaterialViewRelevance >("FMaterialViewRelevance", no_init)
    ;

    class_< FParticleSystemReplayFrame >("FParticleSystemReplayFrame", no_init)
        .def_readwrite("Emitters", &FParticleSystemReplayFrame::Emitters)
    ;

    class_< FParticleEmitterReplayFrame >("FParticleEmitterReplayFrame", no_init)
        .def_readwrite("EmitterType", &FParticleEmitterReplayFrame::EmitterType)
        .def_readwrite("OriginalEmitterIndex", &FParticleEmitterReplayFrame::OriginalEmitterIndex)
        .def_readwrite("FrameState", &FParticleEmitterReplayFrame::FrameState)
    ;

    class_< FParticleEventSpawnData >("FParticleEventSpawnData", no_init)
        .def_readwrite("Type", &FParticleEventData::Type)
        .def_readwrite("EventName", &FParticleEventData::EventName)
        .def_readwrite("EmitterTime", &FParticleEventData::EmitterTime)
        .def_readwrite("Location", &FParticleEventData::Location)
        .def_readwrite("Direction", &FParticleEventData::Direction)
        .def_readwrite("Velocity", &FParticleEventData::Velocity)
    ;

    class_< FParticleEventData >("FParticleEventData", no_init)
        .def_readwrite("Type", &FParticleEventData::Type)
        .def_readwrite("EventName", &FParticleEventData::EventName)
        .def_readwrite("EmitterTime", &FParticleEventData::EmitterTime)
        .def_readwrite("Location", &FParticleEventData::Location)
        .def_readwrite("Direction", &FParticleEventData::Direction)
        .def_readwrite("Velocity", &FParticleEventData::Velocity)
    ;

    class_< FParticleEventDeathData, bases< FParticleEventData >  >("FParticleEventDeathData", no_init)
        .def_readwrite("ParticleTime", &FParticleEventDeathData::ParticleTime)
    ;

    class_< FParticleEventCollideData, bases< FParticleEventData >  >("FParticleEventCollideData", no_init)
        .def_readwrite("ParticleTime", &FParticleEventCollideData::ParticleTime)
        .def_readwrite("Normal", &FParticleEventCollideData::Normal)
        .def_readwrite("Time", &FParticleEventCollideData::Time)
        .def_readwrite("Item", &FParticleEventCollideData::Item)
        .def_readwrite("BoneName", &FParticleEventCollideData::BoneName)
    ;

    class_< FParticleEventTraceData, bases< FParticleEventData >  >("FParticleEventTraceData", no_init)
        .def_readwrite("ParticleTime", &FParticleEventTraceData::ParticleTime)
    ;

    class_< FParticleEventKismetData, bases< FParticleEventData >  >("FParticleEventKismetData", no_init)
        .def_readwrite("Normal", &FParticleEventKismetData::Normal)
    ;

    class_< FParticleSystemLOD >("FParticleSystemLOD", no_init)
    ;

    class_< FPhysEffectInfo >("FPhysEffectInfo", no_init)
        .def_readwrite("Threshold", &FPhysEffectInfo::Threshold)
        .def_readwrite("ReFireDelay", &FPhysEffectInfo::ReFireDelay)
        .def_readwrite("Effect", &FPhysEffectInfo::Effect)
        .def_readwrite("Sound", &FPhysEffectInfo::Sound)
        .def_readwrite("ImpactDefinition", &FPhysEffectInfo::ImpactDefinition)
    ;

    class_< FDecalReceiver >("FDecalReceiver", no_init)
        .def_readwrite("Component", &FDecalReceiver::Component)
        .def_readwrite("RenderData", &FDecalReceiver::RenderData)
    ;

    class_< FLightingChannelContainer >("FLightingChannelContainer", no_init)
    ;

    class_< FSynchGroup >("FSynchGroup", no_init)
        .def_readwrite("SeqNodes", &FSynchGroup::SeqNodes)
        .def_readwrite("MasterNode", &FSynchGroup::MasterNode)
        .def_readwrite("GroupName", &FSynchGroup::GroupName)
        .def_readwrite("RateScale", &FSynchGroup::RateScale)
    ;

    class_< FScalarParameterInterpStruct >("FScalarParameterInterpStruct", no_init)
        .def_readwrite("ParameterName", &FScalarParameterInterpStruct::ParameterName)
        .def_readwrite("ParameterValue", &FScalarParameterInterpStruct::ParameterValue)
        .def_readwrite("InterpTime", &FScalarParameterInterpStruct::InterpTime)
        .def_readwrite("WarmupTime", &FScalarParameterInterpStruct::WarmupTime)
    ;

    class_< FRootMotionCurve >("FRootMotionCurve", no_init)
        .def_readwrite("AnimName", &FRootMotionCurve::AnimName)
        .def_readwrite("Curve", &FRootMotionCurve::Curve)
        .def_readwrite("MaxCurveTime", &FRootMotionCurve::MaxCurveTime)
    ;

    class_< FBalanceDefSpawnedActorState >("FBalanceDefSpawnedActorState", no_init)
        .def_readwrite("BalanceDefinition", &FBalanceDefSpawnedActorState::BalanceDefinition)
        .def_readwrite("GradeIndex", &FBalanceDefSpawnedActorState::GradeIndex)
    ;

    class_< FDamageTypeResistance >("FDamageTypeResistance", no_init)
        .def_readwrite("ResistanceToImpact", &FDamageTypeResistance::ResistanceToImpact)
        .def_readwrite("ResistanceToStatusEffect", &FDamageTypeResistance::ResistanceToStatusEffect)
    ;

    class_< FCameraCutInfo >("FCameraCutInfo", no_init)
        .def_readwrite("Location", &FCameraCutInfo::Location)
        .def_readwrite("TimeStamp", &FCameraCutInfo::TimeStamp)
    ;

    class_< FRenderingPerformanceOverrides >("FRenderingPerformanceOverrides", no_init)
    ;

    class_< FAnimSlotInfo >("FAnimSlotInfo", no_init)
        .def_readwrite("SlotName", &FAnimSlotInfo::SlotName)
        .def_readwrite("ChannelWeights", &FAnimSlotInfo::ChannelWeights)
    ;

    class_< FTrailSamplePoint >("FTrailSamplePoint", no_init)
        .def_readwrite("RelativeTime", &FTrailSamplePoint::RelativeTime)
        .def_readwrite("FirstEdgeSample", &FTrailSamplePoint::FirstEdgeSample)
        .def_readwrite("ControlPointSample", &FTrailSamplePoint::ControlPointSample)
        .def_readwrite("SecondEdgeSample", &FTrailSamplePoint::SecondEdgeSample)
    ;

    class_< FTrailSocketSamplePoint >("FTrailSocketSamplePoint", no_init)
        .def_readwrite("Position", &FTrailSocketSamplePoint::Position)
        .def_readwrite("Velocity", &FTrailSocketSamplePoint::Velocity)
    ;

    class_< FTrailSample >("FTrailSample", no_init)
        .def_readwrite("RelativeTime", &FTrailSample::RelativeTime)
        .def_readwrite("FirstEdgeSample", &FTrailSample::FirstEdgeSample)
        .def_readwrite("ControlPointSample", &FTrailSample::ControlPointSample)
        .def_readwrite("SecondEdgeSample", &FTrailSample::SecondEdgeSample)
    ;

    class_< FVehicleState >("FVehicleState", no_init)
        .def_readwrite("RBState", &FVehicleState::RBState)
        .def_readwrite("ServerBrake", &FVehicleState::ServerBrake)
        .def_readwrite("ServerGas", &FVehicleState::ServerGas)
        .def_readwrite("ServerSteering", &FVehicleState::ServerSteering)
        .def_readwrite("ServerRise", &FVehicleState::ServerRise)
        .def_readwrite("ServerView", &FVehicleState::ServerView)
    ;

    class_< FRigidBodyState >("FRigidBodyState", no_init)
        .def_readwrite("Position", &FRigidBodyState::Position)
        .def_readonly("UnknownData00", &FRigidBodyState::UnknownData00)
        .def_readwrite("Quaternion", &FRigidBodyState::Quaternion)
        .def_readwrite("LinVel", &FRigidBodyState::LinVel)
        .def_readwrite("AngVel", &FRigidBodyState::AngVel)
        .def_readwrite("bNewData", &FRigidBodyState::bNewData)
    ;

    class_< AInterpActor_FCheckpointRecord >("AInterpActor_FCheckpointRecord", no_init)
        .def_readwrite("Location", &AInterpActor_FCheckpointRecord::Location)
        .def_readwrite("Rotation", &AInterpActor_FCheckpointRecord::Rotation)
        .def_readwrite("CollisionType", &AInterpActor_FCheckpointRecord::CollisionType)
    ;

    class_< FVisiblePortalInfo >("FVisiblePortalInfo", no_init)
        .def_readwrite("Source", &FVisiblePortalInfo::Source)
        .def_readwrite("Destination", &FVisiblePortalInfo::Destination)
    ;

    class_< FInstanceDataUnion >("FInstanceDataUnion", no_init)
        .def_readwrite("Name", &FInstanceDataUnion::Name)
        .def_readwrite("Type", &FInstanceDataUnion::Type)
        .def_readwrite("Replication", &FInstanceDataUnion::Replication)
        .def_readwrite("MaxSwitchValue", &FInstanceDataUnion::MaxSwitchValue)
        .def_readwrite("BitsRequiredForMaxSwitchValue", &FInstanceDataUnion::BitsRequiredForMaxSwitchValue)
        .def_readwrite("Int", &FInstanceDataUnion::Int)
        .def_readwrite("Float", &FInstanceDataUnion::Float)
        .def_readwrite("Vector", &FInstanceDataUnion::Vector)
        .def_readwrite("Object", &FInstanceDataUnion::Object)
        .def_readwrite("ComponentData", &FInstanceDataUnion::ComponentData)
        .def_readwrite("String", &FInstanceDataUnion::String)
        .def_readwrite("BodyCompositionIndex", &FInstanceDataUnion::BodyCompositionIndex)
    ;

    class_< FComponentData >("FComponentData", no_init)
        .def_readwrite("Component", &FComponentData::Component)
        .def_readwrite("CollisionType", &FComponentData::CollisionType)
        .def_readwrite("MeshSocketName", &FComponentData::MeshSocketName)
        .def_readwrite("HitRegionDefinition", &FComponentData::HitRegionDefinition)
        .def_readwrite("InteractIcon", &FComponentData::InteractIcon)
        .def_readwrite("SecondaryInteractIcon", &FComponentData::SecondaryInteractIcon)
    ;

    class_< ATrigger_FCheckpointRecord >("ATrigger_FCheckpointRecord", no_init)
    ;

    class_< FTCameraCache >("FTCameraCache", no_init)
        .def_readwrite("TimeStamp", &FTCameraCache::TimeStamp)
        .def_readwrite("POV", &FTCameraCache::POV)
    ;

    class_< FTViewTarget >("FTViewTarget", no_init)
        .def_readwrite("Target", &FTViewTarget::Target)
        .def_readwrite("Controller", &FTViewTarget::Controller)
        .def_readwrite("POV", &FTViewTarget::POV)
        .def_readwrite("AspectRatio", &FTViewTarget::AspectRatio)
        .def_readwrite("PRI", &FTViewTarget::PRI)
    ;

    class_< FViewTargetTransitionParams >("FViewTargetTransitionParams", no_init)
        .def_readwrite("BlendTime", &FViewTargetTransitionParams::BlendTime)
        .def_readwrite("BlendFunction", &FViewTargetTransitionParams::BlendFunction)
        .def_readwrite("BlendExp", &FViewTargetTransitionParams::BlendExp)
    ;

    class_< AEmitter_FCheckpointRecord >("AEmitter_FCheckpointRecord", no_init)
    ;

    class_< FCameraShakeInstance >("FCameraShakeInstance", no_init)
        .def_readwrite("SourceShake", &FCameraShakeInstance::SourceShake)
        .def_readwrite("SourceShakeName", &FCameraShakeInstance::SourceShakeName)
        .def_readwrite("OscillatorTimeRemaining", &FCameraShakeInstance::OscillatorTimeRemaining)
        .def_readwrite("CurrentBlendInTime", &FCameraShakeInstance::CurrentBlendInTime)
        .def_readwrite("CurrentBlendOutTime", &FCameraShakeInstance::CurrentBlendOutTime)
        .def_readwrite("LocSinOffset", &FCameraShakeInstance::LocSinOffset)
        .def_readwrite("RotSinOffset", &FCameraShakeInstance::RotSinOffset)
        .def_readwrite("FOVSinOffset", &FCameraShakeInstance::FOVSinOffset)
        .def_readwrite("Scale", &FCameraShakeInstance::Scale)
        .def_readwrite("AnimInst", &FCameraShakeInstance::AnimInst)
        .def_readwrite("PlaySpace", &FCameraShakeInstance::PlaySpace)
        .def_readonly("UnknownData00", &FCameraShakeInstance::UnknownData00)
        .def_readwrite("UserPlaySpaceMatrix", &FCameraShakeInstance::UserPlaySpaceMatrix)
    ;

    class_< FROscillator >("FROscillator", no_init)
        .def_readwrite("Pitch", &FROscillator::Pitch)
        .def_readwrite("Yaw", &FROscillator::Yaw)
        .def_readwrite("Roll", &FROscillator::Roll)
    ;

    class_< FFOscillator >("FFOscillator", no_init)
        .def_readwrite("Amplitude", &FFOscillator::Amplitude)
        .def_readwrite("Frequency", &FFOscillator::Frequency)
        .def_readwrite("InitialOffset", &FFOscillator::InitialOffset)
    ;

    class_< FVOscillator >("FVOscillator", no_init)
        .def_readwrite("X", &FVOscillator::X)
        .def_readwrite("Y", &FVOscillator::Y)
        .def_readwrite("Z", &FVOscillator::Z)
    ;

    class_< FClientAdjustment >("FClientAdjustment", no_init)
        .def_readwrite("TimeStamp", &FClientAdjustment::TimeStamp)
        .def_readwrite("newPhysics", &FClientAdjustment::newPhysics)
        .def_readwrite("NewLoc", &FClientAdjustment::NewLoc)
        .def_readwrite("NewVel", &FClientAdjustment::NewVel)
        .def_readwrite("NewBase", &FClientAdjustment::NewBase)
        .def_readwrite("NewFloor", &FClientAdjustment::NewFloor)
        .def_readwrite("bAckGoodMove", &FClientAdjustment::bAckGoodMove)
    ;

    class_< FUIProviderFieldValue >("FUIProviderFieldValue", no_init)
        .def_readwrite("CustomStringNode", &FUIProviderFieldValue::CustomStringNode)
        .def_readwrite("PropertyTag", &FUIProviderScriptFieldValue::PropertyTag)
        .def_readwrite("PropertyType", &FUIProviderScriptFieldValue::PropertyType)
        .def_readwrite("StringValue", &FUIProviderScriptFieldValue::StringValue)
        .def_readwrite("ImageValue", &FUIProviderScriptFieldValue::ImageValue)
        .def_readwrite("ArrayValue", &FUIProviderScriptFieldValue::ArrayValue)
        .def_readwrite("RangeValue", &FUIProviderScriptFieldValue::RangeValue)
        .def_readwrite("NetIdValue", &FUIProviderScriptFieldValue::NetIdValue)
        .def_readwrite("AtlasCoordinates", &FUIProviderScriptFieldValue::AtlasCoordinates)
    ;

    class_< FUIProviderScriptFieldValue >("FUIProviderScriptFieldValue", no_init)
        .def_readwrite("PropertyTag", &FUIProviderScriptFieldValue::PropertyTag)
        .def_readwrite("PropertyType", &FUIProviderScriptFieldValue::PropertyType)
        .def_readwrite("StringValue", &FUIProviderScriptFieldValue::StringValue)
        .def_readwrite("ImageValue", &FUIProviderScriptFieldValue::ImageValue)
        .def_readwrite("ArrayValue", &FUIProviderScriptFieldValue::ArrayValue)
        .def_readwrite("RangeValue", &FUIProviderScriptFieldValue::RangeValue)
        .def_readwrite("NetIdValue", &FUIProviderScriptFieldValue::NetIdValue)
        .def_readwrite("AtlasCoordinates", &FUIProviderScriptFieldValue::AtlasCoordinates)
    ;

    class_< FUIRangeData >("FUIRangeData", no_init)
        .def_readwrite("CurrentValue", &FUIRangeData::CurrentValue)
        .def_readwrite("MinValue", &FUIRangeData::MinValue)
        .def_readwrite("MaxValue", &FUIRangeData::MaxValue)
        .def_readwrite("NudgeValue", &FUIRangeData::NudgeValue)
    ;

    class_< FTextureCoordinates >("FTextureCoordinates", no_init)
        .def_readwrite("U", &FTextureCoordinates::U)
        .def_readwrite("V", &FTextureCoordinates::V)
        .def_readwrite("UL", &FTextureCoordinates::UL)
        .def_readwrite("VL", &FTextureCoordinates::VL)
    ;

    class_< FUIDataProviderField >("FUIDataProviderField", no_init)
        .def_readwrite("FieldTag", &FUIDataProviderField::FieldTag)
        .def_readwrite("FieldType", &FUIDataProviderField::FieldType)
        .def_readwrite("FieldProviders", &FUIDataProviderField::FieldProviders)
    ;

    class_< FPlayerDataStoreGroup >("FPlayerDataStoreGroup", no_init)
        .def_readwrite("PlayerOwner", &FPlayerDataStoreGroup::PlayerOwner)
        .def_readwrite("DataStores", &FPlayerDataStoreGroup::DataStores)
    ;

    class_< FUIKeyRepeatData >("FUIKeyRepeatData", no_init)
        .def_readwrite("CurrentRepeatKey", &FUIKeyRepeatData::CurrentRepeatKey)
        .def_readwrite("NextRepeatTime", &FUIKeyRepeatData::NextRepeatTime)
    ;

    class_< FUIAxisEmulationDefinition >("FUIAxisEmulationDefinition", no_init)
        .def_readwrite("AxisInputKey", &FUIAxisEmulationDefinition::AxisInputKey)
        .def_readwrite("AdjacentAxisInputKey", &FUIAxisEmulationDefinition::AdjacentAxisInputKey)
        .def_readonly("InputKeyToEmulate", &FUIAxisEmulationDefinition::InputKeyToEmulate)
    ;

    class_< FUIAxisEmulationData, bases< FUIKeyRepeatData >  >("FUIAxisEmulationData", no_init)
    ;

    class_< FKeyBind >("FKeyBind", no_init)
        .def_readwrite("Name", &FKeyBind::Name)
        .def_readwrite("Command", &FKeyBind::Command)
    ;

    class_< FWaveformSample >("FWaveformSample", no_init)
        .def_readwrite("LeftAmplitude", &FWaveformSample::LeftAmplitude)
        .def_readwrite("RightAmplitude", &FWaveformSample::RightAmplitude)
        .def_readwrite("LeftFunction", &FWaveformSample::LeftFunction)
        .def_readwrite("RightFunction", &FWaveformSample::RightFunction)
        .def_readwrite("Duration", &FWaveformSample::Duration)
    ;

    class_< FConnectedPeerInfo >("FConnectedPeerInfo", no_init)
        .def_readwrite("PlayerID", &FConnectedPeerInfo::PlayerID)
        .def_readwrite("NatType", &FConnectedPeerInfo::NatType)
    ;

    class_< FPlayerStorageArrayProvider >("FPlayerStorageArrayProvider", no_init)
        .def_readwrite("PlayerStorageId", &FPlayerStorageArrayProvider::PlayerStorageId)
        .def_readwrite("PlayerStorageName", &FPlayerStorageArrayProvider::PlayerStorageName)
        .def_readwrite("Provider", &FPlayerStorageArrayProvider::Provider)
    ;

    class_< FUIMenuInputMap >("FUIMenuInputMap", no_init)
        .def_readwrite("FieldName", &FUIMenuInputMap::FieldName)
        .def_readwrite("Set", &FUIMenuInputMap::Set)
        .def_readwrite("MappedText", &FUIMenuInputMap::MappedText)
    ;

    class_< FInputMatchRequest >("FInputMatchRequest", no_init)
        .def_readwrite("Inputs", &FInputMatchRequest::Inputs)
        .def_readwrite("MatchActor", &FInputMatchRequest::MatchActor)
        .def_readwrite("MatchFuncName", &FInputMatchRequest::MatchFuncName)
        .def_readwrite("MatchDelegate", &FInputMatchRequest::MatchDelegate)
        .def_readwrite("FailedFuncName", &FInputMatchRequest::FailedFuncName)
        .def_readwrite("RequestName", &FInputMatchRequest::RequestName)
        .def_readwrite("MatchIdx", &FInputMatchRequest::MatchIdx)
        .def_readwrite("LastMatchTime", &FInputMatchRequest::LastMatchTime)
    ;

    class_< FInputEntry >("FInputEntry", no_init)
        .def_readwrite("Type", &FInputEntry::Type)
        .def_readwrite("Value", &FInputEntry::Value)
        .def_readwrite("TimeDelta", &FInputEntry::TimeDelta)
        .def_readwrite("Action", &FInputEntry::Action)
    ;

    class_< FDebugTextInfo >("FDebugTextInfo", no_init)
        .def_readwrite("SrcActor", &FDebugTextInfo::SrcActor)
        .def_readwrite("SrcActorOffset", &FDebugTextInfo::SrcActorOffset)
        .def_readwrite("SrcActorDesiredOffset", &FDebugTextInfo::SrcActorDesiredOffset)
        .def_readwrite("DebugText", &FDebugTextInfo::DebugText)
        .def_readwrite("TimeRemaining", &FDebugTextInfo::TimeRemaining)
        .def_readwrite("Duration", &FDebugTextInfo::Duration)
        .def_readwrite("TextColor", &FDebugTextInfo::TextColor)
        .def_readwrite("OrigActorLocation", &FDebugTextInfo::OrigActorLocation)
        .def_readwrite("Font", &FDebugTextInfo::Font)
    ;

    class_< FAudioEQEffect >("FAudioEQEffect", no_init)
        .def_readwrite("RootTime", &FAudioEQEffect::RootTime)
        .def_readwrite("HFFrequency", &FAudioEQEffect::HFFrequency)
        .def_readwrite("HFGain", &FAudioEQEffect::HFGain)
        .def_readwrite("MFCutoffFrequency", &FAudioEQEffect::MFCutoffFrequency)
        .def_readwrite("MFBandwidth", &FAudioEQEffect::MFBandwidth)
        .def_readwrite("MFGain", &FAudioEQEffect::MFGain)
        .def_readwrite("LFFrequency", &FAudioEQEffect::LFFrequency)
        .def_readwrite("LFGain", &FAudioEQEffect::LFGain)
    ;

    class_< FSoundClassAdjuster >("FSoundClassAdjuster", no_init)
        .def_readwrite("SoundClassName", &FSoundClassAdjuster::SoundClassName)
        .def_readwrite("SoundClass", &FSoundClassAdjuster::SoundClass)
        .def_readwrite("VolumeAdjuster", &FSoundClassAdjuster::VolumeAdjuster)
        .def_readwrite("PitchAdjuster", &FSoundClassAdjuster::PitchAdjuster)
        .def_readwrite("VoiceCenterChannelVolumeAdjuster", &FSoundClassAdjuster::VoiceCenterChannelVolumeAdjuster)
    ;

    class_< FAutoCompleteCommand >("FAutoCompleteCommand", no_init)
        .def_readwrite("Command", &FAutoCompleteCommand::Command)
        .def_readwrite("Desc", &FAutoCompleteCommand::Desc)
    ;

    class_< FAutoCompleteNode >("FAutoCompleteNode", no_init)
        .def_readwrite("IndexChar", &FAutoCompleteNode::IndexChar)
        .def_readwrite("AutoCompleteListIndices", &FAutoCompleteNode::AutoCompleteListIndices)
        .def_readwrite("ChildNodes", &FAutoCompleteNode::ChildNodes)
    ;

    class_< FTitleSafeZoneArea >("FTitleSafeZoneArea", no_init)
        .def_readwrite("MaxPercentX", &FTitleSafeZoneArea::MaxPercentX)
        .def_readwrite("MaxPercentY", &FTitleSafeZoneArea::MaxPercentY)
        .def_readwrite("RecommendedPercentX", &FTitleSafeZoneArea::RecommendedPercentX)
        .def_readwrite("RecommendedPercentY", &FTitleSafeZoneArea::RecommendedPercentY)
    ;

    class_< FSplitscreenData >("FSplitscreenData", no_init)
        .def_readwrite("PlayerData", &FSplitscreenData::PlayerData)
    ;

    class_< FPerPlayerSplitscreenData >("FPerPlayerSplitscreenData", no_init)
        .def_readwrite("SizeX", &FPerPlayerSplitscreenData::SizeX)
        .def_readwrite("SizeY", &FPerPlayerSplitscreenData::SizeY)
        .def_readwrite("OriginX", &FPerPlayerSplitscreenData::OriginX)
        .def_readwrite("OriginY", &FPerPlayerSplitscreenData::OriginY)
    ;

    class_< FDebugDisplayProperty >("FDebugDisplayProperty", no_init)
        .def_readwrite("Obj", &FDebugDisplayProperty::Obj)
        .def_readwrite("PropertyName", &FDebugDisplayProperty::PropertyName)
    ;

    class_< FSynchronizedActorVisibilityHistory >("FSynchronizedActorVisibilityHistory", no_init)
        .def_readwrite("State", &FSynchronizedActorVisibilityHistory::State)
        .def_readwrite("CriticalSection", &FSynchronizedActorVisibilityHistory::CriticalSection)
    ;

    class_< FCurrentPostProcessVolumeInfo >("FCurrentPostProcessVolumeInfo", no_init)
        .def_readwrite("LastSettings", &FCurrentPostProcessVolumeInfo::LastSettings)
        .def_readwrite("LastVolumeUsed", &FCurrentPostProcessVolumeInfo::LastVolumeUsed)
        .def_readwrite("BlendStartTime", &FCurrentPostProcessVolumeInfo::BlendStartTime)
        .def_readwrite("LastBlendTime", &FCurrentPostProcessVolumeInfo::LastBlendTime)
    ;

    class_< FPostProcessSettingsOverride >("FPostProcessSettingsOverride", no_init)
        .def_readwrite("Settings", &FPostProcessSettingsOverride::Settings)
        .def_readwrite("CurrentBlendInTime", &FPostProcessSettingsOverride::CurrentBlendInTime)
        .def_readwrite("CurrentBlendOutTime", &FPostProcessSettingsOverride::CurrentBlendOutTime)
        .def_readwrite("BlendInDuration", &FPostProcessSettingsOverride::BlendInDuration)
        .def_readwrite("BlendOutDuration", &FPostProcessSettingsOverride::BlendOutDuration)
        .def_readwrite("BlendStartTime", &FPostProcessSettingsOverride::BlendStartTime)
    ;

    class_< FWorldLightingOverride >("FWorldLightingOverride", no_init)
        .def_readwrite("DirectionOffset", &FWorldLightingOverride::DirectionOffset)
        .def_readwrite("FadeInTime", &FWorldLightingOverride::FadeInTime)
        .def_readwrite("FadeOutTime", &FWorldLightingOverride::FadeOutTime)
        .def_readwrite("RemainingFadeTime", &FWorldLightingOverride::RemainingFadeTime)
        .def_readwrite("pMovie", &FWorldLightingOverride::pMovie)
    ;

    class_< FExpressionInput >("FExpressionInput", no_init)
        .def_readwrite("Expression", &FExpressionInput::Expression)
        .def_readwrite("Mask", &FExpressionInput::Mask)
        .def_readwrite("MaskR", &FExpressionInput::MaskR)
        .def_readwrite("MaskG", &FExpressionInput::MaskG)
        .def_readwrite("MaskB", &FExpressionInput::MaskB)
        .def_readwrite("MaskA", &FExpressionInput::MaskA)
        .def_readwrite("GCC64_Padding", &FExpressionInput::GCC64_Padding)
    ;

    class_< FGameStageGradeWeightData >("FGameStageGradeWeightData", no_init)
        .def_readwrite("GameStageRequirement", &FGameStageGradeWeightData::GameStageRequirement)
        .def_readwrite("MinSpawnProbabilityModifier", &FGameStageGradeWeightData::MinSpawnProbabilityModifier)
        .def_readwrite("MaxSpawnProbabilityModifier", &FGameStageGradeWeightData::MaxSpawnProbabilityModifier)
    ;

    class_< FGameStageRangeData >("FGameStageRangeData", no_init)
        .def_readwrite("MinGameStage", &FGameStageRangeData::MinGameStage)
        .def_readwrite("MaxGameStage", &FGameStageRangeData::MaxGameStage)
    ;

    class_< FGBXNavMeshPath >("FGBXNavMeshPath", no_init)
        .def_readwrite("PathPoints", &FGBXNavMeshPath::PathPoints)
        .def_readwrite("CurrentPathIdx", &FGBXNavMeshPath::CurrentPathIdx)
    ;

    class_< FGBXNavMeshPathPoint >("FGBXNavMeshPathPoint", no_init)
        .def_readwrite("Poly", &FGBXNavMeshPathPoint::Poly)
        .def_readwrite("Location", &FGBXNavMeshPathPoint::Location)
        .def_readwrite("SpecialMoveId", &FGBXNavMeshPathPoint::SpecialMoveId)
        .def_readwrite("NextPathObjectDistance", &FGBXNavMeshPathPoint::NextPathObjectDistance)
        .def_readwrite("CrossedObstacles", &FGBXNavMeshPathPoint::CrossedObstacles)
    ;

    class_< FGBXNavMeshPolyRef >("FGBXNavMeshPolyRef", no_init)
        .def_readwrite("NavMesh", &FGBXNavMeshPolyRef::NavMesh)
        .def_readwrite("PolyIdx", &FGBXNavMeshPolyRef::PolyIdx)
    ;

    class_< FIGBXNavMeshObstaclePointer >("FIGBXNavMeshObstaclePointer", no_init)
        .def_readwrite("Dummy", &FIGBXNavMeshObstaclePointer::Dummy)
    ;

    class_< FAttributeEffectData >("FAttributeEffectData", no_init)
        .def_readwrite("AttributeToModify", &FAttributeEffectData::AttributeToModify)
        .def_readwrite("ModifierType", &FAttributeEffectData::ModifierType)
        .def_readwrite("BaseModifierValue", &FAttributeEffectData::BaseModifierValue)
    ;

    class_< FAttributePriorityData >("FAttributePriorityData", no_init)
        .def_readwrite("Attribute", &FAttributePriorityData::Attribute)
        .def_readwrite("PriorityIncrease", &FAttributePriorityData::PriorityIncrease)
    ;

    class_< FManufacturerCustomGradeWeightData >("FManufacturerCustomGradeWeightData", no_init)
        .def_readwrite("Manufacturer", &FManufacturerCustomGradeWeightData::Manufacturer)
        .def_readwrite("DefaultWeightIndex", &FManufacturerCustomGradeWeightData::DefaultWeightIndex)
    ;

    class_< FDlcContentId >("FDlcContentId", no_init)
        .def_readwrite("PackageId", &FDlcContentId::PackageId)
        .def_readwrite("ContentId", &FDlcContentId::ContentId)
    ;

    class_< FAttributeBaseValueData >("FAttributeBaseValueData", no_init)
        .def_readwrite("Attribute", &FAttributeBaseValueData::Attribute)
        .def_readwrite("BaseValue", &FAttributeBaseValueData::BaseValue)
    ;

    class_< FSoundEventMapping >("FSoundEventMapping", no_init)
        .def_readwrite("SoundEventName", &FSoundEventMapping::SoundEventName)
        .def_readwrite("SoundToPlay", &FSoundEventMapping::SoundToPlay)
    ;

    class_< FUIDataStoreBinding >("FUIDataStoreBinding", no_init)
        .def_readwrite("Subscriber", &FUIDataStoreBinding::Subscriber)
        .def_readonly("UnknownData00", &FUIDataStoreBinding::UnknownData00)
        .def_readwrite("RequiredFieldType", &FUIDataStoreBinding::RequiredFieldType)
        .def_readwrite("MarkupString", &FUIDataStoreBinding::MarkupString)
        .def_readwrite("BindingIndex", &FUIDataStoreBinding::BindingIndex)
        .def_readwrite("DataStoreName", &FUIDataStoreBinding::DataStoreName)
        .def_readwrite("DataStoreField", &FUIDataStoreBinding::DataStoreField)
        .def_readwrite("ResolvedDataStore", &FUIDataStoreBinding::ResolvedDataStore)
    ;

    class_< FBodyCompositionData >("FBodyCompositionData", no_init)
        .def_readwrite("Attachments", &FBodyCompositionData::Attachments)
        .def_readwrite("MaxExpectedComponents", &FBodyCompositionData::MaxExpectedComponents)
    ;

    class_< FBodyInstanceDataUnion >("FBodyInstanceDataUnion", no_init)
        .def_readwrite("Data", &FBodyInstanceDataUnion::Data)
        .def_readwrite("ParentAttachmentIdentifier", &FBodyInstanceDataUnion::ParentAttachmentIdentifier)
        .def_readwrite("AttachmentBaseInstanceDataIndex", &FBodyInstanceDataUnion::AttachmentBaseInstanceDataIndex)
        .def_readwrite("SwitchIdentifier", &FBodyInstanceDataUnion::SwitchIdentifier)
    ;

    class_< FLightmassPointLightSettings >("FLightmassPointLightSettings", no_init)
        .def_readwrite("LightSourceRadius", &FLightmassPointLightSettings::LightSourceRadius)
        .def_readwrite("IndirectLightingScale", &FLightmassLightSettings::IndirectLightingScale)
        .def_readwrite("IndirectLightingSaturation", &FLightmassLightSettings::IndirectLightingSaturation)
        .def_readwrite("ShadowExponent", &FLightmassLightSettings::ShadowExponent)
    ;

    class_< FLightmassLightSettings >("FLightmassLightSettings", no_init)
        .def_readwrite("IndirectLightingScale", &FLightmassLightSettings::IndirectLightingScale)
        .def_readwrite("IndirectLightingSaturation", &FLightmassLightSettings::IndirectLightingSaturation)
        .def_readwrite("ShadowExponent", &FLightmassLightSettings::ShadowExponent)
    ;

    class_< FInstanceDataSet >("FInstanceDataSet", no_init)
        .def_readwrite("Data", &FInstanceDataSet::Data)
    ;

    class_< FReplicatedInstanceDataState >("FReplicatedInstanceDataState", no_init)
        .def_readwrite("SwitchStateBitField", &FReplicatedInstanceDataState::SwitchStateBitField)
        .def_readwrite("ActiveSwitchValues", &FReplicatedInstanceDataState::ActiveSwitchValues)
        .def_readwrite("RemovedBodyCompositionPartsBitField", &FReplicatedInstanceDataState::RemovedBodyCompositionPartsBitField)
    ;

    class_< FSearchState >("FSearchState", no_init)
        .def_readwrite("Subject", &FSearchState::Subject)
        .def_readonly("UnknownData00", &FSearchState::UnknownData00)
        .def_readwrite("Type", &FSearchState::Type)
        .def_readwrite("ListIndex", &FSearchState::ListIndex)
        .def_readwrite("CurrentList", &FSearchState::CurrentList)
    ;

    class_< FPlayerOwnedComponent >("FPlayerOwnedComponent", no_init)
        .def_readwrite("PlayerOwner", &FPlayerOwnedComponent::PlayerOwner)
        .def_readwrite("Component", &FPlayerOwnedComponent::Component)
    ;

    class_< FAkCallBackGetRTPC >("FAkCallBackGetRTPC", no_init)
        .def_readwrite("RTPC", &FAkCallBackGetRTPC::RTPC)
        .def_readwrite("Owner", &FAkCallBackGetRTPC::Owner)
        .def_readwrite("Component", &FAkCallBackGetRTPC::Component)
        .def_readwrite("CallbackValue", &FAkCallBackGetRTPC::CallbackValue)
    ;

    class_< FLightmassDirectionalLightSettings, bases< FLightmassLightSettings >  >("FLightmassDirectionalLightSettings", no_init)
        .def_readwrite("LightSourceAngle", &FLightmassDirectionalLightSettings::LightSourceAngle)
    ;

    class_< FDominantShadowInfo >("FDominantShadowInfo", no_init)
        .def_readwrite("WorldToLight", &FDominantShadowInfo::WorldToLight)
        .def_readwrite("LightToWorld", &FDominantShadowInfo::LightToWorld)
        .def_readwrite("LightSpaceImportanceBounds", &FDominantShadowInfo::LightSpaceImportanceBounds)
        .def_readwrite("ShadowMapSizeX", &FDominantShadowInfo::ShadowMapSizeX)
        .def_readwrite("ShadowMapSizeY", &FDominantShadowInfo::ShadowMapSizeY)
    ;

    class_< FReplicatedCoordinatedEffect >("FReplicatedCoordinatedEffect", no_init)
        .def_readwrite("Effects", &FReplicatedCoordinatedEffect::Effects)
        .def_readwrite("Targets", &FReplicatedCoordinatedEffect::Targets)
    ;

    class_< FCounterBehaviorUserState >("FCounterBehaviorUserState", no_init)
        .def_readonly("Counters", &FCounterBehaviorUserState::Counters)
    ;

    class_< FBehaviorCounterState >("FBehaviorCounterState", no_init)
        .def_readwrite("CurrentValue", &FBehaviorCounterState::CurrentValue)
        .def_readwrite("Target", &FBehaviorCounterState::Target)
    ;

    class_< FSplineConnection >("FSplineConnection", no_init)
        .def_readwrite("SplineComponent", &FSplineConnection::SplineComponent)
        .def_readwrite("ConnectTo", &FSplineConnection::ConnectTo)
    ;

    class_< FSkelMeshActorControlTarget >("FSkelMeshActorControlTarget", no_init)
        .def_readwrite("ControlName", &FSkelMeshActorControlTarget::ControlName)
        .def_readwrite("TargetActor", &FSkelMeshActorControlTarget::TargetActor)
    ;

    class_< ASkeletalMeshActor_FCheckpointRecord >("ASkeletalMeshActor_FCheckpointRecord", no_init)
        .def_readwrite("Location", &ASkeletalMeshActor_FCheckpointRecord::Location)
        .def_readwrite("Rotation", &ASkeletalMeshActor_FCheckpointRecord::Rotation)
    ;

    class_< FGameSearchCfg >("FGameSearchCfg", no_init)
        .def_readwrite("GameSearchClass", &FGameSearchCfg::GameSearchClass)
        .def_readwrite("DefaultGameSettingsClass", &FGameSearchCfg::DefaultGameSettingsClass)
        .def_readwrite("SearchResultsProviderClass", &FGameSearchCfg::SearchResultsProviderClass)
        .def_readwrite("DesiredSettingsProvider", &FGameSearchCfg::DesiredSettingsProvider)
        .def_readwrite("SearchResults", &FGameSearchCfg::SearchResults)
        .def_readwrite("Search", &FGameSearchCfg::Search)
        .def_readwrite("SearchName", &FGameSearchCfg::SearchName)
    ;

    class_< FSettingsArrayProvider >("FSettingsArrayProvider", no_init)
        .def_readwrite("SettingsId", &FSettingsArrayProvider::SettingsId)
        .def_readwrite("SettingsName", &FSettingsArrayProvider::SettingsName)
        .def_readwrite("Provider", &FSettingsArrayProvider::Provider)
    ;

    class_< FGameSettingsCfg >("FGameSettingsCfg", no_init)
        .def_readwrite("GameSettingsClass", &FGameSettingsCfg::GameSettingsClass)
        .def_readwrite("Provider", &FGameSettingsCfg::Provider)
        .def_readwrite("GameSettings", &FGameSettingsCfg::GameSettings)
        .def_readwrite("SettingsName", &FGameSettingsCfg::SettingsName)
    ;

    class_< FAimOffsetProfile >("FAimOffsetProfile", no_init)
        .def_readwrite("ProfileName", &FAimOffsetProfile::ProfileName)
        .def_readwrite("HorizontalRange", &FAimOffsetProfile::HorizontalRange)
        .def_readwrite("VerticalRange", &FAimOffsetProfile::VerticalRange)
        .def_readwrite("AimComponents", &FAimOffsetProfile::AimComponents)
        .def_readwrite("AimTransformsCache", &FAimOffsetProfile::AimTransformsCache)
        .def_readwrite("AnimName_LU", &FAimOffsetProfile::AnimName_LU)
        .def_readwrite("AnimName_LC", &FAimOffsetProfile::AnimName_LC)
        .def_readwrite("AnimName_LD", &FAimOffsetProfile::AnimName_LD)
        .def_readwrite("AnimName_CU", &FAimOffsetProfile::AnimName_CU)
        .def_readwrite("AnimName_CC", &FAimOffsetProfile::AnimName_CC)
        .def_readwrite("AnimName_CD", &FAimOffsetProfile::AnimName_CD)
        .def_readwrite("AnimName_RU", &FAimOffsetProfile::AnimName_RU)
        .def_readwrite("AnimName_RC", &FAimOffsetProfile::AnimName_RC)
        .def_readwrite("AnimName_RD", &FAimOffsetProfile::AnimName_RD)
    ;

    class_< FAimComponent >("FAimComponent", no_init)
        .def_readwrite("BoneName", &FAimComponent::BoneName)
        .def_readonly("UnknownData00", &FAimComponent::UnknownData00)
        .def_readwrite("LU", &FAimComponent::LU)
        .def_readwrite("LC", &FAimComponent::LC)
        .def_readwrite("LD", &FAimComponent::LD)
        .def_readwrite("CU", &FAimComponent::CU)
        .def_readwrite("CC", &FAimComponent::CC)
        .def_readwrite("CD", &FAimComponent::CD)
        .def_readwrite("RU", &FAimComponent::RU)
        .def_readwrite("RC", &FAimComponent::RC)
        .def_readwrite("RD", &FAimComponent::RD)
    ;

    class_< FAimTransform >("FAimTransform", no_init)
        .def_readwrite("Quaternion", &FAimTransform::Quaternion)
        .def_readwrite("Translation", &FAimTransform::Translation)
    ;

    class_< FPersistentSequenceEventData >("FPersistentSequenceEventData", no_init)
        .def_readwrite("TriggerCount", &FPersistentSequenceEventData::TriggerCount)
        .def_readwrite("VfTable", &FPersistentData::VfTable)
    ;

    class_< FPersistentData >("FPersistentData", no_init)
        .def_readwrite("VfTable", &FPersistentData::VfTable)
    ;

    class_< FPersistentSeqAct_InterpData, bases< FPersistentData >  >("FPersistentSeqAct_InterpData", no_init)
        .def_readwrite("Position", &FPersistentSeqAct_InterpData::Position)
    ;

    class_< FWeightmapLayerAllocationInfo >("FWeightmapLayerAllocationInfo", no_init)
        .def_readwrite("LayerName", &FWeightmapLayerAllocationInfo::LayerName)
        .def_readwrite("WeightmapTextureIndex", &FWeightmapLayerAllocationInfo::WeightmapTextureIndex)
        .def_readwrite("WeightmapTextureChannel", &FWeightmapLayerAllocationInfo::WeightmapTextureChannel)
    ;

    class_< FSelectedTerrainVertex >("FSelectedTerrainVertex", no_init)
        .def_readwrite("X", &FSelectedTerrainVertex::X)
        .def_readwrite("Y", &FSelectedTerrainVertex::Y)
        .def_readwrite("Weight", &FSelectedTerrainVertex::Weight)
    ;

    class_< FSwitchObjectCase >("FSwitchObjectCase", no_init)
        .def_readwrite("ObjectValue", &FSwitchObjectCase::ObjectValue)
    ;

    class_< FSwitchClassInfo >("FSwitchClassInfo", no_init)
        .def_readwrite("ClassName", &FSwitchClassInfo::ClassName)
        .def_readwrite("bFallThru", &FSwitchClassInfo::bFallThru)
    ;

    class_< FLevelStreamingNameCombo >("FLevelStreamingNameCombo", no_init)
        .def_readwrite("Level", &FLevelStreamingNameCombo::Level)
        .def_readwrite("LevelName", &FLevelStreamingNameCombo::LevelName)
    ;

    class_< FGPMCollection >("FGPMCollection", no_init)
        .def_readwrite("CollectionData", &FGPMCollection::CollectionData)
    ;

    class_< FParticleRandomSeedInfo >("FParticleRandomSeedInfo", no_init)
        .def_readwrite("ParameterName", &FParticleRandomSeedInfo::ParameterName)
        .def_readwrite("RandomSeeds", &FParticleRandomSeedInfo::RandomSeeds)
    ;

    class_< FBeamModifierOptions >("FBeamModifierOptions", no_init)
    ;

    class_< APointLightToggleable_FCheckpointRecord >("APointLightToggleable_FCheckpointRecord", no_init)
    ;

    class_< ASpotLightToggleable_FCheckpointRecord >("ASpotLightToggleable_FCheckpointRecord", no_init)
    ;

    class_< FRecentParty >("FRecentParty", no_init)
        .def_readwrite("PartyLeader", &FRecentParty::PartyLeader)
        .def_readwrite("PartyMembers", &FRecentParty::PartyMembers)
    ;

    class_< FCurrentPlayerMet >("FCurrentPlayerMet", no_init)
        .def_readwrite("TeamNum", &FCurrentPlayerMet::TeamNum)
        .def_readwrite("Skill", &FCurrentPlayerMet::Skill)
        .def_readwrite("NetId", &FCurrentPlayerMet::NetId)
    ;

    class_< FRandomAnimInfo >("FRandomAnimInfo", no_init)
        .def_readwrite("Chance", &FRandomAnimInfo::Chance)
        .def_readwrite("LoopCountMin", &FRandomAnimInfo::LoopCountMin)
        .def_readwrite("LoopCountMax", &FRandomAnimInfo::LoopCountMax)
        .def_readwrite("BlendInTime", &FRandomAnimInfo::BlendInTime)
        .def_readwrite("PlayRateRange", &FRandomAnimInfo::PlayRateRange)
        .def_readwrite("LoopCount", &FRandomAnimInfo::LoopCount)
        .def_readwrite("LastPosition", &FRandomAnimInfo::LastPosition)
    ;

    class_< FAnimBlendInfo >("FAnimBlendInfo", no_init)
        .def_readwrite("AnimName", &FAnimBlendInfo::AnimName)
        .def_readwrite("AnimInfo", &FAnimBlendInfo::AnimInfo)
        .def_readwrite("Weight", &FAnimBlendInfo::Weight)
    ;

    class_< FAnimInfo >("FAnimInfo", no_init)
        .def_readwrite("AnimSeqName", &FAnimInfo::AnimSeqName)
        .def_readwrite("AnimSeq", &FAnimInfo::AnimSeq)
        .def_readwrite("AnimLinkupIndex", &FAnimInfo::AnimLinkupIndex)
    ;

    class_< FPreviewSocketStruct >("FPreviewSocketStruct", no_init)
        .def_readwrite("DisplayName", &FPreviewSocketStruct::DisplayName)
        .def_readwrite("SocketName", &FPreviewSocketStruct::SocketName)
        .def_readwrite("PreviewSkelMesh", &FPreviewSocketStruct::PreviewSkelMesh)
        .def_readwrite("PreviewStaticMesh", &FPreviewSocketStruct::PreviewStaticMesh)
    ;

    class_< FPlayerNickMetaData >("FPlayerNickMetaData", no_init)
        .def_readwrite("PlayerNickName", &FPlayerNickMetaData::PlayerNickName)
        .def_readwrite("PlayerNickColumnName", &FPlayerNickMetaData::PlayerNickColumnName)
    ;

    class_< FRankMetaData >("FRankMetaData", no_init)
        .def_readwrite("RankName", &FRankMetaData::RankName)
        .def_readwrite("RankColumnName", &FRankMetaData::RankColumnName)
    ;

    class_< FAlphaMap >("FAlphaMap", no_init)
    ;

    class_< FTerrainBVTree >("FTerrainBVTree", no_init)
        .def_readwrite("Nodes", &FTerrainBVTree::Nodes)
    ;

    class_< FNamedOnlineContent, bases< FOnlineContent >  >("FNamedOnlineContent", no_init)
        .def_readwrite("NameInfo", &FNamedOnlineContent::NameInfo)
        .def_readwrite("NamedContentType", &FNamedOnlineContent::NamedContentType)
    ;

    class_< FOnlineContentNameInfo >("FOnlineContentNameInfo", no_init)
        .def_readwrite("ContentName", &FOnlineContentNameInfo::ContentName)
        .def_readwrite("EngineVersion", &FOnlineContentNameInfo::EngineVersion)
        .def_readwrite("CookedVersionID", &FOnlineContentNameInfo::CookedVersionID)
    ;

    class_< FCompatibilityOnlineContent >("FCompatibilityOnlineContent", no_init)
        .def_readwrite("VersionNumber", &FCompatibilityOnlineContent::VersionNumber)
        .def_readwrite("Container", &FCompatibilityOnlineContent::Container)
        .def_readwrite("Content", &FCompatibilityOnlineContent::Content)
    ;

    class_< FSubscribedInputEventParameters >("FSubscribedInputEventParameters", no_init)
        .def_readwrite("InputAliasName", &FSubscribedInputEventParameters::InputAliasName)
        .def_readwrite("PlayerIndex", &FInputEventParameters::PlayerIndex)
        .def_readwrite("ControllerId", &FInputEventParameters::ControllerId)
        .def_readwrite("InputKeyName", &FInputEventParameters::InputKeyName)
        .def_readwrite("EventType", &FInputEventParameters::EventType)
        .def_readwrite("InputDelta", &FInputEventParameters::InputDelta)
        .def_readwrite("DeltaTime", &FInputEventParameters::DeltaTime)
    ;

    class_< FInputEventParameters >("FInputEventParameters", no_init)
        .def_readwrite("PlayerIndex", &FInputEventParameters::PlayerIndex)
        .def_readwrite("ControllerId", &FInputEventParameters::ControllerId)
        .def_readwrite("InputKeyName", &FInputEventParameters::InputKeyName)
        .def_readwrite("EventType", &FInputEventParameters::EventType)
        .def_readwrite("InputDelta", &FInputEventParameters::InputDelta)
        .def_readwrite("DeltaTime", &FInputEventParameters::DeltaTime)
    ;

    class_< FTerrainHeight >("FTerrainHeight", no_init)
    ;

    class_< FTerrainInfoData >("FTerrainInfoData", no_init)
    ;

    class_< FTerrainLayer >("FTerrainLayer", no_init)
        .def_readwrite("Name", &FTerrainLayer::Name)
        .def_readwrite("Setup", &FTerrainLayer::Setup)
        .def_readwrite("AlphaMapIndex", &FTerrainLayer::AlphaMapIndex)
        .def_readwrite("HighlightColor", &FTerrainLayer::HighlightColor)
        .def_readwrite("WireframeColor", &FTerrainLayer::WireframeColor)
    ;

    class_< FTerrainFilteredMaterial >("FTerrainFilteredMaterial", no_init)
        .def_readwrite("NoiseScale", &FTerrainFilteredMaterial::NoiseScale)
        .def_readwrite("NoisePercent", &FTerrainFilteredMaterial::NoisePercent)
        .def_readwrite("MinHeight", &FTerrainFilteredMaterial::MinHeight)
        .def_readwrite("MaxHeight", &FTerrainFilteredMaterial::MaxHeight)
        .def_readwrite("MinSlope", &FTerrainFilteredMaterial::MinSlope)
        .def_readwrite("MaxSlope", &FTerrainFilteredMaterial::MaxSlope)
        .def_readwrite("Alpha", &FTerrainFilteredMaterial::Alpha)
        .def_readwrite("Material", &FTerrainFilteredMaterial::Material)
    ;

    class_< FFilterLimit >("FFilterLimit", no_init)
        .def_readwrite("Base", &FFilterLimit::Base)
        .def_readwrite("NoiseScale", &FFilterLimit::NoiseScale)
        .def_readwrite("NoiseAmount", &FFilterLimit::NoiseAmount)
    ;

    class_< FTerrainFoliageMesh >("FTerrainFoliageMesh", no_init)
        .def_readwrite("StaticMesh", &FTerrainFoliageMesh::StaticMesh)
        .def_readwrite("Material", &FTerrainFoliageMesh::Material)
        .def_readwrite("Density", &FTerrainFoliageMesh::Density)
        .def_readwrite("MaxDrawRadius", &FTerrainFoliageMesh::MaxDrawRadius)
        .def_readwrite("MinTransitionRadius", &FTerrainFoliageMesh::MinTransitionRadius)
        .def_readwrite("MinScale", &FTerrainFoliageMesh::MinScale)
        .def_readwrite("MaxScale", &FTerrainFoliageMesh::MaxScale)
        .def_readwrite("MinUniformScale", &FTerrainFoliageMesh::MinUniformScale)
        .def_readwrite("MaxUniformScale", &FTerrainFoliageMesh::MaxUniformScale)
        .def_readwrite("MinThinningRadius", &FTerrainFoliageMesh::MinThinningRadius)
        .def_readwrite("Seed", &FTerrainFoliageMesh::Seed)
        .def_readwrite("SwayScale", &FTerrainFoliageMesh::SwayScale)
        .def_readwrite("AlphaMapThreshold", &FTerrainFoliageMesh::AlphaMapThreshold)
        .def_readwrite("SlopeRotationBlend", &FTerrainFoliageMesh::SlopeRotationBlend)
    ;

    class_< FTerrainDecoLayer >("FTerrainDecoLayer", no_init)
        .def_readwrite("Name", &FTerrainDecoLayer::Name)
        .def_readwrite("Decorations", &FTerrainDecoLayer::Decorations)
        .def_readwrite("AlphaMapIndex", &FTerrainDecoLayer::AlphaMapIndex)
    ;

    class_< FTerrainDecoration >("FTerrainDecoration", no_init)
        .def_readwrite("Factory", &FTerrainDecoration::Factory)
        .def_readwrite("MinScale", &FTerrainDecoration::MinScale)
        .def_readwrite("MaxScale", &FTerrainDecoration::MaxScale)
        .def_readwrite("Density", &FTerrainDecoration::Density)
        .def_readwrite("SlopeRotationBlend", &FTerrainDecoration::SlopeRotationBlend)
        .def_readwrite("RandSeed", &FTerrainDecoration::RandSeed)
        .def_readwrite("Instances", &FTerrainDecoration::Instances)
    ;

    class_< FTerrainDecorationInstance >("FTerrainDecorationInstance", no_init)
        .def_readwrite("Component", &FTerrainDecorationInstance::Component)
        .def_readwrite("X", &FTerrainDecorationInstance::X)
        .def_readwrite("Y", &FTerrainDecorationInstance::Y)
        .def_readwrite("Scale", &FTerrainDecorationInstance::Scale)
        .def_readwrite("Yaw", &FTerrainDecorationInstance::Yaw)
    ;

    class_< ATerrain_FTerrainWeightedMaterial >("ATerrain_FTerrainWeightedMaterial", no_init)
    ;

    class_< FCachedTerrainMaterialArray >("FCachedTerrainMaterialArray", no_init)
        .def_readwrite("CachedMaterials", &FCachedTerrainMaterialArray::CachedMaterials)
    ;

    class_< FMarketplaceOffer >("FMarketplaceOffer", no_init)
        .def_readwrite("OfferId", &FMarketplaceOffer::OfferId)
        .def_readwrite("ContentCategory", &FMarketplaceOffer::ContentCategory)
        .def_readwrite("OfferName", &FMarketplaceOffer::OfferName)
        .def_readwrite("ContentId", &FMarketplaceOffer::ContentId)
        .def_readwrite("LicenseMask", &FMarketplaceOffer::LicenseMask)
    ;

    class_< FInstalledContentInfo >("FInstalledContentInfo", no_init)
        .def_readwrite("ContentType", &FInstalledContentInfo::ContentType)
        .def_readwrite("ContentName", &FInstalledContentInfo::ContentName)
        .def_readwrite("ContentPath", &FInstalledContentInfo::ContentPath)
        .def_readwrite("Filename", &FInstalledContentInfo::Filename)
        .def_readwrite("DeviceID", &FInstalledContentInfo::DeviceID)
        .def_readwrite("LicenseMask", &FInstalledContentInfo::LicenseMask)
        .def_readwrite("CachedAppIdInfo", &FInstalledContentInfo::CachedAppIdInfo)
    ;

    class_< FRejectedContentInfo, bases< FInstalledContentInfo >  >("FRejectedContentInfo", no_init)
        .def_readwrite("Result", &FRejectedContentInfo::Result)
    ;

    class_< FStatColorMapping >("FStatColorMapping", no_init)
        .def_readwrite("StatName", &FStatColorMapping::StatName)
        .def_readwrite("ColorMap", &FStatColorMapping::ColorMap)
    ;

    class_< FStatColorMapEntry >("FStatColorMapEntry", no_init)
        .def_readwrite("In", &FStatColorMapEntry::In)
        .def_readwrite("Out", &FStatColorMapEntry::Out)
    ;

    class_< FDamagePair >("FDamagePair", no_init)
        .def_readwrite("DamageCauserName", &FDamagePair::DamageCauserName)
        .def_readwrite("Params", &FDamagePair::Params)
    ;

    class_< FDamageParameters >("FDamageParameters", no_init)
        .def_readwrite("OverrideMode", &FDamageParameters::OverrideMode)
        .def_readwrite("BaseDamage", &FDamageParameters::BaseDamage)
        .def_readwrite("Radius", &FDamageParameters::Radius)
        .def_readwrite("Momentum", &FDamageParameters::Momentum)
    ;

    class_< FDropNoteInfo >("FDropNoteInfo", no_init)
        .def_readwrite("Location", &FDropNoteInfo::Location)
        .def_readwrite("Rotation", &FDropNoteInfo::Rotation)
        .def_readwrite("Comment", &FDropNoteInfo::Comment)
    ;

    class_< FListener >("FListener", no_init)
        .def_readwrite("PortalVolume", &FListener::PortalVolume)
        .def_readwrite("Location", &FListener::Location)
        .def_readwrite("Up", &FListener::Up)
        .def_readwrite("Right", &FListener::Right)
        .def_readwrite("Front", &FListener::Front)
    ;

    class_< FSoundClassProperties >("FSoundClassProperties", no_init)
        .def_readwrite("Volume", &FSoundClassProperties::Volume)
        .def_readwrite("Pitch", &FSoundClassProperties::Pitch)
        .def_readwrite("StereoBleed", &FSoundClassProperties::StereoBleed)
        .def_readwrite("LFEBleed", &FSoundClassProperties::LFEBleed)
        .def_readwrite("VoiceCenterChannelVolume", &FSoundClassProperties::VoiceCenterChannelVolume)
        .def_readwrite("RadioFilterVolume", &FSoundClassProperties::RadioFilterVolume)
        .def_readwrite("RadioFilterVolumeThreshold", &FSoundClassProperties::RadioFilterVolumeThreshold)
    ;

    class_< FURL >("FURL", no_init)
        .def_readwrite("Protocol", &FURL::Protocol)
        .def_readwrite("Host", &FURL::Host)
        .def_readwrite("Port", &FURL::Port)
        .def_readwrite("Map", &FURL::Map)
        .def_readwrite("Op", &FURL::Op)
        .def_readwrite("Portal", &FURL::Portal)
        .def_readwrite("Valid", &FURL::Valid)
    ;

    class_< FLevelStreamingStatus >("FLevelStreamingStatus", no_init)
        .def_readwrite("PackageName", &FLevelStreamingStatus::PackageName)
    ;

    class_< FFullyLoadedPackagesInfo >("FFullyLoadedPackagesInfo", no_init)
        .def_readwrite("FullyLoadType", &FFullyLoadedPackagesInfo::FullyLoadType)
        .def_readwrite("Tag", &FFullyLoadedPackagesInfo::Tag)
        .def_readwrite("PackagesToLoad", &FFullyLoadedPackagesInfo::PackagesToLoad)
        .def_readwrite("LoadedObjects", &FFullyLoadedPackagesInfo::LoadedObjects)
    ;

    class_< FNamedNetDriver >("FNamedNetDriver", no_init)
        .def_readwrite("NetDriverName", &FNamedNetDriver::NetDriverName)
        .def_readwrite("NetDriver", &FNamedNetDriver::NetDriver)
    ;

    class_< FAnimTag >("FAnimTag", no_init)
        .def_readwrite("Tag", &FAnimTag::Tag)
        .def_readwrite("Contains", &FAnimTag::Contains)
    ;

    class_< FMarketplaceOfferDownloadState >("FMarketplaceOfferDownloadState", no_init)
    ;

    class_< FDlcCompatibilityData >("FDlcCompatibilityData", no_init)
        .def_readwrite("A", &FDlcCompatibilityData::A)
        .def_readwrite("B", &FDlcCompatibilityData::B)
        .def_readwrite("C", &FDlcCompatibilityData::C)
        .def_readwrite("D", &FDlcCompatibilityData::D)
    ;

    class_< FDlcCompatibilityDataEx, bases< FDlcCompatibilityData >  >("FDlcCompatibilityDataEx", no_init)
    ;

    class_< FTraceNotifyInfo >("FTraceNotifyInfo", no_init)
        .def_readwrite("ActorToNotify", &FTraceNotifyInfo::ActorToNotify)
        .def_readwrite("ActorCallingTrace", &FTraceNotifyInfo::ActorCallingTrace)
        .def_readwrite("ComponentHit", &FTraceNotifyInfo::ComponentHit)
        .def_readwrite("HitTime", &FTraceNotifyInfo::HitTime)
        .def_readwrite("HitLocation", &FTraceNotifyInfo::HitLocation)
        .def_readwrite("HitNormal", &FTraceNotifyInfo::HitNormal)
        .def_readwrite("End", &FTraceNotifyInfo::End)
        .def_readwrite("Start", &FTraceNotifyInfo::Start)
        .def_readwrite("Extent", &FTraceNotifyInfo::Extent)
        .def_readwrite("TraceFlags", &FTraceNotifyInfo::TraceFlags)
    ;

    class_< FPresetGeneratedPoint >("FPresetGeneratedPoint", no_init)
        .def_readwrite("KeyIn", &FPresetGeneratedPoint::KeyIn)
        .def_readwrite("KeyOut", &FPresetGeneratedPoint::KeyOut)
        .def_readwrite("TangentIn", &FPresetGeneratedPoint::TangentIn)
        .def_readwrite("TangentOut", &FPresetGeneratedPoint::TangentOut)
        .def_readwrite("IntepMode", &FPresetGeneratedPoint::IntepMode)
    ;

    class_< FRemoteTalker >("FRemoteTalker", no_init)
        .def_readwrite("TalkerId", &FRemoteTalker::TalkerId)
        .def_readwrite("LastNotificationTime", &FRemoteTalker::LastNotificationTime)
    ;

    class_< FNxDestructibleParametersFlag >("FNxDestructibleParametersFlag", no_init)
    ;

    class_< F_ModifyHealthParams >("F_ModifyHealthParams", no_init)
        .def_readwrite("DamageAmount", &F_ModifyHealthParams::DamageAmount)
        .def_readwrite("EventInstigator", &F_ModifyHealthParams::EventInstigator)
        .def_readwrite("HitLocation", &F_ModifyHealthParams::HitLocation)
        .def_readwrite("Momentum", &F_ModifyHealthParams::Momentum)
        .def_readwrite("DamageType", &F_ModifyHealthParams::DamageType)
        .def_readwrite("DamageTypeDefinition", &F_ModifyHealthParams::DamageTypeDefinition)
        .def_readwrite("ImpactDefinition", &F_ModifyHealthParams::ImpactDefinition)
    ;

    class_< UTerrainWeightMapTexture_FTerrainWeightedMaterial >("UTerrainWeightMapTexture_FTerrainWeightedMaterial", no_init)
    ;

    class_< FSourceTexture2DRegion >("FSourceTexture2DRegion", no_init)
        .def_readwrite("OffsetX", &FSourceTexture2DRegion::OffsetX)
        .def_readwrite("OffsetY", &FSourceTexture2DRegion::OffsetY)
        .def_readwrite("SizeX", &FSourceTexture2DRegion::SizeX)
        .def_readwrite("SizeY", &FSourceTexture2DRegion::SizeY)
        .def_readwrite("Texture2D", &FSourceTexture2DRegion::Texture2D)
    ;

    class_< FCoverReference, bases< FActorReference >  >("FCoverReference", no_init)
        .def_readwrite("SlotIdx", &FCoverReference::SlotIdx)
    ;

    class_< FExposedLink >("FExposedLink", no_init)
        .def_readwrite("TargetActor", &FExposedLink::TargetActor)
        .def_readwrite("ExposedScale", &FExposedLink::ExposedScale)
    ;

    class_< FScalarMaterialParameter >("FScalarMaterialParameter", no_init)
        .def_readwrite("Name", &FScalarMaterialParameter::Name)
        .def_readwrite("Value", &FScalarMaterialParameter::Value)
        .def_readwrite("ValueFromAttribute", &FScalarMaterialParameter::ValueFromAttribute)
    ;

    class_< FIndependentSelectionData >("FIndependentSelectionData", no_init)
        .def_readwrite("Probability", &FIndependentSelectionData::Probability)
        .def_readwrite("Behaviors", &FIndependentSelectionData::Behaviors)
    ;

    class_< FTextureMaterialParameter >("FTextureMaterialParameter", no_init)
        .def_readwrite("Name", &FTextureMaterialParameter::Name)
        .def_readwrite("Value", &FTextureMaterialParameter::Value)
    ;

    class_< FVectorMaterialParameter >("FVectorMaterialParameter", no_init)
        .def_readwrite("Name", &FVectorMaterialParameter::Name)
        .def_readwrite("Value", &FVectorMaterialParameter::Value)
        .def_readwrite("VectorScale", &FVectorMaterialParameter::VectorScale)
    ;

    class_< FLightmassPrimitiveSettings >("FLightmassPrimitiveSettings", no_init)
        .def_readwrite("EmissiveLightFalloffExponent", &FLightmassPrimitiveSettings::EmissiveLightFalloffExponent)
        .def_readwrite("EmissiveLightExplicitInfluenceRadius", &FLightmassPrimitiveSettings::EmissiveLightExplicitInfluenceRadius)
        .def_readwrite("EmissiveBoost", &FLightmassPrimitiveSettings::EmissiveBoost)
        .def_readwrite("DiffuseBoost", &FLightmassPrimitiveSettings::DiffuseBoost)
        .def_readwrite("SpecularBoost", &FLightmassPrimitiveSettings::SpecularBoost)
        .def_readwrite("FullyOccludedSamplesFraction", &FLightmassPrimitiveSettings::FullyOccludedSamplesFraction)
    ;

    class_< FLightmassDebugOptions >("FLightmassDebugOptions", no_init)
        .def_readwrite("CoplanarTolerance", &FLightmassDebugOptions::CoplanarTolerance)
        .def_readwrite("ExecutionTimeDivisor", &FLightmassDebugOptions::ExecutionTimeDivisor)
    ;

    class_< FScalarParticleSystemParameter >("FScalarParticleSystemParameter", no_init)
        .def_readwrite("Name", &FScalarParticleSystemParameter::Name)
        .def_readwrite("Value", &FScalarParticleSystemParameter::Value)
    ;

    class_< FVectorParticleSystemParameter >("FVectorParticleSystemParameter", no_init)
        .def_readwrite("Name", &FVectorParticleSystemParameter::Name)
        .def_readwrite("Value", &FVectorParticleSystemParameter::Value)
        .def_readwrite("VectorScale", &FVectorParticleSystemParameter::VectorScale)
    ;

    class_< FColorParticleSystemParameter >("FColorParticleSystemParameter", no_init)
        .def_readwrite("Name", &FColorParticleSystemParameter::Name)
        .def_readwrite("Value", &FColorParticleSystemParameter::Value)
    ;

    class_< FMaterialParticleSystemParameter >("FMaterialParticleSystemParameter", no_init)
        .def_readwrite("Name", &FMaterialParticleSystemParameter::Name)
        .def_readwrite("Value", &FMaterialParticleSystemParameter::Value)
    ;

    class_< FActorParticleSystemParameter >("FActorParticleSystemParameter", no_init)
        .def_readwrite("Name", &FActorParticleSystemParameter::Name)
        .def_readwrite("Context", &FActorParticleSystemParameter::Context)
    ;

    class_< FPerBoneMaskInfo >("FPerBoneMaskInfo", no_init)
        .def_readwrite("BranchList", &FPerBoneMaskInfo::BranchList)
        .def_readwrite("DesiredWeight", &FPerBoneMaskInfo::DesiredWeight)
        .def_readwrite("BlendTimeToGo", &FPerBoneMaskInfo::BlendTimeToGo)
        .def_readwrite("WeightRuleList", &FPerBoneMaskInfo::WeightRuleList)
        .def_readwrite("PerBoneWeights", &FPerBoneMaskInfo::PerBoneWeights)
        .def_readwrite("TransformReqBone", &FPerBoneMaskInfo::TransformReqBone)
        .def_readwrite("TransformReqBoneIndex", &FPerBoneMaskInfo::TransformReqBoneIndex)
    ;

    class_< FBranchInfo >("FBranchInfo", no_init)
        .def_readwrite("BoneName", &FBranchInfo::BoneName)
        .def_readwrite("PerBoneWeightIncrease", &FBranchInfo::PerBoneWeightIncrease)
    ;

    class_< FWeightRule >("FWeightRule", no_init)
        .def_readwrite("FirstNode", &FWeightRule::FirstNode)
        .def_readwrite("SecondNode", &FWeightRule::SecondNode)
    ;

    class_< FWeightNodeRule >("FWeightNodeRule", no_init)
        .def_readwrite("NodeName", &FWeightNodeRule::NodeName)
        .def_readwrite("CachedNode", &FWeightNodeRule::CachedNode)
        .def_readwrite("CachedSlotNode", &FWeightNodeRule::CachedSlotNode)
        .def_readwrite("WeightCheck", &FWeightNodeRule::WeightCheck)
        .def_readwrite("ChildIndex", &FWeightNodeRule::ChildIndex)
    ;

    class_< FNavMeshPathGoalEvaluatorCacheDatum >("FNavMeshPathGoalEvaluatorCacheDatum", no_init)
        .def_readwrite("ListIdx", &FNavMeshPathGoalEvaluatorCacheDatum::ListIdx)
        .def_readonly("List", &FNavMeshPathGoalEvaluatorCacheDatum::List)
    ;

    class_< FMusicTrackStruct >("FMusicTrackStruct", no_init)
        .def_readwrite("TheSoundCue", &FMusicTrackStruct::TheSoundCue)
        .def_readwrite("FadeInTime", &FMusicTrackStruct::FadeInTime)
        .def_readwrite("FadeInVolumeLevel", &FMusicTrackStruct::FadeInVolumeLevel)
        .def_readwrite("FadeOutTime", &FMusicTrackStruct::FadeOutTime)
        .def_readwrite("FadeOutVolumeLevel", &FMusicTrackStruct::FadeOutVolumeLevel)
        .def_readwrite("MP3Filename", &FMusicTrackStruct::MP3Filename)
    ;

    class_< FLocalTalker >("FLocalTalker", no_init)
    ;

    class_< FTitleFile >("FTitleFile", no_init)
        .def_readwrite("Filename", &FTitleFile::Filename)
        .def_readwrite("AsyncState", &FTitleFile::AsyncState)
        .def_readwrite("Data", &FTitleFile::Data)
    ;

    class_< FAnimSlotDesc >("FAnimSlotDesc", no_init)
        .def_readwrite("SlotName", &FAnimSlotDesc::SlotName)
        .def_readwrite("NumChannels", &FAnimSlotDesc::NumChannels)
    ;

    class_< FGameStatGroup >("FGameStatGroup", no_init)
        .def_readwrite("Group", &FGameStatGroup::Group)
        .def_readwrite("Level", &FGameStatGroup::Level)
    ;

    class_< FGameplayEventsHeader >("FGameplayEventsHeader", no_init)
        .def_readwrite("EngineVersion", &FGameplayEventsHeader::EngineVersion)
        .def_readwrite("StatsWriterVersion", &FGameplayEventsHeader::StatsWriterVersion)
        .def_readwrite("StreamOffset", &FGameplayEventsHeader::StreamOffset)
        .def_readwrite("AggregateOffset", &FGameplayEventsHeader::AggregateOffset)
        .def_readwrite("FooterOffset", &FGameplayEventsHeader::FooterOffset)
        .def_readwrite("TotalStreamSize", &FGameplayEventsHeader::TotalStreamSize)
        .def_readwrite("FileSize", &FGameplayEventsHeader::FileSize)
        .def_readwrite("FilterClass", &FGameplayEventsHeader::FilterClass)
        .def_readwrite("Flags", &FGameplayEventsHeader::Flags)
    ;

    class_< FGameSessionInformation >("FGameSessionInformation", no_init)
        .def_readwrite("AppTitleID", &FGameSessionInformation::AppTitleID)
        .def_readwrite("PlatformType", &FGameSessionInformation::PlatformType)
        .def_readwrite("Language", &FGameSessionInformation::Language)
        .def_readwrite("GameplaySessionTimestamp", &FGameSessionInformation::GameplaySessionTimestamp)
        .def_readwrite("GameplaySessionStartTime", &FGameSessionInformation::GameplaySessionStartTime)
        .def_readwrite("GameplaySessionEndTime", &FGameSessionInformation::GameplaySessionEndTime)
        .def_readwrite("GameplaySessionID", &FGameSessionInformation::GameplaySessionID)
        .def_readwrite("GameClassName", &FGameSessionInformation::GameClassName)
        .def_readwrite("MapName", &FGameSessionInformation::MapName)
        .def_readwrite("MapURL", &FGameSessionInformation::MapURL)
        .def_readwrite("SessionInstance", &FGameSessionInformation::SessionInstance)
        .def_readwrite("GameTypeId", &FGameSessionInformation::GameTypeId)
        .def_readwrite("OwningNetId", &FGameSessionInformation::OwningNetId)
        .def_readwrite("PlaylistId", &FGameSessionInformation::PlaylistId)
    ;

    class_< FPlayerInformation >("FPlayerInformation", no_init)
        .def_readwrite("ControllerName", &FPlayerInformation::ControllerName)
        .def_readwrite("PlayerName", &FPlayerInformation::PlayerName)
        .def_readwrite("UniqueId", &FPlayerInformation::UniqueId)
    ;

    class_< FTeamInformation >("FTeamInformation", no_init)
        .def_readwrite("TeamIndex", &FTeamInformation::TeamIndex)
        .def_readwrite("TeamName", &FTeamInformation::TeamName)
        .def_readwrite("TeamColor", &FTeamInformation::TeamColor)
        .def_readwrite("MaxSize", &FTeamInformation::MaxSize)
    ;

    class_< FGameplayEventMetaData >("FGameplayEventMetaData", no_init)
        .def_readwrite("EventID", &FGameplayEventMetaData::EventID)
        .def_readwrite("EventName", &FGameplayEventMetaData::EventName)
        .def_readwrite("StatGroup", &FGameplayEventMetaData::StatGroup)
        .def_readwrite("EventDataType", &FGameplayEventMetaData::EventDataType)
    ;

    class_< FWeaponClassEventData >("FWeaponClassEventData", no_init)
        .def_readwrite("WeaponClassName", &FWeaponClassEventData::WeaponClassName)
    ;

    class_< FDamageClassEventData >("FDamageClassEventData", no_init)
        .def_readwrite("DamageClassName", &FDamageClassEventData::DamageClassName)
    ;

    class_< FProjectileClassEventData >("FProjectileClassEventData", no_init)
        .def_readwrite("ProjectileClassName", &FProjectileClassEventData::ProjectileClassName)
    ;

    class_< FPawnClassEventData >("FPawnClassEventData", no_init)
        .def_readwrite("PawnClassName", &FPawnClassEventData::PawnClassName)
    ;

    class_< FHybridNavVisualizationVertsForNavPoint >("FHybridNavVisualizationVertsForNavPoint", no_init)
        .def_readwrite("Verts", &FHybridNavVisualizationVertsForNavPoint::Verts)
        .def_readwrite("FirstVertDrawn", &FHybridNavVisualizationVertsForNavPoint::FirstVertDrawn)
        .def_readwrite("LastVertDrawn", &FHybridNavVisualizationVertsForNavPoint::LastVertDrawn)
        .def_readwrite("VerticalReach", &FHybridNavVisualizationVertsForNavPoint::VerticalReach)
    ;

    class_< FHybridNavVisualizationVert >("FHybridNavVisualizationVert", no_init)
        .def_readwrite("Vert", &FHybridNavVisualizationVert::Vert)
    ;

    class_< FHybridNavVisualizationPerfStats >("FHybridNavVisualizationPerfStats", no_init)
        .def_readwrite("VisualizationBuildingStartTime", &FHybridNavVisualizationPerfStats::VisualizationBuildingStartTime)
        .def_readwrite("VisualizationBuildingEndTime", &FHybridNavVisualizationPerfStats::VisualizationBuildingEndTime)
        .def_readwrite("CyclesBuildingVisualization", &FHybridNavVisualizationPerfStats::CyclesBuildingVisualization)
        .def_readwrite("NumberOfNodesConsidered", &FHybridNavVisualizationPerfStats::NumberOfNodesConsidered)
        .def_readwrite("NumberOfTraces", &FHybridNavVisualizationPerfStats::NumberOfTraces)
        .def_readwrite("NumberOfEndPointAttempts", &FHybridNavVisualizationPerfStats::NumberOfEndPointAttempts)
        .def_readwrite("NumberOfSideAttempts", &FHybridNavVisualizationPerfStats::NumberOfSideAttempts)
        .def_readwrite("NumberOfNodesInVisualization", &FHybridNavVisualizationPerfStats::NumberOfNodesInVisualization)
        .def_readwrite("NumberOfPointsInVisualization", &FHybridNavVisualizationPerfStats::NumberOfPointsInVisualization)
        .def_readwrite("NumClosestNodesRequests", &FHybridNavVisualizationPerfStats::NumClosestNodesRequests)
        .def_readwrite("NumClosestNodeTests", &FHybridNavVisualizationPerfStats::NumClosestNodeTests)
    ;

    class_< FCommunityContentFile >("FCommunityContentFile", no_init)
        .def_readwrite("ContentId", &FCommunityContentFile::ContentId)
        .def_readwrite("FileId", &FCommunityContentFile::FileId)
        .def_readwrite("ContentType", &FCommunityContentFile::ContentType)
        .def_readwrite("FileSize", &FCommunityContentFile::FileSize)
        .def_readwrite("Owner", &FCommunityContentFile::Owner)
        .def_readwrite("DownloadCount", &FCommunityContentFile::DownloadCount)
        .def_readwrite("AverageRating", &FCommunityContentFile::AverageRating)
        .def_readwrite("RatingCount", &FCommunityContentFile::RatingCount)
        .def_readwrite("LastRatingGiven", &FCommunityContentFile::LastRatingGiven)
        .def_readwrite("LocalFilePath", &FCommunityContentFile::LocalFilePath)
    ;

    class_< FCommunityContentMetadata >("FCommunityContentMetadata", no_init)
        .def_readwrite("ContentType", &FCommunityContentMetadata::ContentType)
        .def_readwrite("MetadataItems", &FCommunityContentMetadata::MetadataItems)
    ;

    class_< FDialogueArgument >("FDialogueArgument", no_init)
        .def_readwrite("Source", &FDialogueArgument::Source)
    ;

    class_< FMaterialReferenceList >("FMaterialReferenceList", no_init)
        .def_readwrite("TargetMaterial", &FMaterialReferenceList::TargetMaterial)
        .def_readwrite("AffectedMaterialRefs", &FMaterialReferenceList::AffectedMaterialRefs)
        .def_readwrite("AffectedPPChainMaterialRefs", &FMaterialReferenceList::AffectedPPChainMaterialRefs)
    ;

    class_< FPrimitiveMaterialRef >("FPrimitiveMaterialRef", no_init)
        .def_readwrite("Primitive", &FPrimitiveMaterialRef::Primitive)
        .def_readwrite("MaterialIndex", &FPrimitiveMaterialRef::MaterialIndex)
    ;

    class_< FPostProcessMaterialRef >("FPostProcessMaterialRef", no_init)
        .def_readwrite("Effect", &FPostProcessMaterialRef::Effect)
    ;

    class_< FLensFlareElement >("FLensFlareElement", no_init)
        .def_readwrite("ElementName", &FLensFlareElement::ElementName)
        .def_readwrite("RayDistance", &FLensFlareElement::RayDistance)
        .def_readwrite("Size", &FLensFlareElement::Size)
        .def_readwrite("LFMaterials", &FLensFlareElement::LFMaterials)
        .def_readwrite("LFMaterialIndex", &FLensFlareElement::LFMaterialIndex)
        .def_readwrite("Scaling", &FLensFlareElement::Scaling)
        .def_readwrite("AxisScaling", &FLensFlareElement::AxisScaling)
        .def_readwrite("Rotation", &FLensFlareElement::Rotation)
        .def_readwrite("Color", &FLensFlareElement::Color)
        .def_readwrite("Alpha", &FLensFlareElement::Alpha)
        .def_readwrite("Offset", &FLensFlareElement::Offset)
        .def_readwrite("DistMap_Scale", &FLensFlareElement::DistMap_Scale)
        .def_readwrite("DistMap_Color", &FLensFlareElement::DistMap_Color)
        .def_readwrite("DistMap_Alpha", &FLensFlareElement::DistMap_Alpha)
    ;

    class_< FLensFlareElementMaterials >("FLensFlareElementMaterials", no_init)
        .def_readwrite("ElementMaterials", &FLensFlareElementMaterials::ElementMaterials)
    ;

    class_< FPhysXEmitterVerticalLodProperties >("FPhysXEmitterVerticalLodProperties", no_init)
        .def_readwrite("WeightForFifo", &FPhysXEmitterVerticalLodProperties::WeightForFifo)
        .def_readwrite("WeightForSpawnLod", &FPhysXEmitterVerticalLodProperties::WeightForSpawnLod)
        .def_readwrite("SpawnLodRateVsLifeBias", &FPhysXEmitterVerticalLodProperties::SpawnLodRateVsLifeBias)
        .def_readwrite("RelativeFadeoutTime", &FPhysXEmitterVerticalLodProperties::RelativeFadeoutTime)
    ;

    class_< FLandscapeAddCollision >("FLandscapeAddCollision", no_init)
    ;

    class_< FLensFlareElementCurvePair >("FLensFlareElementCurvePair", no_init)
        .def_readwrite("CurveName", &FLensFlareElementCurvePair::CurveName)
        .def_readwrite("CurveObject", &FLensFlareElementCurvePair::CurveObject)
    ;

    class_< FCustomInput >("FCustomInput", no_init)
        .def_readwrite("InputName", &FCustomInput::InputName)
        .def_readwrite("Input", &FCustomInput::Input)
    ;

    class_< AFogVolumeDensityInfo_FCheckpointRecord >("AFogVolumeDensityInfo_FCheckpointRecord", no_init)
    ;

    class_< FVelocityObstacleStat >("FVelocityObstacleStat", no_init)
        .def_readwrite("Position", &FVelocityObstacleStat::Position)
        .def_readwrite("Velocity", &FVelocityObstacleStat::Velocity)
        .def_readwrite("Radius", &FVelocityObstacleStat::Radius)
        .def_readwrite("Priority", &FVelocityObstacleStat::Priority)
    ;

    class_< FFoliageMesh >("FFoliageMesh", no_init)
        .def_readwrite("InstanceStaticMesh", &FFoliageMesh::InstanceStaticMesh)
        .def_readwrite("Material", &FFoliageMesh::Material)
        .def_readwrite("MaxDrawRadius", &FFoliageMesh::MaxDrawRadius)
        .def_readwrite("MinTransitionRadius", &FFoliageMesh::MinTransitionRadius)
        .def_readwrite("MinThinningRadius", &FFoliageMesh::MinThinningRadius)
        .def_readwrite("MinScale", &FFoliageMesh::MinScale)
        .def_readwrite("MaxScale", &FFoliageMesh::MaxScale)
        .def_readwrite("MinUniformScale", &FFoliageMesh::MinUniformScale)
        .def_readwrite("MaxUniformScale", &FFoliageMesh::MaxUniformScale)
        .def_readwrite("SwayScale", &FFoliageMesh::SwayScale)
        .def_readwrite("Seed", &FFoliageMesh::Seed)
        .def_readwrite("SurfaceAreaPerInstance", &FFoliageMesh::SurfaceAreaPerInstance)
        .def_readwrite("Component", &FFoliageMesh::Component)
    ;

    class_< FStoredFoliageInstance >("FStoredFoliageInstance", no_init)
        .def_readonly("StaticLighting", &FStoredFoliageInstance::StaticLighting)
        .def_readwrite("Location", &FFoliageInstanceBase::Location)
        .def_readwrite("XAxis", &FFoliageInstanceBase::XAxis)
        .def_readwrite("YAxis", &FFoliageInstanceBase::YAxis)
        .def_readwrite("ZAxis", &FFoliageInstanceBase::ZAxis)
        .def_readwrite("DistanceFactorSquared", &FFoliageInstanceBase::DistanceFactorSquared)
    ;

    class_< FFoliageInstanceBase >("FFoliageInstanceBase", no_init)
        .def_readwrite("Location", &FFoliageInstanceBase::Location)
        .def_readwrite("XAxis", &FFoliageInstanceBase::XAxis)
        .def_readwrite("YAxis", &FFoliageInstanceBase::YAxis)
        .def_readwrite("ZAxis", &FFoliageInstanceBase::ZAxis)
        .def_readwrite("DistanceFactorSquared", &FFoliageInstanceBase::DistanceFactorSquared)
    ;

    class_< FHeadTrackingKey >("FHeadTrackingKey", no_init)
        .def_readwrite("Time", &FHeadTrackingKey::Time)
        .def_readwrite("Action", &FHeadTrackingKey::Action)
    ;

    class_< FLevelGroup >("FLevelGroup", no_init)
        .def_readwrite("GroupColor", &FLevelGroup::GroupColor)
        .def_readwrite("Levels", &FLevelGroup::Levels)
        .def_readwrite("LevelGridVolumes", &FLevelGroup::LevelGridVolumes)
        .def_readwrite("GroupName", &FLevelGroup::GroupName)
    ;

    class_< FActorToLookAt >("FActorToLookAt", no_init)
        .def_readwrite("Actor", &FActorToLookAt::Actor)
        .def_readwrite("Rating", &FActorToLookAt::Rating)
        .def_readwrite("EnteredTime", &FActorToLookAt::EnteredTime)
        .def_readwrite("LastKnownDistance", &FActorToLookAt::LastKnownDistance)
        .def_readwrite("StartTimeBeingLookedAt", &FActorToLookAt::StartTimeBeingLookedAt)
    ;

    class_< FImpulseData >("FImpulseData", no_init)
        .def_readwrite("Impulse", &FImpulseData::Impulse)
        .def_readwrite("Source", &FImpulseData::Source)
    ;

    class_< FLandscapeWeightmapUsage >("FLandscapeWeightmapUsage", no_init)
        .def_readonly("ChannelUsage", &FLandscapeWeightmapUsage::ChannelUsage)
    ;

    class_< FAnimControlTrackKey >("FAnimControlTrackKey", no_init)
        .def_readwrite("StartTime", &FAnimControlTrackKey::StartTime)
        .def_readwrite("AnimSeqName", &FAnimControlTrackKey::AnimSeqName)
        .def_readwrite("AnimStartOffset", &FAnimControlTrackKey::AnimStartOffset)
        .def_readwrite("AnimEndOffset", &FAnimControlTrackKey::AnimEndOffset)
        .def_readwrite("AnimPlayRate", &FAnimControlTrackKey::AnimPlayRate)
    ;

    class_< FChildBoneBlendInfo >("FChildBoneBlendInfo", no_init)
        .def_readwrite("TargetPerBoneWeight", &FChildBoneBlendInfo::TargetPerBoneWeight)
        .def_readwrite("InitTargetStartBone", &FChildBoneBlendInfo::InitTargetStartBone)
        .def_readwrite("InitPerBoneIncrease", &FChildBoneBlendInfo::InitPerBoneIncrease)
        .def_readwrite("OldStartBone", &FChildBoneBlendInfo::OldStartBone)
        .def_readwrite("OldBoneIncrease", &FChildBoneBlendInfo::OldBoneIncrease)
        .def_readwrite("TargetRequiredBones", &FChildBoneBlendInfo::TargetRequiredBones)
    ;

    class_< FCoverMeshes >("FCoverMeshes", no_init)
        .def_readwrite("Base", &FCoverMeshes::Base)
        .def_readwrite("LeanLeft", &FCoverMeshes::LeanLeft)
        .def_readwrite("LeanRight", &FCoverMeshes::LeanRight)
        .def_readwrite("LeanLeftPref", &FCoverMeshes::LeanLeftPref)
        .def_readwrite("LeanRightPref", &FCoverMeshes::LeanRightPref)
        .def_readwrite("Climb", &FCoverMeshes::Climb)
        .def_readwrite("Mantle", &FCoverMeshes::Mantle)
        .def_readwrite("SlipLeft", &FCoverMeshes::SlipLeft)
        .def_readwrite("SlipRight", &FCoverMeshes::SlipRight)
        .def_readwrite("SwatLeft", &FCoverMeshes::SwatLeft)
        .def_readwrite("SwatRight", &FCoverMeshes::SwatRight)
        .def_readwrite("PopUp", &FCoverMeshes::PopUp)
        .def_readwrite("PlayerOnly", &FCoverMeshes::PlayerOnly)
    ;

    class_< FDirectorTrackCut >("FDirectorTrackCut", no_init)
        .def_readwrite("Time", &FDirectorTrackCut::Time)
        .def_readwrite("TransitionTime", &FDirectorTrackCut::TransitionTime)
        .def_readwrite("TargetCamGroup", &FDirectorTrackCut::TargetCamGroup)
    ;

    class_< FEventTrackKey >("FEventTrackKey", no_init)
        .def_readwrite("Time", &FEventTrackKey::Time)
        .def_readwrite("EventName", &FEventTrackKey::EventName)
    ;

    class_< FFaceFXTrackKey >("FFaceFXTrackKey", no_init)
        .def_readwrite("StartTime", &FFaceFXTrackKey::StartTime)
        .def_readwrite("FaceFXGroupName", &FFaceFXTrackKey::FaceFXGroupName)
        .def_readwrite("FaceFXSeqName", &FFaceFXTrackKey::FaceFXSeqName)
    ;

    class_< FFaceFXSoundCueKey >("FFaceFXSoundCueKey", no_init)
        .def_readwrite("FaceFXSoundCue", &FFaceFXSoundCueKey::FaceFXSoundCue)
        .def_readwrite("FaceFXAkEvent", &FFaceFXSoundCueKey::FaceFXAkEvent)
    ;

    class_< FBoolTrackKey >("FBoolTrackKey", no_init)
        .def_readwrite("Time", &FBoolTrackKey::Time)
    ;

    class_< FCommentTrackKey >("FCommentTrackKey", no_init)
        .def_readwrite("Time", &FCommentTrackKey::Time)
        .def_readwrite("Comment", &FCommentTrackKey::Comment)
    ;

    class_< FBoneAngleMorph >("FBoneAngleMorph", no_init)
        .def_readwrite("Angle", &FBoneAngleMorph::Angle)
        .def_readwrite("TargetWeight", &FBoneAngleMorph::TargetWeight)
    ;

    class_< FInputKeyAction >("FInputKeyAction", no_init)
        .def_readwrite("InputKeyName", &FInputKeyAction::InputKeyName)
        .def_readwrite("InputKeyState", &FInputKeyAction::InputKeyState)
        .def_readwrite("TriggeredOps", &FInputKeyAction::TriggeredOps)
        .def_readwrite("ActionsToExecute", &FInputKeyAction::ActionsToExecute)
    ;

    class_< FVisibilityTrackKey >("FVisibilityTrackKey", no_init)
        .def_readwrite("Time", &FVisibilityTrackKey::Time)
        .def_readwrite("Action", &FVisibilityTrackKey::Action)
        .def_readwrite("ActiveCondition", &FVisibilityTrackKey::ActiveCondition)
    ;

    class_< FCullDistanceSizePair >("FCullDistanceSizePair", no_init)
        .def_readwrite("Size", &FCullDistanceSizePair::Size)
        .def_readwrite("CullDistance", &FCullDistanceSizePair::CullDistance)
    ;

    class_< FEmitterDynamicParameter >("FEmitterDynamicParameter", no_init)
        .def_readwrite("ParamName", &FEmitterDynamicParameter::ParamName)
        .def_readwrite("ValueMethod", &FEmitterDynamicParameter::ValueMethod)
        .def_readwrite("ParamValue", &FEmitterDynamicParameter::ParamValue)
    ;

    class_< FLevelStreamingData >("FLevelStreamingData", no_init)
        .def_readwrite("Level", &FLevelStreamingData::Level)
    ;

    class_< FSwarmDebugOptions >("FSwarmDebugOptions", no_init)
    ;

    class_< FNavMeshPathConstraintCacheDatum >("FNavMeshPathConstraintCacheDatum", no_init)
        .def_readwrite("ListIdx", &FNavMeshPathConstraintCacheDatum::ListIdx)
        .def_readonly("List", &FNavMeshPathConstraintCacheDatum::List)
    ;

    class_< FBiasedGoalActor >("FBiasedGoalActor", no_init)
        .def_readwrite("Goal", &FBiasedGoalActor::Goal)
        .def_readwrite("ExtraCost", &FBiasedGoalActor::ExtraCost)
    ;

    class_< FPaintedVertex >("FPaintedVertex", no_init)
        .def_readwrite("Position", &FPaintedVertex::Position)
        .def_readwrite("Normal", &FPaintedVertex::Normal)
        .def_readwrite("Color", &FPaintedVertex::Color)
    ;

    class_< FAreaTestSortedPoint >("FAreaTestSortedPoint", no_init)
        .def_readwrite("Nav", &FAreaTestSortedPoint::Nav)
        .def_readwrite("DistSq", &FAreaTestSortedPoint::DistSq)
    ;

    class_< FTerrainMaterialResource >("FTerrainMaterialResource", no_init)
    ;

    class_< FDamageInfo >("FDamageInfo", no_init)
        .def_readwrite("Instigator", &FDamageInfo::Instigator)
        .def_readwrite("HitLocation", &FDamageInfo::HitLocation)
        .def_readwrite("DamageType", &FDamageInfo::DamageType)
        .def_readwrite("DamageTypeDefinition", &FDamageInfo::DamageTypeDefinition)
        .def_readwrite("ImpactDefinition", &FDamageInfo::ImpactDefinition)
    ;

    class_< FLensFlareElementInstance >("FLensFlareElementInstance", no_init)
    ;

    class_< FLevelGridCellCoordinate >("FLevelGridCellCoordinate", no_init)
        .def_readwrite("X", &FLevelGridCellCoordinate::X)
        .def_readwrite("Y", &FLevelGridCellCoordinate::Y)
        .def_readwrite("Z", &FLevelGridCellCoordinate::Z)
    ;

    class_< FFloatMaterialParamMICData >("FFloatMaterialParamMICData", no_init)
        .def_readwrite("MICs", &FFloatMaterialParamMICData::MICs)
        .def_readwrite("MICResetFloats", &FFloatMaterialParamMICData::MICResetFloats)
    ;

    class_< FLandscapeLayerInfo >("FLandscapeLayerInfo", no_init)
        .def_readwrite("LayerName", &FLandscapeLayerInfo::LayerName)
        .def_readwrite("Hardness", &FLandscapeLayerInfo::Hardness)
    ;

    class_< FTeleportKeyData >("FTeleportKeyData", no_init)
        .def_readwrite("KeyTime", &FTeleportKeyData::KeyTime)
        .def_readwrite("LocationKey", &FTeleportKeyData::LocationKey)
        .def_readwrite("RotationKey", &FTeleportKeyData::RotationKey)
    ;

    class_< FParticleReplayTrackKey >("FParticleReplayTrackKey", no_init)
        .def_readwrite("Time", &FParticleReplayTrackKey::Time)
        .def_readwrite("Duration", &FParticleReplayTrackKey::Duration)
        .def_readwrite("ClipIDNumber", &FParticleReplayTrackKey::ClipIDNumber)
    ;

    class_< FSoundNodeEditorData >("FSoundNodeEditorData", no_init)
        .def_readwrite("NodePosX", &FSoundNodeEditorData::NodePosX)
        .def_readwrite("NodePosY", &FSoundNodeEditorData::NodePosY)
    ;

    class_< FSplineMeshParams >("FSplineMeshParams", no_init)
        .def_readwrite("StartPos", &FSplineMeshParams::StartPos)
        .def_readwrite("StartTangent", &FSplineMeshParams::StartTangent)
        .def_readwrite("StartScale", &FSplineMeshParams::StartScale)
        .def_readwrite("StartRoll", &FSplineMeshParams::StartRoll)
        .def_readwrite("StartOffset", &FSplineMeshParams::StartOffset)
        .def_readwrite("EndPos", &FSplineMeshParams::EndPos)
        .def_readwrite("EndTangent", &FSplineMeshParams::EndTangent)
        .def_readwrite("EndScale", &FSplineMeshParams::EndScale)
        .def_readwrite("EndRoll", &FSplineMeshParams::EndRoll)
        .def_readwrite("EndOffset", &FSplineMeshParams::EndOffset)
    ;

    class_< FShadowRelevanceSizePair >("FShadowRelevanceSizePair", no_init)
        .def_readwrite("Size", &FShadowRelevanceSizePair::Size)
        .def_readwrite("DynamicShadowCastRelevance", &FShadowRelevanceSizePair::DynamicShadowCastRelevance)
        .def_readwrite("OverrideStaticShadowSettings", &FShadowRelevanceSizePair::OverrideStaticShadowSettings)
    ;

    class_< FLocationBoneSocketInfo >("FLocationBoneSocketInfo", no_init)
        .def_readwrite("BoneSocketName", &FLocationBoneSocketInfo::BoneSocketName)
        .def_readwrite("Offset", &FLocationBoneSocketInfo::Offset)
    ;

    class_< FVectorMaterialParamMICData >("FVectorMaterialParamMICData", no_init)
        .def_readwrite("MICs", &FVectorMaterialParamMICData::MICs)
        .def_readwrite("MICResetVectors", &FVectorMaterialParamMICData::MICResetVectors)
    ;

    class_< FSoundTrackKey >("FSoundTrackKey", no_init)
        .def_readwrite("Time", &FSoundTrackKey::Time)
        .def_readwrite("Volume", &FSoundTrackKey::Volume)
        .def_readwrite("Pitch", &FSoundTrackKey::Pitch)
        .def_readwrite("Sound", &FSoundTrackKey::Sound)
    ;

    class_< FNxDestructibleParameters >("FNxDestructibleParameters", no_init)
        .def_readwrite("DamageThreshold", &FNxDestructibleParameters::DamageThreshold)
        .def_readwrite("DamageToRadius", &FNxDestructibleParameters::DamageToRadius)
        .def_readwrite("DamageCap", &FNxDestructibleParameters::DamageCap)
        .def_readwrite("ForceToDamage", &FNxDestructibleParameters::ForceToDamage)
        .def_readwrite("ImpactVelocityThreshold", &FNxDestructibleParameters::ImpactVelocityThreshold)
        .def_readwrite("MaterialStrength", &FNxDestructibleParameters::MaterialStrength)
        .def_readwrite("DamageToPercentDeformation", &FNxDestructibleParameters::DamageToPercentDeformation)
        .def_readwrite("DeformationPercentLimit", &FNxDestructibleParameters::DeformationPercentLimit)
        .def_readwrite("SupportDepth", &FNxDestructibleParameters::SupportDepth)
        .def_readwrite("DebrisDepth", &FNxDestructibleParameters::DebrisDepth)
        .def_readwrite("EssentialDepth", &FNxDestructibleParameters::EssentialDepth)
        .def_readwrite("DebrisLifetimeMin", &FNxDestructibleParameters::DebrisLifetimeMin)
        .def_readwrite("DebrisLifetimeMax", &FNxDestructibleParameters::DebrisLifetimeMax)
        .def_readwrite("DebrisMaxSeparationMin", &FNxDestructibleParameters::DebrisMaxSeparationMin)
        .def_readwrite("DebrisMaxSeparationMax", &FNxDestructibleParameters::DebrisMaxSeparationMax)
        .def_readwrite("ValidBounds", &FNxDestructibleParameters::ValidBounds)
        .def_readwrite("MaxChunkSpeed", &FNxDestructibleParameters::MaxChunkSpeed)
        .def_readwrite("MassScaleExponent", &FNxDestructibleParameters::MassScaleExponent)
        .def_readwrite("Flags", &FNxDestructibleParameters::Flags)
        .def_readwrite("GrbVolumeLimit", &FNxDestructibleParameters::GrbVolumeLimit)
        .def_readwrite("GrbParticleSpacing", &FNxDestructibleParameters::GrbParticleSpacing)
        .def_readwrite("FractureImpulseScale", &FNxDestructibleParameters::FractureImpulseScale)
        .def_readwrite("DepthParameters", &FNxDestructibleParameters::DepthParameters)
    ;

    class_< FNxDestructibleDepthParameters >("FNxDestructibleDepthParameters", no_init)
    ;

    class_< FNavReference >("FNavReference", no_init)
        .def_readwrite("Nav", &FNavReference::Nav)
        .def_readwrite("Guid", &FNavReference::Guid)
    ;

    class_< FUIDataStoreInputAlias >("FUIDataStoreInputAlias", no_init)
        .def_readwrite("AliasName", &FUIDataStoreInputAlias::AliasName)
        .def_readonly("PlatformInputKeys", &FUIDataStoreInputAlias::PlatformInputKeys)
    ;

    class_< FUIInputKeyData >("FUIInputKeyData", no_init)
        .def_readwrite("InputKeyData", &FUIInputKeyData::InputKeyData)
        .def_readwrite("ButtonFontMarkupString", &FUIInputKeyData::ButtonFontMarkupString)
    ;

    class_< FRawInputKeyEventData >("FRawInputKeyEventData", no_init)
        .def_readwrite("InputKeyName", &FRawInputKeyEventData::InputKeyName)
        .def_readwrite("ModifierKeyFlags", &FRawInputKeyEventData::ModifierKeyFlags)
    ;

    class_< FPolySegmentSpan >("FPolySegmentSpan", no_init)
        .def_readwrite("Poly", &FPolySegmentSpan::Poly)
        .def_readwrite("P1", &FPolySegmentSpan::P1)
        .def_readwrite("P2", &FPolySegmentSpan::P2)
    ;

    class_< FToggleTrackKey >("FToggleTrackKey", no_init)
        .def_readwrite("Time", &FToggleTrackKey::Time)
        .def_readwrite("ToggleAction", &FToggleTrackKey::ToggleAction)
    ;

    class_< FSMMaterialSetterDatum >("FSMMaterialSetterDatum", no_init)
        .def_readwrite("MaterialIndex", &FSMMaterialSetterDatum::MaterialIndex)
        .def_readwrite("TheMaterial", &FSMMaterialSetterDatum::TheMaterial)
    ;

    class_< FSavedTransform >("FSavedTransform", no_init)
        .def_readwrite("Location", &FSavedTransform::Location)
        .def_readwrite("Rotation", &FSavedTransform::Rotation)
    ;

    class_< FParticleCurvePair >("FParticleCurvePair", no_init)
        .def_readwrite("CurveName", &FParticleCurvePair::CurveName)
        .def_readwrite("CurveObject", &FParticleCurvePair::CurveObject)
    ;

    class_< FSkelMaterialSetterDatum >("FSkelMaterialSetterDatum", no_init)
        .def_readwrite("MaterialIndex", &FSkelMaterialSetterDatum::MaterialIndex)
        .def_readwrite("TheMaterial", &FSkelMaterialSetterDatum::TheMaterial)
    ;

    class_< FCounterEventReactionData >("FCounterEventReactionData", no_init)
        .def_readwrite("EventType", &FCounterEventReactionData::EventType)
        .def_readwrite("Behaviors", &FCounterEventReactionData::Behaviors)
    ;

    class_< FTerrainkDOPTree >("FTerrainkDOPTree", no_init)
        .def_readwrite("Nodes", &FTerrainkDOPTree::Nodes)
        .def_readwrite("Triangles", &FTerrainkDOPTree::Triangles)
    ;

    class_< FKeyValuePair >("FKeyValuePair", no_init)
        .def_readwrite("Key", &FKeyValuePair::Key)
        .def_readwrite("Value", &FKeyValuePair::Value)
    ;

    class_< FGameResourceDataProvider >("FGameResourceDataProvider", no_init)
        .def_readwrite("ProviderTag", &FGameResourceDataProvider::ProviderTag)
        .def_readwrite("ProviderClassName", &FGameResourceDataProvider::ProviderClassName)
        .def_readwrite("ProviderClass", &FGameResourceDataProvider::ProviderClass)
    ;

    class_< FDynamicResourceProviderDefinition >("FDynamicResourceProviderDefinition", no_init)
        .def_readwrite("ProviderTag", &FDynamicResourceProviderDefinition::ProviderTag)
        .def_readwrite("ProviderClassName", &FDynamicResourceProviderDefinition::ProviderClassName)
        .def_readwrite("ProviderClass", &FDynamicResourceProviderDefinition::ProviderClass)
    ;

    class_< FMMStats_Timer >("FMMStats_Timer", no_init)
        .def_readwrite("MSecs", &FMMStats_Timer::MSecs)
    ;

    class_< FLODSoloTrack >("FLODSoloTrack", no_init)
        .def_readwrite("SoloEnableSetting", &FLODSoloTrack::SoloEnableSetting)
    ;

    class_< FBeamTargetData >("FBeamTargetData", no_init)
        .def_readwrite("TargetName", &FBeamTargetData::TargetName)
        .def_readwrite("TargetPercentage", &FBeamTargetData::TargetPercentage)
    ;

    class_< FServerResponseLine >("FServerResponseLine", no_init)
        .def_readwrite("ServerID", &FServerResponseLine::ServerID)
        .def_readwrite("IP", &FServerResponseLine::IP)
        .def_readwrite("Port", &FServerResponseLine::Port)
        .def_readwrite("QueryPort", &FServerResponseLine::QueryPort)
        .def_readwrite("ServerName", &FServerResponseLine::ServerName)
        .def_readwrite("MapName", &FServerResponseLine::MapName)
        .def_readwrite("GameType", &FServerResponseLine::GameType)
        .def_readwrite("CurrentPlayers", &FServerResponseLine::CurrentPlayers)
        .def_readwrite("MaxPlayers", &FServerResponseLine::MaxPlayers)
        .def_readwrite("Ping", &FServerResponseLine::Ping)
        .def_readwrite("ServerInfo", &FServerResponseLine::ServerInfo)
        .def_readwrite("PlayerInfo", &FServerResponseLine::PlayerInfo)
    ;

    class_< FPlayerResponseLine >("FPlayerResponseLine", no_init)
        .def_readwrite("PlayerNum", &FPlayerResponseLine::PlayerNum)
        .def_readwrite("PlayerID", &FPlayerResponseLine::PlayerID)
        .def_readwrite("PlayerName", &FPlayerResponseLine::PlayerName)
        .def_readwrite("Ping", &FPlayerResponseLine::Ping)
        .def_readwrite("Score", &FPlayerResponseLine::Score)
        .def_readwrite("StatsID", &FPlayerResponseLine::StatsID)
        .def_readwrite("PlayerInfo", &FPlayerResponseLine::PlayerInfo)
    ;

    class_< FGBXNavMeshSpecialMoveConnection >("FGBXNavMeshSpecialMoveConnection", no_init)
        .def_readwrite("SrcPoly", &FGBXNavMeshSpecialMoveConnection::SrcPoly)
        .def_readwrite("SrcLocation", &FGBXNavMeshSpecialMoveConnection::SrcLocation)
        .def_readwrite("DestPoly", &FGBXNavMeshSpecialMoveConnection::DestPoly)
        .def_readwrite("DestLocation", &FGBXNavMeshSpecialMoveConnection::DestLocation)
        .def_readwrite("MoveId", &FGBXNavMeshSpecialMoveConnection::MoveId)
    ;

    class_< ADynamicBlockingVolume_FCheckpointRecord >("ADynamicBlockingVolume_FCheckpointRecord", no_init)
        .def_readwrite("Location", &ADynamicBlockingVolume_FCheckpointRecord::Location)
        .def_readwrite("Rotation", &ADynamicBlockingVolume_FCheckpointRecord::Rotation)
    ;

    class_< FAudioClassInfo >("FAudioClassInfo", no_init)
        .def_readwrite("NumResident", &FAudioClassInfo::NumResident)
        .def_readwrite("SizeResident", &FAudioClassInfo::SizeResident)
        .def_readwrite("NumRealTime", &FAudioClassInfo::NumRealTime)
        .def_readwrite("SizeRealTime", &FAudioClassInfo::SizeRealTime)
    ;

    class_< ANavMeshObstacle_FCheckpointRecord >("ANavMeshObstacle_FCheckpointRecord", no_init)
    ;

    class_< FSupportedSubTrackInfo >("FSupportedSubTrackInfo", no_init)
        .def_readwrite("SupportedClass", &FSupportedSubTrackInfo::SupportedClass)
        .def_readwrite("SubTrackName", &FSupportedSubTrackInfo::SubTrackName)
        .def_readwrite("GroupIndex", &FSupportedSubTrackInfo::GroupIndex)
    ;

    class_< FTextureGroupContainer >("FTextureGroupContainer", no_init)
    ;

    class_< FWrappedStringElement >("FWrappedStringElement", no_init)
        .def_readwrite("Value", &FWrappedStringElement::Value)
        .def_readwrite("LineExtent", &FWrappedStringElement::LineExtent)
    ;

    class_< FTextSizingParameters >("FTextSizingParameters", no_init)
        .def_readwrite("DrawX", &FTextSizingParameters::DrawX)
        .def_readwrite("DrawY", &FTextSizingParameters::DrawY)
        .def_readwrite("DrawXL", &FTextSizingParameters::DrawXL)
        .def_readwrite("DrawYL", &FTextSizingParameters::DrawYL)
        .def_readwrite("Scaling", &FTextSizingParameters::Scaling)
        .def_readwrite("DrawFont", &FTextSizingParameters::DrawFont)
        .def_readwrite("SpacingAdjust", &FTextSizingParameters::SpacingAdjust)
        .def_readwrite("ViewportHeight", &FTextSizingParameters::ViewportHeight)
    ;

    class_< FCompressedTrack >("FCompressedTrack", no_init)
        .def_readwrite("ByteStream", &FCompressedTrack::ByteStream)
        .def_readwrite("Times", &FCompressedTrack::Times)
        .def_readonly("Mins", &FCompressedTrack::Mins)
        .def_readonly("Ranges", &FCompressedTrack::Ranges)
    ;

    class_< FSoundClassEditorData >("FSoundClassEditorData", no_init)
        .def_readwrite("NodePosX", &FSoundClassEditorData::NodePosX)
        .def_readwrite("NodePosY", &FSoundClassEditorData::NodePosY)
    ;

    class_< FBehaviorOutputLinkDescriptionData >("FBehaviorOutputLinkDescriptionData", no_init)
        .def_readwrite("LinkId", &FBehaviorOutputLinkDescriptionData::LinkId)
    ;

    class_< FParticleEmitterInstanceMotionBlurInfo >("FParticleEmitterInstanceMotionBlurInfo", no_init)
        .def_readwrite("ParticleMBInfoMap", &FParticleEmitterInstanceMotionBlurInfo::ParticleMBInfoMap)
    ;

    class_< FParticleEmitterInstance >("FParticleEmitterInstance", no_init)
    ;

    class_< FPreviewAnimSetsStruct >("FPreviewAnimSetsStruct", no_init)
        .def_readwrite("DisplayName", &FPreviewAnimSetsStruct::DisplayName)
        .def_readwrite("PreviewAnimSets", &FPreviewAnimSetsStruct::PreviewAnimSets)
    ;

    class_< FPreviewSkelMeshStruct >("FPreviewSkelMeshStruct", no_init)
        .def_readwrite("DisplayName", &FPreviewSkelMeshStruct::DisplayName)
        .def_readwrite("PreviewSkelMesh", &FPreviewSkelMeshStruct::PreviewSkelMesh)
        .def_readwrite("PreviewMorphSets", &FPreviewSkelMeshStruct::PreviewMorphSets)
    ;

    class_< FGBXLineCheckResult >("FGBXLineCheckResult", no_init)
        .def_readwrite("Location", &FGBXLineCheckResult::Location)
        .def_readwrite("Normal", &FGBXLineCheckResult::Normal)
        .def_readwrite("Time", &FGBXLineCheckResult::Time)
    ;

    class_< FDlcContentInfo >("FDlcContentInfo", no_init)
        .def_readwrite("ContentId", &FDlcContentInfo::ContentId)
    ;

    class_< FCovPosInfo >("FCovPosInfo", no_init)
        .def_readwrite("Link", &FCovPosInfo::Link)
        .def_readwrite("LtSlotIdx", &FCovPosInfo::LtSlotIdx)
        .def_readwrite("RtSlotIdx", &FCovPosInfo::RtSlotIdx)
        .def_readwrite("LtToRtPct", &FCovPosInfo::LtToRtPct)
        .def_readwrite("Location", &FCovPosInfo::Location)
        .def_readwrite("Normal", &FCovPosInfo::Normal)
        .def_readwrite("Tangent", &FCovPosInfo::Tangent)
    ;

    class_< FFireLinkItem >("FFireLinkItem", no_init)
        .def_readwrite("SrcType", &FFireLinkItem::SrcType)
        .def_readwrite("SrcAction", &FFireLinkItem::SrcAction)
        .def_readwrite("DestType", &FFireLinkItem::DestType)
        .def_readwrite("DestAction", &FFireLinkItem::DestAction)
    ;

    class_< FSubTrackGroup >("FSubTrackGroup", no_init)
        .def_readwrite("GroupName", &FSubTrackGroup::GroupName)
        .def_readwrite("TrackIndices", &FSubTrackGroup::TrackIndices)
    ;

    class_< FInterpEdSelKey >("FInterpEdSelKey", no_init)
        .def_readwrite("Group", &FInterpEdSelKey::Group)
        .def_readwrite("Track", &FInterpEdSelKey::Track)
        .def_readwrite("KeyIndex", &FInterpEdSelKey::KeyIndex)
        .def_readwrite("UnsnappedPosition", &FInterpEdSelKey::UnsnappedPosition)
    ;

    class_< FTexture2DMipMap >("FTexture2DMipMap", no_init)
        .def_readwrite("Data", &FTexture2DMipMap::Data)
        .def_readwrite("SizeX", &FTexture2DMipMap::SizeX)
        .def_readwrite("SizeY", &FTexture2DMipMap::SizeY)
    ;

    class_< FBoneMirrorExport >("FBoneMirrorExport", no_init)
        .def_readwrite("BoneName", &FBoneMirrorExport::BoneName)
        .def_readwrite("SourceBoneName", &FBoneMirrorExport::SourceBoneName)
        .def_readwrite("BoneFlipAxis", &FBoneMirrorExport::BoneFlipAxis)
    ;

    class_< FPropertyInfo >("FPropertyInfo", no_init)
        .def_readwrite("PropertyName", &FPropertyInfo::PropertyName)
        .def_readwrite("PropertyValue", &FPropertyInfo::PropertyValue)
    ;

    class_< FProjectileEvents >("FProjectileEvents", no_init)
        .def_readwrite("TotalEvents", &FEventsBase::TotalEvents)
        .def_readwrite("EventsByClass", &FEventsBase::EventsByClass)
    ;

    class_< FEventsBase >("FEventsBase", no_init)
        .def_readwrite("TotalEvents", &FEventsBase::TotalEvents)
        .def_readwrite("EventsByClass", &FEventsBase::EventsByClass)
    ;

    class_< FGameEvents >("FGameEvents", no_init)
        .def_readwrite("Events", &FGameEvents::Events)
    ;

    class_< FDamageEvents, bases< FEventsBase >  >("FDamageEvents", no_init)
    ;

    class_< FPlayerState >("FPlayerState", no_init)
        .def_readwrite("PlayerIndex", &FPlayerState::PlayerIndex)
        .def_readwrite("CurrentTeamIndex", &FPlayerState::CurrentTeamIndex)
        .def_readwrite("TimeSpawned", &FPlayerState::TimeSpawned)
        .def_readwrite("TimeAliveSinceLastDeath", &FPlayerState::TimeAliveSinceLastDeath)
    ;

    class_< FTeamState >("FTeamState", no_init)
        .def_readwrite("TeamIndex", &FTeamState::TeamIndex)
        .def_readwrite("PlayerIndices", &FTeamState::PlayerIndices)
    ;

    class_< FAggregateEventMapping >("FAggregateEventMapping", no_init)
        .def_readwrite("EventID", &FAggregateEventMapping::EventID)
        .def_readwrite("AggregateID", &FAggregateEventMapping::AggregateID)
        .def_readwrite("TargetAggregateID", &FAggregateEventMapping::TargetAggregateID)
    ;

    class_< FTeamEvents >("FTeamEvents", no_init)
        .def_readwrite("TotalEvents", &FTeamEvents::TotalEvents)
        .def_readwrite("WeaponEvents", &FTeamEvents::WeaponEvents)
        .def_readwrite("DamageAsPlayerEvents", &FTeamEvents::DamageAsPlayerEvents)
        .def_readwrite("DamageAsTargetEvents", &FTeamEvents::DamageAsTargetEvents)
        .def_readwrite("ProjectileEvents", &FTeamEvents::ProjectileEvents)
        .def_readwrite("PawnEvents", &FTeamEvents::PawnEvents)
    ;

    class_< FWeaponEvents, bases< FEventsBase >  >("FWeaponEvents", no_init)
    ;

    class_< FPawnEvents, bases< FEventsBase >  >("FPawnEvents", no_init)
    ;

    class_< FPlayerEvents >("FPlayerEvents", no_init)
        .def_readwrite("TotalEvents", &FPlayerEvents::TotalEvents)
        .def_readwrite("WeaponEvents", &FPlayerEvents::WeaponEvents)
        .def_readwrite("DamageAsPlayerEvents", &FPlayerEvents::DamageAsPlayerEvents)
        .def_readwrite("DamageAsTargetEvents", &FPlayerEvents::DamageAsTargetEvents)
        .def_readwrite("ProjectileEvents", &FPlayerEvents::ProjectileEvents)
        .def_readwrite("PawnEvents", &FPlayerEvents::PawnEvents)
    ;

    class_< FRecoilDef >("FRecoilDef", no_init)
        .def_readwrite("TimeToGo", &FRecoilDef::TimeToGo)
        .def_readwrite("TimeDuration", &FRecoilDef::TimeDuration)
        .def_readwrite("RotAmplitude", &FRecoilDef::RotAmplitude)
        .def_readwrite("RotFrequency", &FRecoilDef::RotFrequency)
        .def_readwrite("RotSinOffset", &FRecoilDef::RotSinOffset)
        .def_readwrite("RotParams", &FRecoilDef::RotParams)
        .def_readwrite("RotOffset", &FRecoilDef::RotOffset)
        .def_readwrite("LocAmplitude", &FRecoilDef::LocAmplitude)
        .def_readwrite("LocFrequency", &FRecoilDef::LocFrequency)
        .def_readwrite("LocSinOffset", &FRecoilDef::LocSinOffset)
        .def_readwrite("LocParams", &FRecoilDef::LocParams)
        .def_readwrite("LocOffset", &FRecoilDef::LocOffset)
    ;

    class_< FRecoilParams >("FRecoilParams", no_init)
        .def_readwrite("X", &FRecoilParams::X)
        .def_readwrite("Y", &FRecoilParams::Y)
        .def_readwrite("Z", &FRecoilParams::Z)
        .def_readwrite("Padding", &FRecoilParams::Padding)
    ;

    class_< FGameEvent >("FGameEvent", no_init)
        .def_readwrite("EventCountByTimePeriod", &FGameEvent::EventCountByTimePeriod)
    ;

    class_< FGFxWidgetBinding >("FGFxWidgetBinding", no_init)
        .def_readwrite("WidgetName", &FGFxWidgetBinding::WidgetName)
        .def_readwrite("WidgetClass", &FGFxWidgetBinding::WidgetClass)
    ;

    class_< FASValue >("FASValue", no_init)
        .def_readwrite("Type", &FASValue::Type)
        .def_readwrite("N", &FASValue::N)
        .def_readwrite("S", &FASValue::S)
    ;

    class_< FASColorTransform >("FASColorTransform", no_init)
        .def_readwrite("Multiply", &FASColorTransform::Multiply)
        .def_readwrite("Add", &FASColorTransform::Add)
    ;

    class_< FASDisplayInfo >("FASDisplayInfo", no_init)
        .def_readwrite("X", &FASDisplayInfo::X)
        .def_readwrite("Y", &FASDisplayInfo::Y)
        .def_readwrite("Z", &FASDisplayInfo::Z)
        .def_readwrite("Rotation", &FASDisplayInfo::Rotation)
        .def_readwrite("XRotation", &FASDisplayInfo::XRotation)
        .def_readwrite("YRotation", &FASDisplayInfo::YRotation)
        .def_readwrite("XScale", &FASDisplayInfo::XScale)
        .def_readwrite("YScale", &FASDisplayInfo::YScale)
        .def_readwrite("ZScale", &FASDisplayInfo::ZScale)
        .def_readwrite("Alpha", &FASDisplayInfo::Alpha)
    ;

    class_< FExternalTexture >("FExternalTexture", no_init)
        .def_readwrite("Resource", &FExternalTexture::Resource)
        .def_readwrite("Texture", &FExternalTexture::Texture)
    ;

    class_< FSoundThemeBinding >("FSoundThemeBinding", no_init)
        .def_readwrite("ThemeName", &FSoundThemeBinding::ThemeName)
        .def_readwrite("Theme", &FSoundThemeBinding::Theme)
    ;

    class_< FGFxDataStoreBinding >("FGFxDataStoreBinding", no_init)
        .def_readwrite("DataSource", &FGFxDataStoreBinding::DataSource)
        .def_readwrite("VarPath", &FGFxDataStoreBinding::VarPath)
        .def_readwrite("ModelId", &FGFxDataStoreBinding::ModelId)
        .def_readwrite("ControlId", &FGFxDataStoreBinding::ControlId)
        .def_readwrite("CellTags", &FGFxDataStoreBinding::CellTags)
        .def_readwrite("ModelIdUtf8", &FGFxDataStoreBinding::ModelIdUtf8)
        .def_readwrite("ControlIdUtf8", &FGFxDataStoreBinding::ControlIdUtf8)
        .def_readwrite("ListDataProvider", &FGFxDataStoreBinding::ListDataProvider)
        .def_readonly("UnknownData00", &FGFxDataStoreBinding::UnknownData00)
        .def_readwrite("FullCellTags", &FGFxDataStoreBinding::FullCellTags)
        .def_readwrite("ModelRef", &FGFxDataStoreBinding::ModelRef)
        .def_readwrite("ControlRef", &FGFxDataStoreBinding::ControlRef)
    ;

    class_< FAkEventResolver >("FAkEventResolver", no_init)
        .def_readwrite("Interaction", &FAkEventResolver::Interaction)
        .def_readwrite("AkEvent", &FAkEventResolver::AkEvent)
    ;

    class_< FEventData >("FEventData", no_init)
        .def_readwrite("Type", &FEventData::Type)
        .def_readwrite("Data", &FEventData::Data)
        .def_readwrite("mouseIndex", &FEventData::mouseIndex)
        .def_readwrite("Button", &FEventData::Button)
        .def_readwrite("Index", &FEventData::Index)
        .def_readwrite("lastIndex", &FEventData::lastIndex)
        .def_readwrite("controllerIdx", &FEventData::controllerIdx)
    ;

    class_< FGCReference >("FGCReference", no_init)
        .def_readwrite("m_object", &FGCReference::m_object)
        .def_readwrite("m_count", &FGCReference::m_count)
        .def_readwrite("m_statid", &FGCReference::m_statid)
    ;

    class_< FSpecializedBehaviorEvent >("FSpecializedBehaviorEvent", no_init)
        .def_readwrite("EventName", &FSpecializedBehaviorEvent::EventName)
    ;

    class_< FSpecialMoveData >("FSpecialMoveData", no_init)
        .def_readwrite("Data", &FSpecialMoveData::Data)
        .def_readwrite("PlayRateScale", &FSpecialMoveData::PlayRateScale)
        .def_readwrite("Duration", &FSpecialMoveData::Duration)
        .def_readwrite("CallbackName", &FSpecialMoveData::CallbackName)
        .def_readwrite("CallbackObject", &FSpecialMoveData::CallbackObject)
        .def_readwrite("SMD", &FSpecialMoveData::SMD)
    ;

    class_< FSlotAnimParameters >("FSlotAnimParameters", no_init)
        .def_readwrite("SMData", &FSlotAnimParameters::SMData)
        .def_readwrite("CustomAnimDef", &FSlotAnimParameters::CustomAnimDef)
        .def_readwrite("CustomAnimName", &FSlotAnimParameters::CustomAnimName)
        .def_readwrite("PerBoneWeights", &FSlotAnimParameters::PerBoneWeights)
        .def_readwrite("TransformReqBone", &FSlotAnimParameters::TransformReqBone)
        .def_readwrite("TransformReqBoneIndex", &FSlotAnimParameters::TransformReqBoneIndex)
    ;

    class_< FFeatherBoneBlendData >("FFeatherBoneBlendData", no_init)
        .def_readwrite("StartBoneName", &FFeatherBoneBlendData::StartBoneName)
        .def_readwrite("BlendWeight", &FFeatherBoneBlendData::BlendWeight)
    ;

    class_< FSMBehavior >("FSMBehavior", no_init)
        .def_readwrite("Behaviors", &FSMBehavior::Behaviors)
    ;

    class_< FSMNotify, bases< FSMBehavior >  >("FSMNotify", no_init)
        .def_readwrite("Time", &FSMNotify::Time)
    ;

    class_< FTimedAnimBehaviorEvent, bases< FSpecializedBehaviorEvent >  >("FTimedAnimBehaviorEvent", no_init)
        .def_readwrite("Time", &FTimedAnimBehaviorEvent::Time)
    ;

    class_< FBehaviorSequenceData >("FBehaviorSequenceData", no_init)
        .def_readwrite("BehaviorSequenceName", &FBehaviorSequenceData::BehaviorSequenceName)
        .def_readwrite("CustomEnableCondition", &FBehaviorSequenceData::CustomEnableCondition)
        .def_readwrite("EventData", &FBehaviorSequenceData::EventData)
        .def_readwrite("EventData2", &FBehaviorSequenceData::EventData2)
        .def_readwrite("BehaviorData", &FBehaviorSequenceData::BehaviorData)
        .def_readwrite("BehaviorData2", &FBehaviorSequenceData::BehaviorData2)
        .def_readwrite("VariableData", &FBehaviorSequenceData::VariableData)
        .def_readwrite("ConsolidatedOutputLinkData", &FBehaviorSequenceData::ConsolidatedOutputLinkData)
        .def_readwrite("ConsolidatedVariableLinkData", &FBehaviorSequenceData::ConsolidatedVariableLinkData)
        .def_readwrite("ConsolidatedLinkedVariables", &FBehaviorSequenceData::ConsolidatedLinkedVariables)
    ;

    class_< FBehaviorEventData >("FBehaviorEventData", no_init)
        .def_readwrite("UserData", &FBehaviorEventData::UserData)
        .def_readwrite("OutputVariables", &FBehaviorEventData::OutputVariables)
        .def_readwrite("OutputLinks", &FBehaviorEventData::OutputLinks)
    ;

    class_< FBehaviorEventUserData >("FBehaviorEventUserData", no_init)
        .def_readwrite("EventName", &FBehaviorEventUserData::EventName)
        .def_readwrite("MaxTriggerCount", &FBehaviorEventUserData::MaxTriggerCount)
        .def_readwrite("ReTriggerDelay", &FBehaviorEventUserData::ReTriggerDelay)
        .def_readwrite("FilterObject", &FBehaviorEventUserData::FilterObject)
    ;

    class_< FBehaviorVariableLinkData >("FBehaviorVariableLinkData", no_init)
        .def_readwrite("PropertyName", &FBehaviorVariableLinkData::PropertyName)
        .def_readwrite("ConnectionIndex", &FBehaviorVariableLinkData::ConnectionIndex)
        .def_readwrite("LinkedVariables", &FBehaviorVariableLinkData::LinkedVariables)
        .def_readwrite("CachedProperty", &FBehaviorVariableLinkData::CachedProperty)
    ;

    class_< FBehaviorOutputLinkData >("FBehaviorOutputLinkData", no_init)
        .def_readwrite("LinkId", &FBehaviorOutputLinkData::LinkId)
        .def_readwrite("LinkedActions", &FBehaviorOutputLinkData::LinkedActions)
    ;

    class_< FBehaviorActionLinkData >("FBehaviorActionLinkData", no_init)
        .def_readwrite("LinkedBehavior", &FBehaviorActionLinkData::LinkedBehavior)
        .def_readwrite("ActivateDelay", &FBehaviorActionLinkData::ActivateDelay)
    ;

    class_< FBehaviorEventData2 >("FBehaviorEventData2", no_init)
        .def_readwrite("UserData", &FBehaviorEventData2::UserData)
        .def_readwrite("OutputVariables", &FBehaviorEventData2::OutputVariables)
        .def_readwrite("OutputLinks", &FBehaviorEventData2::OutputLinks)
    ;

    class_< FSubarrayData >("FSubarrayData", no_init)
        .def_readwrite("ArrayIndexAndLength", &FSubarrayData::ArrayIndexAndLength)
    ;

    class_< FBehaviorSequenceActionData >("FBehaviorSequenceActionData", no_init)
        .def_readwrite("Behavior", &FBehaviorSequenceActionData::Behavior)
        .def_readwrite("ContextVariables", &FBehaviorSequenceActionData::ContextVariables)
        .def_readwrite("LinkedVariables", &FBehaviorSequenceActionData::LinkedVariables)
        .def_readwrite("OutputVariables", &FBehaviorSequenceActionData::OutputVariables)
        .def_readwrite("OutputLinks", &FBehaviorSequenceActionData::OutputLinks)
    ;

    class_< FBehaviorSequenceActionData2 >("FBehaviorSequenceActionData2", no_init)
        .def_readwrite("Behavior", &FBehaviorSequenceActionData2::Behavior)
        .def_readwrite("LinkedVariables", &FBehaviorSequenceActionData2::LinkedVariables)
        .def_readwrite("OutputLinks", &FBehaviorSequenceActionData2::OutputLinks)
    ;

    class_< FBehaviorVariableData >("FBehaviorVariableData", no_init)
        .def_readwrite("Name", &FBehaviorVariableData::Name)
        .def_readwrite("Type", &FBehaviorVariableData::Type)
        .def_readwrite("Value", &FBehaviorVariableData::Value)
    ;

    class_< FBehaviorVariableValueUnion_Mirror >("FBehaviorVariableValueUnion_Mirror", no_init)
        .def_readwrite("Data", &FBehaviorVariableValueUnion_Mirror::Data)
    ;

    class_< FBehaviorOutputLinkData2 >("FBehaviorOutputLinkData2", no_init)
        .def_readwrite("LinkIdAndLinkedBehavior", &FBehaviorOutputLinkData2::LinkIdAndLinkedBehavior)
        .def_readwrite("ActivateDelay", &FBehaviorOutputLinkData2::ActivateDelay)
    ;

    class_< FBehaviorVariableLinkData2 >("FBehaviorVariableLinkData2", no_init)
        .def_readwrite("PropertyName", &FBehaviorVariableLinkData2::PropertyName)
        .def_readwrite("VariableLinkType", &FBehaviorVariableLinkData2::VariableLinkType)
        .def_readwrite("ConnectionIndex", &FBehaviorVariableLinkData2::ConnectionIndex)
        .def_readwrite("LinkedVariables", &FBehaviorVariableLinkData2::LinkedVariables)
        .def_readwrite("CachedProperty", &FBehaviorVariableLinkData2::CachedProperty)
    ;

    class_< FBehaviorVariableValue >("FBehaviorVariableValue", no_init)
        .def_readwrite("IntValue", &FBehaviorVariableValue::IntValue)
        .def_readwrite("FloatValue", &FBehaviorVariableValue::FloatValue)
        .def_readwrite("VectorValue", &FBehaviorVariableValue::VectorValue)
        .def_readwrite("ObjectValue", &FBehaviorVariableValue::ObjectValue)
        .def_readwrite("VariableType", &FBehaviorVariableValue::VariableType)
    ;

    class_< FBehaviorConsumerHandle >("FBehaviorConsumerHandle", no_init)
        .def_readwrite("PID", &FBehaviorConsumerHandle::PID)
    ;

    class_< FReplicatedSpecialMoveData >("FReplicatedSpecialMoveData", no_init)
        .def_readwrite("Data", &FReplicatedSpecialMoveData::Data)
        .def_readwrite("PlayRateScale", &FReplicatedSpecialMoveData::PlayRateScale)
        .def_readwrite("Duration", &FReplicatedSpecialMoveData::Duration)
        .def_readwrite("DirtyCounter", &FReplicatedSpecialMoveData::DirtyCounter)
        .def_readwrite("SMD", &FReplicatedSpecialMoveData::SMD)
    ;

    class_< FGearboxCoverState >("FGearboxCoverState", no_init)
        .def_readwrite("TheCoverActor", &FGearboxCoverState::TheCoverActor)
        .def_readwrite("SlotIndex", &FGearboxCoverState::SlotIndex)
        .def_readwrite("State", &FGearboxCoverState::State)
        .def_readwrite("ExtendedState", &FGearboxCoverState::ExtendedState)
        .def_readwrite("MetaData", &FGearboxCoverState::MetaData)
        .def_readwrite("ExtendedMetaData", &FGearboxCoverState::ExtendedMetaData)
    ;

    class_< FGearboxCoverTransition >("FGearboxCoverTransition", no_init)
        .def_readwrite("Action", &FGearboxCoverTransition::Action)
        .def_readwrite("ExtendedAction", &FGearboxCoverTransition::ExtendedAction)
        .def_readonly("Padding", &FGearboxCoverTransition::Padding)
    ;

    class_< FCoverSpotInfo >("FCoverSpotInfo", no_init)
        .def_readwrite("TheCoverActor", &FCoverSpotInfo::TheCoverActor)
        .def_readwrite("CoverSlotIndex", &FCoverSpotInfo::CoverSlotIndex)
        .def_readwrite("CoverSpotWorldLocation", &FCoverSpotInfo::CoverSpotWorldLocation)
        .def_readwrite("CoverHeight", &FCoverSpotInfo::CoverHeight)
        .def_readwrite("ExtendedInfo1", &FCoverSpotInfo::ExtendedInfo1)
        .def_readwrite("ExtendedInfo2", &FCoverSpotInfo::ExtendedInfo2)
        .def_readwrite("ExtendedInfo3", &FCoverSpotInfo::ExtendedInfo3)
    ;

    class_< FCoverDebugPriority >("FCoverDebugPriority", no_init)
        .def_readwrite("Score", &FCoverDebugPriority::Score)
        .def_readwrite("Distance", &FCoverDebugPriority::Distance)
        .def_readwrite("TheCoverActor", &FCoverDebugPriority::TheCoverActor)
        .def_readwrite("SlotNdx", &FCoverDebugPriority::SlotNdx)
        .def_readwrite("FailString", &FCoverDebugPriority::FailString)
        .def_readwrite("ScoringInfo", &FCoverDebugPriority::ScoringInfo)
    ;

    class_< FCoverDebugScoringInfo >("FCoverDebugScoringInfo", no_init)
        .def_readwrite("PriorityName", &FCoverDebugScoringInfo::PriorityName)
        .def_readwrite("Score", &FCoverDebugScoringInfo::Score)
    ;

    class_< FKnowledgeRecordStruct >("FKnowledgeRecordStruct", no_init)
        .def_readwrite("TheObj", &FKnowledgeRecordStruct::TheObj)
        .def_readwrite("InUse", &FKnowledgeRecordStruct::InUse)
        .def_readwrite("DeathTimeStamp", &FTimeStampedRecord::DeathTimeStamp)
    ;

    class_< FTimeStampedRecord >("FTimeStampedRecord", no_init)
        .def_readwrite("DeathTimeStamp", &FTimeStampedRecord::DeathTimeStamp)
    ;

    class_< FRuleSetRecord, bases< FTimeStampedRecord >  >("FRuleSetRecord", no_init)
        .def_readwrite("TheObj", &FRuleSetRecord::TheObj)
        .def_readwrite("InUse", &FRuleSetRecord::InUse)
    ;

    class_< FFlagDefinitionInitialization >("FFlagDefinitionInitialization", no_init)
        .def_readwrite("FlagToSet", &FFlagDefinitionInitialization::FlagToSet)
        .def_readwrite("ChanceTrue", &FFlagDefinitionInitialization::ChanceTrue)
        .def_readwrite("ProbabilityTrue", &FFlagDefinitionInitialization::ProbabilityTrue)
        .def_readwrite("Duration", &FFlagDefinitionInitialization::Duration)
    ;

    class_< FAITreeData >("FAITreeData", no_init)
        .def_readwrite("AI", &FAITreeData::AI)
        .def_readonly("UnknownData00", &FAITreeData::UnknownData00)
        .def_readwrite("Type", &FAITreeData::Type)
        .def_readwrite("Children", &FAITreeData::Children)
        .def_readwrite("Resource", &FAITreeData::Resource)
        .def_readwrite("CanRunIf", &FAITreeData::CanRunIf)
        .def_readwrite("TimedStart", &FAITreeData::TimedStart)
        .def_readwrite("TimedReset", &FAITreeData::TimedReset)
        .def_readwrite("TimedFail", &FAITreeData::TimedFail)
        .def_readwrite("ActiveChild", &FAITreeData::ActiveChild)
        .def_readwrite("NextActiveChild", &FAITreeData::NextActiveChild)
        .def_readwrite("LastFailTime", &FAITreeData::LastFailTime)
        .def_readwrite("NextTimedRun", &FAITreeData::NextTimedRun)
        .def_readwrite("NextTimedFail", &FAITreeData::NextTimedFail)
        .def_readwrite("NextTimedResource", &FAITreeData::NextTimedResource)
        .def_readwrite("Action", &FAITreeData::Action)
        .def_readwrite("LoopCount", &FAITreeData::LoopCount)
        .def_readwrite("LastRandomChild", &FAITreeData::LastRandomChild)
        .def_readwrite("Weights", &FAITreeData::Weights)
        .def_readwrite("LoopCountMax", &FAITreeData::LoopCountMax)
        .def_readwrite("Conditions", &FAITreeData::Conditions)
        .def_readwrite("NextSequentialChild", &FAITreeData::NextSequentialChild)
        .def_readwrite("PosX", &FAITreeData::PosX)
        .def_readwrite("PosY", &FAITreeData::PosY)
        .def_readwrite("NodeName", &FAITreeData::NodeName)
        .def_readwrite("ActionFailName", &FAITreeData::ActionFailName)
        .def_readwrite("FailReason", &FAITreeData::FailReason)
    ;

    class_< FAIResourceRestriction >("FAIResourceRestriction", no_init)
        .def_readwrite("MaxUsers", &FAIResourceRestriction::MaxUsers)
        .def_readwrite("MinUsers", &FAIResourceRestriction::MinUsers)
        .def_readwrite("Resource", &FAIResourceRestriction::Resource)
    ;

    class_< FAIRange >("FAIRange", no_init)
        .def_readwrite("MinVal", &FAIRange::MinVal)
        .def_readwrite("MaxVal", &FAIRange::MaxVal)
    ;

    class_< FAIResourceData >("FAIResourceData", no_init)
        .def_readwrite("Resource", &FAIResourceData::Resource)
        .def_readwrite("CanRun", &FAIResourceData::CanRun)
        .def_readwrite("Running", &FAIResourceData::Running)
    ;

    class_< FHitTargetRecord >("FHitTargetRecord", no_init)
        .def_readwrite("vecHitLoc", &FHitTargetRecord::vecHitLoc)
        .def_readwrite("flDamage", &FHitTargetRecord::flDamage)
        .def_readwrite("flHitTime", &FHitTargetRecord::flHitTime)
    ;

    class_< FPriorityDebugStruct >("FPriorityDebugStruct", no_init)
        .def_readwrite("IteratorName", &FPriorityDebugStruct::IteratorName)
        .def_readwrite("ShortName", &FPriorityDebugStruct::ShortName)
        .def_readwrite("PriorityValue", &FPriorityDebugStruct::PriorityValue)
    ;

    class_< FAIHoldData >("FAIHoldData", no_init)
        .def_readwrite("HoldName", &FAIHoldData::HoldName)
        .def_readwrite("HoldTag", &FAIHoldData::HoldTag)
    ;

    class_< FFlagEvalORConnector >("FFlagEvalORConnector", no_init)
        .def_readwrite("ANDChain", &FFlagEvalORConnector::ANDChain)
    ;

    class_< FFlagEvalConditional >("FFlagEvalConditional", no_init)
        .def_readwrite("FlagEvalType", &FFlagEvalConditional::FlagEvalType)
        .def_readwrite("FlagDefinition", &FFlagEvalConditional::FlagDefinition)
        .def_readwrite("TimeSeconds", &FFlagEvalConditional::TimeSeconds)
    ;

    class_< FRuleRecord, bases< FTimeStampedRecord >  >("FRuleRecord", no_init)
        .def_readwrite("TheObj", &FRuleRecord::TheObj)
        .def_readwrite("InUse", &FRuleRecord::InUse)
    ;

    class_< FActionSequenceRecord, bases< FTimeStampedRecord >  >("FActionSequenceRecord", no_init)
        .def_readwrite("TheObj", &FActionSequenceRecord::TheObj)
        .def_readwrite("InUse", &FActionSequenceRecord::InUse)
    ;

    class_< FTargetInfoRecord, bases< FTimeStampedRecord >  >("FTargetInfoRecord", no_init)
        .def_readwrite("TheObj", &FTargetInfoRecord::TheObj)
        .def_readwrite("InUse", &FTargetInfoRecord::InUse)
    ;

    class_< FAIDefinitionRecord, bases< FTimeStampedRecord >  >("FAIDefinitionRecord", no_init)
        .def_readwrite("TheObj", &FAIDefinitionRecord::TheObj)
        .def_readwrite("InUse", &FAIDefinitionRecord::InUse)
    ;

    class_< FDynamicFlagInstanceData >("FDynamicFlagInstanceData", no_init)
        .def_readwrite("DynamicFlag", &FDynamicFlagInstanceData::DynamicFlag)
        .def_readwrite("LastEvaluatedExpressionTime", &FDynamicFlagInstanceData::LastEvaluatedExpressionTime)
    ;

    class_< FRuleInfo >("FRuleInfo", no_init)
        .def_readwrite("RuleName", &FRuleInfo::RuleName)
        .def_readwrite("RuleNameString", &FRuleInfo::RuleNameString)
        .def_readwrite("RunningSequence", &FRuleInfo::RunningSequence)
        .def_readwrite("LatentAction", &FRuleInfo::LatentAction)
        .def_readwrite("ColorCodedStrings", &FRuleInfo::ColorCodedStrings)
        .def_readwrite("ContainerRuleStartNdx", &FRuleInfo::ContainerRuleStartNdx)
        .def_readwrite("ContainerRuleNumSubRules", &FRuleInfo::ContainerRuleNumSubRules)
    ;

    class_< FEventRecord >("FEventRecord", no_init)
        .def_readwrite("EventDefinition", &FEventRecord::EventDefinition)
        .def_readwrite("OtherEventParticipantObject", &FEventRecord::OtherEventParticipantObject)
    ;

    class_< FRuleSetReference >("FRuleSetReference", no_init)
        .def_readwrite("ReferenceName", &FRuleSetReference::ReferenceName)
        .def_readwrite("ReferenceRuleSet", &FRuleSetReference::ReferenceRuleSet)
    ;

    class_< FNounAttributeState >("FNounAttributeState", no_init)
        .def_readwrite("NounName", &FNounAttributeState::NounName)
        .def_readwrite("Value", &FNounAttributeState::Value)
        .def_readwrite("BaseValue", &FNounAttributeState::BaseValue)
        .def_readwrite("ModifierStack", &FNounAttributeState::ModifierStack)
        .def_readwrite("ReplicationStrategy", &FNounAttributeState::ReplicationStrategy)
        .def_readwrite("IndexInReplicationArray", &FNounAttributeState::IndexInReplicationArray)
    ;

    class_< FPathFindData >("FPathFindData", no_init)
        .def_readwrite("Path", &FPathFindData::Path)
        .def_readwrite("FinalDest", &FPathFindData::FinalDest)
        .def_readwrite("MaxRangeToDest", &FPathFindData::MaxRangeToDest)
        .def_readwrite("AnchorPoly", &FPathFindData::AnchorPoly)
    ;

    class_< FDialogEventInfo >("FDialogEventInfo", no_init)
        .def_readwrite("Event", &FDialogEventInfo::Event)
        .def_readwrite("NodeID", &FDialogEventInfo::NodeID)
    ;

    class_< FOutputLink >("FOutputLink", no_init)
        .def_readwrite("Links", &FOutputLink::Links)
    ;

    class_< FVariableLink >("FVariableLink", no_init)
        .def_readwrite("Links", &FVariableLink::Links)
    ;

    class_< FGearboxDialogData >("FGearboxDialogData", no_init)
        .def_readwrite("NameTag", &FGearboxDialogData::NameTag)
        .def_readwrite("TalkAkEvent", &FGearboxDialogData::TalkAkEvent)
        .def_readwrite("AkAudioUniqueID", &FGearboxDialogData::AkAudioUniqueID)
        .def_readwrite("Pitch", &FGearboxDialogData::Pitch)
    ;

    class_< FGearboxDialogReplicatedData >("FGearboxDialogReplicatedData", no_init)
        .def_readwrite("Pitch", &FGearboxDialogReplicatedData::Pitch)
        .def_readwrite("TalkAkEvent", &FGearboxDialogReplicatedData::TalkAkEvent)
        .def_readwrite("AkAudioUniqueID", &FGearboxDialogReplicatedData::AkAudioUniqueID)
        .def_readwrite("TalkAct", &FGearboxDialogReplicatedData::TalkAct)
        .def_readwrite("EventTag", &FGearboxDialogReplicatedData::EventTag)
    ;

    class_< FOutputLinkToStruct >("FOutputLinkToStruct", no_init)
        .def_readwrite("FromNodeID", &FOutputLinkToStruct::FromNodeID)
        .def_readwrite("LinkNumber", &FOutputLinkToStruct::LinkNumber)
        .def_readwrite("ToNodeID", &FOutputLinkToStruct::ToNodeID)
    ;

    class_< FDialogEventData >("FDialogEventData", no_init)
        .def_readwrite("Tag", &FDialogEventData::Tag)
        .def_readwrite("OutputAction", &FDialogEventData::OutputAction)
    ;

    class_< FTalkActData >("FTalkActData", no_init)
        .def_readwrite("OutputDelay", &FTalkActData::OutputDelay)
        .def_readwrite("TalkData", &FTalkActData::TalkData)
        .def_readwrite("TalkerVariable", &FTalkActData::TalkerVariable)
        .def_readwrite("OutputAction", &FTalkActData::OutputAction)
    ;

    class_< FGestaltInfo >("FGestaltInfo", no_init)
        .def_readwrite("Parts", &FGestaltInfo::Parts)
    ;

    class_< FGestaltPart >("FGestaltPart", no_init)
        .def_readwrite("SkeletalMeshFragment", &FGestaltPart::SkeletalMeshFragment)
        .def_readwrite("SkeletalMeshFragmentName", &FGestaltPart::SkeletalMeshFragmentName)
        .def_readwrite("MaterialIndex", &FGestaltPart::MaterialIndex)
        .def_readwrite("FirstIndex", &FGestaltPart::FirstIndex)
        .def_readwrite("NumPrimitives", &FGestaltPart::NumPrimitives)
    ;

    class_< FGestaltAccessoryNameEntry >("FGestaltAccessoryNameEntry", no_init)
        .def_readwrite("SkeletalMeshFragmentName", &FGestaltAccessoryNameEntry::SkeletalMeshFragmentName)
    ;

    class_< FGestaltSocketRemapEntry >("FGestaltSocketRemapEntry", no_init)
        .def_readwrite("SkeletalMeshFragment", &FGestaltSocketRemapEntry::SkeletalMeshFragment)
        .def_readwrite("SkeletalMeshFragmentName", &FGestaltSocketRemapEntry::SkeletalMeshFragmentName)
        .def_readwrite("OriginalSocketName", &FGestaltSocketRemapEntry::OriginalSocketName)
        .def_readwrite("MangledSocketName", &FGestaltSocketRemapEntry::MangledSocketName)
    ;

    class_< FGestaltPartBoundsEntry >("FGestaltPartBoundsEntry", no_init)
        .def_readwrite("SkeletalMeshFragmentName", &FGestaltPartBoundsEntry::SkeletalMeshFragmentName)
        .def_readwrite("ReferencePoseBounds", &FGestaltPartBoundsEntry::ReferencePoseBounds)
    ;

    class_< FGestaltPartPermutation >("FGestaltPartPermutation", no_init)
        .def_readwrite("MeshName", &FGestaltPartPermutation::MeshName)
        .def_readwrite("GroupName", &FGestaltPartPermutation::GroupName)
        .def_readwrite("PartName", &FGestaltPartPermutation::PartName)
    ;

    class_< FGearboxViewShakeInfo >("FGearboxViewShakeInfo", no_init)
        .def_readwrite("OffsetMag", &FGearboxViewShakeInfo::OffsetMag)
        .def_readwrite("OffsetRate", &FGearboxViewShakeInfo::OffsetRate)
        .def_readwrite("OffsetTime", &FGearboxViewShakeInfo::OffsetTime)
        .def_readwrite("RotMag", &FGearboxViewShakeInfo::RotMag)
        .def_readwrite("RotRate", &FGearboxViewShakeInfo::RotRate)
        .def_readwrite("RotTime", &FGearboxViewShakeInfo::RotTime)
        .def_readwrite("FOVMag", &FGearboxViewShakeInfo::FOVMag)
        .def_readwrite("FOVRate", &FGearboxViewShakeInfo::FOVRate)
        .def_readwrite("FOVTime", &FGearboxViewShakeInfo::FOVTime)
    ;

    class_< FDebugListItem >("FDebugListItem", no_init)
        .def_readwrite("DisplayType", &FDebugListItem::DisplayType)
        .def_readwrite("Location", &FDebugListItem::Location)
        .def_readwrite("Location2", &FDebugListItem::Location2)
        .def_readwrite("Location3", &FDebugListItem::Location3)
        .def_readwrite("Texture", &FDebugListItem::Texture)
        .def_readwrite("U", &FDebugListItem::U)
        .def_readwrite("V", &FDebugListItem::V)
        .def_readwrite("UL", &FDebugListItem::UL)
        .def_readwrite("VL", &FDebugListItem::VL)
        .def_readwrite("Scale", &FDebugListItem::Scale)
        .def_readwrite("TextString", &FDebugListItem::TextString)
        .def_readwrite("TextColor", &FDebugListItem::TextColor)
        .def_readwrite("Alignment", &FDebugListItem::Alignment)
    ;

    class_< FColumnDataStruct >("FColumnDataStruct", no_init)
        .def_readwrite("HeaderText", &FColumnDataStruct::HeaderText)
        .def_readwrite("Value", &FColumnDataStruct::Value)
        .def_readwrite("BarColor", &FColumnDataStruct::BarColor)
    ;

    class_< FMovieInstanceArray >("FMovieInstanceArray", no_init)
        .def_readwrite("Movies", &FMovieInstanceArray::Movies)
        .def_readwrite("PoolParent", &FMovieInstanceArray::PoolParent)
    ;

    class_< FMovieStateStruct >("FMovieStateStruct", no_init)
        .def_readwrite("States", &FMovieStateStruct::States)
        .def_readwrite("Flags", &FMovieStateStruct::Flags)
    ;

    class_< FMovieStateData >("FMovieStateData", no_init)
        .def_readwrite("State", &FMovieStateData::State)
        .def_readwrite("Mode", &FMovieStateData::Mode)
        .def_readwrite("Context", &FMovieStateData::Context)
        .def_readwrite("ASArgs", &FMovieStateData::ASArgs)
    ;

    class_< FGFxMenuLink >("FGFxMenuLink", no_init)
        .def_readwrite("MenuName", &FGFxMenuLink::MenuName)
        .def_readwrite("Definition", &FGFxMenuLink::Definition)
    ;

    class_< FRuleEngineLoadBalanceStruct >("FRuleEngineLoadBalanceStruct", no_init)
        .def_readwrite("RuleEngine", &FRuleEngineLoadBalanceStruct::RuleEngine)
        .def_readwrite("TimeSinceLastUpdate", &FRuleEngineLoadBalanceStruct::TimeSinceLastUpdate)
        .def_readwrite("Priority", &FRuleEngineLoadBalanceStruct::Priority)
    ;

    class_< FDebugLoadBalance >("FDebugLoadBalance", no_init)
        .def_readwrite("RuleEngine", &FDebugLoadBalance::RuleEngine)
        .def_readwrite("TimeSinceUpdate", &FDebugLoadBalance::TimeSinceUpdate)
        .def_readwrite("TimeToDoLastUpdate", &FDebugLoadBalance::TimeToDoLastUpdate)
        .def_readwrite("Priority", &FDebugLoadBalance::Priority)
    ;

    class_< FRELBManagerStats >("FRELBManagerStats", no_init)
        .def_readwrite("TotalTimeUpdated", &FRELBManagerStats::TotalTimeUpdated)
        .def_readwrite("MaxTimeUpdating", &FRELBManagerStats::MaxTimeUpdating)
        .def_readwrite("NumUpdated", &FRELBManagerStats::NumUpdated)
        .def_readwrite("AveragePriority", &FRELBManagerStats::AveragePriority)
        .def_readwrite("LowestPriority", &FRELBManagerStats::LowestPriority)
        .def_readwrite("HighestPriority", &FRELBManagerStats::HighestPriority)
    ;

    class_< Fs_actorList >("Fs_actorList", no_init)
        .def_readwrite("LevelName", &Fs_actorList::LevelName)
        .def_readwrite("Actor", &Fs_actorList::Actor)
    ;

    class_< FValidNameRange >("FValidNameRange", no_init)
        .def_readwrite("Start", &FValidNameRange::Start)
        .def_readwrite("End", &FValidNameRange::End)
    ;

    class_< FGbxMessageSimpleMetaData >("FGbxMessageSimpleMetaData", no_init)
        .def_readwrite("FloatData", &FGbxMessageSimpleMetaData::FloatData)
        .def_readwrite("IntData", &FGbxMessageSimpleMetaData::IntData)
        .def_readwrite("NameData", &FGbxMessageSimpleMetaData::NameData)
        .def_readwrite("VectorData", &FGbxMessageSimpleMetaData::VectorData)
    ;

    class_< FPopulationOpportunityTracker >("FPopulationOpportunityTracker", no_init)
        .def_readwrite("OpportunityOutermostName", &FPopulationOpportunityTracker::OpportunityOutermostName)
        .def_readwrite("OpportunityName", &FPopulationOpportunityTracker::OpportunityName)
        .def_readwrite("LoadedOpportunity", &FPopulationOpportunityTracker::LoadedOpportunity)
        .def_readwrite("SpawnedActors", &FPopulationOpportunityTracker::SpawnedActors)
        .def_readwrite("SavedActorsList", &FPopulationOpportunityTracker::SavedActorsList)
        .def_readwrite("ActorsRemovedWhileUnloaded", &FPopulationOpportunityTracker::ActorsRemovedWhileUnloaded)
        .def_readwrite("bTotalResetOnLevelLoad", &FPopulationOpportunityTracker::bTotalResetOnLevelLoad)
        .def_readwrite("RespawnStyle", &FPopulationOpportunityTracker::RespawnStyle)
        .def_readwrite("RespawnDelayStartTime", &FPopulationOpportunityTracker::RespawnDelayStartTime)
        .def_readwrite("SavedState", &FPopulationOpportunityTracker::SavedState)
        .def_readwrite("OpportunityCleanupParams", &FPopulationOpportunityTracker::OpportunityCleanupParams)
    ;

    class_< FOpportunityCleanupParameters >("FOpportunityCleanupParameters", no_init)
        .def_readwrite("ActorIrrelvantDistance", &FOpportunityCleanupParameters::ActorIrrelvantDistance)
    ;

    class_< FDestructionParameters >("FDestructionParameters", no_init)
    ;

    class_< FSpawnedPopulationActor >("FSpawnedPopulationActor", no_init)
        .def_readwrite("SpawnedActor", &FSpawnedPopulationActor::SpawnedActor)
        .def_readwrite("SpawnFactory", &FSpawnedPopulationActor::SpawnFactory)
        .def_readwrite("FactoryDestructionParams", &FSpawnedPopulationActor::FactoryDestructionParams)
        .def_readwrite("flLastInRadiusOrVisible", &FSpawnedPopulationActor::flLastInRadiusOrVisible)
        .def_readwrite("SpawnCost", &FSpawnedPopulationActor::SpawnCost)
        .def_readwrite("CreationFlags", &FSpawnedPopulationActor::CreationFlags)
    ;

    class_< FRemovedPopulationActor >("FRemovedPopulationActor", no_init)
        .def_readwrite("CreationFlags", &FRemovedPopulationActor::CreationFlags)
        .def_readwrite("FactoryPath", &FRemovedPopulationActor::FactoryPath)
    ;

    class_< FOpportunitySavedState >("FOpportunitySavedState", no_init)
        .def_readwrite("SelectedSpawnIdx", &FOpportunitySavedState::SelectedSpawnIdx)
        .def_readwrite("NumTotalActors", &FOpportunitySavedState::NumTotalActors)
        .def_readwrite("MaxActiveActors", &FOpportunitySavedState::MaxActiveActors)
        .def_readwrite("NumActiveActors", &FOpportunitySavedState::NumActiveActors)
        .def_readwrite("NextSpawnTime", &FOpportunitySavedState::NextSpawnTime)
    ;

    class_< FPopulationMasterStat >("FPopulationMasterStat", no_init)
        .def_readwrite("StatName", &FPopulationMasterStat::StatName)
        .def_readwrite("StatTime", &FPopulationMasterStat::StatTime)
        .def_readwrite("StatMaxTime", &FPopulationMasterStat::StatMaxTime)
        .def_readwrite("StatIterations", &FPopulationMasterStat::StatIterations)
        .def_readwrite("IterationStartTime", &FPopulationMasterStat::IterationStartTime)
    ;

    class_< FEncounterTracker >("FEncounterTracker", no_init)
        .def_readwrite("LoadedEncounter", &FEncounterTracker::LoadedEncounter)
        .def_readwrite("EncountersLevel", &FEncounterTracker::EncountersLevel)
        .def_readwrite("EncounterPath", &FEncounterTracker::EncounterPath)
        .def_readwrite("EncounterCompletionSaveState", &FEncounterTracker::EncounterCompletionSaveState)
        .def_readwrite("EncounterSaveState", &FEncounterTracker::EncounterSaveState)
        .def_readwrite("RespawnDelayStartTime", &FEncounterTracker::RespawnDelayStartTime)
    ;

    class_< FPopulationActor >("FPopulationActor", no_init)
        .def_readwrite("SpawnFactory", &FPopulationActor::SpawnFactory)
        .def_readwrite("Probability", &FPopulationActor::Probability)
        .def_readwrite("MaxActiveAtOneTime", &FPopulationActor::MaxActiveAtOneTime)
    ;

    class_< FEncounterLimitData >("FEncounterLimitData", no_init)
        .def_readwrite("ActorTags", &FEncounterLimitData::ActorTags)
        .def_readwrite("MaxTotalToSpawn", &FEncounterLimitData::MaxTotalToSpawn)
        .def_readwrite("MaxActiveAtATime", &FEncounterLimitData::MaxActiveAtATime)
        .def_readwrite("ConstraintType", &FEncounterLimitData::ConstraintType)
        .def_readwrite("LimitState", &FEncounterLimitData::LimitState)
    ;

    class_< FEncounterLimitState >("FEncounterLimitState", no_init)
        .def_readwrite("NumTotalSpawned", &FEncounterLimitState::NumTotalSpawned)
        .def_readwrite("NumCurrentlyActive", &FEncounterLimitState::NumCurrentlyActive)
    ;

    class_< FEncounterWaveData >("FEncounterWaveData", no_init)
        .def_readwrite("InitialDelay", &FEncounterWaveData::InitialDelay)
        .def_readwrite("PercentToComplete", &FEncounterWaveData::PercentToComplete)
        .def_readwrite("EncounterPopulationDef", &FEncounterWaveData::EncounterPopulationDef)
        .def_readwrite("MemberOpportunities", &FEncounterWaveData::MemberOpportunities)
        .def_readwrite("SpawnLimits", &FEncounterWaveData::SpawnLimits)
    ;

    class_< FEncounterWaveTracker >("FEncounterWaveTracker", no_init)
        .def_readwrite("nWaveIdx", &FEncounterWaveTracker::nWaveIdx)
        .def_readwrite("nLimitStateIdx", &FEncounterWaveTracker::nLimitStateIdx)
        .def_readwrite("LimitSaveState", &FEncounterWaveTracker::LimitSaveState)
    ;

    class_< FProviderRecord >("FProviderRecord", no_init)
        .def_readwrite("ProviderDefinition", &FProviderRecord::ProviderDefinition)
        .def_readwrite("ReferenceCount", &FProviderRecord::ReferenceCount)
    ;

    class_< FBehaviorExecutionRecord >("FBehaviorExecutionRecord", no_init)
        .def_readwrite("OwningProcessID", &FBehaviorExecutionRecord::OwningProcessID)
        .def_readwrite("ProvidersIndex", &FBehaviorExecutionRecord::ProvidersIndex)
        .def_readwrite("SequencesDataIndex", &FBehaviorExecutionRecord::SequencesDataIndex)
        .def_readwrite("BehaviorNumber", &FBehaviorExecutionRecord::BehaviorNumber)
        .def_readwrite("BehaviorName", &FBehaviorExecutionRecord::BehaviorName)
        .def_readwrite("TimeOfExecution", &FBehaviorExecutionRecord::TimeOfExecution)
    ;

    class_< FBehaviorEventState >("FBehaviorEventState", no_init)
        .def_readwrite("TriggerCount", &FBehaviorEventState::TriggerCount)
        .def_readwrite("LastTriggerTime", &FBehaviorEventState::LastTriggerTime)
        .def_readwrite("FilterObject", &FBehaviorEventState::FilterObject)
    ;

    class_< FBehaviorThread >("FBehaviorThread", no_init)
        .def_readwrite("ThreadState", &FBehaviorThread::ThreadState)
        .def_readwrite("OwningProcessID", &FBehaviorThread::OwningProcessID)
        .def_readwrite("ThreadSequenceState", &FBehaviorThread::ThreadSequenceState)
        .def_readwrite("NextBehavior", &FBehaviorThread::NextBehavior)
        .def_readwrite("ActivateTime", &FBehaviorThread::ActivateTime)
        .def_readwrite("BehaviorStartedTime", &FBehaviorThread::BehaviorStartedTime)
    ;

    class_< FBehaviorSequenceState >("FBehaviorSequenceState", no_init)
        .def_readwrite("ProvidersIndex", &FBehaviorSequenceState::ProvidersIndex)
        .def_readwrite("SequencesDataIndex", &FBehaviorSequenceState::SequencesDataIndex)
        .def_readwrite("SequenceEnabledBitIndex", &FBehaviorSequenceState::SequenceEnabledBitIndex)
        .def_readwrite("EventStateHead", &FBehaviorSequenceState::EventStateHead)
        .def_readwrite("VariableStateHead", &FBehaviorSequenceState::VariableStateHead)
    ;

    class_< FBehaviorProcess >("FBehaviorProcess", no_init)
        .def_readwrite("Owner", &FBehaviorProcess::Owner)
        .def_readwrite("ProcessID", &FBehaviorProcess::ProcessID)
        .def_readwrite("SequenceEnabledBitField", &FBehaviorProcess::SequenceEnabledBitField)
        .def_readwrite("ProcessState", &FBehaviorProcess::ProcessState)
        .def_readwrite("NextSequenceEnabledBitIndexToUse", &FBehaviorProcess::NextSequenceEnabledBitIndexToUse)
        .def_readwrite("bSupportsReplicatedSequenceState", &FBehaviorProcess::bSupportsReplicatedSequenceState)
        .def_readwrite("NumPendingProviderRemovalRequests", &FBehaviorProcess::NumPendingProviderRemovalRequests)
        .def_readwrite("Sequences", &FBehaviorProcess::Sequences)
        .def_readwrite("Events", &FBehaviorProcess::Events)
        .def_readwrite("Variables", &FBehaviorProcess::Variables)
    ;

    class_< FBehaviorKernelStats >("FBehaviorKernelStats", no_init)
        .def_readwrite("NumProcessesCreated", &FBehaviorKernelStats::NumProcessesCreated)
        .def_readwrite("NumThreadsCreated", &FBehaviorKernelStats::NumThreadsCreated)
        .def_readwrite("NumWaitingThreads", &FBehaviorKernelStats::NumWaitingThreads)
        .def_readwrite("NumEventsActivated", &FBehaviorKernelStats::NumEventsActivated)
        .def_readwrite("NumEventsIgnored", &FBehaviorKernelStats::NumEventsIgnored)
        .def_readwrite("NumBehaviorsRun", &FBehaviorKernelStats::NumBehaviorsRun)
        .def_readwrite("ProcessListStats", &FBehaviorKernelStats::ProcessListStats)
        .def_readwrite("ProviderListStats", &FBehaviorKernelStats::ProviderListStats)
        .def_readwrite("ObjectVariablesListStats", &FBehaviorKernelStats::ObjectVariablesListStats)
        .def_readwrite("DynamicBehaviorsListStats", &FBehaviorKernelStats::DynamicBehaviorsListStats)
        .def_readwrite("ProvidersIndexFreeListLength", &FBehaviorKernelStats::ProvidersIndexFreeListLength)
        .def_readwrite("ObjectVariablesFreeListLength", &FBehaviorKernelStats::ObjectVariablesFreeListLength)
        .def_readwrite("TotalMemoryUsed", &FBehaviorKernelStats::TotalMemoryUsed)
        .def_readwrite("MemoryUsedBySlack", &FBehaviorKernelStats::MemoryUsedBySlack)
    ;

    class_< FBehaviorKernelArrayStats >("FBehaviorKernelArrayStats", no_init)
        .def_readwrite("UsedSlots", &FBehaviorKernelArrayStats::UsedSlots)
        .def_readwrite("UnusedSlots", &FBehaviorKernelArrayStats::UnusedSlots)
        .def_readwrite("PeakUsage", &FBehaviorKernelArrayStats::PeakUsage)
        .def_readwrite("ContainerSlack", &FBehaviorKernelArrayStats::ContainerSlack)
    ;

    class_< FReplicatedBehaviorEvent >("FReplicatedBehaviorEvent", no_init)
        .def_readwrite("SequenceIndex", &FReplicatedBehaviorEvent::SequenceIndex)
        .def_readwrite("EventCounter", &FReplicatedBehaviorEvent::EventCounter)
        .def_readwrite("EventIndex", &FReplicatedBehaviorEvent::EventIndex)
        .def_readwrite("EventOutput", &FReplicatedBehaviorEvent::EventOutput)
    ;

    class_< FReplicatedBehaviorConsumerState >("FReplicatedBehaviorConsumerState", no_init)
        .def_readwrite("BehaviorSequenceEnabledFlags", &FReplicatedBehaviorConsumerState::BehaviorSequenceEnabledFlags)
    ;

    class_< FThumbnailRenderData >("FThumbnailRenderData", no_init)
        .def_readwrite("Context", &FThumbnailRenderData::Context)
        .def_readwrite("RenderTarget", &FThumbnailRenderData::RenderTarget)
        .def_readwrite("ResultTexture", &FThumbnailRenderData::ResultTexture)
        .def_readwrite("UpdateType", &FThumbnailRenderData::UpdateType)
        .def_readwrite("Mesh", &FThumbnailRenderData::Mesh)
        .def_readwrite("TextureSizeX", &FThumbnailRenderData::TextureSizeX)
        .def_readwrite("TextureSizeY", &FThumbnailRenderData::TextureSizeY)
        .def_readwrite("SizeX", &FThumbnailRenderData::SizeX)
        .def_readwrite("SizeY", &FThumbnailRenderData::SizeY)
        .def_readwrite("ReferencedTextures", &FThumbnailRenderData::ReferencedTextures)
        .def_readwrite("StopStreamTexturesTime", &FThumbnailRenderData::StopStreamTexturesTime)
    ;

    class_< FThumbnailLightData >("FThumbnailLightData", no_init)
        .def_readwrite("Direction", &FThumbnailLightData::Direction)
        .def_readwrite("Light", &FThumbnailLightData::Light)
    ;

    class_< FLevelStateRecord >("FLevelStateRecord", no_init)
        .def_readwrite("LevelName", &FLevelStateRecord::LevelName)
        .def_readwrite("LevelLoaded", &FLevelStateRecord::LevelLoaded)
        .def_readwrite("ObjectKeys", &FLevelStateRecord::ObjectKeys)
    ;

    class_< FObjectKey >("FObjectKey", no_init)
        .def_readwrite("ObjectName", &FObjectKey::ObjectName)
        .def_readwrite("AdditionalKey", &FObjectKey::AdditionalKey)
    ;

    class_< FTimerBehaviorUserState >("FTimerBehaviorUserState", no_init)
        .def_readonly("Timers", &FTimerBehaviorUserState::Timers)
    ;

    class_< FBehaviorTimerState >("FBehaviorTimerState", no_init)
        .def_readwrite("Delay", &FBehaviorTimerState::Delay)
        .def_readwrite("EventTime", &FBehaviorTimerState::EventTime)
    ;

    class_< FNodeData >("FNodeData", no_init)
        .def_readwrite("Node", &FNodeData::Node)
        .def_readwrite("Weight", &FNodeData::Weight)
    ;

    class_< FReplicatedNounAttributeState >("FReplicatedNounAttributeState", no_init)
        .def_readwrite("NounName", &FReplicatedNounAttributeState::NounName)
        .def_readwrite("Value", &FReplicatedNounAttributeState::Value)
    ;

    class_< FSparkResult >("FSparkResult", no_init)
        .def_readwrite("ErrorCode", &FSparkResult::ErrorCode)
        .def_readwrite("HttpStatusCode", &FSparkResult::HttpStatusCode)
        .def_readwrite("ResponseBody", &FSparkResult::ResponseBody)
    ;

    class_< FNewsArticle >("FNewsArticle", no_init)
        .def_readwrite("Header", &FNewsArticle::Header)
        .def_readwrite("Body", &FNewsArticle::Body)
    ;

    class_< FServiceResult >("FServiceResult", no_init)
        .def_readwrite("ServiceName", &FServiceResult::ServiceName)
        .def_readwrite("ConfigurationGroup", &FServiceResult::ConfigurationGroup)
        .def_readwrite("Parameters", &FServiceResult::Parameters)
    ;

    class_< FServiceParameterResult >("FServiceParameterResult", no_init)
        .def_readwrite("Key", &FServiceParameterResult::Key)
        .def_readwrite("Value", &FServiceParameterResult::Value)
    ;

    class_< FEntitlementResult >("FEntitlementResult", no_init)
        .def_readwrite("Identifier", &FEntitlementResult::Identifier)
        .def_readwrite("Payload", &FEntitlementResult::Payload)
        .def_readwrite("Id", &FEntitlementResult::Id)
        .def_readwrite("Consumed", &FEntitlementResult::Consumed)
        .def_readwrite("ConsumableAmount", &FEntitlementResult::ConsumableAmount)
    ;

    class_< FOfferResult >("FOfferResult", no_init)
        .def_readwrite("TitleEfigs", &FOfferResult::TitleEfigs)
        .def_readwrite("DescriptionEfigs", &FOfferResult::DescriptionEfigs)
        .def_readwrite("Id", &FOfferResult::Id)
        .def_readwrite("DateUnlocked", &FOfferResult::DateUnlocked)
    ;

    class_< FArchwayResult >("FArchwayResult", no_init)
        .def_readwrite("RequestId", &FArchwayResult::RequestId)
        .def_readwrite("GearboxUserToken", &FArchwayResult::GearboxUserToken)
        .def_readwrite("GearboxUserEmail", &FArchwayResult::GearboxUserEmail)
        .def_readwrite("Messages", &FArchwayResult::Messages)
        .def_readwrite("Entitlements", &FArchwayResult::Entitlements)
        .def_readwrite("Offers", &FArchwayResult::Offers)
        .def_readwrite("Services", &FArchwayResult::Services)
        .def_readwrite("EmergencyMessage", &FArchwayResult::EmergencyMessage)
    ;

    class_< FStepConfiguration >("FStepConfiguration", no_init)
        .def_readwrite("FirstAttemptDelay", &FStepConfiguration::FirstAttemptDelay)
        .def_readwrite("BaseRetrySeconds", &FStepConfiguration::BaseRetrySeconds)
        .def_readwrite("RetryMultiplier", &FStepConfiguration::RetryMultiplier)
        .def_readwrite("MaxRetryAttempts", &FStepConfiguration::MaxRetryAttempts)
        .def_readwrite("RetryJitter", &FStepConfiguration::RetryJitter)
    ;

    class_< FHttpParameters >("FHttpParameters", no_init)
        .def_readwrite("ServiceConfiguration", &FHttpParameters::ServiceConfiguration)
        .def_readwrite("SubService", &FHttpParameters::SubService)
        .def_readwrite("ContentType", &FHttpParameters::ContentType)
        .def_readwrite("CustomContentType", &FHttpParameters::CustomContentType)
        .def_readwrite("AcceptsType", &FHttpParameters::AcceptsType)
        .def_readwrite("CustomAcceptsType", &FHttpParameters::CustomAcceptsType)
        .def_readwrite("Method", &FHttpParameters::Method)
    ;

    class_< FExposureUpdateStruct >("FExposureUpdateStruct", no_init)
        .def_readwrite("FromPawn", &FExposureUpdateStruct::FromPawn)
        .def_readwrite("ToActor", &FExposureUpdateStruct::ToActor)
        .def_readwrite("TimeRequested", &FExposureUpdateStruct::TimeRequested)
        .def_readwrite("Exposure", &FExposureUpdateStruct::Exposure)
        .def_readwrite("Vantage", &FExposureUpdateStruct::Vantage)
        .def_readwrite("ShouldRemove", &FExposureUpdateStruct::ShouldRemove)
    ;

    class_< FVantageSpot >("FVantageSpot", no_init)
        .def_readwrite("Location", &FVantageSpot::Location)
        .def_readwrite("VantageType", &FVantageSpot::VantageType)
    ;

    class_< FCustomEventReactionDataSpecialized, bases< FSpecializedBehaviorEvent >  >("FCustomEventReactionDataSpecialized", no_init)
    ;

    class_< FWireLinkage >("FWireLinkage", no_init)
        .def_readwrite("Offset", &FWireLinkage::Offset)
        .def_readwrite("Width", &FWireLinkage::Width)
        .def_readwrite("Slack", &FWireLinkage::Slack)
        .def_readwrite("Segments", &FWireLinkage::Segments)
        .def_readwrite("Link", &FWireLinkage::Link)
    ;

    class_< FSMRandomPair >("FSMRandomPair", no_init)
        .def_readwrite("Weight", &FSMRandomPair::Weight)
        .def_readwrite("SMD", &FSMRandomPair::SMD)
    ;

    class_< FStateAttributeData >("FStateAttributeData", no_init)
        .def_readwrite("Key", &FStateAttributeData::Key)
        .def_readwrite("Attribute", &FStateAttributeData::Attribute)
    ;

    class_< FSMExpressionList >("FSMExpressionList", no_init)
        .def_readwrite("Expression", &FSMExpressionList::Expression)
        .def_readwrite("SMD", &FSMExpressionList::SMD)
    ;

    class_< FActionSequenceRandomData >("FActionSequenceRandomData", no_init)
        .def_readwrite("ProbabilityData", &FActionSequenceRandomData::ProbabilityData)
        .def_readwrite("ActionToRunWhenTrue", &FActionSequenceRandomData::ActionToRunWhenTrue)
    ;

    class_< FRelativeDirectionData >("FRelativeDirectionData", no_init)
        .def_readwrite("Direction", &FRelativeDirectionData::Direction)
        .def_readwrite("ConeAroundDirection", &FRelativeDirectionData::ConeAroundDirection)
        .def_readwrite("AdditionalRotation", &FRelativeDirectionData::AdditionalRotation)
    ;

    class_< FAttachmentLocationData >("FAttachmentLocationData", no_init)
        .def_readwrite("Location", &FAttachmentLocationData::Location)
        .def_readwrite("AttachmentBase", &FAttachmentLocationData::AttachmentBase)
        .def_readonly("UnknownData00", &FAttachmentLocationData::UnknownData00)
        .def_readwrite("AttachmentName", &FAttachmentLocationData::AttachmentName)
    ;

    class_< FSavedRandomValue >("FSavedRandomValue", no_init)
        .def_readwrite("ContextName", &FSavedRandomValue::ContextName)
        .def_readwrite("SavedValue", &FSavedRandomValue::SavedValue)
        .def_readwrite("ExpirationTime", &FSavedRandomValue::ExpirationTime)
    ;

    class_< FPopulationOptionAreaPopDefData >("FPopulationOptionAreaPopDefData", no_init)
        .def_readwrite("PopulationDef", &FPopulationOptionAreaPopDefData::PopulationDef)
        .def_readwrite("MaxTotalActorsFormula", &FPopulationOptionAreaPopDefData::MaxTotalActorsFormula)
        .def_readwrite("MaxTotalActors", &FPopulationOptionAreaPopDefData::MaxTotalActors)
        .def_readwrite("MaxActiveActors", &FPopulationOptionAreaPopDefData::MaxActiveActors)
        .def_readwrite("RespawnDelay", &FPopulationOptionAreaPopDefData::RespawnDelay)
        .def_readwrite("RespawnDelayAfterDeath", &FPopulationOptionAreaPopDefData::RespawnDelayAfterDeath)
    ;

    class_< FCoverDebugScoringData >("FCoverDebugScoringData", no_init)
        .def_readwrite("PriorityName", &FCoverDebugScoringData::PriorityName)
        .def_readwrite("Score", &FCoverDebugScoringData::Score)
    ;

    class_< FTargetIteratorData >("FTargetIteratorData", no_init)
        .def_readwrite("Iterator", &FTargetIteratorData::Iterator)
        .def_readwrite("Weight", &FTargetIteratorData::Weight)
    ;

    class_< FConditionalPattern >("FConditionalPattern", no_init)
        .def_readwrite("Conditions", &FConditionalPattern::Conditions)
        .def_readwrite("Pattern", &FConditionalPattern::Pattern)
    ;

    class_< FPointExposureData >("FPointExposureData", no_init)
        .def_readwrite("Looker", &FPointExposureData::Looker)
        .def_readwrite("Point", &FPointExposureData::Point)
        .def_readwrite("Point2", &FPointExposureData::Point2)
        .def_readwrite("Exposure", &FPointExposureData::Exposure)
        .def_readwrite("LastCheckTime", &FPointExposureData::LastCheckTime)
        .def_readwrite("LastUpdateTime", &FPointExposureData::LastUpdateTime)
    ;

    class_< FSparkOutstandingRequest >("FSparkOutstandingRequest", no_init)
        .def_readwrite("State", &FSparkOutstandingRequest::State)
        .def_readwrite("SleepUntil", &FSparkOutstandingRequest::SleepUntil)
        .def_readwrite("RequestCompleteDelegate", &FSparkOutstandingRequest::RequestCompleteDelegate)
        .def_readwrite("RequestIdentifier", &FSparkOutstandingRequest::RequestIdentifier)
        .def_readwrite("SparkUpdateCallback", &FSparkOutstandingRequest::SparkUpdateCallback)
        .def_readwrite("HttpRequest", &FSparkOutstandingRequest::HttpRequest)
        .def_readwrite("RequestBody", &FSparkOutstandingRequest::RequestBody)
        .def_readwrite("ResponseBody", &FSparkOutstandingRequest::ResponseBody)
        .def_readwrite("RetryNumber", &FSparkOutstandingRequest::RetryNumber)
        .def_readwrite("BaseRetryIntervalSeconds", &FSparkOutstandingRequest::BaseRetryIntervalSeconds)
        .def_readwrite("MaxRetryAttempts", &FSparkOutstandingRequest::MaxRetryAttempts)
        .def_readwrite("RetryMultiplier", &FSparkOutstandingRequest::RetryMultiplier)
        .def_readwrite("RetryJitter", &FSparkOutstandingRequest::RetryJitter)
        .def_readwrite("HttpTimeout", &FSparkOutstandingRequest::HttpTimeout)
        .def_readwrite("ReadBufferSize", &FSparkOutstandingRequest::ReadBufferSize)
        .def_readwrite("Accept", &FSparkOutstandingRequest::Accept)
        .def_readwrite("ContentType", &FSparkOutstandingRequest::ContentType)
        .def_readwrite("Method", &FSparkOutstandingRequest::Method)
        .def_readwrite("URL", &FSparkOutstandingRequest::URL)
        .def_readwrite("RequestStartTime", &FSparkOutstandingRequest::RequestStartTime)
    ;

    class_< FCoverCandidate >("FCoverCandidate", no_init)
        .def_readwrite("TheCoverActor", &FCoverCandidate::TheCoverActor)
        .def_readwrite("SlotNdx", &FCoverCandidate::SlotNdx)
        .def_readwrite("Score", &FCoverCandidate::Score)
    ;

    class_< FPopulationOptionSpawnData >("FPopulationOptionSpawnData", no_init)
        .def_readwrite("PopulationDefName", &FPopulationOptionSpawnData::PopulationDefName)
        .def_readwrite("MaxActiveActors", &FPopulationOptionSpawnData::MaxActiveActors)
        .def_readwrite("NumTotalActors", &FPopulationOptionSpawnData::NumTotalActors)
        .def_readwrite("NumActiveActors", &FPopulationOptionSpawnData::NumActiveActors)
        .def_readwrite("NextSpawnTime", &FPopulationOptionSpawnData::NextSpawnTime)
    ;

    class_< FAwarenessInfo >("FAwarenessInfo", no_init)
        .def_readwrite("Location", &FAwarenessInfo::Location)
        .def_readwrite("Radius", &FAwarenessInfo::Radius)
        .def_readwrite("AwarenessZoneName", &FAwarenessInfo::AwarenessZoneName)
        .def_readwrite("ZoneColor", &FAwarenessInfo::ZoneColor)
    ;

    class_< FLocationInfo >("FLocationInfo", no_init)
        .def_readwrite("Location", &FLocationInfo::Location)
    ;

    class_< FLastVisibleInfo >("FLastVisibleInfo", no_init)
        .def_readwrite("LastVisibleLocation", &FLastVisibleInfo::LastVisibleLocation)
        .def_readwrite("CurrentLocation", &FLastVisibleInfo::CurrentLocation)
    ;

    class_< FDebugExposure >("FDebugExposure", no_init)
        .def_readwrite("TargetExposure", &FDebugExposure::TargetExposure)
        .def_readwrite("MyExposure", &FDebugExposure::MyExposure)
        .def_readwrite("InWorldLocation", &FDebugExposure::InWorldLocation)
    ;

    class_< FViewConeInfo >("FViewConeInfo", no_init)
        .def_readwrite("ConeOrigin", &FViewConeInfo::ConeOrigin)
        .def_readwrite("ConeDirection", &FViewConeInfo::ConeDirection)
        .def_readwrite("ConeAngle", &FViewConeInfo::ConeAngle)
        .def_readwrite("ConeLength", &FViewConeInfo::ConeLength)
        .def_readwrite("ConeColor", &FViewConeInfo::ConeColor)
    ;

    class_< FCoverDebugInfo >("FCoverDebugInfo", no_init)
        .def_readwrite("CoverRegionName", &FCoverDebugInfo::CoverRegionName)
        .def_readwrite("Score", &FCoverDebugInfo::Score)
        .def_readwrite("Distance", &FCoverDebugInfo::Distance)
        .def_readwrite("FailString", &FCoverDebugInfo::FailString)
        .def_readwrite("LeftEndPoint", &FCoverDebugInfo::LeftEndPoint)
        .def_readwrite("RightEndPoint", &FCoverDebugInfo::RightEndPoint)
        .def_readwrite("CoverDirection", &FCoverDebugInfo::CoverDirection)
        .def_readwrite("ScoringInfo", &FCoverDebugInfo::ScoringInfo)
    ;

    class_< FIconData >("FIconData", no_init)
        .def_readwrite("U", &FIconData::U)
        .def_readwrite("V", &FIconData::V)
        .def_readwrite("UL", &FIconData::UL)
        .def_readwrite("VL", &FIconData::VL)
        .def_readwrite("Scale", &FIconData::Scale)
    ;

    class_< FTargetDebugDatum >("FTargetDebugDatum", no_init)
        .def_readwrite("TargetName", &FTargetDebugDatum::TargetName)
        .def_readwrite("TotalPriority", &FTargetDebugDatum::TotalPriority)
        .def_readwrite("PriorityData", &FTargetDebugDatum::PriorityData)
    ;

    class_< FTargetPriorityInfo >("FTargetPriorityInfo", no_init)
        .def_readwrite("TargetName", &FTargetPriorityInfo::TargetName)
        .def_readwrite("ShortName", &FTargetPriorityInfo::ShortName)
        .def_readwrite("Value", &FTargetPriorityInfo::Value)
        .def_readwrite("BarColor", &FTargetPriorityInfo::BarColor)
    ;

    class_< FAIHoldDebugData >("FAIHoldDebugData", no_init)
        .def_readwrite("HoldName", &FAIHoldDebugData::HoldName)
        .def_readwrite("HoldTag", &FAIHoldDebugData::HoldTag)
    ;

    class_< FBehaviorTriggerMessageStruct >("FBehaviorTriggerMessageStruct", no_init)
        .def_readwrite("MessageDefinition", &FBehaviorTriggerMessageStruct::MessageDefinition)
        .def_readwrite("Instigator", &FBehaviorTriggerMessageStruct::Instigator)
        .def_readwrite("OtherEventParticipant", &FBehaviorTriggerMessageStruct::OtherEventParticipant)
        .def_readwrite("Behaviors", &FBehaviorTriggerMessageStruct::Behaviors)
    ;

    class_< FLinkedBehaviorSequence >("FLinkedBehaviorSequence", no_init)
        .def_readwrite("ConsumerHandle", &FLinkedBehaviorSequence::ConsumerHandle)
        .def_readwrite("SequenceState", &FLinkedBehaviorSequence::SequenceState)
    ;

    class_< FDebugStringData >("FDebugStringData", no_init)
        .def_readwrite("DebugStr", &FDebugStringData::DebugStr)
        .def_readwrite("StrColor", &FDebugStringData::StrColor)
    ;

    class_< FFiringBehaviorBurstInfo >("FFiringBehaviorBurstInfo", no_init)
        .def_readwrite("Instigator", &FFiringBehaviorBurstInfo::Instigator)
        .def_readwrite("InstigatorWeapon", &FFiringBehaviorBurstInfo::InstigatorWeapon)
        .def_readwrite("TargetActor", &FFiringBehaviorBurstInfo::TargetActor)
        .def_readwrite("NumShots", &FFiringBehaviorBurstInfo::NumShots)
        .def_readwrite("RefireRate", &FFiringBehaviorBurstInfo::RefireRate)
        .def_readwrite("TargetInfo", &FFiringBehaviorBurstInfo::TargetInfo)
        .def_readwrite("FireType", &FFiringBehaviorBurstInfo::FireType)
    ;

    class_< FSpawnOption >("FSpawnOption", no_init)
        .def_readwrite("Factory", &FSpawnOption::Factory)
        .def_readwrite("ComputedProbability", &FSpawnOption::ComputedProbability)
    ;

    class_< FSparkMicropatch >("FSparkMicropatch", no_init)
        .def_readwrite("ObjectPath", &FSparkMicropatch::ObjectPath)
        .def_readwrite("PropertyPath", &FSparkMicropatch::PropertyPath)
        .def_readwrite("OriginalValue", &FSparkMicropatch::OriginalValue)
        .def_readwrite("NewValue", &FSparkMicropatch::NewValue)
    ;

    class_< FExposureCacheStruct >("FExposureCacheStruct", no_init)
        .def_readwrite("FromPawnName", &FExposureCacheStruct::FromPawnName)
        .def_readwrite("ToActorName", &FExposureCacheStruct::ToActorName)
        .def_readwrite("TimeCached", &FExposureCacheStruct::TimeCached)
        .def_readwrite("NextUpdateTime", &FExposureCacheStruct::NextUpdateTime)
        .def_readwrite("Exposure", &FExposureCacheStruct::Exposure)
        .def_readwrite("FromLoc", &FExposureCacheStruct::FromLoc)
        .def_readwrite("ToLoc", &FExposureCacheStruct::ToLoc)
        .def_readwrite("Vantage", &FExposureCacheStruct::Vantage)
    ;

    class_< FBucketStruct >("FBucketStruct", no_init)
        .def_readwrite("NdxToStartCheckFrom", &FBucketStruct::NdxToStartCheckFrom)
        .def_readwrite("DistanceSquared", &FBucketStruct::DistanceSquared)
        .def_readwrite("MaxLineChecksPerFrame", &FBucketStruct::MaxLineChecksPerFrame)
        .def_readwrite("MaxIterationsPerFrame", &FBucketStruct::MaxIterationsPerFrame)
        .def_readwrite("Exposures", &FBucketStruct::Exposures)
    ;

    class_< FPopulationOpportunitySavedActor >("FPopulationOpportunitySavedActor", no_init)
        .def_readwrite("FactoryPath", &FPopulationOpportunitySavedActor::FactoryPath)
        .def_readwrite("TimeActorSaved", &FPopulationOpportunitySavedActor::TimeActorSaved)
        .def_readwrite("SpawnActorLocation", &FPopulationOpportunitySavedActor::SpawnActorLocation)
        .def_readwrite("SpawnActorRotation", &FPopulationOpportunitySavedActor::SpawnActorRotation)
        .def_readwrite("CreationFlags", &FPopulationOpportunitySavedActor::CreationFlags)
        .def_readwrite("CustomActorData", &FPopulationOpportunitySavedActor::CustomActorData)
    ;

    class_< FPopulationOpportunityStat >("FPopulationOpportunityStat", no_init)
        .def_readwrite("PercentNodeReduction", &FPopulationOpportunityStat::PercentNodeReduction)
    ;

    class_< FPopulationOptionAreaData >("FPopulationOptionAreaData", no_init)
        .def_readwrite("ExpressionDef", &FPopulationOptionAreaData::ExpressionDef)
        .def_readwrite("PopulationDefinitions", &FPopulationOptionAreaData::PopulationDefinitions)
    ;

    class_< FTimerEventReactionData >("FTimerEventReactionData", no_init)
        .def_readwrite("EventType", &FTimerEventReactionData::EventType)
        .def_readwrite("Behaviors", &FTimerEventReactionData::Behaviors)
    ;

    class_< FTimerEventReactionDataSpecialized, bases< FSpecializedBehaviorEvent >  >("FTimerEventReactionDataSpecialized", no_init)
    ;

    class_< FMovieRangeStateData, bases< FMovieStateData >  >("FMovieRangeStateData", no_init)
        .def_readwrite("Distance", &FMovieRangeStateData::Distance)
    ;

    class_< FPopulationOptionSpawnDefData >("FPopulationOptionSpawnDefData", no_init)
        .def_readwrite("PopulationDefName", &FPopulationOptionSpawnDefData::PopulationDefName)
        .def_readwrite("NumTotalActors", &FPopulationOptionSpawnDefData::NumTotalActors)
        .def_readwrite("NumActiveActors", &FPopulationOptionSpawnDefData::NumActiveActors)
        .def_readwrite("NextSpawnTime", &FPopulationOptionSpawnDefData::NextSpawnTime)
    ;

    class_< FAttributeValuePair >("FAttributeValuePair", no_init)
        .def_readwrite("Key", &FAttributeValuePair::Key)
        .def_readwrite("Value", &FAttributeValuePair::Value)
    ;

    class_< FHUDAnchorPoint >("FHUDAnchorPoint", no_init)
        .def_readwrite("MoviePoint", &FHUDAnchorPoint::MoviePoint)
        .def_readwrite("ScreenPoint", &FHUDAnchorPoint::ScreenPoint)
        .def_readonly("Offset", &FHUDAnchorPoint::Offset)
    ;

    class_< FHUDCoordValue >("FHUDCoordValue", no_init)
        .def_readwrite("Type", &FHUDCoordValue::Type)
        .def_readwrite("Value", &FHUDCoordValue::Value)
        .def_readwrite("CurrentValue", &FHUDCoordValue::CurrentValue)
    ;

    class_< FDebugEntryData >("FDebugEntryData", no_init)
        .def_readwrite("DebugStrs", &FDebugEntryData::DebugStrs)
    ;

    class_< FPopulationAreaOptionSpawnData >("FPopulationAreaOptionSpawnData", no_init)
        .def_readwrite("Data", &FPopulationAreaOptionSpawnData::Data)
    ;

    class_< FPriorityData >("FPriorityData", no_init)
        .def_readwrite("Description", &FPriorityData::Description)
        .def_readwrite("Condition", &FPriorityData::Condition)
    ;

    class_< FSpecialMoveValuePair >("FSpecialMoveValuePair", no_init)
        .def_readwrite("Key", &FSpecialMoveValuePair::Key)
        .def_readwrite("Value", &FSpecialMoveValuePair::Value)
    ;

    class_< FCustomEventReactionData >("FCustomEventReactionData", no_init)
        .def_readwrite("EventName", &FCustomEventReactionData::EventName)
        .def_readwrite("Behaviors", &FCustomEventReactionData::Behaviors)
    ;

    class_< FGearboxGFxPlayParameters >("FGearboxGFxPlayParameters", no_init)
        .def_readwrite("Definition", &FGearboxGFxPlayParameters::Definition)
        .def_readwrite("OtherObject", &FGearboxGFxPlayParameters::OtherObject)
        .def_readwrite("PlayerOwner", &FGearboxGFxPlayParameters::PlayerOwner)
    ;

    class_< FBehaviorVariableState >("FBehaviorVariableState", no_init)
        .def_readwrite("Name", &FBehaviorVariableState::Name)
        .def_readwrite("Type", &FBehaviorVariableState::Type)
        .def_readwrite("Value", &FBehaviorVariableState::Value)
    ;

    class_< FProviderRemovalRequest >("FProviderRemovalRequest", no_init)
        .def_readwrite("ConsumerHandle", &FProviderRemovalRequest::ConsumerHandle)
        .def_readwrite("ProvidersIndex", &FProviderRemovalRequest::ProvidersIndex)
    ;

    class_< FInventoryManufacturerBalanceData >("FInventoryManufacturerBalanceData", no_init)
        .def_readwrite("Manufacturer", &FInventoryManufacturerBalanceData::Manufacturer)
        .def_readwrite("Grades", &FInventoryManufacturerBalanceData::Grades)
    ;

    class_< FInventoryGameStageGradeWeightData, bases< FGameStageGradeWeightData >  >("FInventoryGameStageGradeWeightData", no_init)
        .def_readwrite("GradeModifiers", &FInventoryGameStageGradeWeightData::GradeModifiers)
    ;

    class_< FInventoryGradeModifierData >("FInventoryGradeModifierData", no_init)
        .def_readwrite("ExpLevel", &FInventoryGradeModifierData::ExpLevel)
        .def_readwrite("CustomInventoryDefinition", &FInventoryGradeModifierData::CustomInventoryDefinition)
    ;

    class_< FBehaviorKeyFrameEventData, bases< FSpecializedBehaviorEvent >  >("FBehaviorKeyFrameEventData", no_init)
        .def_readwrite("KeyTime", &FBehaviorKeyFrameEventData::KeyTime)
    ;

    class_< FBreathingLoopInfo >("FBreathingLoopInfo", no_init)
        .def_readwrite("Condition", &FBreathingLoopInfo::Condition)
        .def_readwrite("StartAkEvent", &FBreathingLoopInfo::StartAkEvent)
        .def_readwrite("StopAkEvent", &FBreathingLoopInfo::StopAkEvent)
    ;

    class_< FCreditsLine >("FCreditsLine", no_init)
        .def_readwrite("LineType", &FCreditsLine::LineType)
        .def_readwrite("Text", &FCreditsLine::Text)
    ;

    class_< FAvailableTrackedSkill >("FAvailableTrackedSkill", no_init)
        .def_readwrite("SkillDef", &FAvailableTrackedSkill::SkillDef)
        .def_readwrite("RemappedSlot", &FAvailableTrackedSkill::RemappedSlot)
    ;

    class_< FSkillEffectData >("FSkillEffectData", no_init)
        .def_readwrite("AttributeToModify", &FSkillEffectData::AttributeToModify)
        .def_readwrite("EffectTarget", &FSkillEffectData::EffectTarget)
        .def_readwrite("TargetInstanceDataName", &FSkillEffectData::TargetInstanceDataName)
        .def_readwrite("TargetCriteria", &FSkillEffectData::TargetCriteria)
        .def_readwrite("ModifierType", &FSkillEffectData::ModifierType)
        .def_readwrite("BaseModifierValue", &FSkillEffectData::BaseModifierValue)
        .def_readwrite("GradeToStartApplyingEffect", &FSkillEffectData::GradeToStartApplyingEffect)
        .def_readwrite("PerGradeUpgradeInterval", &FSkillEffectData::PerGradeUpgradeInterval)
        .def_readwrite("PerGradeUpgrade", &FSkillEffectData::PerGradeUpgrade)
        .def_readwrite("BonusUpgradeList", &FSkillEffectData::BonusUpgradeList)
    ;

    class_< FBonusAttributeModifierUpgrade >("FBonusAttributeModifierUpgrade", no_init)
        .def_readwrite("GradeToApplyAt", &FBonusAttributeModifierUpgrade::GradeToApplyAt)
        .def_readwrite("Modifier", &FBonusAttributeModifierUpgrade::Modifier)
    ;

    class_< FSkillConstraintData >("FSkillConstraintData", no_init)
        .def_readwrite("OnFailure", &FSkillConstraintData::OnFailure)
        .def_readwrite("Evaluator", &FSkillConstraintData::Evaluator)
        .def_readwrite("EvaluatorDefinitions", &FSkillConstraintData::EvaluatorDefinitions)
    ;

    class_< FAttributePresentationValueRemappingData >("FAttributePresentationValueRemappingData", no_init)
        .def_readwrite("InputValueMn", &FAttributePresentationValueRemappingData::InputValueMn)
        .def_readwrite("InputValueMx", &FAttributePresentationValueRemappingData::InputValueMx)
        .def_readwrite("OutputValueMn", &FAttributePresentationValueRemappingData::OutputValueMn)
        .def_readwrite("OutputValueMx", &FAttributePresentationValueRemappingData::OutputValueMx)
    ;

    class_< FModifierValuePresentationData >("FModifierValuePresentationData", no_init)
        .def_readwrite("AttributePresentation", &FModifierValuePresentationData::AttributePresentation)
        .def_readwrite("OptionalConstraintPresentation", &FModifierValuePresentationData::OptionalConstraintPresentation)
        .def_readwrite("ModifierValue", &FModifierValuePresentationData::ModifierValue)
    ;

    class_< FTechDeathData, bases< FSpecializedBehaviorEvent >  >("FTechDeathData", no_init)
        .def_readwrite("DamageTypeTriggers", &FTechDeathData::DamageTypeTriggers)
        .def_readwrite("DeathAnimation", &FTechDeathData::DeathAnimation)
    ;

    class_< FGoreTriggerData >("FGoreTriggerData", no_init)
        .def_readwrite("DamageTypeTrigger", &FGoreTriggerData::DamageTypeTrigger)
        .def_readwrite("DamageSourceTrigger", &FGoreTriggerData::DamageSourceTrigger)
        .def_readwrite("HealthPctDamageThreshold", &FGoreTriggerData::HealthPctDamageThreshold)
    ;

    class_< FItemDefinitionData >("FItemDefinitionData", no_init)
        .def_readwrite("ItemDefinition", &FItemDefinitionData::ItemDefinition)
        .def_readwrite("BalanceDefinition", &FItemDefinitionData::BalanceDefinition)
        .def_readwrite("ManufacturerDefinition", &FItemDefinitionData::ManufacturerDefinition)
        .def_readwrite("ManufacturerGradeIndex", &FItemDefinitionData::ManufacturerGradeIndex)
        .def_readwrite("AlphaItemPartDefinition", &FItemDefinitionData::AlphaItemPartDefinition)
        .def_readwrite("BetaItemPartDefinition", &FItemDefinitionData::BetaItemPartDefinition)
        .def_readwrite("GammaItemPartDefinition", &FItemDefinitionData::GammaItemPartDefinition)
        .def_readwrite("DeltaItemPartDefinition", &FItemDefinitionData::DeltaItemPartDefinition)
        .def_readwrite("EpsilonItemPartDefinition", &FItemDefinitionData::EpsilonItemPartDefinition)
        .def_readwrite("ZetaItemPartDefinition", &FItemDefinitionData::ZetaItemPartDefinition)
        .def_readwrite("EtaItemPartDefinition", &FItemDefinitionData::EtaItemPartDefinition)
        .def_readwrite("ThetaItemPartDefinition", &FItemDefinitionData::ThetaItemPartDefinition)
        .def_readwrite("MaterialItemPartDefinition", &FItemDefinitionData::MaterialItemPartDefinition)
        .def_readwrite("PrefixItemNamePartDefinition", &FItemDefinitionData::PrefixItemNamePartDefinition)
        .def_readwrite("TitleItemNamePartDefinition", &FItemDefinitionData::TitleItemNamePartDefinition)
        .def_readwrite("GameStage", &FItemDefinitionData::GameStage)
        .def_readwrite("UniqueId", &FItemDefinitionData::UniqueId)
    ;

    class_< FImpactResponseEffect >("FImpactResponseEffect", no_init)
        .def_readwrite("CensoredEffectAlternative", &FImpactResponseEffect::CensoredEffectAlternative)
        .def_readwrite("DamageModifierPercent", &FImpactResponseEffect::DamageModifierPercent)
        .def_readwrite("ImpactEvent", &FImpactResponseEffect::ImpactEvent)
        .def_readwrite("AINoiseLevel", &FImpactResponseEffect::AINoiseLevel)
        .def_readwrite("ParticleTemplate", &FImpactResponseEffect::ParticleTemplate)
        .def_readwrite("MaxEffectDistance", &FImpactResponseEffect::MaxEffectDistance)
        .def_readwrite("DecalMaterials", &FImpactResponseEffect::DecalMaterials)
        .def_readwrite("DecalWidth", &FImpactResponseEffect::DecalWidth)
        .def_readwrite("DecalHeight", &FImpactResponseEffect::DecalHeight)
        .def_readwrite("DecalMinScale", &FImpactResponseEffect::DecalMinScale)
        .def_readwrite("DecalMaxScale", &FImpactResponseEffect::DecalMaxScale)
        .def_readwrite("DecalDepth", &FImpactResponseEffect::DecalDepth)
        .def_readwrite("ImpactFlashLightClass", &FImpactResponseEffect::ImpactFlashLightClass)
        .def_readwrite("EffectParameters", &FImpactResponseEffect::EffectParameters)
    ;

    class_< FImpactResponseParameters >("FImpactResponseParameters", no_init)
        .def_readwrite("ParticleParameters", &FImpactResponseParameters::ParticleParameters)
        .def_readwrite("FontParameterValues", &FImpactResponseParameters::FontParameterValues)
        .def_readwrite("ScalarParameterValues", &FImpactResponseParameters::ScalarParameterValues)
        .def_readwrite("TextureParameterValues", &FImpactResponseParameters::TextureParameterValues)
        .def_readwrite("VectorParameterValues", &FImpactResponseParameters::VectorParameterValues)
        .def_readwrite("RtpcParameterValues", &FImpactResponseParameters::RtpcParameterValues)
    ;

    class_< FRtpcParameterValue >("FRtpcParameterValue", no_init)
        .def_readwrite("AkRtpc", &FRtpcParameterValue::AkRtpc)
        .def_readwrite("Value", &FRtpcParameterValue::Value)
    ;

    class_< FItemPartGradeWeightData >("FItemPartGradeWeightData", no_init)
        .def_readwrite("Part", &FItemPartGradeWeightData::Part)
        .def_readwrite("Manufacturers", &FItemPartGradeWeightData::Manufacturers)
        .def_readwrite("MinGameStageIndex", &FItemPartGradeWeightData::MinGameStageIndex)
        .def_readwrite("MaxGameStageIndex", &FItemPartGradeWeightData::MaxGameStageIndex)
        .def_readwrite("DefaultWeightIndex", &FItemPartGradeWeightData::DefaultWeightIndex)
    ;

    class_< FItemBehaviorSet >("FItemBehaviorSet", no_init)
        .def_readwrite("OnUsed", &FItemBehaviorSet::OnUsed)
    ;

    class_< FBalancedInventoryData >("FBalancedInventoryData", no_init)
        .def_readwrite("ItmPoolDefinition", &FBalancedInventoryData::ItmPoolDefinition)
        .def_readwrite("InvBalanceDefinition", &FBalancedInventoryData::InvBalanceDefinition)
        .def_readwrite("Probability", &FBalancedInventoryData::Probability)
    ;

    class_< FCustomizationItemData >("FCustomizationItemData", no_init)
        .def_readwrite("ItemPoolKey", &FCustomizationItemData::ItemPoolKey)
        .def_readwrite("CustomizationItemPool", &FCustomizationItemData::CustomizationItemPool)
    ;

    class_< FProfileDefinition >("FProfileDefinition", no_init)
        .def_readwrite("Profile", &FProfileDefinition::Profile)
        .def_readwrite("Definition", &FProfileDefinition::Definition)
    ;

    class_< FLockOnProfile >("FLockOnProfile", no_init)
        .def_readwrite("Target", &FLockOnProfile::Target)
        .def_readonly("UnknownData00", &FLockOnProfile::UnknownData00)
        .def_readwrite("Intersection", &FLockOnProfile::Intersection)
        .def_readwrite("MagneticCenterToIntersect", &FLockOnProfile::MagneticCenterToIntersect)
    ;

    class_< FAttributeCategory >("FAttributeCategory", no_init)
        .def_readwrite("Category", &FAttributeCategory::Category)
        .def_readwrite("Attributes", &FAttributeCategory::Attributes)
    ;

    class_< FDeathByWeaponStatID >("FDeathByWeaponStatID", no_init)
        .def_readwrite("DamageCauserType", &FDeathByWeaponStatID::DamageCauserType)
        .def_readwrite("StatId", &FDeathByWeaponStatID::StatId)
    ;

    class_< FDeathByDamageTypeStatID >("FDeathByDamageTypeStatID", no_init)
        .def_readwrite("DamageType", &FDeathByDamageTypeStatID::DamageType)
        .def_readwrite("StatId", &FDeathByDamageTypeStatID::StatId)
    ;

    class_< FDeathByWeaponDamageStatID >("FDeathByWeaponDamageStatID", no_init)
        .def_readwrite("DamageType", &FDeathByWeaponDamageStatID::DamageType)
        .def_readwrite("DamageCauserType", &FDeathByWeaponDamageStatID::DamageCauserType)
        .def_readwrite("StatId", &FDeathByWeaponDamageStatID::StatId)
    ;

    class_< FPlayerUIPreferences >("FPlayerUIPreferences", no_init)
        .def_readwrite("CharacterName", &FPlayerUIPreferences::CharacterName)
        .def_readwrite("PrimaryColor", &FPlayerUIPreferences::PrimaryColor)
        .def_readwrite("SecondaryColor", &FPlayerUIPreferences::SecondaryColor)
        .def_readwrite("TertiaryColor", &FPlayerUIPreferences::TertiaryColor)
    ;

    class_< FSkillSaveGameData >("FSkillSaveGameData", no_init)
        .def_readwrite("SkillDefinition", &FSkillSaveGameData::SkillDefinition)
        .def_readwrite("Grade", &FSkillSaveGameData::Grade)
        .def_readwrite("GradePoints", &FSkillSaveGameData::GradePoints)
        .def_readwrite("EquippedSlotIndex", &FSkillSaveGameData::EquippedSlotIndex)
    ;

    class_< FResourceSaveGameData >("FResourceSaveGameData", no_init)
        .def_readwrite("ResourceDefinition", &FResourceSaveGameData::ResourceDefinition)
        .def_readwrite("ResourcePoolDefinition", &FResourceSaveGameData::ResourcePoolDefinition)
        .def_readwrite("Amount", &FResourceSaveGameData::Amount)
        .def_readwrite("UpgradeLevel", &FResourceSaveGameData::UpgradeLevel)
    ;

    class_< FInventorySaveGameData >("FInventorySaveGameData", no_init)
        .def_readwrite("DefinitionData", &FInventorySaveGameData::DefinitionData)
        .def_readwrite("Quantity", &FInventorySaveGameData::Quantity)
        .def_readwrite("Mark", &FInventorySaveGameData::Mark)
    ;

    class_< FUnloadableDlcItemSaveGameData >("FUnloadableDlcItemSaveGameData", no_init)
        .def_readwrite("SerialNumber", &FUnloadableDlcItemSaveGameData::SerialNumber)
        .def_readwrite("Quantity", &FUnloadableDlcItemSaveGameData::Quantity)
        .def_readwrite("Mark", &FUnloadableDlcItemSaveGameData::Mark)
    ;

    class_< FInventorySlotSaveGameData >("FInventorySlotSaveGameData", no_init)
        .def_readwrite("InventorySlotMax_Misc", &FInventorySlotSaveGameData::InventorySlotMax_Misc)
        .def_readwrite("WeaponReadyMax", &FInventorySlotSaveGameData::WeaponReadyMax)
        .def_readwrite("NumQuickSlotsFlourished", &FInventorySlotSaveGameData::NumQuickSlotsFlourished)
    ;

    class_< FWeaponSaveGameData >("FWeaponSaveGameData", no_init)
        .def_readwrite("WeaponDefinitionData", &FWeaponSaveGameData::WeaponDefinitionData)
        .def_readwrite("QuickSlot", &FWeaponSaveGameData::QuickSlot)
        .def_readwrite("Mark", &FWeaponSaveGameData::Mark)
    ;

    class_< FWeaponDefinitionData >("FWeaponDefinitionData", no_init)
        .def_readwrite("WeaponTypeDefinition", &FWeaponDefinitionData::WeaponTypeDefinition)
        .def_readwrite("BalanceDefinition", &FWeaponDefinitionData::BalanceDefinition)
        .def_readwrite("ManufacturerDefinition", &FWeaponDefinitionData::ManufacturerDefinition)
        .def_readwrite("ManufacturerGradeIndex", &FWeaponDefinitionData::ManufacturerGradeIndex)
        .def_readwrite("BodyPartDefinition", &FWeaponDefinitionData::BodyPartDefinition)
        .def_readwrite("GripPartDefinition", &FWeaponDefinitionData::GripPartDefinition)
        .def_readwrite("BarrelPartDefinition", &FWeaponDefinitionData::BarrelPartDefinition)
        .def_readwrite("SightPartDefinition", &FWeaponDefinitionData::SightPartDefinition)
        .def_readwrite("StockPartDefinition", &FWeaponDefinitionData::StockPartDefinition)
        .def_readwrite("ElementalPartDefinition", &FWeaponDefinitionData::ElementalPartDefinition)
        .def_readwrite("Accessory1PartDefinition", &FWeaponDefinitionData::Accessory1PartDefinition)
        .def_readwrite("Accessory2PartDefinition", &FWeaponDefinitionData::Accessory2PartDefinition)
        .def_readwrite("MaterialPartDefinition", &FWeaponDefinitionData::MaterialPartDefinition)
        .def_readwrite("PrefixPartDefinition", &FWeaponDefinitionData::PrefixPartDefinition)
        .def_readwrite("TitlePartDefinition", &FWeaponDefinitionData::TitlePartDefinition)
        .def_readwrite("GameStage", &FWeaponDefinitionData::GameStage)
        .def_readwrite("UniqueId", &FWeaponDefinitionData::UniqueId)
    ;

    class_< FDamageSurfaceTypeModifier >("FDamageSurfaceTypeModifier", no_init)
        .def_readwrite("SurfaceType", &FDamageSurfaceTypeModifier::SurfaceType)
        .def_readwrite("BaseChance", &FDamageSurfaceTypeModifier::BaseChance)
        .def_readwrite("BaseSpreadChance", &FDamageSurfaceTypeModifier::BaseSpreadChance)
        .def_readwrite("SpreadChanceDecayMultiplier", &FDamageSurfaceTypeModifier::SpreadChanceDecayMultiplier)
    ;

    class_< FScreenParticleInitParams >("FScreenParticleInitParams", no_init)
        .def_readwrite("Template", &FScreenParticleInitParams::Template)
        .def_readwrite("ScreenParticleModifiers", &FScreenParticleInitParams::ScreenParticleModifiers)
        .def_readwrite("TemplateScreenParticleMaterial", &FScreenParticleInitParams::TemplateScreenParticleMaterial)
        .def_readwrite("MatParamName", &FScreenParticleInitParams::MatParamName)
        .def_readwrite("ParticleTag", &FScreenParticleInitParams::ParticleTag)
        .def_readwrite("ContentDims", &FScreenParticleInitParams::ContentDims)
        .def_readwrite("ParticleDepth", &FScreenParticleInitParams::ParticleDepth)
        .def_readwrite("ScalingMode", &FScreenParticleInitParams::ScalingMode)
        .def_readwrite("StopParamsOT", &FScreenParticleInitParams::StopParamsOT)
    ;

    class_< FScreenParticleModifier >("FScreenParticleModifier", no_init)
        .def_readwrite("ScalarParams", &FScreenParticleModifier::ScalarParams)
        .def_readwrite("CachedValue", &FScreenParticleModifier::CachedValue)
    ;

    class_< FAttributeScalarParam >("FAttributeScalarParam", no_init)
        .def_readwrite("ParamName", &FAttributeScalarParam::ParamName)
        .def_readwrite("Input", &FAttributeScalarParam::Input)
        .def_readwrite("MinInput", &FAttributeScalarParam::MinInput)
        .def_readwrite("MaxInput", &FAttributeScalarParam::MaxInput)
        .def_readwrite("MinOutput", &FAttributeScalarParam::MinOutput)
        .def_readwrite("MaxOutput", &FAttributeScalarParam::MaxOutput)
        .def_readwrite("ScalarParamOperand", &FAttributeScalarParam::ScalarParamOperand)
        .def_readwrite("CurrentValue", &FAttributeScalarParam::CurrentValue)
    ;

    class_< FAttributeDefinitionDefault >("FAttributeDefinitionDefault", no_init)
        .def_readwrite("Attribute", &FAttributeDefinitionDefault::Attribute)
        .def_readwrite("DefaultValue", &FAttributeDefinitionDefault::DefaultValue)
    ;

    class_< FScreenParticleParamOverTime >("FScreenParticleParamOverTime", no_init)
        .def_readwrite("ScalarParams", &FScreenParticleParamOverTime::ScalarParams)
        .def_readwrite("VectorParams", &FScreenParticleParamOverTime::VectorParams)
    ;

    class_< FScreenParticleScalarParamOverTime >("FScreenParticleScalarParamOverTime", no_init)
        .def_readwrite("ParameterName", &FScreenParticleScalarParamOverTime::ParameterName)
        .def_readwrite("TotalTime", &FScreenParticleScalarParamOverTime::TotalTime)
        .def_readwrite("StartValue", &FScreenParticleScalarParamOverTime::StartValue)
        .def_readwrite("EndValue", &FScreenParticleScalarParamOverTime::EndValue)
        .def_readwrite("LastValue", &FScreenParticleScalarParamOverTime::LastValue)
    ;

    class_< FScreenParticleVectorParamOverTime >("FScreenParticleVectorParamOverTime", no_init)
        .def_readwrite("ParameterName", &FScreenParticleVectorParamOverTime::ParameterName)
        .def_readwrite("TotalTime", &FScreenParticleVectorParamOverTime::TotalTime)
        .def_readwrite("VectorStartValue", &FScreenParticleVectorParamOverTime::VectorStartValue)
        .def_readwrite("VectorEndValue", &FScreenParticleVectorParamOverTime::VectorEndValue)
        .def_readwrite("LastValue", &FScreenParticleVectorParamOverTime::LastValue)
    ;

    class_< FPlayerRecentDamageEventData >("FPlayerRecentDamageEventData", no_init)
        .def_readwrite("DamageTypeDefinition", &FPlayerRecentDamageEventData::DamageTypeDefinition)
        .def_readwrite("DamageLocation", &FPlayerRecentDamageEventData::DamageLocation)
        .def_readwrite("TotalDamageForDamageType", &FPlayerRecentDamageEventData::TotalDamageForDamageType)
        .def_readwrite("DamageEventFlags", &FPlayerRecentDamageEventData::DamageEventFlags)
        .def_readwrite("DamageTime", &FPlayerRecentDamageEventData::DamageTime)
        .def_readwrite("DamagedActor", &FPlayerRecentDamageEventData::DamagedActor)
    ;

    class_< FConditionalAnimationData >("FConditionalAnimationData", no_init)
        .def_readwrite("Expression", &FConditionalAnimationData::Expression)
        .def_readwrite("AnimationName", &FConditionalAnimationData::AnimationName)
        .def_readwrite("CameraAnim", &FConditionalAnimationData::CameraAnim)
        .def_readwrite("AnimSet", &FConditionalAnimationData::AnimSet)
    ;

    class_< FExplosionScaleData >("FExplosionScaleData", no_init)
        .def_readwrite("ExplosionPSTemplate", &FExplosionScaleData::ExplosionPSTemplate)
        .def_readwrite("MinRadius", &FExplosionScaleData::MinRadius)
        .def_readwrite("MaxRadius", &FExplosionScaleData::MaxRadius)
        .def_readwrite("MinParticleScale", &FExplosionScaleData::MinParticleScale)
        .def_readwrite("MaxParticleScale", &FExplosionScaleData::MaxParticleScale)
        .def_readwrite("ExplosionAkEvent", &FExplosionScaleData::ExplosionAkEvent)
        .def_readwrite("CameraAnim", &FExplosionScaleData::CameraAnim)
        .def_readwrite("MinCameraEffectDistance", &FExplosionScaleData::MinCameraEffectDistance)
        .def_readwrite("MaxCameraEffectDistance", &FExplosionScaleData::MaxCameraEffectDistance)
        .def_readwrite("FFWaveform", &FExplosionScaleData::FFWaveform)
        .def_readwrite("ImpactEffect", &FExplosionScaleData::ImpactEffect)
        .def_readwrite("MaxDamageDuration", &FExplosionScaleData::MaxDamageDuration)
        .def_readwrite("DamageInterval", &FExplosionScaleData::DamageInterval)
    ;

    class_< FRecentExplosion >("FRecentExplosion", no_init)
        .def_readwrite("ExplosionInstigatorName", &FRecentExplosion::ExplosionInstigatorName)
        .def_readwrite("ExplosionLocation", &FRecentExplosion::ExplosionLocation)
        .def_readwrite("ExpirationTime", &FRecentExplosion::ExpirationTime)
    ;

    class_< FHomingRadiusThreshold >("FHomingRadiusThreshold", no_init)
        .def_readwrite("Radius", &FHomingRadiusThreshold::Radius)
        .def_readwrite("MaxAngleCos", &FHomingRadiusThreshold::MaxAngleCos)
        .def_readwrite("Behaviors", &FHomingRadiusThreshold::Behaviors)
    ;

    class_< FConditionalExplosionData >("FConditionalExplosionData", no_init)
        .def_readwrite("Expression", &FConditionalExplosionData::Expression)
        .def_readwrite("Explosion", &FConditionalExplosionData::Explosion)
    ;

    class_< FConditionalParticleEffectData >("FConditionalParticleEffectData", no_init)
        .def_readwrite("Expression", &FConditionalParticleEffectData::Expression)
        .def_readwrite("ParticleEffect", &FConditionalParticleEffectData::ParticleEffect)
    ;

    class_< FBulletImpactEventData >("FBulletImpactEventData", no_init)
        .def_readwrite("DamageSurfaceType", &FBulletImpactEventData::DamageSurfaceType)
        .def_readwrite("Behaviors", &FBulletImpactEventData::Behaviors)
    ;

    class_< FBulletTimerEvent >("FBulletTimerEvent", no_init)
        .def_readwrite("Time", &FBulletTimerEvent::Time)
        .def_readwrite("Response", &FBulletTimerEvent::Response)
    ;

    class_< FBulletEventResponse >("FBulletEventResponse", no_init)
        .def_readwrite("SplitNum", &FBulletEventResponse::SplitNum)
        .def_readwrite("SplitAngle", &FBulletEventResponse::SplitAngle)
        .def_readwrite("SplitAngleOffset", &FBulletEventResponse::SplitAngleOffset)
        .def_readwrite("SplitDistance", &FBulletEventResponse::SplitDistance)
        .def_readwrite("SplitFire", &FBulletEventResponse::SplitFire)
        .def_readwrite("NewSpeed", &FBulletEventResponse::NewSpeed)
        .def_readwrite("Behaviors", &FBulletEventResponse::Behaviors)
    ;

    class_< FFiringPatternLine >("FFiringPatternLine", no_init)
        .def_readwrite("StartPoint", &FFiringPatternLine::StartPoint)
        .def_readwrite("EndPoint", &FFiringPatternLine::EndPoint)
        .def_readwrite("CustomWaveMotion", &FFiringPatternLine::CustomWaveMotion)
    ;

    class_< FWaveMotionData >("FWaveMotionData", no_init)
        .def_readwrite("WaveFreq", &FWaveMotionData::WaveFreq)
        .def_readwrite("WaveAmp", &FWaveMotionData::WaveAmp)
        .def_readwrite("WavePhase", &FWaveMotionData::WavePhase)
    ;

    class_< FLightValues >("FLightValues", no_init)
        .def_readwrite("StartTime", &FLightValues::StartTime)
        .def_readwrite("Radius", &FLightValues::Radius)
        .def_readwrite("Brightness", &FLightValues::Brightness)
        .def_readwrite("LightColor", &FLightValues::LightColor)
    ;

    class_< FWeaponBoneControllerData >("FWeaponBoneControllerData", no_init)
        .def_readwrite("BoneName", &FWeaponBoneControllerData::BoneName)
        .def_readwrite("ControlType", &FWeaponBoneControllerData::ControlType)
        .def_readwrite("ControlTemplate", &FWeaponBoneControllerData::ControlTemplate)
    ;

    class_< FWeaponPartAttachmentData >("FWeaponPartAttachmentData", no_init)
        .def_readwrite("FirstPersonAttachmentSocket", &FWeaponPartAttachmentData::FirstPersonAttachmentSocket)
        .def_readwrite("ThirdPersonAttachmentSocket", &FWeaponPartAttachmentData::ThirdPersonAttachmentSocket)
        .def_readwrite("FirstPersonOffHandAttachmentSocket", &FWeaponPartAttachmentData::FirstPersonOffHandAttachmentSocket)
        .def_readwrite("ThirdPersonOffHandAttachmentSocket", &FWeaponPartAttachmentData::ThirdPersonOffHandAttachmentSocket)
    ;

    class_< FPartGradeWeightData >("FPartGradeWeightData", no_init)
        .def_readwrite("Part", &FPartGradeWeightData::Part)
        .def_readwrite("Manufacturers", &FPartGradeWeightData::Manufacturers)
        .def_readwrite("MinGameStageIndex", &FPartGradeWeightData::MinGameStageIndex)
        .def_readwrite("MaxGameStageIndex", &FPartGradeWeightData::MaxGameStageIndex)
        .def_readwrite("DefaultWeightIndex", &FPartGradeWeightData::DefaultWeightIndex)
    ;

    class_< FUnloadableDlcWeaponSaveGameData >("FUnloadableDlcWeaponSaveGameData", no_init)
        .def_readwrite("SerialNumber", &FUnloadableDlcWeaponSaveGameData::SerialNumber)
        .def_readwrite("QuickSlot", &FUnloadableDlcWeaponSaveGameData::QuickSlot)
        .def_readwrite("Mark", &FUnloadableDlcWeaponSaveGameData::Mark)
    ;

    class_< FMissionPlaythroughSaveGameData >("FMissionPlaythroughSaveGameData", no_init)
        .def_readwrite("PlayThroughNumber", &FMissionPlaythroughSaveGameData::PlayThroughNumber)
        .def_readwrite("MissionData", &FMissionPlaythroughSaveGameData::MissionData)
        .def_readwrite("UnloadableDlcMissionData", &FMissionPlaythroughSaveGameData::UnloadableDlcMissionData)
        .def_readwrite("PendingMissionRewards", &FMissionPlaythroughSaveGameData::PendingMissionRewards)
        .def_readwrite("UnloadableDlcPendingMissionRewards", &FMissionPlaythroughSaveGameData::UnloadableDlcPendingMissionRewards)
        .def_readwrite("ActiveMission", &FMissionPlaythroughSaveGameData::ActiveMission)
        .def_readwrite("FilteredMissions", &FMissionPlaythroughSaveGameData::FilteredMissions)
    ;

    class_< FMissionStatusPlayerData >("FMissionStatusPlayerData", no_init)
        .def_readwrite("MissionDef", &FMissionStatusPlayerData::MissionDef)
        .def_readwrite("Status", &FMissionStatusPlayerData::Status)
        .def_readwrite("ObjectivesProgress", &FMissionStatusPlayerData::ObjectivesProgress)
        .def_readwrite("ActiveObjectiveSet", &FMissionStatusPlayerData::ActiveObjectiveSet)
        .def_readwrite("SubObjectiveSets", &FMissionStatusPlayerData::SubObjectiveSets)
        .def_readwrite("GameStage", &FMissionStatusPlayerData::GameStage)
    ;

    class_< FDlcLevelTravelPair >("FDlcLevelTravelPair", no_init)
        .def_readwrite("NonDlcStationDef", &FDlcLevelTravelPair::NonDlcStationDef)
        .def_readwrite("DlcStationDef", &FDlcLevelTravelPair::DlcStationDef)
    ;

    class_< FPersistentMapDependencies >("FPersistentMapDependencies", no_init)
        .def_readwrite("PersistentMap", &FPersistentMapDependencies::PersistentMap)
        .def_readwrite("SecondaryMaps", &FPersistentMapDependencies::SecondaryMaps)
        .def_readwrite("ConnectedPersistents", &FPersistentMapDependencies::ConnectedPersistents)
        .def_readwrite("LevelName", &FPersistentMapDependencies::LevelName)
        .def_readwrite("GameReleaseDef", &FPersistentMapDependencies::GameReleaseDef)
        .def_readwrite("DiscoveryAchievements", &FPersistentMapDependencies::DiscoveryAchievements)
    ;

    class_< FConditionLevel >("FConditionLevel", no_init)
        .def_readwrite("ConditionDefinitions", &FConditionLevel::ConditionDefinitions)
        .def_readwrite("ProgressNotificationOverride", &FConditionLevel::ProgressNotificationOverride)
        .def_readwrite("CompletedAttributeEffects", &FConditionLevel::CompletedAttributeEffects)
        .def_readwrite("BadassPointReward", &FConditionLevel::BadassPointReward)
        .def_readwrite("RewardItemPool", &FConditionLevel::RewardItemPool)
        .def_readwrite("RewardTextKey", &FConditionLevel::RewardTextKey)
    ;

    class_< FBalanceModification >("FBalanceModification", no_init)
        .def_readwrite("MinEffectiveLevel", &FBalanceModification::MinEffectiveLevel)
        .def_readwrite("EnemyHealthMultiplier", &FBalanceModification::EnemyHealthMultiplier)
        .def_readwrite("BadassEnemyHealthMultiplier", &FBalanceModification::BadassEnemyHealthMultiplier)
        .def_readwrite("EnemyShieldStrengthMultiplier", &FBalanceModification::EnemyShieldStrengthMultiplier)
        .def_readwrite("BadassEnemyShieldStrengthMultiplier", &FBalanceModification::BadassEnemyShieldStrengthMultiplier)
        .def_readwrite("EnemyDamageMultiplier", &FBalanceModification::EnemyDamageMultiplier)
        .def_readwrite("BadassEnemyDamageMultiplier", &FBalanceModification::BadassEnemyDamageMultiplier)
        .def_readwrite("XPGainedFromCombatMultiplier", &FBalanceModification::XPGainedFromCombatMultiplier)
        .def_readwrite("XPGainedFromQuestsMultiplier", &FBalanceModification::XPGainedFromQuestsMultiplier)
        .def_readwrite("BadassRankGainMultiplier", &FBalanceModification::BadassRankGainMultiplier)
        .def_readwrite("AmplifiedDamageMultiplier", &FBalanceModification::AmplifiedDamageMultiplier)
        .def_readwrite("PlayerVehicleWeaponDamageMultiplier", &FBalanceModification::PlayerVehicleWeaponDamageMultiplier)
        .def_readwrite("AttributeEffectsForSpawnedEnemies", &FBalanceModification::AttributeEffectsForSpawnedEnemies)
        .def_readwrite("AttributeEffectsForPlayers", &FBalanceModification::AttributeEffectsForPlayers)
        .def_readwrite("AmmoDropsPerPlayerMultiplier", &FBalanceModification::AmmoDropsPerPlayerMultiplier)
        .def_readwrite("GearDrops_CommonWeightModifier_PT3_BaseValueOverride", &FBalanceModification::GearDrops_CommonWeightModifier_PT3_BaseValueOverride)
        .def_readwrite("ChestItemPool_Weight_2_Uncommon_PT3_Multiplier", &FBalanceModification::ChestItemPool_Weight_2_Uncommon_PT3_Multiplier)
        .def_readwrite("StatusEffectChanceScales", &FBalanceModification::StatusEffectChanceScales)
        .def_readwrite("AIDamageScaleByLevelDifference", &FBalanceModification::AIDamageScaleByLevelDifference)
    ;

    class_< FLevelBasedStatusEffectChanceScale >("FLevelBasedStatusEffectChanceScale", no_init)
        .def_readwrite("LevelDifference", &FLevelBasedStatusEffectChanceScale::LevelDifference)
        .def_readwrite("HigherLevelChanceScale", &FLevelBasedStatusEffectChanceScale::HigherLevelChanceScale)
        .def_readwrite("LowerLevelChanceScale", &FLevelBasedStatusEffectChanceScale::LowerLevelChanceScale)
    ;

    class_< FLevelBasedDamageScale >("FLevelBasedDamageScale", no_init)
        .def_readwrite("LevelDifference", &FLevelBasedDamageScale::LevelDifference)
        .def_readwrite("HigherLevelAttackerDmgScale", &FLevelBasedDamageScale::HigherLevelAttackerDmgScale)
        .def_readwrite("LowerLevelAttackerDmgScale", &FLevelBasedDamageScale::LowerLevelAttackerDmgScale)
    ;

    class_< FBlackMarketPostLaunchUpgradeData >("FBlackMarketPostLaunchUpgradeData", no_init)
        .def_readwrite("EridiumCostForUpgrade", &FBlackMarketPostLaunchUpgradeData::EridiumCostForUpgrade)
    ;

    class_< FMapSpecificBalanceModificationList >("FMapSpecificBalanceModificationList", no_init)
        .def_readwrite("MapName", &FMapSpecificBalanceModificationList::MapName)
        .def_readwrite("AIPawnBalanceModifiers", &FMapSpecificBalanceModificationList::AIPawnBalanceModifiers)
    ;

    class_< FAIPawnPlaythroughThreeData >("FAIPawnPlaythroughThreeData", no_init)
        .def_readwrite("AIPawnBalanceDefinitionFullObjectName", &FAIPawnPlaythroughThreeData::AIPawnBalanceDefinitionFullObjectName)
        .def_readwrite("DisplayName", &FAIPawnPlaythroughThreeData::DisplayName)
        .def_readwrite("TransformedNames", &FAIPawnPlaythroughThreeData::TransformedNames)
    ;

    class_< FAITransformedName >("FAITransformedName", no_init)
        .def_readwrite("Type", &FAITransformedName::Type)
        .def_readwrite("TransformedName", &FAITransformedName::TransformedName)
        .def_readwrite("TransformedKillStat", &FAITransformedName::TransformedKillStat)
    ;

    class_< FExtraWeaponSlot >("FExtraWeaponSlot", no_init)
        .def_readwrite("Socket", &FExtraWeaponSlot::Socket)
        .def_readwrite("Mesh", &FExtraWeaponSlot::Mesh)
        .def_readwrite("MuzzleFlash", &FExtraWeaponSlot::MuzzleFlash)
        .def_readwrite("AltMuzzleFlashes", &FExtraWeaponSlot::AltMuzzleFlashes)
        .def_readwrite("MuzzleFlashLight", &FExtraWeaponSlot::MuzzleFlashLight)
    ;

    class_< FLockOnTargetStateStruct >("FLockOnTargetStateStruct", no_init)
        .def_readwrite("CurrentTarget", &FLockOnTargetStateStruct::CurrentTarget)
        .def_readwrite("StartTime", &FLockOnTargetStateStruct::StartTime)
        .def_readwrite("CoolDownStartTime", &FLockOnTargetStateStruct::CoolDownStartTime)
    ;

    class_< FReplicatedInventoryCardData >("FReplicatedInventoryCardData", no_init)
        .def_readwrite("ModifierValue", &FReplicatedInventoryCardData::ModifierValue)
        .def_readwrite("ModifierStatIndex", &FReplicatedInventoryCardData::ModifierStatIndex)
    ;

    class_< FWeaponCustomPartTypeData >("FWeaponCustomPartTypeData", no_init)
        .def_readwrite("WeightedParts", &FWeaponCustomPartTypeData::WeightedParts)
    ;

    class_< FWeaponBoneControllerInstance >("FWeaponBoneControllerInstance", no_init)
        .def_readwrite("SourcePartType", &FWeaponBoneControllerInstance::SourcePartType)
        .def_readwrite("BoneControlType", &FWeaponBoneControllerInstance::BoneControlType)
        .def_readwrite("BoneController", &FWeaponBoneControllerInstance::BoneController)
        .def_readonly("UnknownData00", &FWeaponBoneControllerInstance::UnknownData00)
    ;

    class_< FShellCasingImpact >("FShellCasingImpact", no_init)
        .def_readwrite("ImpactTime", &FShellCasingImpact::ImpactTime)
        .def_readwrite("ImpactLocation", &FShellCasingImpact::ImpactLocation)
    ;

    class_< FWeaponMemento >("FWeaponMemento", no_init)
        .def_readwrite("SerialNumber", &FWeaponMemento::SerialNumber)
        .def_readwrite("StoredAmmo", &FWeaponMemento::StoredAmmo)
    ;

    class_< FKillMissionData >("FKillMissionData", no_init)
        .def_readwrite("DamageCauserType", &FKillMissionData::DamageCauserType)
        .def_readwrite("DamageType", &FKillMissionData::DamageType)
        .def_readwrite("HitRegionName", &FKillMissionData::HitRegionName)
    ;

    class_< FDamageReactionData, bases< FSpecializedBehaviorEvent >  >("FDamageReactionData", no_init)
        .def_readwrite("DamageTriggers", &FDamageReactionData::DamageTriggers)
        .def_readwrite("PercentOfHealthTrigger", &FDamageReactionData::PercentOfHealthTrigger)
        .def_readwrite("DamageSpecialMove", &FDamageReactionData::DamageSpecialMove)
        .def_readwrite("ReactionBehaviors", &FDamageReactionData::ReactionBehaviors)
    ;

    class_< FInteractiveObjectReplicatedStateData >("FInteractiveObjectReplicatedStateData", no_init)
        .def_readwrite("ReplicatedBehaviorConsumerState", &FInteractiveObjectReplicatedStateData::ReplicatedBehaviorConsumerState)
        .def_readwrite("ReplicatedInstanceDataState", &FInteractiveObjectReplicatedStateData::ReplicatedInstanceDataState)
    ;

    class_< FActiveStatusEffect >("FActiveStatusEffect", no_init)
        .def_readwrite("Duration", &FActiveStatusEffect::Duration)
        .def_readwrite("TotalElapsedTime", &FActiveStatusEffect::TotalElapsedTime)
        .def_readwrite("AccumulatedTime", &FActiveStatusEffect::AccumulatedTime)
        .def_readwrite("DamagePerSecond", &FActiveStatusEffect::DamagePerSecond)
        .def_readwrite("EventInstigator", &FActiveStatusEffect::EventInstigator)
        .def_readwrite("DamageCauser", &FActiveStatusEffect::DamageCauser)
        .def_readonly("UnknownData00", &FActiveStatusEffect::UnknownData00)
        .def_readwrite("DamageSource", &FActiveStatusEffect::DamageSource)
        .def_readwrite("StatusEffectDefinition", &FActiveStatusEffect::StatusEffectDefinition)
        .def_readwrite("HitRegion", &FActiveStatusEffect::HitRegion)
        .def_readwrite("HitInfo", &FActiveStatusEffect::HitInfo)
        .def_readwrite("DamageNumberSocket", &FActiveStatusEffect::DamageNumberSocket)
        .def_readwrite("AccumulatedSpreadTime", &FActiveStatusEffect::AccumulatedSpreadTime)
        .def_readwrite("SpreadTimeInterval", &FActiveStatusEffect::SpreadTimeInterval)
        .def_readwrite("SpreadCount", &FActiveStatusEffect::SpreadCount)
        .def_readwrite("SpreadAttempt", &FActiveStatusEffect::SpreadAttempt)
        .def_readwrite("SpreadRadius", &FActiveStatusEffect::SpreadRadius)
        .def_readwrite("TravelledRegions", &FActiveStatusEffect::TravelledRegions)
        .def_readwrite("TravelledTargets", &FActiveStatusEffect::TravelledTargets)
        .def_readwrite("OwnerComponent", &FActiveStatusEffect::OwnerComponent)
        .def_readwrite("SpreadCap", &FActiveStatusEffect::SpreadCap)
    ;

    class_< FHitRegionEmitters >("FHitRegionEmitters", no_init)
        .def_readwrite("Emitters", &FHitRegionEmitters::Emitters)
        .def_readwrite("HitRegion", &FHitRegionEmitters::HitRegion)
        .def_readwrite("TimeWaitingToDie", &FHitRegionEmitters::TimeWaitingToDie)
    ;

    class_< FSocketEmitter >("FSocketEmitter", no_init)
        .def_readwrite("Emitter", &FSocketEmitter::Emitter)
        .def_readwrite("SocketName", &FSocketEmitter::SocketName)
    ;

    class_< FEffectSoundData >("FEffectSoundData", no_init)
        .def_readwrite("Type", &FEffectSoundData::Type)
        .def_readwrite("AkPlayingId", &FEffectSoundData::AkPlayingId)
    ;

    class_< FOngoingEffectInfo >("FOngoingEffectInfo", no_init)
        .def_readwrite("TotalDamageDealtToHealth", &FOngoingEffectInfo::TotalDamageDealtToHealth)
        .def_readwrite("TotalDamageDealtToShields", &FOngoingEffectInfo::TotalDamageDealtToShields)
        .def_readwrite("Duration", &FOngoingEffectInfo::Duration)
    ;

    class_< FMissionDirectorData >("FMissionDirectorData", no_init)
        .def_readwrite("MissionDefinition", &FMissionDirectorData::MissionDefinition)
        .def_readwrite("BranchEnding", &FMissionDirectorData::BranchEnding)
    ;

    class_< FMissionData >("FMissionData", no_init)
        .def_readwrite("MissionDef", &FMissionData::MissionDef)
        .def_readwrite("Status", &FMissionData::Status)
        .def_readwrite("ObjectivesProgress", &FMissionData::ObjectivesProgress)
        .def_readwrite("ActiveObjectiveSet", &FMissionData::ActiveObjectiveSet)
        .def_readwrite("SubObjectiveSets", &FMissionData::SubObjectiveSets)
    ;

    class_< FMissionObserversData >("FMissionObserversData", no_init)
        .def_readwrite("Mission", &FMissionObserversData::Mission)
        .def_readwrite("Observers", &FMissionObserversData::Observers)
    ;

    class_< FReplicatedMissionDirectiveData >("FReplicatedMissionDirectiveData", no_init)
        .def_readwrite("MissionDirector", &FReplicatedMissionDirectiveData::MissionDirector)
        .def_readonly("UnknownData00", &FReplicatedMissionDirectiveData::UnknownData00)
        .def_readwrite("MissionDirective", &FReplicatedMissionDirectiveData::MissionDirective)
    ;

    class_< FMissionWaypointsData >("FMissionWaypointsData", no_init)
        .def_readwrite("Mission", &FMissionWaypointsData::Mission)
        .def_readwrite("Waypoints", &FMissionWaypointsData::Waypoints)
    ;

    class_< FLevelTransitionData >("FLevelTransitionData", no_init)
        .def_readwrite("TargetLevel", &FLevelTransitionData::TargetLevel)
        .def_readwrite("LevelTransition", &FLevelTransitionData::LevelTransition)
    ;

    class_< FTimedMissionData >("FTimedMissionData", no_init)
        .def_readwrite("Mission", &FTimedMissionData::Mission)
        .def_readwrite("SecondsLeft", &FTimedMissionData::SecondsLeft)
    ;

    class_< FDefendMissionData >("FDefendMissionData", no_init)
        .def_readwrite("Objective", &FDefendMissionData::Objective)
        .def_readwrite("Target", &FDefendMissionData::Target)
        .def_readonly("UnknownData00", &FDefendMissionData::UnknownData00)
    ;

    class_< FDefendTargetData >("FDefendTargetData", no_init)
        .def_readwrite("Objective", &FDefendTargetData::Objective)
        .def_readwrite("PercentHealth", &FDefendTargetData::PercentHealth)
    ;

    class_< FBlockedMissionData >("FBlockedMissionData", no_init)
        .def_readwrite("BlockedMission", &FBlockedMissionData::BlockedMission)
        .def_readwrite("MissionBlockers", &FBlockedMissionData::MissionBlockers)
    ;

    class_< FObjectiveUpdateData >("FObjectiveUpdateData", no_init)
        .def_readwrite("Objective", &FObjectiveUpdateData::Objective)
        .def_readwrite("ObjectiveBit", &FObjectiveUpdateData::ObjectiveBit)
    ;

    class_< FMinimapIconHelper_Director >("FMinimapIconHelper_Director", no_init)
        .def_readwrite("Director", &FMinimapIconHelper_Director::Director)
        .def_readonly("UnknownData00", &FMinimapIconHelper_Director::UnknownData00)
        .def_readwrite("Location", &FMinimapIconHelper_Director::Location)
        .def_readwrite("ActionableMissionDefinition", &FMinimapIconHelper_Director::ActionableMissionDefinition)
    ;

    class_< FMissionKickoffData >("FMissionKickoffData", no_init)
        .def_readwrite("Mission", &FMissionKickoffData::Mission)
        .def_readwrite("PlayerThatAcceptedMission", &FMissionKickoffData::PlayerThatAcceptedMission)
    ;

    class_< FSpawnedDroppedLootData >("FSpawnedDroppedLootData", no_init)
        .def_readwrite("Inv", &FSpawnedDroppedLootData::Inv)
    ;

    class_< FHitActorData >("FHitActorData", no_init)
        .def_readwrite("HitActor", &FHitActorData::HitActor)
        .def_readwrite("HitInfo", &FHitActorData::HitInfo)
        .def_readwrite("HitLocation", &FHitActorData::HitLocation)
        .def_readwrite("HitLocationRelativeToHitActor", &FHitActorData::HitLocationRelativeToHitActor)
        .def_readwrite("HitNormal", &FHitActorData::HitNormal)
    ;

    class_< FObstacleData >("FObstacleData", no_init)
        .def_readwrite("Actor", &FObstacleData::Actor)
        .def_readwrite("Leader", &FObstacleData::Leader)
        .def_readwrite("Radius", &FObstacleData::Radius)
        .def_readwrite("HalfHeight", &FObstacleData::HalfHeight)
        .def_readwrite("MaxSpeed", &FObstacleData::MaxSpeed)
        .def_readwrite("Location", &FObstacleData::Location)
        .def_readwrite("Velocity", &FObstacleData::Velocity)
        .def_readwrite("OldVelocity", &FObstacleData::OldVelocity)
        .def_readwrite("LastOffset", &FObstacleData::LastOffset)
        .def_readwrite("IDO", &FObstacleData::IDO)
        .def_readonly("UnknownData00", &FObstacleData::UnknownData00)
    ;

    class_< FTrajectoryData >("FTrajectoryData", no_init)
        .def_readwrite("Speed", &FTrajectoryData::Speed)
        .def_readwrite("AnglePct", &FTrajectoryData::AnglePct)
        .def_readwrite("Angle", &FTrajectoryData::Angle)
        .def_readwrite("Error", &FTrajectoryData::Error)
        .def_readwrite("Offset", &FTrajectoryData::Offset)
        .def_readwrite("PredictDistMax", &FTrajectoryData::PredictDistMax)
    ;

    class_< FReplicatedMissionFilterData >("FReplicatedMissionFilterData", no_init)
        .def_readwrite("Mission", &FReplicatedMissionFilterData::Mission)
    ;

    class_< FReplicatedMissionObjectiveData >("FReplicatedMissionObjectiveData", no_init)
        .def_readwrite("Objective", &FReplicatedMissionObjectiveData::Objective)
        .def_readwrite("ObjectiveBit", &FReplicatedMissionObjectiveData::ObjectiveBit)
    ;

    class_< FReplicatedMissionStatusData >("FReplicatedMissionStatusData", no_init)
        .def_readwrite("Mission", &FReplicatedMissionStatusData::Mission)
        .def_readwrite("Status", &FReplicatedMissionStatusData::Status)
    ;

    class_< FReplicatedMissionData >("FReplicatedMissionData", no_init)
        .def_readwrite("Mission", &FReplicatedMissionData::Mission)
        .def_readwrite("Status", &FReplicatedMissionData::Status)
        .def_readwrite("ActiveObjectiveSet", &FReplicatedMissionData::ActiveObjectiveSet)
        .def_readonly("SubObjectiveSets", &FReplicatedMissionData::SubObjectiveSets)
        .def_readwrite("SecondsLeft", &FReplicatedMissionData::SecondsLeft)
        .def_readonly("ObjectiveCounts", &FReplicatedMissionData::ObjectiveCounts)
        .def_readwrite("GameStage", &FReplicatedMissionData::GameStage)
    ;

    class_< FLootConfigurationData >("FLootConfigurationData", no_init)
        .def_readwrite("ConfigurationName", &FLootConfigurationData::ConfigurationName)
        .def_readwrite("LootGameStageVarianceFormula", &FLootConfigurationData::LootGameStageVarianceFormula)
        .def_readwrite("Weight", &FLootConfigurationData::Weight)
        .def_readwrite("ItemAttachments", &FLootConfigurationData::ItemAttachments)
    ;

    class_< FLootAttachmentData >("FLootAttachmentData", no_init)
        .def_readwrite("ItemPool", &FLootAttachmentData::ItemPool)
        .def_readwrite("PoolProbability", &FLootAttachmentData::PoolProbability)
        .def_readwrite("AttachmentPointName", &FLootAttachmentData::AttachmentPointName)
    ;

    class_< FHitRegionDamage >("FHitRegionDamage", no_init)
        .def_readwrite("BodyHitRegion", &FHitRegionDamage::BodyHitRegion)
        .def_readwrite("Damage", &FHitRegionDamage::Damage)
        .def_readwrite("RecentDamage", &FHitRegionDamage::RecentDamage)
        .def_readwrite("LastPctHealthForRunDamageTriggeredBehaviors", &FHitRegionDamage::LastPctHealthForRunDamageTriggeredBehaviors)
        .def_readwrite("LastPctHealthForRunHealingTriggeredBehaviors", &FHitRegionDamage::LastPctHealthForRunHealingTriggeredBehaviors)
    ;

    class_< FSimpleAnimData >("FSimpleAnimData", no_init)
        .def_readwrite("AnimName", &FSimpleAnimData::AnimName)
        .def_readwrite("Tree", &FSimpleAnimData::Tree)
        .def_readwrite("Nodes", &FSimpleAnimData::Nodes)
    ;

    class_< FSpawnedAttachedLootData >("FSpawnedAttachedLootData", no_init)
        .def_readwrite("Inv", &FSpawnedAttachedLootData::Inv)
        .def_readwrite("AttachmentPointName", &FSpawnedAttachedLootData::AttachmentPointName)
    ;

    class_< FLoadingMovieExceptionInfo >("FLoadingMovieExceptionInfo", no_init)
        .def_readwrite("PersistentMapName", &FLoadingMovieExceptionInfo::PersistentMapName)
        .def_readwrite("Tag", &FLoadingMovieExceptionInfo::Tag)
    ;

    class_< FCoordinatedEffectProcess >("FCoordinatedEffectProcess", no_init)
        .def_readwrite("Target", &FCoordinatedEffectProcess::Target)
        .def_readwrite("Threads", &FCoordinatedEffectProcess::Threads)
        .def_readwrite("Player0MatIndex", &FCoordinatedEffectProcess::Player0MatIndex)
        .def_readwrite("Player1MatIndex", &FCoordinatedEffectProcess::Player1MatIndex)
    ;

    class_< FCoordinatedEffectThread >("FCoordinatedEffectThread", no_init)
        .def_readwrite("EffectDefinition", &FCoordinatedEffectThread::EffectDefinition)
        .def_readwrite("IgnoreInstanceData", &FCoordinatedEffectThread::IgnoreInstanceData)
        .def_readwrite("LatentFloat", &FCoordinatedEffectThread::LatentFloat)
        .def_readwrite("TargetFloat", &FCoordinatedEffectThread::TargetFloat)
        .def_readwrite("ParticleSpeedMultiplier", &FCoordinatedEffectThread::ParticleSpeedMultiplier)
        .def_readwrite("CriticalParticleEffects", &FCoordinatedEffectThread::CriticalParticleEffects)
        .def_readwrite("ParticleEffects", &FCoordinatedEffectThread::ParticleEffects)
        .def_readwrite("AudioEffects", &FCoordinatedEffectThread::AudioEffects)
        .def_readwrite("HiddenParticles", &FCoordinatedEffectThread::HiddenParticles)
        .def_readwrite("EffectOwner", &FCoordinatedEffectThread::EffectOwner)
        .def_readwrite("EffectID", &FCoordinatedEffectThread::EffectID)
        .def_readwrite("EffectCompleteDelegate", &FCoordinatedEffectThread::EffectCompleteDelegate)
    ;

    class_< FCoordinatedParticleSystemDefinition >("FCoordinatedParticleSystemDefinition", no_init)
        .def_readwrite("ParticleSystem", &FCoordinatedParticleSystemDefinition::ParticleSystem)
        .def_readwrite("LocationOffset", &FCoordinatedParticleSystemDefinition::LocationOffset)
        .def_readwrite("RotationOffset", &FCoordinatedParticleSystemDefinition::RotationOffset)
        .def_readwrite("TriggerTime", &FCoordinatedParticleSystemDefinition::TriggerTime)
        .def_readwrite("ParticleScale", &FCoordinatedParticleSystemDefinition::ParticleScale)
        .def_readwrite("Parameters", &FCoordinatedParticleSystemDefinition::Parameters)
        .def_readwrite("VectorParameters", &FCoordinatedParticleSystemDefinition::VectorParameters)
        .def_readwrite("ScaleByObjectSize", &FCoordinatedParticleSystemDefinition::ScaleByObjectSize)
    ;

    class_< FCoordinatedScalarParameter >("FCoordinatedScalarParameter", no_init)
        .def_readwrite("ParamName", &FCoordinatedScalarParameter::ParamName)
        .def_readwrite("ParamValueOverTime", &FCoordinatedScalarParameter::ParamValueOverTime)
        .def_readwrite("BoundsScale", &FCoordinatedScalarParameter::BoundsScale)
    ;

    class_< FCoordinatedVectorParameter >("FCoordinatedVectorParameter", no_init)
        .def_readwrite("ParamName", &FCoordinatedVectorParameter::ParamName)
        .def_readwrite("ParamValueOverTime", &FCoordinatedVectorParameter::ParamValueOverTime)
    ;

    class_< FCoordinatedAudioDefinition >("FCoordinatedAudioDefinition", no_init)
        .def_readwrite("TriggerEvent", &FCoordinatedAudioDefinition::TriggerEvent)
        .def_readwrite("TriggerTime", &FCoordinatedAudioDefinition::TriggerTime)
        .def_readwrite("RTPC", &FCoordinatedAudioDefinition::RTPC)
        .def_readwrite("RTPCOverTime", &FCoordinatedAudioDefinition::RTPCOverTime)
    ;

    class_< FCoordinatedEffectIndices >("FCoordinatedEffectIndices", no_init)
        .def_readwrite("StartingIndex", &FCoordinatedEffectIndices::StartingIndex)
        .def_readwrite("EndingIndex", &FCoordinatedEffectIndices::EndingIndex)
    ;

    class_< FObstaclePoint >("FObstaclePoint", no_init)
        .def_readwrite("Value", &FObstaclePoint::Value)
        .def_readwrite("Offset", &FObstaclePoint::Offset)
    ;

    class_< FPendingCustomization >("FPendingCustomization", no_init)
        .def_readwrite("Definition", &FPendingCustomization::Definition)
        .def_readwrite("Targets", &FPendingCustomization::Targets)
    ;

    class_< FProductCustomizationInfo >("FProductCustomizationInfo", no_init)
        .def_readwrite("ProductID", &FProductCustomizationInfo::ProductID)
        .def_readwrite("NumUnlockableCustomizations", &FProductCustomizationInfo::NumUnlockableCustomizations)
        .def_readwrite("NumCustomizations", &FProductCustomizationInfo::NumCustomizations)
    ;

    class_< FCustomizationSizeMapping >("FCustomizationSizeMapping", no_init)
        .def_readwrite("ProductID", &FCustomizationSizeMapping::ProductID)
        .def_readwrite("NumCustomizations", &FCustomizationSizeMapping::NumCustomizations)
    ;

    class_< FExtraMuzzleEffect >("FExtraMuzzleEffect", no_init)
        .def_readwrite("Particles", &FExtraMuzzleEffect::Particles)
        .def_readwrite("Sound", &FExtraMuzzleEffect::Sound)
    ;

    class_< FSpeedTravelData >("FSpeedTravelData", no_init)
        .def_readwrite("OriginLeaveTime", &FSpeedTravelData::OriginLeaveTime)
        .def_readwrite("OriginRegion", &FSpeedTravelData::OriginRegion)
    ;

    class_< FWeatherSystemEffects >("FWeatherSystemEffects", no_init)
        .def_readwrite("WeatherSystemTemplate", &FWeatherSystemEffects::WeatherSystemTemplate)
        .def_readwrite("ScreenEffectsTemplate", &FWeatherSystemEffects::ScreenEffectsTemplate)
    ;

    class_< FAttachmentData >("FAttachmentData", no_init)
        .def_readwrite("AttachmentBase", &FAttachmentData::AttachmentBase)
        .def_readwrite("AttachmentBaseBoneName", &FAttachmentData::AttachmentBaseBoneName)
        .def_readwrite("AttachmentRelativeOffset", &FAttachmentData::AttachmentRelativeOffset)
        .def_readwrite("AttachmentRelativeRotation", &FAttachmentData::AttachmentRelativeRotation)
        .def_readwrite("AttachmentPhysicsMode", &FAttachmentData::AttachmentPhysicsMode)
    ;

    class_< FPopulationOptionDenSpawnData >("FPopulationOptionDenSpawnData", no_init)
        .def_readwrite("PopulationDefName", &FPopulationOptionDenSpawnData::PopulationDefName)
        .def_readwrite("MaxActiveActors", &FPopulationOptionDenSpawnData::MaxActiveActors)
        .def_readwrite("NumTotalActors", &FPopulationOptionDenSpawnData::NumTotalActors)
        .def_readwrite("NumActiveActors", &FPopulationOptionDenSpawnData::NumActiveActors)
        .def_readwrite("NextSpawnTime", &FPopulationOptionDenSpawnData::NextSpawnTime)
        .def_readwrite("NumTotalExternalActors", &FPopulationOptionDenSpawnData::NumTotalExternalActors)
        .def_readwrite("NumActiveExternalActors", &FPopulationOptionDenSpawnData::NumActiveExternalActors)
    ;

    class_< FPerchAnimData >("FPerchAnimData", no_init)
        .def_readwrite("Key", &FPerchAnimData::Key)
        .def_readwrite("StartAnim", &FPerchAnimData::StartAnim)
        .def_readwrite("StopAnim", &FPerchAnimData::StopAnim)
        .def_readwrite("IdleAnim", &FPerchAnimData::IdleAnim)
    ;

    class_< FCombatZone >("FCombatZone", no_init)
        .def_readwrite("Index", &FCombatZone::Index)
        .def_readwrite("Bounds", &FCombatZone::Bounds)
    ;

    class_< FCoverExposureData >("FCoverExposureData", no_init)
    ;

    class_< FClanMaterialData >("FClanMaterialData", no_init)
        .def_readwrite("SourceMaterial", &FClanMaterialData::SourceMaterial)
        .def_readwrite("ReplacementMaterial", &FClanMaterialData::ReplacementMaterial)
    ;

    class_< FClanSwitchData >("FClanSwitchData", no_init)
        .def_readwrite("SwitchName", &FClanSwitchData::SwitchName)
        .def_readwrite("SwitchValue", &FClanSwitchData::SwitchValue)
    ;

    class_< FRagdollDeathImpulseStruct >("FRagdollDeathImpulseStruct", no_init)
        .def_readwrite("Impulse", &FRagdollDeathImpulseStruct::Impulse)
        .def_readwrite("Offset", &FRagdollDeathImpulseStruct::Offset)
        .def_readwrite("BoneName", &FRagdollDeathImpulseStruct::BoneName)
    ;

    class_< FStaggerStateData >("FStaggerStateData", no_init)
        .def_readwrite("State", &FStaggerStateData::State)
        .def_readwrite("StaggerStartTime", &FStaggerStateData::StaggerStartTime)
        .def_readwrite("StaggerEndTime", &FStaggerStateData::StaggerEndTime)
        .def_readwrite("StaggerEndRagdollTime", &FStaggerStateData::StaggerEndRagdollTime)
        .def_readwrite("StaggerRecoveryStartTime", &FStaggerStateData::StaggerRecoveryStartTime)
        .def_readwrite("NextUnstaggerCheckTime", &FStaggerStateData::NextUnstaggerCheckTime)
        .def_readwrite("PreviousOverridePhysicalMaterial", &FStaggerStateData::PreviousOverridePhysicalMaterial)
        .def_readwrite("PreviousCollisionChannel", &FStaggerStateData::PreviousCollisionChannel)
        .def_readwrite("PreviousCollisionComponent", &FStaggerStateData::PreviousCollisionComponent)
        .def_readwrite("StaggerInstigator", &FStaggerStateData::StaggerInstigator)
        .def_readwrite("RestaggeredCount", &FStaggerStateData::RestaggeredCount)
    ;

    class_< FReferencePointComparisonData >("FReferencePointComparisonData", no_init)
        .def_readwrite("A", &FReferencePointComparisonData::A)
        .def_readwrite("B", &FReferencePointComparisonData::B)
    ;

    class_< FReferencePoint >("FReferencePoint", no_init)
        .def_readwrite("Type", &FReferencePoint::Type)
        .def_readwrite("Name", &FReferencePoint::Name)
    ;

    class_< FWillowCoverState >("FWillowCoverState", no_init)
        .def_readwrite("Action", &FWillowCoverState::Action)
        .def_readwrite("Cover", &FWillowCoverState::Cover)
        .def_readwrite("Stance", &FWillowCoverState::Stance)
    ;

    class_< FPerchStateData >("FPerchStateData", no_init)
        .def_readwrite("AttachmentName", &FPerchStateData::AttachmentName)
        .def_readwrite("StaticMesh", &FPerchStateData::StaticMesh)
        .def_readwrite("SkelMesh", &FPerchStateData::SkelMesh)
        .def_readwrite("LocOffset", &FPerchStateData::LocOffset)
        .def_readwrite("RotOffset", &FPerchStateData::RotOffset)
        .def_readwrite("Scale", &FPerchStateData::Scale)
        .def_readwrite("Actor", &FPerchStateData::Actor)
    ;

    class_< FDamageLocationData >("FDamageLocationData", no_init)
        .def_readwrite("Time", &FDamageLocationData::Time)
        .def_readwrite("Location", &FDamageLocationData::Location)
    ;

    class_< FSplineAnimPathData >("FSplineAnimPathData", no_init)
        .def_readwrite("StartSpline", &FSplineAnimPathData::StartSpline)
        .def_readwrite("AnimSeqName", &FSplineAnimPathData::AnimSeqName)
    ;

    class_< FTurnData >("FTurnData", no_init)
        .def_readwrite("MinRepeatTime", &FTurnData::MinRepeatTime)
        .def_readwrite("Left", &FTurnData::Left)
        .def_readwrite("Right", &FTurnData::Right)
        .def_readwrite("Left01", &FTurnData::Left01)
        .def_readwrite("Right01", &FTurnData::Right01)
        .def_readwrite("Left02", &FTurnData::Left02)
        .def_readwrite("Right02", &FTurnData::Right02)
    ;

    class_< FBehaviorAliasReference >("FBehaviorAliasReference", no_init)
        .def_readwrite("BehaviorAlias", &FBehaviorAliasReference::BehaviorAlias)
        .def_readwrite("BehaviorList", &FBehaviorAliasReference::BehaviorList)
    ;

    class_< FBodyWeaponActionPostureData >("FBodyWeaponActionPostureData", no_init)
        .def_readwrite("Posture", &FBodyWeaponActionPostureData::Posture)
        .def_readwrite("Actions", &FBodyWeaponActionPostureData::Actions)
    ;

    class_< FBodyWeaponActionData >("FBodyWeaponActionData", no_init)
        .def_readwrite("Action", &FBodyWeaponActionData::Action)
        .def_readwrite("Expression", &FBodyWeaponActionData::Expression)
        .def_readwrite("Animations", &FBodyWeaponActionData::Animations)
    ;

    class_< FConditionalAnimData >("FConditionalAnimData", no_init)
        .def_readwrite("Expression", &FConditionalAnimData::Expression)
        .def_readwrite("SpecialMove", &FConditionalAnimData::SpecialMove)
    ;

    class_< FBodyHandIKHoldData >("FBodyHandIKHoldData", no_init)
        .def_readwrite("JointLocation", &FBodyHandIKHoldData::JointLocation)
        .def_readwrite("HandLocation", &FBodyHandIKHoldData::HandLocation)
        .def_readwrite("HandRotation", &FBodyHandIKHoldData::HandRotation)
    ;

    class_< FCustomBodyHandIKHoldData >("FCustomBodyHandIKHoldData", no_init)
        .def_readwrite("HoldName", &FCustomBodyHandIKHoldData::HoldName)
        .def_readwrite("IKData", &FCustomBodyHandIKHoldData::IKData)
    ;

    class_< FPainDialogLine >("FPainDialogLine", no_init)
        .def_readwrite("DET_Pain", &FPainDialogLine::DET_Pain)
        .def_readwrite("DamageThresholdPct", &FPainDialogLine::DamageThresholdPct)
        .def_readwrite("ChanceToPlay", &FPainDialogLine::ChanceToPlay)
        .def_readwrite("AkEvent", &FPainDialogLine::AkEvent)
        .def_readwrite("FlinchAnimType", &FPainDialogLine::FlinchAnimType)
        .def_readwrite("FlinchImpulseStrength", &FPainDialogLine::FlinchImpulseStrength)
        .def_readwrite("PainBehaviors", &FPainDialogLine::PainBehaviors)
    ;

    class_< FStaggeredRecoveryRotationData >("FStaggeredRecoveryRotationData", no_init)
        .def_readwrite("BoneName", &FStaggeredRecoveryRotationData::BoneName)
        .def_readwrite("BoneAxis", &FStaggeredRecoveryRotationData::BoneAxis)
    ;

    class_< FCustomCringeData >("FCustomCringeData", no_init)
        .def_readwrite("DamageType", &FCustomCringeData::DamageType)
        .def_readwrite("Cringes", &FCustomCringeData::Cringes)
    ;

    class_< FInjuredLoopOverride >("FInjuredLoopOverride", no_init)
        .def_readwrite("NameTag", &FInjuredLoopOverride::NameTag)
        .def_readwrite("StartAkEvent", &FInjuredLoopOverride::StartAkEvent)
    ;

    class_< FEchoPortraitInfo >("FEchoPortraitInfo", no_init)
        .def_readwrite("PortraitType", &FEchoPortraitInfo::PortraitType)
        .def_readwrite("ScaleformPortrait", &FEchoPortraitInfo::ScaleformPortrait)
        .def_readwrite("VideoPortrait", &FEchoPortraitInfo::VideoPortrait)
    ;

    class_< FScaleformPortraitData >("FScaleformPortraitData", no_init)
        .def_readwrite("ScaleformName", &FScaleformPortraitData::ScaleformName)
        .def_readwrite("PortraitMovie", &FScaleformPortraitData::PortraitMovie)
    ;

    class_< FVideoPortraitData >("FVideoPortraitData", no_init)
        .def_readwrite("VideoMovie", &FVideoPortraitData::VideoMovie)
    ;

    class_< FEmotePortraitInfo >("FEmotePortraitInfo", no_init)
        .def_readwrite("Emote", &FEmotePortraitInfo::Emote)
        .def_readwrite("EmotePortrait", &FEmotePortraitInfo::EmotePortrait)
    ;

    class_< FEmoteStance >("FEmoteStance", no_init)
        .def_readwrite("Emote", &FEmoteStance::Emote)
        .def_readwrite("StanceSpecialMove", &FEmoteStance::StanceSpecialMove)
    ;

    class_< FVehicleCrewMappingStruct >("FVehicleCrewMappingStruct", no_init)
        .def_readwrite("VehicleArchetypeName", &FVehicleCrewMappingStruct::VehicleArchetypeName)
        .def_readwrite("AnimSet", &FVehicleCrewMappingStruct::AnimSet)
    ;

    class_< FFadePickupParticle >("FFadePickupParticle", no_init)
        .def_readwrite("SourceActor", &FFadePickupParticle::SourceActor)
        .def_readwrite("Particle", &FFadePickupParticle::Particle)
        .def_readwrite("FadeEndTime", &FFadePickupParticle::FadeEndTime)
    ;

    class_< FLoadInfo >("FLoadInfo", no_init)
        .def_readwrite("CharacterData", &FLoadInfo::CharacterData)
    ;

    class_< FPlayerSaveData >("FPlayerSaveData", no_init)
        .def_readwrite("FilePath", &FPlayerSaveData::FilePath)
        .def_readwrite("TimeStamp", &FPlayerSaveData::TimeStamp)
        .def_readwrite("PlayerClassDefName", &FPlayerSaveData::PlayerClassDefName)
        .def_readwrite("ClassName", &FPlayerSaveData::ClassName)
        .def_readwrite("CharacterName", &FPlayerSaveData::CharacterName)
        .def_readwrite("ExpLevel", &FPlayerSaveData::ExpLevel)
        .def_readonly("CurrencyOnHand", &FPlayerSaveData::CurrencyOnHand)
        .def_readwrite("UICharacterName", &FPlayerSaveData::UICharacterName)
        .def_readwrite("PlaythroughsCompleted", &FPlayerSaveData::PlaythroughsCompleted)
        .def_readwrite("LastVisitedTeleporter", &FPlayerSaveData::LastVisitedTeleporter)
        .def_readwrite("ActiveMissionNumber", &FPlayerSaveData::ActiveMissionNumber)
        .def_readwrite("PlotMissionNumber", &FPlayerSaveData::PlotMissionNumber)
        .def_readwrite("TotalPlayTime", &FPlayerSaveData::TotalPlayTime)
        .def_readwrite("LastPlaythroughNumber", &FPlayerSaveData::LastPlaythroughNumber)
        .def_readwrite("LastSaveDate", &FPlayerSaveData::LastSaveDate)
        .def_readwrite("SaveGuid", &FPlayerSaveData::SaveGuid)
        .def_readwrite("SaveGameFileId", &FPlayerSaveData::SaveGameFileId)
        .def_readwrite("ExpPoints", &FPlayerSaveData::ExpPoints)
    ;

    class_< FCurrencyState >("FCurrencyState", no_init)
        .def_readwrite("FormOfCurrency", &FCurrencyState::FormOfCurrency)
        .def_readwrite("StatName", &FCurrencyState::StatName)
        .def_readwrite("CurrentAmount", &FCurrencyState::CurrentAmount)
        .def_readwrite("LastKnownAmount", &FCurrencyState::LastKnownAmount)
    ;

    class_< FReplicatedStandInGear >("FReplicatedStandInGear", no_init)
        .def_readwrite("Weapon1Data", &FReplicatedStandInGear::Weapon1Data)
        .def_readwrite("Weapon2Data", &FReplicatedStandInGear::Weapon2Data)
        .def_readwrite("ShieldData", &FReplicatedStandInGear::ShieldData)
        .def_readwrite("GrenadeModData", &FReplicatedStandInGear::GrenadeModData)
        .def_readwrite("ClassModData", &FReplicatedStandInGear::ClassModData)
    ;

    class_< FTrackedSkillState >("FTrackedSkillState", no_init)
        .def_readwrite("SkillDef", &FTrackedSkillState::SkillDef)
        .def_readwrite("PackedStackCountAndPercentComplete", &FTrackedSkillState::PackedStackCountAndPercentComplete)
    ;

    class_< FCriticalTextMessageArray >("FCriticalTextMessageArray", no_init)
        .def_readwrite("MessageArray", &FCriticalTextMessageArray::MessageArray)
    ;

    class_< FCriticalTextMessage >("FCriticalTextMessage", no_init)
        .def_readwrite("Message", &FCriticalTextMessage::Message)
        .def_readwrite("Title", &FCriticalTextMessage::Title)
        .def_readwrite("DestroyTime", &FCriticalTextMessage::DestroyTime)
        .def_readwrite("DrawColor", &FCriticalTextMessage::DrawColor)
    ;

    class_< FCachedWeaponInfo >("FCachedWeaponInfo", no_init)
        .def_readwrite("CachedClipSize", &FCachedWeaponInfo::CachedClipSize)
        .def_readwrite("CachedAmmoInClip", &FCachedWeaponInfo::CachedAmmoInClip)
        .def_readwrite("CachedAmmoNotInClip", &FCachedWeaponInfo::CachedAmmoNotInClip)
        .def_readwrite("CachedWeaponIsReloading", &FCachedWeaponInfo::CachedWeaponIsReloading)
        .def_readwrite("CachedWeaponType", &FCachedWeaponInfo::CachedWeaponType)
        .def_readwrite("CachedWeaponTypeDLCClip", &FCachedWeaponInfo::CachedWeaponTypeDLCClip)
        .def_readwrite("IsReloadIconDisplayed", &FCachedWeaponInfo::IsReloadIconDisplayed)
        .def_readwrite("IsInteractionIconDisplayed", &FCachedWeaponInfo::IsInteractionIconDisplayed)
    ;

    class_< FCellContentData >("FCellContentData", no_init)
        .def_readwrite("Tex", &FCellContentData::Tex)
        .def_readwrite("Mesh", &FCellContentData::Mesh)
        .def_readwrite("Inv", &FCellContentData::Inv)
        .def_readwrite("ExtArrayIndex", &FCellContentData::ExtArrayIndex)
    ;

    class_< FHUDInteractionIcon >("FHUDInteractionIcon", no_init)
        .def_readonly("Icons", &FHUDInteractionIcon::Icons)
    ;

    class_< FInteractionIconWithOverrides >("FInteractionIconWithOverrides", no_init)
        .def_readwrite("IconDef", &FInteractionIconWithOverrides::IconDef)
        .def_readwrite("OverrideIconDef", &FInteractionIconWithOverrides::OverrideIconDef)
        .def_readwrite("bCostsToUse", &FInteractionIconWithOverrides::bCostsToUse)
        .def_readwrite("CostsCurrencyType", &FInteractionIconWithOverrides::CostsCurrencyType)
        .def_readwrite("CostsAmount", &FInteractionIconWithOverrides::CostsAmount)
    ;

    class_< FMissionWidgetMessage >("FMissionWidgetMessage", no_init)
        .def_readwrite("Type", &FMissionWidgetMessage::Type)
        .def_readwrite("Category", &FMissionWidgetMessage::Category)
        .def_readwrite("MissDef", &FMissionWidgetMessage::MissDef)
        .def_readwrite("ObjDef", &FMissionWidgetMessage::ObjDef)
        .def_readwrite("Slot", &FMissionWidgetMessage::Slot)
        .def_readwrite("SwapFromSlot", &FMissionWidgetMessage::SwapFromSlot)
        .def_readwrite("ModuleNum", &FMissionWidgetMessage::ModuleNum)
        .def_readwrite("EventTime", &FMissionWidgetMessage::EventTime)
    ;

    class_< FMinimapObjectiveIconClip >("FMinimapObjectiveIconClip", no_init)
        .def_readwrite("OptionalClip", &FMinimapObjectiveIconClip::OptionalClip)
        .def_readwrite("AboveClip", &FMinimapObjectiveIconClip::AboveClip)
        .def_readwrite("BelowClip", &FMinimapObjectiveIconClip::BelowClip)
        .def_readwrite("Object", &FMinimapIconClip::Object)
        .def_readwrite("MapPos", &FMinimapIconClip::MapPos)
    ;

    class_< FMinimapIconClip >("FMinimapIconClip", no_init)
        .def_readwrite("Object", &FMinimapIconClip::Object)
        .def_readwrite("MapPos", &FMinimapIconClip::MapPos)
    ;

    class_< FScaledHUDElement >("FScaledHUDElement", no_init)
        .def_readwrite("ElementName", &FScaledHUDElement::ElementName)
        .def_readwrite("Anchor", &FScaledHUDElement::Anchor)
    ;

    class_< FInjuredStringReplacementSet >("FInjuredStringReplacementSet", no_init)
        .def_readwrite("Skills", &FInjuredStringReplacementSet::Skills)
        .def_readwrite("NewPlayerInjuredString", &FInjuredStringReplacementSet::NewPlayerInjuredString)
        .def_readwrite("NewInjuredTooltipString1", &FInjuredStringReplacementSet::NewInjuredTooltipString1)
        .def_readwrite("NewInjuredTooltipString2", &FInjuredStringReplacementSet::NewInjuredTooltipString2)
    ;

    class_< FObjectiveIcon >("FObjectiveIcon", no_init)
        .def_readwrite("TransitionStartTime", &FObjectiveIcon::TransitionStartTime)
        .def_readwrite("LastLocation", &FObjectiveIcon::LastLocation)
        .def_readwrite("FadeAlpha", &FObjectiveIcon::FadeAlpha)
        .def_readwrite("FadeScale", &FObjectiveIcon::FadeScale)
        .def_readwrite("ObjectiveClip", &FObjectiveIcon::ObjectiveClip)
        .def_readwrite("AboveClip", &FObjectiveIcon::AboveClip)
        .def_readwrite("BelowClip", &FObjectiveIcon::BelowClip)
        .def_readwrite("OptionalClip", &FObjectiveIcon::OptionalClip)
        .def_readwrite("IconClip", &FWorldSpaceIcon::IconClip)
        .def_readwrite("ArrowClip", &FWorldSpaceIcon::ArrowClip)
        .def_readwrite("NextOcclusionTestTime", &FWorldSpaceIcon::NextOcclusionTestTime)
        .def_readwrite("CachedTextboxWidth", &FWorldSpaceIcon::CachedTextboxWidth)
        .def_readwrite("CachedTextboxHeight", &FWorldSpaceIcon::CachedTextboxHeight)
    ;

    class_< FWorldSpaceIcon >("FWorldSpaceIcon", no_init)
        .def_readwrite("IconClip", &FWorldSpaceIcon::IconClip)
        .def_readwrite("ArrowClip", &FWorldSpaceIcon::ArrowClip)
        .def_readwrite("NextOcclusionTestTime", &FWorldSpaceIcon::NextOcclusionTestTime)
        .def_readwrite("CachedTextboxWidth", &FWorldSpaceIcon::CachedTextboxWidth)
        .def_readwrite("CachedTextboxHeight", &FWorldSpaceIcon::CachedTextboxHeight)
    ;

    class_< FPlayerIcon, bases< FWorldSpaceIcon >  >("FPlayerIcon", no_init)
        .def_readwrite("TextClip", &FPlayerIcon::TextClip)
        .def_readwrite("StateClip", &FPlayerIcon::StateClip)
    ;

    class_< FActiveWaypointData >("FActiveWaypointData", no_init)
        .def_readwrite("WaypointLocation", &FActiveWaypointData::WaypointLocation)
        .def_readwrite("WaypointActor", &FActiveWaypointData::WaypointActor)
        .def_readwrite("WaypointObjective", &FActiveWaypointData::WaypointObjective)
    ;

    class_< FActiveAreaWaypointData >("FActiveAreaWaypointData", no_init)
        .def_readwrite("WaypointLocation", &FActiveAreaWaypointData::WaypointLocation)
        .def_readwrite("WaypointRadius", &FActiveAreaWaypointData::WaypointRadius)
        .def_readwrite("WaypointObjective", &FActiveAreaWaypointData::WaypointObjective)
    ;

    class_< FServerDynamicRadarIconData >("FServerDynamicRadarIconData", no_init)
        .def_readwrite("SourceObject", &FServerDynamicRadarIconData::SourceObject)
        .def_readwrite("Duration", &FServerDynamicRadarIconData::Duration)
        .def_readwrite("StartTime", &FServerDynamicRadarIconData::StartTime)
    ;

    class_< FRemoteDynamicRadarIconData >("FRemoteDynamicRadarIconData", no_init)
        .def_readwrite("IconType", &FRemoteDynamicRadarIconData::IconType)
        .def_readwrite("Location", &FRemoteDynamicRadarIconData::Location)
    ;

    class_< FDuelTeamPair >("FDuelTeamPair", no_init)
        .def_readwrite("ChallengerTeam", &FDuelTeamPair::ChallengerTeam)
        .def_readwrite("CompetitorTeam", &FDuelTeamPair::CompetitorTeam)
    ;

    class_< FDuelTeamInfo >("FDuelTeamInfo", no_init)
        .def_readwrite("TeamAllegiance", &FDuelTeamInfo::TeamAllegiance)
        .def_readwrite("TeamColor", &FDuelTeamInfo::TeamColor)
    ;

    class_< FTempProfileStruct >("FTempProfileStruct", no_init)
        .def_readwrite("Allegiance", &FTempProfileStruct::Allegiance)
        .def_readwrite("Health", &FTempProfileStruct::Health)
        .def_readwrite("Shield", &FTempProfileStruct::Shield)
        .def_readwrite("Weapons", &FTempProfileStruct::Weapons)
    ;

    class_< FTempWeaponStruct >("FTempWeaponStruct", no_init)
        .def_readwrite("DefinitionData", &FTempWeaponStruct::DefinitionData)
        .def_readwrite("Ammo", &FTempWeaponStruct::Ammo)
    ;

    class_< FTradeSlot >("FTradeSlot", no_init)
        .def_readwrite("Status", &FTradeSlot::Status)
        .def_readwrite("WeaponData", &FTradeSlot::WeaponData)
        .def_readwrite("ItemData", &FTradeSlot::ItemData)
        .def_readwrite("Quantity", &FTradeSlot::Quantity)
        .def_readwrite("WInv", &FTradeSlot::WInv)
    ;

    class_< FTrackedSkillIconState >("FTrackedSkillIconState", no_init)
        .def_readwrite("Type", &FTrackedSkillIconState::Type)
        .def_readwrite("Icon", &FTrackedSkillIconState::Icon)
        .def_readwrite("PercentComplete", &FTrackedSkillIconState::PercentComplete)
        .def_readwrite("StackCount", &FTrackedSkillIconState::StackCount)
    ;

    class_< FTopStatData >("FTopStatData", no_init)
        .def_readwrite("LabelText", &FTopStatData::LabelText)
        .def_readwrite("ValueText", &FTopStatData::ValueText)
        .def_readwrite("AuxText", &FTopStatData::AuxText)
        .def_readwrite("Arrow", &FTopStatData::Arrow)
        .def_readwrite("IconName", &FTopStatData::IconName)
    ;

    class_< FLabelToLinkageMapping >("FLabelToLinkageMapping", no_init)
        .def_readwrite("LabelName", &FLabelToLinkageMapping::LabelName)
        .def_readwrite("LinkageName", &FLabelToLinkageMapping::LinkageName)
    ;

    class_< FThirdPersonMenuView >("FThirdPersonMenuView", no_init)
        .def_readwrite("RelativeCameraLocation", &FThirdPersonMenuView::RelativeCameraLocation)
        .def_readwrite("RelativeCameraRotation", &FThirdPersonMenuView::RelativeCameraRotation)
        .def_readwrite("RelativeMenuLocation", &FThirdPersonMenuView::RelativeMenuLocation)
        .def_readwrite("RelativeMenuRotation", &FThirdPersonMenuView::RelativeMenuRotation)
        .def_readwrite("CameraYawMin", &FThirdPersonMenuView::CameraYawMin)
        .def_readwrite("CameraYawMax", &FThirdPersonMenuView::CameraYawMax)
        .def_readwrite("VerticalSplitscreenCameraOffset", &FThirdPersonMenuView::VerticalSplitscreenCameraOffset)
        .def_readwrite("VerticalSplitscreenCameraSpread", &FThirdPersonMenuView::VerticalSplitscreenCameraSpread)
        .def_readwrite("FocusBoneName", &FThirdPersonMenuView::FocusBoneName)
        .def_readwrite("FocusScreenYaw", &FThirdPersonMenuView::FocusScreenYaw)
    ;

    class_< FPanelInfo >("FPanelInfo", no_init)
        .def_readwrite("PanelName", &FPanelInfo::PanelName)
        .def_readwrite("PanelFocused", &FPanelInfo::PanelFocused)
        .def_readwrite("PanelUnfocused", &FPanelInfo::PanelUnfocused)
        .def_readwrite("PanelCompare", &FPanelInfo::PanelCompare)
        .def_readwrite("PanelBackground", &FPanelInfo::PanelBackground)
        .def_readwrite("CellWidth", &FPanelInfo::CellWidth)
        .def_readwrite("CellHeight", &FPanelInfo::CellHeight)
        .def_readwrite("TextureWidth", &FPanelInfo::TextureWidth)
        .def_readwrite("TextureHeight", &FPanelInfo::TextureHeight)
    ;

    class_< FCardInfo >("FCardInfo", no_init)
        .def_readwrite("CardName", &FCardInfo::CardName)
        .def_readwrite("CellWidth", &FCardInfo::CellWidth)
        .def_readwrite("CellHeight", &FCardInfo::CellHeight)
        .def_readwrite("TextureWidth", &FCardInfo::TextureWidth)
        .def_readwrite("TextureHeight", &FCardInfo::TextureHeight)
        .def_readwrite("MainPlayerLinkageName", &FCardInfo::MainPlayerLinkageName)
        .def_readwrite("SplitPlayerLinkageName", &FCardInfo::SplitPlayerLinkageName)
        .def_readwrite("CompareSettings", &FCardInfo::CompareSettings)
    ;

    class_< FCardInfoRelativeToPanel >("FCardInfoRelativeToPanel", no_init)
        .def_readwrite("PanelName", &FCardInfoRelativeToPanel::PanelName)
        .def_readwrite("ComparePosition", &FCardInfoRelativeToPanel::ComparePosition)
        .def_readwrite("CompareScale", &FCardInfoRelativeToPanel::CompareScale)
    ;

    class_< FChestData >("FChestData", no_init)
        .def_readwrite("InventoryClass", &FChestData::InventoryClass)
        .def_readwrite("InventorySerialNumber", &FChestData::InventorySerialNumber)
        .def_readwrite("Inventory", &FChestData::Inventory)
    ;

    class_< FItemCardInfo >("FItemCardInfo", no_init)
        .def_readwrite("CardName", &FItemCardInfo::CardName)
        .def_readwrite("ContentIdx", &FItemCardInfo::ContentIdx)
        .def_readwrite("ItemCard", &FItemCardInfo::ItemCard)
    ;

    class_< FHeavyInventoryElement >("FHeavyInventoryElement", no_init)
        .def_readwrite("Text", &FHeavyInventoryElement::Text)
        .def_readwrite("Color", &FHeavyInventoryElement::Color)
        .def_readwrite("Data", &FHeavyInventoryElement::Data)
    ;

    class_< FSortableDataElement >("FSortableDataElement", no_init)
        .def_readwrite("OneTimeIdx", &FSortableDataElement::OneTimeIdx)
        .def_readwrite("CategoryIdx", &FSortableDataElement::CategoryIdx)
        .def_readwrite("Data", &FSortableDataElement::Data)
    ;

    class_< FSortFilterConfiguration >("FSortFilterConfiguration", no_init)
        .def_readwrite("SortType", &FSortFilterConfiguration::SortType)
        .def_readwrite("FilterType", &FSortFilterConfiguration::FilterType)
        .def_readwrite("CategoryType", &FSortFilterConfiguration::CategoryType)
        .def_readwrite("SortTitleLookupKey", &FSortFilterConfiguration::SortTitleLookupKey)
    ;

    class_< FDirectionData >("FDirectionData", no_init)
        .def_readwrite("This", &FDirectionData::This)
        .def_readwrite("Left", &FDirectionData::Left)
        .def_readwrite("Right", &FDirectionData::Right)
        .def_readwrite("Up", &FDirectionData::Up)
        .def_readwrite("Down", &FDirectionData::Down)
    ;

    class_< FMissionStatusPresentation >("FMissionStatusPresentation", no_init)
        .def_readwrite("TextColor", &FMissionStatusPresentation::TextColor)
        .def_readwrite("IconFrame", &FMissionStatusPresentation::IconFrame)
    ;

    class_< FStatusMenuMissionEligibilityData >("FStatusMenuMissionEligibilityData", no_init)
        .def_readwrite("MissionDef", &FStatusMenuMissionEligibilityData::MissionDef)
        .def_readwrite("MissionStatus", &FStatusMenuMissionEligibilityData::MissionStatus)
    ;

    class_< FCachedInvData >("FCachedInvData", no_init)
        .def_readwrite("Inv", &FCachedInvData::Inv)
        .def_readwrite("TrashOrFavorite", &FCachedInvData::TrashOrFavorite)
    ;

    class_< Fartifact_datum >("Fartifact_datum", no_init)
        .def_readwrite("SkillIndex", &Fartifact_datum::SkillIndex)
        .def_readwrite("Grade", &Fartifact_datum::Grade)
        .def_readwrite("Name", &Fartifact_datum::Name)
    ;

    class_< FSkillTreeUICell >("FSkillTreeUICell", no_init)
        .def_readwrite("BranchNum", &FSkillTreeUICell::BranchNum)
        .def_readwrite("TierNum", &FSkillTreeUICell::TierNum)
        .def_readwrite("CellNum", &FSkillTreeUICell::CellNum)
        .def_readwrite("Clip_Cell", &FSkillTreeUICell::Clip_Cell)
        .def_readwrite("Clip_Highlight", &FSkillTreeUICell::Clip_Highlight)
        .def_readwrite("Clip_Outline", &FSkillTreeUICell::Clip_Outline)
        .def_readwrite("Clip_Overclocked", &FSkillTreeUICell::Clip_Overclocked)
    ;

    class_< FMapObjectData >("FMapObjectData", no_init)
        .def_readwrite("Player", &FMapObjectData::Player)
        .def_readwrite("Vehicle", &FMapObjectData::Vehicle)
        .def_readwrite("Landmark", &FMapObjectData::Landmark)
        .def_readwrite("ClientInteractiveObject", &FMapObjectData::ClientInteractiveObject)
        .def_readwrite("WPRI", &FMapObjectData::WPRI)
        .def_readwrite("WaypointIndex", &FMapObjectData::WaypointIndex)
        .def_readwrite("CustomObjectLoc", &FMapObjectData::CustomObjectLoc)
        .def_readwrite("TransformedLocation", &FMapObjectData::TransformedLocation)
        .def_readwrite("Angle", &FMapObjectData::Angle)
        .def_readwrite("Scale", &FMapObjectData::Scale)
        .def_readwrite("AS_IconClipPath", &FMapObjectData::AS_IconClipPath)
        .def_readwrite("AS_IconClipFrame", &FMapObjectData::AS_IconClipFrame)
        .def_readwrite("AS_IconClipInnerFrame", &FMapObjectData::AS_IconClipInnerFrame)
        .def_readwrite("AS_IconPath", &FMapObjectData::AS_IconPath)
        .def_readwrite("InfoBoxTitle", &FMapObjectData::InfoBoxTitle)
        .def_readwrite("InfoBoxDesc", &FMapObjectData::InfoBoxDesc)
    ;

    class_< FClipRect >("FClipRect", no_init)
        .def_readwrite("Top", &FClipRect::Top)
        .def_readwrite("Right", &FClipRect::Right)
        .def_readwrite("Bottom", &FClipRect::Bottom)
        .def_readwrite("Left", &FClipRect::Left)
    ;

    class_< FOneTimeDataElement >("FOneTimeDataElement", no_init)
        .def_readwrite("Text", &FOneTimeDataElement::Text)
        .def_readwrite("Icon", &FOneTimeDataElement::Icon)
        .def_readwrite("IconOverride", &FOneTimeDataElement::IconOverride)
        .def_readwrite("TextColor", &FOneTimeDataElement::TextColor)
        .def_readwrite("Data", &FOneTimeDataElement::Data)
    ;

    class_< FGFxTextEntry >("FGFxTextEntry", no_init)
        .def_readwrite("ArrayIdx", &FGFxTextEntry::ArrayIdx)
        .def_readwrite("Kind", &FGFxTextEntry::Kind)
    ;

    class_< FPCContextMenuItem >("FPCContextMenuItem", no_init)
        .def_readwrite("Caption", &FPCContextMenuItem::Caption)
        .def_readwrite("Action", &FPCContextMenuItem::Action)
    ;

    class_< FMissionRewardPresentationData >("FMissionRewardPresentationData", no_init)
        .def_readwrite("PresentationDefinition", &FMissionRewardPresentationData::PresentationDefinition)
        .def_readwrite("Rarity", &FMissionRewardPresentationData::Rarity)
    ;

    class_< FPendingMissionRewardData >("FPendingMissionRewardData", no_init)
        .def_readwrite("Mission", &FPendingMissionRewardData::Mission)
        .def_readonly("WeaponRewards", &FPendingMissionRewardData::WeaponRewards)
        .def_readonly("ItemRewards", &FPendingMissionRewardData::ItemRewards)
    ;

    class_< FPlayerLineInfo >("FPlayerLineInfo", no_init)
        .def_readwrite("Avatar", &FPlayerLineInfo::Avatar)
        .def_readwrite("PRI", &FPlayerLineInfo::PRI)
        .def_readwrite("PlayerID", &FPlayerLineInfo::PlayerID)
        .def_readwrite("RoundKills", &FPlayerLineInfo::RoundKills)
        .def_readwrite("TotalKills", &FPlayerLineInfo::TotalKills)
    ;

    class_< FHUDWidget_ChallengeData >("FHUDWidget_ChallengeData", no_init)
        .def_readwrite("Challenge", &FHUDWidget_ChallengeData::Challenge)
        .def_readwrite("LevelIndex", &FHUDWidget_ChallengeData::LevelIndex)
        .def_readwrite("ConditionIndex", &FHUDWidget_ChallengeData::ConditionIndex)
        .def_readwrite("CurrStatVal", &FHUDWidget_ChallengeData::CurrStatVal)
        .def_readwrite("GoalStatVal", &FHUDWidget_ChallengeData::GoalStatVal)
    ;

    class_< FtMenuData >("FtMenuData", no_init)
        .def_readwrite("ColumnText", &FtMenuData::ColumnText)
        .def_readwrite("PrimaryActionCmd", &FtMenuData::PrimaryActionCmd)
        .def_readwrite("SecondaryActionCmd", &FtMenuData::SecondaryActionCmd)
        .def_readwrite("TertiaryActionCmd", &FtMenuData::TertiaryActionCmd)
        .def_readwrite("QuaternaryActionCmd", &FtMenuData::QuaternaryActionCmd)
        .def_readwrite("QuinaryActionCmd", &FtMenuData::QuinaryActionCmd)
        .def_readwrite("OverCmd", &FtMenuData::OverCmd)
        .def_readwrite("LeaveCmd", &FtMenuData::LeaveCmd)
        .def_readwrite("Data", &FtMenuData::Data)
        .def_readwrite("HintFontSize", &FtMenuData::HintFontSize)
        .def_readwrite("Hint", &FtMenuData::Hint)
        .def_readwrite("ItemDetail", &FtMenuData::ItemDetail)
        .def_readwrite("DescriptionBoxStr", &FtMenuData::DescriptionBoxStr)
    ;

    class_< FColumnData >("FColumnData", no_init)
        .def_readwrite("Text", &FColumnData::Text)
        .def_readwrite("HAlign", &FColumnData::HAlign)
        .def_readwrite("TextColor", &FColumnData::TextColor)
    ;

    class_< FMenuHeaderData >("FMenuHeaderData", no_init)
        .def_readwrite("Header", &FMenuHeaderData::Header)
        .def_readwrite("Width", &FMenuHeaderData::Width)
        .def_readwrite("InterfaceName", &FMenuHeaderData::InterfaceName)
        .def_readwrite("FontSize", &FMenuHeaderData::FontSize)
        .def_readwrite("TextColor", &FMenuHeaderData::TextColor)
        .def_readwrite("TextHighlightColor", &FMenuHeaderData::TextHighlightColor)
        .def_readwrite("IconColor", &FMenuHeaderData::IconColor)
        .def_readwrite("IconU", &FMenuHeaderData::IconU)
        .def_readwrite("IconV", &FMenuHeaderData::IconV)
        .def_readwrite("IconUL", &FMenuHeaderData::IconUL)
        .def_readwrite("IconVL", &FMenuHeaderData::IconVL)
    ;

    class_< FDebugConsoleCommand >("FDebugConsoleCommand", no_init)
        .def_readwrite("MenuName", &FDebugConsoleCommand::MenuName)
        .def_readwrite("CommandName", &FDebugConsoleCommand::CommandName)
        .def_readwrite("Description", &FDebugConsoleCommand::Description)
        .def_readwrite("Command", &FDebugConsoleCommand::Command)
    ;

    class_< FtMenuLayout >("FtMenuLayout", no_init)
        .def_readwrite("Background", &FtMenuLayout::Background)
        .def_readwrite("BackgroundXPos", &FtMenuLayout::BackgroundXPos)
        .def_readwrite("BackgroundYPos", &FtMenuLayout::BackgroundYPos)
        .def_readwrite("BackgroundXL", &FtMenuLayout::BackgroundXL)
        .def_readwrite("BackgroundYL", &FtMenuLayout::BackgroundYL)
        .def_readwrite("ColumnDataYL", &FtMenuLayout::ColumnDataYL)
        .def_readwrite("ItemDetailYL", &FtMenuLayout::ItemDetailYL)
        .def_readwrite("DescriptionBoxHeader", &FtMenuLayout::DescriptionBoxHeader)
        .def_readwrite("DescriptionBoxHeaderHAlign", &FtMenuLayout::DescriptionBoxHeaderHAlign)
        .def_readwrite("DescriptionBoxXPos", &FtMenuLayout::DescriptionBoxXPos)
        .def_readwrite("DescriptionBoxYPos", &FtMenuLayout::DescriptionBoxYPos)
        .def_readwrite("DescriptionBoxXL", &FtMenuLayout::DescriptionBoxXL)
        .def_readwrite("TitlePos", &FtMenuLayout::TitlePos)
        .def_readwrite("HintPos", &FtMenuLayout::HintPos)
        .def_readwrite("ColumnPadding", &FtMenuLayout::ColumnPadding)
        .def_readwrite("ColumnLayout", &FtMenuLayout::ColumnLayout)
        .def_readwrite("ColumnDataFont", &FtMenuLayout::ColumnDataFont)
    ;

    class_< FtMenuTextPos >("FtMenuTextPos", no_init)
        .def_readwrite("TextHAlign", &FtMenuTextPos::TextHAlign)
        .def_readwrite("TextXPos", &FtMenuTextPos::TextXPos)
        .def_readwrite("TextVAlign", &FtMenuTextPos::TextVAlign)
        .def_readwrite("TextYPos", &FtMenuTextPos::TextYPos)
    ;

    class_< FColumnLayoutData >("FColumnLayoutData", no_init)
        .def_readwrite("HeaderHAlign", &FColumnLayoutData::HeaderHAlign)
        .def_readwrite("Header", &FColumnLayoutData::Header)
        .def_readwrite("Width", &FColumnLayoutData::Width)
        .def_readwrite("DataHAlign", &FColumnLayoutData::DataHAlign)
    ;

    class_< FNetworkChannelData >("FNetworkChannelData", no_init)
        .def_readwrite("ChannelName", &FNetworkChannelData::ChannelName)
        .def_readwrite("StateName", &FNetworkChannelData::StateName)
        .def_readwrite("ActorClass", &FNetworkChannelData::ActorClass)
        .def_readwrite("ActorClassName", &FNetworkChannelData::ActorClassName)
        .def_readwrite("Role", &FNetworkChannelData::Role)
        .def_readwrite("RemoteRole", &FNetworkChannelData::RemoteRole)
        .def_readwrite("ActorClassCount", &FNetworkChannelData::ActorClassCount)
        .def_readwrite("ActorClassPercent", &FNetworkChannelData::ActorClassPercent)
    ;

    class_< FItemBuilderData >("FItemBuilderData", no_init)
        .def_readwrite("TabName", &FItemBuilderData::TabName)
        .def_readwrite("ItemName", &FItemBuilderData::ItemName)
        .def_readwrite("BuildItemMessage", &FItemBuilderData::BuildItemMessage)
        .def_readwrite("InventoryDefinitionClassName", &FItemBuilderData::InventoryDefinitionClassName)
        .def_readwrite("InventoryBalanceDefinitionNames", &FItemBuilderData::InventoryBalanceDefinitionNames)
    ;

    class_< FItemBuilderBalanceDefinition >("FItemBuilderBalanceDefinition", no_init)
        .def_readwrite("InventoryDefinitionClass", &FItemBuilderBalanceDefinition::InventoryDefinitionClass)
        .def_readwrite("BalanceDefinitions", &FItemBuilderBalanceDefinition::BalanceDefinitions)
    ;

    class_< FItemSettings >("FItemSettings", no_init)
        .def_readwrite("ItemDefinition", &FItemSettings::ItemDefinition)
        .def_readwrite("BalanceDefinition", &FItemSettings::BalanceDefinition)
        .def_readwrite("ManufacturerDefinition", &FItemSettings::ManufacturerDefinition)
        .def_readwrite("ManufacturerGradeIndex", &FItemSettings::ManufacturerGradeIndex)
        .def_readwrite("Level", &FItemSettings::Level)
        .def_readonly("GenericParts", &FItemSettings::GenericParts)
        .def_readwrite("CurrentPartBeingSet", &FItemSettings::CurrentPartBeingSet)
        .def_readwrite("ItemBuilderIndex", &FItemSettings::ItemBuilderIndex)
        .def_readwrite("ActiveSubmenuForThisItem", &FItemSettings::ActiveSubmenuForThisItem)
    ;

    class_< FGearBuilderInventoryPartSlot >("FGearBuilderInventoryPartSlot", no_init)
        .def_readwrite("PartName", &FGearBuilderInventoryPartSlot::PartName)
        .def_readwrite("SelectedPart", &FGearBuilderInventoryPartSlot::SelectedPart)
        .def_readwrite("WeightedPartList", &FGearBuilderInventoryPartSlot::WeightedPartList)
    ;

    class_< FGearBuilderWeightedInventoryPart >("FGearBuilderWeightedInventoryPart", no_init)
        .def_readwrite("Part", &FGearBuilderWeightedInventoryPart::Part)
        .def_readwrite("Weight", &FGearBuilderWeightedInventoryPart::Weight)
        .def_readwrite("ProbabilityOfPickingThisPart", &FGearBuilderWeightedInventoryPart::ProbabilityOfPickingThisPart)
    ;

    class_< FWeaponSettings >("FWeaponSettings", no_init)
        .def_readwrite("WeaponTypeDefinition", &FWeaponSettings::WeaponTypeDefinition)
        .def_readwrite("BalanceDefinition", &FWeaponSettings::BalanceDefinition)
        .def_readwrite("ManufacturerDefinition", &FWeaponSettings::ManufacturerDefinition)
        .def_readwrite("ManufacturerGradeIndex", &FWeaponSettings::ManufacturerGradeIndex)
        .def_readwrite("Level", &FWeaponSettings::Level)
        .def_readonly("GenericParts", &FWeaponSettings::GenericParts)
        .def_readwrite("CurrentPartBeingSet", &FWeaponSettings::CurrentPartBeingSet)
    ;

    class_< FGearBuilderWeaponPartSlot >("FGearBuilderWeaponPartSlot", no_init)
        .def_readwrite("PartName", &FGearBuilderWeaponPartSlot::PartName)
        .def_readwrite("SelectedPart", &FGearBuilderWeaponPartSlot::SelectedPart)
        .def_readwrite("WeightedPartList", &FGearBuilderWeaponPartSlot::WeightedPartList)
    ;

    class_< FGearBuilderWeightedWeaponPart >("FGearBuilderWeightedWeaponPart", no_init)
        .def_readwrite("Part", &FGearBuilderWeightedWeaponPart::Part)
        .def_readwrite("Weight", &FGearBuilderWeightedWeaponPart::Weight)
        .def_readwrite("ProbabilityOfPickingThisPart", &FGearBuilderWeightedWeaponPart::ProbabilityOfPickingThisPart)
    ;

    class_< FGearBuilderCustomizationUsageData >("FGearBuilderCustomizationUsageData", no_init)
        .def_readwrite("Usage", &FGearBuilderCustomizationUsageData::Usage)
        .def_readwrite("CustomizationBalanceDefinitions", &FGearBuilderCustomizationUsageData::CustomizationBalanceDefinitions)
    ;

    class_< FGearBuilderCustomizationData >("FGearBuilderCustomizationData", no_init)
        .def_readwrite("SortValue", &FGearBuilderCustomizationData::SortValue)
        .def_readwrite("BalanceDefinition", &FGearBuilderCustomizationData::BalanceDefinition)
    ;

    class_< FVehicleGameStageGradeWeightData, bases< FGameStageGradeWeightData >  >("FVehicleGameStageGradeWeightData", no_init)
        .def_readwrite("GradeModifiers", &FVehicleGameStageGradeWeightData::GradeModifiers)
    ;

    class_< FVehicleGradeModifierData >("FVehicleGradeModifierData", no_init)
        .def_readwrite("CustomVehicle", &FVehicleGradeModifierData::CustomVehicle)
        .def_readwrite("DisplayName", &FVehicleGradeModifierData::DisplayName)
        .def_readwrite("ExpLevel", &FVehicleGradeModifierData::ExpLevel)
        .def_readwrite("OnSpawnCustomizations", &FVehicleGradeModifierData::OnSpawnCustomizations)
    ;

    class_< FItemPoolInfo >("FItemPoolInfo", no_init)
        .def_readwrite("ItemPool", &FItemPoolInfo::ItemPool)
        .def_readwrite("PoolProbability", &FItemPoolInfo::PoolProbability)
    ;

    class_< FVehicleDefaultCrewStruct >("FVehicleDefaultCrewStruct", no_init)
        .def_readwrite("PopulationDefForRole", &FVehicleDefaultCrewStruct::PopulationDefForRole)
        .def_readwrite("Role", &FVehicleDefaultCrewStruct::Role)
        .def_readwrite("ProbabilityOfSpawn", &FVehicleDefaultCrewStruct::ProbabilityOfSpawn)
        .def_readwrite("PreferredSeat", &FVehicleDefaultCrewStruct::PreferredSeat)
    ;

    class_< FTier >("FTier", no_init)
        .def_readwrite("Skills", &FTier::Skills)
        .def_readwrite("PointsToUnlockNextTier", &FTier::PointsToUnlockNextTier)
    ;

    class_< FTierLayout >("FTierLayout", no_init)
        .def_readwrite("bCellIsOccupied", &FTierLayout::bCellIsOccupied)
    ;

    class_< FPickupMemento >("FPickupMemento", no_init)
        .def_readwrite("Rotation", &FPickupMemento::Rotation)
    ;

    class_< FVSSUsageTracking >("FVSSUsageTracking", no_init)
        .def_readwrite("TheTerminal", &FVSSUsageTracking::TheTerminal)
        .def_readwrite("ThePlayerName", &FVSSUsageTracking::ThePlayerName)
    ;

    class_< FVehicleCrewAnimSetMapping >("FVehicleCrewAnimSetMapping", no_init)
        .def_readwrite("CharacterName", &FVehicleCrewAnimSetMapping::CharacterName)
        .def_readwrite("TheAnimSet", &FVehicleCrewAnimSetMapping::TheAnimSet)
    ;

    class_< FNPCList >("FNPCList", no_init)
        .def_readwrite("Mind", &FNPCList::Mind)
        .def_readwrite("LastPathTime", &FNPCList::LastPathTime)
        .def_readwrite("PathRequestTime", &FNPCList::PathRequestTime)
        .def_readwrite("Score", &FNPCList::Score)
    ;

    class_< FSourceObjectData >("FSourceObjectData", no_init)
        .def_readwrite("UniqueId", &FSourceObjectData::UniqueId)
        .def_readwrite("SourceObject", &FSourceObjectData::SourceObject)
        .def_readwrite("SourceLocation", &FSourceObjectData::SourceLocation)
        .def_readwrite("InstigatedByController", &FSourceObjectData::InstigatedByController)
        .def_readwrite("DamageContext", &FSourceObjectData::DamageContext)
        .def_readonly("UnknownData00", &FSourceObjectData::UnknownData00)
        .def_readwrite("StartDamageTime", &FSourceObjectData::StartDamageTime)
        .def_readwrite("TimeElapsedSinceLastDamage", &FSourceObjectData::TimeElapsedSinceLastDamage)
        .def_readwrite("ExplosionDef", &FSourceObjectData::ExplosionDef)
        .def_readwrite("ExplosionScaleIndex", &FSourceObjectData::ExplosionScaleIndex)
        .def_readwrite("InitialDamageRadius", &FSourceObjectData::InitialDamageRadius)
        .def_readwrite("Damage", &FSourceObjectData::Damage)
        .def_readwrite("Momentum", &FSourceObjectData::Momentum)
        .def_readwrite("DamageSource", &FSourceObjectData::DamageSource)
        .def_readwrite("DamageTypeDef", &FSourceObjectData::DamageTypeDef)
        .def_readwrite("ImpactDefinition", &FSourceObjectData::ImpactDefinition)
        .def_readwrite("DamageCauser", &FSourceObjectData::DamageCauser)
        .def_readonly("UnknownData01", &FSourceObjectData::UnknownData01)
        .def_readwrite("HitObject", &FSourceObjectData::HitObject)
        .def_readwrite("BarrelSourceTime", &FSourceObjectData::BarrelSourceTime)
        .def_readwrite("PlantSourceTime", &FSourceObjectData::PlantSourceTime)
    ;

    class_< FDamageOnlyOnceData >("FDamageOnlyOnceData", no_init)
        .def_readwrite("UniqueId", &FDamageOnlyOnceData::UniqueId)
        .def_readwrite("HurtActor", &FDamageOnlyOnceData::HurtActor)
    ;

    class_< FCurrencyPresentation >("FCurrencyPresentation", no_init)
        .def_readwrite("Type", &FCurrencyPresentation::Type)
        .def_readwrite("WidgetFrame", &FCurrencyPresentation::WidgetFrame)
        .def_readwrite("WidgetClip", &FCurrencyPresentation::WidgetClip)
    ;

    class_< FAssetLibConfig >("FAssetLibConfig", no_init)
        .def_readwrite("SublibraryBits", &FAssetLibConfig::SublibraryBits)
        .def_readwrite("AssetBits", &FAssetLibConfig::AssetBits)
        .def_readwrite("Desc", &FAssetLibConfig::Desc)
        .def_readwrite("LibraryType", &FAssetLibConfig::LibraryType)
    ;

    class_< FSKULibrarySet >("FSKULibrarySet", no_init)
        .def_readwrite("Id", &FSKULibrarySet::Id)
        .def_readwrite("NameID", &FSKULibrarySet::NameID)
        .def_readwrite("LibrarySetPackage", &FSKULibrarySet::LibrarySetPackage)
        .def_readwrite("CachedDlcALDefRef", &FSKULibrarySet::CachedDlcALDefRef)
    ;

    class_< FSKURuntimeLibrarySet >("FSKURuntimeLibrarySet", no_init)
        .def_readwrite("Id", &FSKURuntimeLibrarySet::Id)
        .def_readonly("Libraries", &FSKURuntimeLibrarySet::Libraries)
    ;

    class_< FLegacyCustomizationItemData >("FLegacyCustomizationItemData", no_init)
        .def_readwrite("ItemPoolDefPath", &FLegacyCustomizationItemData::ItemPoolDefPath)
        .def_readwrite("ItemPoolKey", &FLegacyCustomizationItemData::ItemPoolKey)
        .def_readwrite("CustomizationItemPool", &FLegacyCustomizationItemData::CustomizationItemPool)
    ;

    class_< FInputAxisData >("FInputAxisData", no_init)
        .def_readwrite("AxisName", &FInputAxisData::AxisName)
        .def_readwrite("InputDeviceHandler", &FInputAxisData::InputDeviceHandler)
        .def_readwrite("ParameterPtr", &FInputAxisData::ParameterPtr)
        .def_readwrite("AccelState", &FInputAxisData::AccelState)
    ;

    class_< FInputDeviceAxisAddress >("FInputDeviceAxisAddress", no_init)
        .def_readwrite("SourceDevice", &FInputDeviceAxisAddress::SourceDevice)
        .def_readwrite("SourceIndex", &FInputDeviceAxisAddress::SourceIndex)
    ;

    class_< FInputDeviceAxisData >("FInputDeviceAxisData", no_init)
        .def_readwrite("AxisName", &FInputDeviceAxisData::AxisName)
        .def_readwrite("AxisParameter", &FInputDeviceAxisData::AxisParameter)
        .def_readwrite("DeadZone", &FInputDeviceAxisData::DeadZone)
        .def_readwrite("Speed", &FInputDeviceAxisData::Speed)
        .def_readwrite("AbsoluteAxis", &FInputDeviceAxisData::AbsoluteAxis)
        .def_readwrite("InvertMultiplier", &FInputDeviceAxisData::InvertMultiplier)
        .def_readwrite("ActionName", &FInputDeviceAxisData::ActionName)
        .def_readwrite("Caption", &FInputDeviceAxisData::Caption)
        .def_readwrite("KeyBindGroup", &FInputDeviceAxisData::KeyBindGroup)
    ;

    class_< FLookAxisDefinitionData >("FLookAxisDefinitionData", no_init)
        .def_readwrite("Horizontal", &FLookAxisDefinitionData::Horizontal)
        .def_readwrite("Vertical", &FLookAxisDefinitionData::Vertical)
    ;

    class_< FInputDeviceButtonData >("FInputDeviceButtonData", no_init)
        .def_readwrite("KeyName", &FInputDeviceButtonData::KeyName)
        .def_readwrite("PressActions", &FInputDeviceButtonData::PressActions)
        .def_readwrite("TapActions", &FInputDeviceButtonData::TapActions)
        .def_readwrite("HoldActions", &FInputDeviceButtonData::HoldActions)
        .def_readwrite("Caption", &FInputDeviceButtonData::Caption)
        .def_readwrite("KeyBindGroup", &FInputDeviceButtonData::KeyBindGroup)
        .def_readwrite("RemapToDefaultLayoutInputAction", &FInputDeviceButtonData::RemapToDefaultLayoutInputAction)
    ;

    class_< FAccelStateData >("FAccelStateData", no_init)
        .def_readwrite("Warmup", &FAccelStateData::Warmup)
        .def_readwrite("CurrentSpeed", &FAccelStateData::CurrentSpeed)
        .def_readwrite("Direction", &FAccelStateData::Direction)
    ;

    class_< FDeviceLookAxisData >("FDeviceLookAxisData", no_init)
        .def_readwrite("SourceDevice", &FDeviceLookAxisData::SourceDevice)
        .def_readwrite("LookXAxisName", &FDeviceLookAxisData::LookXAxisName)
        .def_readwrite("LookYAxisName", &FDeviceLookAxisData::LookYAxisName)
    ;

    class_< FInputButtonData >("FInputButtonData", no_init)
        .def_readwrite("InputDeviceHandlers", &FInputButtonData::InputDeviceHandlers)
        .def_readwrite("ButtonName", &FInputButtonData::ButtonName)
        .def_readwrite("State", &FInputButtonData::State)
        .def_readwrite("LastPressedTime", &FInputButtonData::LastPressedTime)
    ;

    class_< FInputDeviceButtonAddress >("FInputDeviceButtonAddress", no_init)
        .def_readwrite("SourceDevice", &FInputDeviceButtonAddress::SourceDevice)
        .def_readwrite("SourceIndex", &FInputDeviceButtonAddress::SourceIndex)
        .def_readwrite("RemappedButton", &FInputDeviceButtonAddress::RemappedButton)
    ;

    class_< FKeyRebindingData >("FKeyRebindingData", no_init)
        .def_readwrite("DefaultKeyName", &FKeyRebindingData::DefaultKeyName)
        .def_readwrite("RemappedKeyName", &FKeyRebindingData::RemappedKeyName)
    ;

    class_< FKillSkillDuration >("FKillSkillDuration", no_init)
        .def_readwrite("Players", &FKillSkillDuration::Players)
        .def_readwrite("Duration", &FKillSkillDuration::Duration)
    ;

    class_< FDamageTypeExpModifier >("FDamageTypeExpModifier", no_init)
        .def_readwrite("DamageSource", &FDamageTypeExpModifier::DamageSource)
        .def_readwrite("TypeDefinition", &FDamageTypeExpModifier::TypeDefinition)
        .def_readwrite("Multiplier", &FDamageTypeExpModifier::Multiplier)
    ;

    class_< FLevelBasedExpScale >("FLevelBasedExpScale", no_init)
        .def_readwrite("LevelDifference", &FLevelBasedExpScale::LevelDifference)
        .def_readwrite("HigherLevelEnemyExpScale", &FLevelBasedExpScale::HigherLevelEnemyExpScale)
        .def_readwrite("LowerLevelEnemyExpScale", &FLevelBasedExpScale::LowerLevelEnemyExpScale)
    ;

    class_< FExpAwardWeight >("FExpAwardWeight", no_init)
        .def_readwrite("Players", &FExpAwardWeight::Players)
        .def_readwrite("KillerExpBonus", &FExpAwardWeight::KillerExpBonus)
        .def_readwrite("ExpWeight", &FExpAwardWeight::ExpWeight)
    ;

    class_< FRarityLevelColor >("FRarityLevelColor", no_init)
        .def_readwrite("MinLevel", &FRarityLevelColor::MinLevel)
        .def_readwrite("MaxLevel", &FRarityLevelColor::MaxLevel)
        .def_readwrite("Color", &FRarityLevelColor::Color)
        .def_readwrite("DropLifeSpanType", &FRarityLevelColor::DropLifeSpanType)
        .def_readwrite("RarityRating", &FRarityLevelColor::RarityRating)
    ;

    class_< FPlayThroughData >("FPlayThroughData", no_init)
        .def_readwrite("PlayThroughNumber", &FPlayThroughData::PlayThroughNumber)
        .def_readwrite("BalanceDefinitions", &FPlayThroughData::BalanceDefinitions)
    ;

    class_< FRegionBalanceData >("FRegionBalanceData", no_init)
        .def_readwrite("Region", &FRegionBalanceData::Region)
        .def_readwrite("MinDefaultGameStage", &FRegionBalanceData::MinDefaultGameStage)
        .def_readwrite("MaxDefaultGameStage", &FRegionBalanceData::MaxDefaultGameStage)
        .def_readwrite("DefaultAwesomeLevel", &FRegionBalanceData::DefaultAwesomeLevel)
        .def_readwrite("GameStageIncreaseAbovePlayer", &FRegionBalanceData::GameStageIncreaseAbovePlayer)
        .def_readwrite("MissionOverrides", &FRegionBalanceData::MissionOverrides)
    ;

    class_< FMissionStateBalanceAdjustment >("FMissionStateBalanceAdjustment", no_init)
        .def_readwrite("Mission", &FMissionStateBalanceAdjustment::Mission)
        .def_readwrite("MinGameStage", &FMissionStateBalanceAdjustment::MinGameStage)
        .def_readwrite("MaxGameStage", &FMissionStateBalanceAdjustment::MaxGameStage)
        .def_readwrite("AwesomeLevel", &FMissionStateBalanceAdjustment::AwesomeLevel)
    ;

    class_< FStatusEffectTypeCommonProperties >("FStatusEffectTypeCommonProperties", no_init)
        .def_readwrite("StatusEffectType", &FStatusEffectTypeCommonProperties::StatusEffectType)
        .def_readwrite("EffectStartAkEvent", &FStatusEffectTypeCommonProperties::EffectStartAkEvent)
        .def_readwrite("EffectStopAkEvent", &FStatusEffectTypeCommonProperties::EffectStopAkEvent)
    ;

    class_< FTextMarkupEntry >("FTextMarkupEntry", no_init)
        .def_readwrite("MarkupTag", &FTextMarkupEntry::MarkupTag)
        .def_readwrite("HTMLMarkupBeginText", &FTextMarkupEntry::HTMLMarkupBeginText)
        .def_readwrite("HTMLMarkupEndText", &FTextMarkupEntry::HTMLMarkupEndText)
        .def_readwrite("MarkupBeginTag", &FTextMarkupEntry::MarkupBeginTag)
        .def_readwrite("MarkupEndTag", &FTextMarkupEntry::MarkupEndTag)
    ;

    class_< FDeveloperData >("FDeveloperData", no_init)
        .def_readwrite("Gamertag", &FDeveloperData::Gamertag)
        .def_readwrite("UniqueId", &FDeveloperData::UniqueId)
        .def_readwrite("Platform", &FDeveloperData::Platform)
        .def_readwrite("UnlocksGamerpics", &FDeveloperData::UnlocksGamerpics)
    ;

    class_< FPerkData >("FPerkData", no_init)
        .def_readwrite("ButtonChain", &FPerkData::ButtonChain)
        .def_readwrite("Command", &FPerkData::Command)
    ;

    class_< FAchievementUnlockData >("FAchievementUnlockData", no_init)
        .def_readwrite("UnlockType", &FAchievementUnlockData::UnlockType)
        .def_readwrite("Achievement", &FAchievementUnlockData::Achievement)
        .def_readwrite("StringData", &FAchievementUnlockData::StringData)
        .def_readwrite("IntData", &FAchievementUnlockData::IntData)
    ;

    class_< FSlaughterMissionChain >("FSlaughterMissionChain", no_init)
        .def_readwrite("SlaughterMissions", &FSlaughterMissionChain::SlaughterMissions)
    ;

    class_< FInputContextData >("FInputContextData", no_init)
        .def_readwrite("ContextName", &FInputContextData::ContextName)
        .def_readwrite("Definition", &FInputContextData::Definition)
    ;

    class_< FInputRemappingAxisData >("FInputRemappingAxisData", no_init)
        .def_readwrite("DefaultAxisName", &FInputRemappingAxisData::DefaultAxisName)
        .def_readwrite("RemappedAxisName", &FInputRemappingAxisData::RemappedAxisName)
        .def_readwrite("RemappedAxisParameter", &FInputRemappingAxisData::RemappedAxisParameter)
        .def_readwrite("Caption", &FInputRemappingAxisData::Caption)
    ;

    class_< FInputRemappingButtonData >("FInputRemappingButtonData", no_init)
        .def_readwrite("DefaultKeyName", &FInputRemappingButtonData::DefaultKeyName)
        .def_readwrite("RemappedKeyName", &FInputRemappingButtonData::RemappedKeyName)
        .def_readwrite("RemappedPressActions", &FInputRemappingButtonData::RemappedPressActions)
        .def_readwrite("RemappedTapActions", &FInputRemappingButtonData::RemappedTapActions)
        .def_readwrite("RemappedHoldActions", &FInputRemappingButtonData::RemappedHoldActions)
        .def_readwrite("Caption", &FInputRemappingButtonData::Caption)
    ;

    class_< FTombstoneData >("FTombstoneData", no_init)
        .def_readwrite("TotalTimePlayed", &FTombstoneData::TotalTimePlayed)
        .def_readwrite("CharacterLevel", &FTombstoneData::CharacterLevel)
        .def_readwrite("PercentMissionsComplete", &FTombstoneData::PercentMissionsComplete)
        .def_readwrite("PercentChallengesComplete", &FTombstoneData::PercentChallengesComplete)
        .def_readwrite("CharacterName", &FTombstoneData::CharacterName)
        .def_readwrite("FavoriteManufacturer", &FTombstoneData::FavoriteManufacturer)
        .def_readwrite("FavoriteWeaponType", &FTombstoneData::FavoriteWeaponType)
        .def_readwrite("KilledByDescription", &FTombstoneData::KilledByDescription)
        .def_readwrite("ScreenshotFilename", &FTombstoneData::ScreenshotFilename)
    ;

    class_< FLightProjectile >("FLightProjectile", no_init)
        .def_readwrite("Location", &FLightProjectile::Location)
        .def_readwrite("PartLocation", &FLightProjectile::PartLocation)
        .def_readwrite("Velocity", &FLightProjectile::Velocity)
        .def_readwrite("PartRef", &FLightProjectile::PartRef)
        .def_readwrite("AudioRef", &FLightProjectile::AudioRef)
        .def_readwrite("FireDef", &FLightProjectile::FireDef)
        .def_readwrite("StartTime", &FLightProjectile::StartTime)
        .def_readwrite("NumRicochets", &FLightProjectile::NumRicochets)
        .def_readwrite("LastTraceTime", &FLightProjectile::LastTraceTime)
        .def_readwrite("LastSafeTraceStartLocation", &FLightProjectile::LastSafeTraceStartLocation)
        .def_readwrite("LastHitActor", &FLightProjectile::LastHitActor)
        .def_readwrite("Instigator", &FLightProjectile::Instigator)
        .def_readwrite("Damage", &FLightProjectile::Damage)
        .def_readwrite("FiringPatternIdx", &FLightProjectile::FiringPatternIdx)
        .def_readwrite("BulletFromClipType", &FLightProjectile::BulletFromClipType)
        .def_readwrite("bHitWater", &FLightProjectile::bHitWater)
        .def_readwrite("PenetrationCount", &FLightProjectile::PenetrationCount)
        .def_readwrite("Id", &FLightProjectile::Id)
        .def_readwrite("StartTrace", &FLightProjectile::StartTrace)
        .def_readwrite("EndTrace", &FLightProjectile::EndTrace)
        .def_readwrite("OriginalStartTrace", &FLightProjectile::OriginalStartTrace)
    ;

    class_< FReplicatedLightProjectile >("FReplicatedLightProjectile", no_init)
        .def_readwrite("Id", &FReplicatedLightProjectile::Id)
        .def_readwrite("StartTrace", &FReplicatedLightProjectile::StartTrace)
        .def_readwrite("EndTrace", &FReplicatedLightProjectile::EndTrace)
        .def_readwrite("ReflectSpeed", &FReplicatedLightProjectile::ReflectSpeed)
        .def_readwrite("FireDef", &FReplicatedLightProjectile::FireDef)
        .def_readwrite("FiringPatternIdx", &FReplicatedLightProjectile::FiringPatternIdx)
        .def_readwrite("Instigator", &FReplicatedLightProjectile::Instigator)
        .def_readwrite("StartTime", &FReplicatedLightProjectile::StartTime)
    ;

    class_< FBeamState >("FBeamState", no_init)
        .def_readwrite("BeamIndex", &FBeamState::BeamIndex)
        .def_readwrite("ServerOnlyState", &FBeamState::ServerOnlyState)
        .def_readwrite("CoreBeamState", &FBeamState::CoreBeamState)
        .def_readwrite("PartRef", &FBeamState::PartRef)
        .def_readwrite("BeamAudioInfo", &FBeamState::BeamAudioInfo)
        .def_readwrite("BeamImpactAudioInfo", &FBeamState::BeamImpactAudioInfo)
        .def_readwrite("CurrentStartPoint", &FBeamState::CurrentStartPoint)
        .def_readwrite("CurrentEndPoint", &FBeamState::CurrentEndPoint)
        .def_readwrite("CurrentStartTangent", &FBeamState::CurrentStartTangent)
        .def_readwrite("CurrentEndTangent", &FBeamState::CurrentEndTangent)
        .def_readwrite("CurrentDirection", &FBeamState::CurrentDirection)
        .def_readwrite("LastImpactLocation", &FBeamState::LastImpactLocation)
    ;

    class_< FServerBeamState >("FServerBeamState", no_init)
        .def_readwrite("DamageData", &FServerBeamState::DamageData)
        .def_readwrite("DamageInstigator", &FServerBeamState::DamageInstigator)
        .def_readwrite("StartTime", &FServerBeamState::StartTime)
        .def_readwrite("LockTime", &FServerBeamState::LockTime)
        .def_readwrite("NextTraceTime", &FServerBeamState::NextTraceTime)
        .def_readwrite("BeamNetUpdateTime", &FServerBeamState::BeamNetUpdateTime)
        .def_readwrite("LastDamageApplicationTime", &FServerBeamState::LastDamageApplicationTime)
        .def_readwrite("LastDamagedActor", &FServerBeamState::LastDamagedActor)
        .def_readwrite("NextRandomBoneTime", &FServerBeamState::NextRandomBoneTime)
        .def_readwrite("ParentBeamIndex", &FServerBeamState::ParentBeamIndex)
        .def_readwrite("ChildBeamsIndicies", &FServerBeamState::ChildBeamsIndicies)
    ;

    class_< FBeamDamageData >("FBeamDamageData", no_init)
        .def_readwrite("Momentum", &FBeamDamageData::Momentum)
        .def_readwrite("Amount", &FBeamDamageData::Amount)
        .def_readwrite("Radius", &FBeamDamageData::Radius)
        .def_readwrite("Source", &FBeamDamageData::Source)
        .def_readwrite("TypeDefinition", &FBeamDamageData::TypeDefinition)
        .def_readwrite("BarrelSourceTime", &FBeamDamageData::BarrelSourceTime)
        .def_readwrite("PlantSourceTime", &FBeamDamageData::PlantSourceTime)
        .def_readwrite("DamageCauser", &FBeamDamageData::DamageCauser)
        .def_readonly("UnknownData00", &FBeamDamageData::UnknownData00)
    ;

    class_< FReplicatedBeamState >("FReplicatedBeamState", no_init)
        .def_readwrite("FireDef", &FReplicatedBeamState::FireDef)
        .def_readwrite("ImpactDefinition", &FReplicatedBeamState::ImpactDefinition)
        .def_readwrite("SourceData", &FReplicatedBeamState::SourceData)
        .def_readwrite("TargetData", &FReplicatedBeamState::TargetData)
    ;

    class_< FBeamLocationData >("FBeamLocationData", no_init)
        .def_readwrite("Actor", &FBeamLocationData::Actor)
        .def_readwrite("Socket", &FBeamLocationData::Socket)
        .def_readwrite("Offset", &FBeamLocationData::Offset)
        .def_readwrite("WorldBody", &FBeamLocationData::WorldBody)
        .def_readonly("UnknownData00", &FBeamLocationData::UnknownData00)
    ;

    class_< FReplicatedBeamEndPoints >("FReplicatedBeamEndPoints", no_init)
        .def_readwrite("StartPoint", &FReplicatedBeamEndPoints::StartPoint)
        .def_readwrite("EndPoint", &FReplicatedBeamEndPoints::EndPoint)
    ;

    class_< FCameraLerpKeyFrame >("FCameraLerpKeyFrame", no_init)
        .def_readwrite("Alpha", &FCameraLerpKeyFrame::Alpha)
        .def_readwrite("CameraTargetThisKeyFrame", &FCameraLerpKeyFrame::CameraTargetThisKeyFrame)
        .def_readwrite("CameraRotationBehavior", &FCameraLerpKeyFrame::CameraRotationBehavior)
        .def_readwrite("BaseCameraPosition", &FCameraLerpKeyFrame::BaseCameraPosition)
        .def_readwrite("CameraOffset", &FCameraLerpKeyFrame::CameraOffset)
        .def_readwrite("ForcedCameraRotation", &FCameraLerpKeyFrame::ForcedCameraRotation)
    ;

    class_< FVehicleSeatInstance >("FVehicleSeatInstance", no_init)
        .def_readwrite("StoragePawn", &FVehicleSeatInstance::StoragePawn)
        .def_readwrite("LastStoragePawn", &FVehicleSeatInstance::LastStoragePawn)
        .def_readwrite("SeatPawn", &FVehicleSeatInstance::SeatPawn)
        .def_readwrite("Gun", &FVehicleSeatInstance::Gun)
        .def_readwrite("GunMesh", &FVehicleSeatInstance::GunMesh)
        .def_readwrite("GunDefinition", &FVehicleSeatInstance::GunDefinition)
        .def_readwrite("BarrelIndex", &FVehicleSeatInstance::BarrelIndex)
        .def_readwrite("WeaponRotationName", &FVehicleSeatInstance::WeaponRotationName)
        .def_readwrite("FlashLocationName", &FVehicleSeatInstance::FlashLocationName)
        .def_readwrite("FlashCountName", &FVehicleSeatInstance::FlashCountName)
        .def_readwrite("FiringModeName", &FVehicleSeatInstance::FiringModeName)
        .def_readwrite("AttachedWeaponName", &FVehicleSeatInstance::AttachedWeaponName)
        .def_readwrite("TurretControllers", &FVehicleSeatInstance::TurretControllers)
        .def_readwrite("WeaponFireSMD", &FVehicleSeatInstance::WeaponFireSMD)
        .def_readwrite("OldPositions", &FVehicleSeatInstance::OldPositions)
        .def_readwrite("SmoothedCameraOffset", &FVehicleSeatInstance::SmoothedCameraOffset)
        .def_readwrite("IncomingSeatIndex", &FVehicleSeatInstance::IncomingSeatIndex)
        .def_readwrite("SeatLockTime", &FVehicleSeatInstance::SeatLockTime)
    ;

    class_< FTurretConstraintData >("FTurretConstraintData", no_init)
        .def_readwrite("PitchConstraint", &FTurretConstraintData::PitchConstraint)
        .def_readwrite("YawConstraint", &FTurretConstraintData::YawConstraint)
        .def_readwrite("RollConstraint", &FTurretConstraintData::RollConstraint)
    ;

    class_< FTimePosition >("FTimePosition", no_init)
        .def_readwrite("Position", &FTimePosition::Position)
        .def_readwrite("Time", &FTimePosition::Time)
    ;

    class_< FVirtualSeatStruct >("FVirtualSeatStruct", no_init)
        .def_readwrite("NameKey", &FVirtualSeatStruct::NameKey)
        .def_readwrite("CurrentRealSeat", &FVirtualSeatStruct::CurrentRealSeat)
    ;

    class_< FVehicleEffect >("FVehicleEffect", no_init)
        .def_readwrite("EffectStartTag", &FVehicleEffect::EffectStartTag)
        .def_readwrite("EffectEndTag", &FVehicleEffect::EffectEndTag)
        .def_readwrite("EffectTemplate", &FVehicleEffect::EffectTemplate)
        .def_readwrite("EffectSocket", &FVehicleEffect::EffectSocket)
        .def_readwrite("EffectRef", &FVehicleEffect::EffectRef)
        .def_readwrite("EffectAudioStartAkEvent", &FVehicleEffect::EffectAudioStartAkEvent)
        .def_readwrite("EffectAudioStopAkEvent", &FVehicleEffect::EffectAudioStopAkEvent)
    ;

    class_< FFDamageMorphTargets >("FFDamageMorphTargets", no_init)
        .def_readwrite("MorphNodeName", &FFDamageMorphTargets::MorphNodeName)
        .def_readwrite("MorphNode", &FFDamageMorphTargets::MorphNode)
        .def_readwrite("LinkedMorphNodeName", &FFDamageMorphTargets::LinkedMorphNodeName)
        .def_readwrite("LinkedMorphNodeIndex", &FFDamageMorphTargets::LinkedMorphNodeIndex)
        .def_readwrite("AssociatedSkelControl", &FFDamageMorphTargets::AssociatedSkelControl)
        .def_readwrite("InfluenceBone", &FFDamageMorphTargets::InfluenceBone)
        .def_readwrite("Health", &FFDamageMorphTargets::Health)
        .def_readwrite("DamagePropNames", &FFDamageMorphTargets::DamagePropNames)
    ;

    class_< FSuspensionSound >("FSuspensionSound", no_init)
        .def_readwrite("LastSuspensionTravel", &FSuspensionSound::LastSuspensionTravel)
        .def_readwrite("LastPlayTime", &FSuspensionSound::LastPlayTime)
        .def_readwrite("PlayingInfo", &FSuspensionSound::PlayingInfo)
    ;

    class_< FPursuitNode >("FPursuitNode", no_init)
        .def_readwrite("RelativeLocation", &FPursuitNode::RelativeLocation)
        .def_readwrite("RelativeDistance", &FPursuitNode::RelativeDistance)
        .def_readwrite("EvasiveActionDistance", &FPursuitNode::EvasiveActionDistance)
        .def_readwrite("NodeType", &FPursuitNode::NodeType)
        .def_readwrite("LastReservedTime", &FPursuitNode::LastReservedTime)
        .def_readwrite("ReservedBy", &FPursuitNode::ReservedBy)
        .def_readwrite("AIAlertDistance", &FPursuitNode::AIAlertDistance)
        .def_readwrite("AIAlertFlagDef", &FPursuitNode::AIAlertFlagDef)
    ;

    class_< FPursuitNodeData >("FPursuitNodeData", no_init)
        .def_readwrite("RelativeLocation", &FPursuitNodeData::RelativeLocation)
        .def_readwrite("NodeType", &FPursuitNodeData::NodeType)
        .def_readwrite("EvasiveActionDistance", &FPursuitNodeData::EvasiveActionDistance)
        .def_readwrite("AIAlertDistance", &FPursuitNodeData::AIAlertDistance)
        .def_readwrite("AIAlertFlagDef", &FPursuitNodeData::AIAlertFlagDef)
    ;

    class_< FIndexPair >("FIndexPair", no_init)
        .def_readwrite("Index1", &FIndexPair::Index1)
        .def_readwrite("Index2", &FIndexPair::Index2)
    ;

    class_< FVehicleHandlingWheelData >("FVehicleHandlingWheelData", no_init)
        .def_readwrite("BoneName", &FVehicleHandlingWheelData::BoneName)
        .def_readwrite("WheelDef", &FVehicleHandlingWheelData::WheelDef)
    ;

    class_< FFishtailingInfo >("FFishtailingInfo", no_init)
        .def_readwrite("ContactPoint", &FFishtailingInfo::ContactPoint)
        .def_readwrite("Impulse", &FFishtailingInfo::Impulse)
    ;

    class_< FCollisionDamageCalculation >("FCollisionDamageCalculation", no_init)
        .def_readwrite("DamageType", &FCollisionDamageCalculation::DamageType)
        .def_readwrite("DamageTypes", &FCollisionDamageCalculation::DamageTypes)
        .def_readwrite("Formula", &FCollisionDamageCalculation::Formula)
        .def_readwrite("MomentumFactor", &FCollisionDamageCalculation::MomentumFactor)
        .def_readwrite("AddZMomentum", &FCollisionDamageCalculation::AddZMomentum)
    ;

    class_< FDamageTypeBySpeedStruct >("FDamageTypeBySpeedStruct", no_init)
        .def_readwrite("Speed", &FDamageTypeBySpeedStruct::Speed)
        .def_readwrite("DamageType", &FDamageTypeBySpeedStruct::DamageType)
    ;

    class_< FVehicleSeatDefinition >("FVehicleSeatDefinition", no_init)
        .def_readwrite("SeatDefinition", &FVehicleSeatDefinition::SeatDefinition)
        .def_readwrite("WeaponBalanceDefinition", &FVehicleSeatDefinition::WeaponBalanceDefinition)
        .def_readwrite("WeaponFireSMD", &FVehicleSeatDefinition::WeaponFireSMD)
        .def_readwrite("NextSeatIndex", &FVehicleSeatDefinition::NextSeatIndex)
        .def_readwrite("Anim_SeatSwap", &FVehicleSeatDefinition::Anim_SeatSwap)
        .def_readwrite("SeatAIDef", &FVehicleSeatDefinition::SeatAIDef)
        .def_readwrite("SeatInteractTextDefinition", &FVehicleSeatDefinition::SeatInteractTextDefinition)
        .def_readwrite("GunSocket", &FVehicleSeatDefinition::GunSocket)
        .def_readwrite("SeatNameEnter", &FVehicleSeatDefinition::SeatNameEnter)
        .def_readwrite("SeatNameExit", &FVehicleSeatDefinition::SeatNameExit)
    ;

    class_< FVStatusEffectResistance >("FVStatusEffectResistance", no_init)
        .def_readwrite("ChanceResistance", &FVStatusEffectResistance::ChanceResistance)
        .def_readwrite("DurationResistance", &FVStatusEffectResistance::DurationResistance)
    ;

    class_< FMissionStatusData >("FMissionStatusData", no_init)
        .def_readwrite("MissionDefinition", &FMissionStatusData::MissionDefinition)
        .def_readwrite("MissionStatus", &FMissionStatusData::MissionStatus)
        .def_readwrite("MissionObjective", &FMissionStatusData::MissionObjective)
        .def_readwrite("ObjectiveStatus", &FMissionStatusData::ObjectiveStatus)
    ;

    class_< FObjectiveDependencyData >("FObjectiveDependencyData", no_init)
        .def_readwrite("Objective", &FObjectiveDependencyData::Objective)
        .def_readwrite("Status", &FObjectiveDependencyData::Status)
    ;

    class_< FRewardData >("FRewardData", no_init)
        .def_readwrite("ExperienceRewardPercentage", &FRewardData::ExperienceRewardPercentage)
        .def_readwrite("CurrencyRewardType", &FRewardData::CurrencyRewardType)
        .def_readwrite("CreditRewardMultiplier", &FRewardData::CreditRewardMultiplier)
        .def_readwrite("OtherCurrencyReward", &FRewardData::OtherCurrencyReward)
        .def_readwrite("RewardItems", &FRewardData::RewardItems)
        .def_readwrite("RewardItemPools", &FRewardData::RewardItemPools)
    ;

    class_< FUnloadableDlcMissionStatusData >("FUnloadableDlcMissionStatusData", no_init)
        .def_readwrite("MissionDefName", &FUnloadableDlcMissionStatusData::MissionDefName)
        .def_readwrite("Status", &FUnloadableDlcMissionStatusData::Status)
        .def_readwrite("DlcPackageId", &FUnloadableDlcMissionStatusData::DlcPackageId)
        .def_readwrite("ObjectivesProgress", &FUnloadableDlcMissionStatusData::ObjectivesProgress)
        .def_readwrite("ActiveObjectiveSetIndex", &FUnloadableDlcMissionStatusData::ActiveObjectiveSetIndex)
        .def_readwrite("SubObjectiveSetsIndices", &FUnloadableDlcMissionStatusData::SubObjectiveSetsIndices)
        .def_readwrite("GameStage", &FUnloadableDlcMissionStatusData::GameStage)
        .def_readwrite("NeedsRewards", &FUnloadableDlcMissionStatusData::NeedsRewards)
        .def_readwrite("HeardKickoff", &FUnloadableDlcMissionStatusData::HeardKickoff)
    ;

    class_< FUnloadableDlcPendingRewardData >("FUnloadableDlcPendingRewardData", no_init)
        .def_readwrite("MissionDefName", &FUnloadableDlcPendingRewardData::MissionDefName)
        .def_readonly("WeaponRewards", &FUnloadableDlcPendingRewardData::WeaponRewards)
        .def_readonly("ItemRewards", &FUnloadableDlcPendingRewardData::ItemRewards)
        .def_readwrite("DlcPackageId", &FUnloadableDlcPendingRewardData::DlcPackageId)
    ;

    class_< FExpansionData >("FExpansionData", no_init)
        .def_readwrite("Tag", &FExpansionData::Tag)
        .def_readwrite("Data", &FExpansionData::Data)
    ;

    class_< FUnloadableDlcChallengeData >("FUnloadableDlcChallengeData", no_init)
        .def_readwrite("ChallengeDefName", &FUnloadableDlcChallengeData::ChallengeDefName)
        .def_readwrite("DlcPackageId", &FUnloadableDlcChallengeData::DlcPackageId)
    ;

    class_< FRegionGameStageData >("FRegionGameStageData", no_init)
        .def_readwrite("RegionDef", &FRegionGameStageData::RegionDef)
        .def_readwrite("GameStage", &FRegionGameStageData::GameStage)
        .def_readwrite("PlaythroughIdx", &FRegionGameStageData::PlaythroughIdx)
    ;

    class_< FUnloadableDlcRegionGameStageData >("FUnloadableDlcRegionGameStageData", no_init)
        .def_readwrite("RegionDefName", &FUnloadableDlcRegionGameStageData::RegionDefName)
        .def_readwrite("GameStage", &FUnloadableDlcRegionGameStageData::GameStage)
        .def_readwrite("PlaythroughIdx", &FUnloadableDlcRegionGameStageData::PlaythroughIdx)
        .def_readwrite("DlcPackageId", &FUnloadableDlcRegionGameStageData::DlcPackageId)
    ;

    class_< FWorldDiscoveryData >("FWorldDiscoveryData", no_init)
        .def_readwrite("DiscoveryName", &FWorldDiscoveryData::DiscoveryName)
    ;

    class_< FOneOffLevelChallengeData >("FOneOffLevelChallengeData", no_init)
        .def_readwrite("PackageId", &FOneOffLevelChallengeData::PackageId)
        .def_readwrite("ContentId", &FOneOffLevelChallengeData::ContentId)
        .def_readwrite("Completion", &FOneOffLevelChallengeData::Completion)
    ;

    class_< FBankSlot >("FBankSlot", no_init)
        .def_readwrite("InventorySerialNumber", &FBankSlot::InventorySerialNumber)
    ;

    class_< FLockoutData >("FLockoutData", no_init)
        .def_readwrite("LockoutDef", &FLockoutData::LockoutDef)
        .def_readwrite("LockoutTime", &FLockoutData::LockoutTime)
    ;

    class_< FUnloadableDlcLockoutData >("FUnloadableDlcLockoutData", no_init)
        .def_readwrite("LockoutDefName", &FUnloadableDlcLockoutData::LockoutDefName)
        .def_readwrite("LockoutTime", &FUnloadableDlcLockoutData::LockoutTime)
        .def_readwrite("DlcPackageId", &FUnloadableDlcLockoutData::DlcPackageId)
    ;

    class_< FChosenVehicleCustomization >("FChosenVehicleCustomization", no_init)
        .def_readwrite("FamilyDef", &FChosenVehicleCustomization::FamilyDef)
        .def_readonly("CustomizationDef", &FChosenVehicleCustomization::CustomizationDef)
    ;

    class_< FPlayerClassAchievementUnlockData >("FPlayerClassAchievementUnlockData", no_init)
        .def_readwrite("UnlockType", &FPlayerClassAchievementUnlockData::UnlockType)
        .def_readwrite("Achievement", &FPlayerClassAchievementUnlockData::Achievement)
        .def_readwrite("IntData", &FPlayerClassAchievementUnlockData::IntData)
    ;

    class_< FPlayerSkillTreeBranchData >("FPlayerSkillTreeBranchData", no_init)
        .def_readwrite("Definition", &FPlayerSkillTreeBranchData::Definition)
        .def_readwrite("BranchPointsToUnlockNextBranch", &FPlayerSkillTreeBranchData::BranchPointsToUnlockNextBranch)
        .def_readwrite("Index", &FPlayerSkillTreeBranchData::Index)
        .def_readwrite("ParentBranchIndex", &FPlayerSkillTreeBranchData::ParentBranchIndex)
        .def_readwrite("PrevBranchIndex", &FPlayerSkillTreeBranchData::PrevBranchIndex)
        .def_readwrite("NextBranchIndex", &FPlayerSkillTreeBranchData::NextBranchIndex)
        .def_readwrite("ChildBranchIndices", &FPlayerSkillTreeBranchData::ChildBranchIndices)
        .def_readwrite("TierIndices", &FPlayerSkillTreeBranchData::TierIndices)
        .def_readwrite("Owner", &FPlayerSkillTreeBranchData::Owner)
    ;

    class_< FPlayerSkillTreeTierData >("FPlayerSkillTreeTierData", no_init)
        .def_readwrite("SkillIndices", &FPlayerSkillTreeTierData::SkillIndices)
        .def_readwrite("BranchPointsToUnlockTier", &FPlayerSkillTreeTierData::BranchPointsToUnlockTier)
        .def_readwrite("Index", &FPlayerSkillTreeTierData::Index)
        .def_readwrite("PrevTierIndex", &FPlayerSkillTreeTierData::PrevTierIndex)
        .def_readwrite("NextTierIndex", &FPlayerSkillTreeTierData::NextTierIndex)
        .def_readwrite("ParentBranchIndex", &FPlayerSkillTreeTierData::ParentBranchIndex)
        .def_readwrite("TierNumber", &FPlayerSkillTreeTierData::TierNumber)
        .def_readwrite("Owner", &FPlayerSkillTreeTierData::Owner)
    ;

    class_< FPlayerSkillTreeSkillData >("FPlayerSkillTreeSkillData", no_init)
        .def_readwrite("Definition", &FPlayerSkillTreeSkillData::Definition)
        .def_readwrite("Index", &FPlayerSkillTreeSkillData::Index)
        .def_readwrite("PrevSkillIndex", &FPlayerSkillTreeSkillData::PrevSkillIndex)
        .def_readwrite("NextSkillIndex", &FPlayerSkillTreeSkillData::NextSkillIndex)
        .def_readwrite("ParentTierIndex", &FPlayerSkillTreeSkillData::ParentTierIndex)
        .def_readwrite("PrevSkillTypeIndex", &FPlayerSkillTreeSkillData::PrevSkillTypeIndex)
        .def_readwrite("NextSkillTypeIndex", &FPlayerSkillTreeSkillData::NextSkillTypeIndex)
        .def_readwrite("Grade", &FPlayerSkillTreeSkillData::Grade)
        .def_readwrite("Owner", &FPlayerSkillTreeSkillData::Owner)
    ;

    class_< FSkillTreeTierLayoutData >("FSkillTreeTierLayoutData", no_init)
        .def_readwrite("ParentBranchDefinition", &FSkillTreeTierLayoutData::ParentBranchDefinition)
        .def_readwrite("TierNumber", &FSkillTreeTierLayoutData::TierNumber)
        .def_readwrite("DependencyBranchDefinition", &FSkillTreeTierLayoutData::DependencyBranchDefinition)
        .def_readwrite("DependencyTierNumber", &FSkillTreeTierLayoutData::DependencyTierNumber)
        .def_readwrite("Skills", &FSkillTreeTierLayoutData::Skills)
    ;

    class_< FSkillTreeTierStateData >("FSkillTreeTierStateData", no_init)
        .def_readwrite("ParentBranchDefinition", &FSkillTreeTierStateData::ParentBranchDefinition)
        .def_readwrite("TierNumber", &FSkillTreeTierStateData::TierNumber)
        .def_readwrite("PointsSpentInTier", &FSkillTreeTierStateData::PointsSpentInTier)
    ;

    class_< FSkillTreeBranchStateData >("FSkillTreeBranchStateData", no_init)
        .def_readwrite("BranchDefinition", &FSkillTreeBranchStateData::BranchDefinition)
        .def_readwrite("PointsSpentInBranch", &FSkillTreeBranchStateData::PointsSpentInBranch)
        .def_readwrite("MaxPointsForBranch", &FSkillTreeBranchStateData::MaxPointsForBranch)
    ;

    class_< FSkillTreeSkillStateData >("FSkillTreeSkillStateData", no_init)
        .def_readwrite("SkillDefinition", &FSkillTreeSkillStateData::SkillDefinition)
        .def_readwrite("ParentBranchDefinition", &FSkillTreeSkillStateData::ParentBranchDefinition)
        .def_readwrite("TierNumber", &FSkillTreeSkillStateData::TierNumber)
        .def_readwrite("SkillGrade", &FSkillTreeSkillStateData::SkillGrade)
    ;

    class_< FShopItemData >("FShopItemData", no_init)
        .def_readwrite("Item", &FShopItemData::Item)
        .def_readwrite("Price", &FShopItemData::Price)
        .def_readwrite("ItemStatus", &FShopItemData::ItemStatus)
    ;

    class_< FPostProcessOverlayInfo >("FPostProcessOverlayInfo", no_init)
        .def_readwrite("PostProcessOverlay", &FPostProcessOverlayInfo::PostProcessOverlay)
        .def_readwrite("SceneInterpolationPhaseTime", &FPostProcessOverlayInfo::SceneInterpolationPhaseTime)
        .def_readwrite("SceneInterpolationDuration", &FPostProcessOverlayInfo::SceneInterpolationDuration)
        .def_readwrite("PostProcessOverlayPhase", &FPostProcessOverlayInfo::PostProcessOverlayPhase)
    ;

    class_< FPostProcessOverlay >("FPostProcessOverlay", no_init)
        .def_readwrite("OverlayName", &FPostProcessOverlay::OverlayName)
        .def_readwrite("DestPostProcessOverlay", &FPostProcessOverlay::DestPostProcessOverlay)
        .def_readwrite("MinTransitionInDuration", &FPostProcessOverlay::MinTransitionInDuration)
        .def_readwrite("MinTransitionHoldDuration", &FPostProcessOverlay::MinTransitionHoldDuration)
        .def_readwrite("MinTransitionOutDuration", &FPostProcessOverlay::MinTransitionOutDuration)
        .def_readwrite("MaxTransitionInDuration", &FPostProcessOverlay::MaxTransitionInDuration)
        .def_readwrite("MaxTransitionHoldDuration", &FPostProcessOverlay::MaxTransitionHoldDuration)
        .def_readwrite("MaxTransitionOutDuration", &FPostProcessOverlay::MaxTransitionOutDuration)
    ;

    class_< FPostProcessChainRecord >("FPostProcessChainRecord", no_init)
        .def_readwrite("Template", &FPostProcessChainRecord::Template)
        .def_readwrite("Instance", &FPostProcessChainRecord::Instance)
        .def_readwrite("AppliedModifiers", &FPostProcessChainRecord::AppliedModifiers)
        .def_readwrite("DOFEffectModifier", &FPostProcessChainRecord::DOFEffectModifier)
        .def_readwrite("NextDOFUpdateTime", &FPostProcessChainRecord::NextDOFUpdateTime)
    ;

    class_< FMaterialEffectModifier >("FMaterialEffectModifier", no_init)
        .def_readwrite("EffectName", &FMaterialEffectModifier::EffectName)
        .def_readwrite("ScalarParams", &FMaterialEffectModifier::ScalarParams)
        .def_readwrite("CachedValue", &FMaterialEffectModifier::CachedValue)
        .def_readwrite("MaterialInstance", &FMaterialEffectModifier::MaterialInstance)
    ;

    class_< FDOFEffectModifierData >("FDOFEffectModifierData", no_init)
        .def_readwrite("RecalculateFocusDistanceRate", &FDOFEffectModifierData::RecalculateFocusDistanceRate)
        .def_readwrite("FocusDistanceLerpRate", &FDOFEffectModifierData::FocusDistanceLerpRate)
    ;

    class_< FWillowStatProperty >("FWillowStatProperty", no_init)
        .def_readwrite("Id", &FWillowStatProperty::Id)
        .def_readwrite("Data", &FWillowStatProperty::Data)
        .def_readwrite("MaxData", &FWillowStatProperty::MaxData)
        .def_readwrite("ChallengeBaseData", &FWillowStatProperty::ChallengeBaseData)
        .def_readwrite("OnlineId", &FWillowStatProperty::OnlineId)
    ;

    class_< FSpeedKillData >("FSpeedKillData", no_init)
        .def_readwrite("VictimName", &FSpeedKillData::VictimName)
        .def_readwrite("VictimKillTime", &FSpeedKillData::VictimKillTime)
    ;

    class_< FDialogBoxLayout >("FDialogBoxLayout", no_init)
        .def_readwrite("LayoutTag", &FDialogBoxLayout::LayoutTag)
        .def_readwrite("CancelTag", &FDialogBoxLayout::CancelTag)
        .def_readwrite("Buttons", &FDialogBoxLayout::Buttons)
    ;

    class_< FDialogBoxButton >("FDialogBoxButton", no_init)
        .def_readwrite("Caption", &FDialogBoxButton::Caption)
        .def_readwrite("TipText", &FDialogBoxButton::TipText)
        .def_readwrite("Tag", &FDialogBoxButton::Tag)
        .def_readwrite("Keys", &FDialogBoxButton::Keys)
        .def_readwrite("OnButtonClicked", &FDialogBoxButton::OnButtonClicked)
    ;

    class_< FLungeData >("FLungeData", no_init)
        .def_readwrite("Target", &FLungeData::Target)
        .def_readwrite("Length", &FLungeData::Length)
        .def_readwrite("Start", &FLungeData::Start)
        .def_readwrite("SavedAccelRate", &FLungeData::SavedAccelRate)
    ;

    class_< FLurchData >("FLurchData", no_init)
        .def_readwrite("StartTime", &FLurchData::StartTime)
        .def_readwrite("LocMagnitude", &FLurchData::LocMagnitude)
        .def_readwrite("RotMagnitude", &FLurchData::RotMagnitude)
        .def_readwrite("Duration", &FLurchData::Duration)
        .def_readwrite("FalloffRate", &FLurchData::FalloffRate)
    ;

    class_< FScreenParticleRecord >("FScreenParticleRecord", no_init)
        .def_readwrite("Tag", &FScreenParticleRecord::Tag)
        .def_readwrite("Template", &FScreenParticleRecord::Template)
        .def_readwrite("MatParamName", &FScreenParticleRecord::MatParamName)
        .def_readwrite("Component", &FScreenParticleRecord::Component)
        .def_readwrite("AppliedModifiers", &FScreenParticleRecord::AppliedModifiers)
        .def_readwrite("ContentDims", &FScreenParticleRecord::ContentDims)
        .def_readwrite("ParticleDepth", &FScreenParticleRecord::ParticleDepth)
        .def_readwrite("ScalingMode", &FScreenParticleRecord::ScalingMode)
        .def_readwrite("StopParamsOT", &FScreenParticleRecord::StopParamsOT)
        .def_readwrite("StopTime", &FScreenParticleRecord::StopTime)
    ;

    class_< FMissionPlaythroughData >("FMissionPlaythroughData", no_init)
        .def_readwrite("MissionList", &FMissionPlaythroughData::MissionList)
        .def_readwrite("UnloadableDlcMissionList", &FMissionPlaythroughData::UnloadableDlcMissionList)
        .def_readwrite("UnloadableDlcPendingMissionRewards", &FMissionPlaythroughData::UnloadableDlcPendingMissionRewards)
        .def_readwrite("FilteredMissions", &FMissionPlaythroughData::FilteredMissions)
        .def_readwrite("ActiveMission", &FMissionPlaythroughData::ActiveMission)
        .def_readwrite("PlayThroughNumber", &FMissionPlaythroughData::PlayThroughNumber)
    ;

    class_< FMenuItemCallback >("FMenuItemCallback", no_init)
        .def_readwrite("Tag", &FMenuItemCallback::Tag)
        .def_readwrite("OnClicked", &FMenuItemCallback::OnClicked)
    ;

    class_< FRecentlyResistedAttackData >("FRecentlyResistedAttackData", no_init)
        .def_readwrite("DamagedActor", &FRecentlyResistedAttackData::DamagedActor)
        .def_readwrite("DamageType", &FRecentlyResistedAttackData::DamageType)
        .def_readwrite("LastResistTime", &FRecentlyResistedAttackData::LastResistTime)
    ;

    class_< FTaggedGFxMovie >("FTaggedGFxMovie", no_init)
        .def_readwrite("Movie", &FTaggedGFxMovie::Movie)
        .def_readwrite("Tag", &FTaggedGFxMovie::Tag)
    ;

    class_< FChallengeData >("FChallengeData", no_init)
        .def_readwrite("PCOwner", &FChallengeData::PCOwner)
        .def_readwrite("ChallengeDefinition", &FChallengeData::ChallengeDefinition)
    ;

    class_< FCustomizationUnlockData >("FCustomizationUnlockData", no_init)
        .def_readwrite("ProductID", &FCustomizationUnlockData::ProductID)
        .def_readwrite("NumUnlockedCustomizations", &FCustomizationUnlockData::NumUnlockedCustomizations)
        .def_readwrite("UnlockedMask", &FCustomizationUnlockData::UnlockedMask)
    ;

    class_< FPauseTimerData >("FPauseTimerData", no_init)
        .def_readwrite("FuncName", &FPauseTimerData::FuncName)
        .def_readwrite("Rate", &FPauseTimerData::Rate)
        .def_readwrite("Count", &FPauseTimerData::Count)
        .def_readwrite("TimerObj", &FPauseTimerData::TimerObj)
    ;

    class_< FPendingClientTrainingMessage >("FPendingClientTrainingMessage", no_init)
        .def_readwrite("Message", &FPendingClientTrainingMessage::Message)
        .def_readwrite("TrainingDefinition", &FPendingClientTrainingMessage::TrainingDefinition)
        .def_readwrite("Duration", &FPendingClientTrainingMessage::Duration)
    ;

    class_< FPendingMissionRewardsData >("FPendingMissionRewardsData", no_init)
        .def_readwrite("PendingMissionRewards", &FPendingMissionRewardsData::PendingMissionRewards)
        .def_readwrite("PlaythroughIndex", &FPendingMissionRewardsData::PlaythroughIndex)
    ;

    class_< FGoldenKeySource >("FGoldenKeySource", no_init)
        .def_readwrite("SourceId", &FGoldenKeySource::SourceId)
        .def_readwrite("NumKeys", &FGoldenKeySource::NumKeys)
        .def_readwrite("NumKeysSpent", &FGoldenKeySource::NumKeysSpent)
        .def_readwrite("Empty", &FGoldenKeySource::Empty)
    ;

    class_< FLoadCharacterData >("FLoadCharacterData", no_init)
        .def_readwrite("SaveDataId", &FLoadCharacterData::SaveDataId)
        .def_readwrite("CharLevel", &FLoadCharacterData::CharLevel)
        .def_readwrite("CharName", &FLoadCharacterData::CharName)
        .def_readwrite("CharClass", &FLoadCharacterData::CharClass)
        .def_readwrite("PlayThrough", &FLoadCharacterData::PlayThrough)
        .def_readwrite("ActiveMission", &FLoadCharacterData::ActiveMission)
        .def_readwrite("PlotMission", &FLoadCharacterData::PlotMission)
        .def_readwrite("CharSaveDate", &FLoadCharacterData::CharSaveDate)
        .def_readwrite("CharPlayedTime", &FLoadCharacterData::CharPlayedTime)
        .def_readwrite("CharPlayedTimeInt", &FLoadCharacterData::CharPlayedTimeInt)
        .def_readwrite("SaveGuid", &FLoadCharacterData::SaveGuid)
        .def_readwrite("DlcCharDef", &FLoadCharacterData::DlcCharDef)
    ;

    class_< FTestMapsListDatum >("FTestMapsListDatum", no_init)
        .def_readwrite("MapDisplayName", &FTestMapsListDatum::MapDisplayName)
        .def_readwrite("MapName", &FTestMapsListDatum::MapName)
    ;

    class_< FDataProviderInfo >("FDataProviderInfo", no_init)
        .def_readwrite("DataProvider", &FDataProviderInfo::DataProvider)
        .def_readonly("UnknownData00", &FDataProviderInfo::UnknownData00)
        .def_readwrite("SelectedIndex", &FDataProviderInfo::SelectedIndex)
    ;

    class_< FSystemOption >("FSystemOption", no_init)
        .def_readwrite("Name", &FSystemOption::Name)
        .def_readwrite("ValueCount", &FSystemOption::ValueCount)
        .def_readwrite("CurrValue", &FSystemOption::CurrValue)
        .def_readwrite("ValueStrings", &FSystemOption::ValueStrings)
    ;

    class_< FResolution >("FResolution", no_init)
        .def_readwrite("Width", &FResolution::Width)
        .def_readwrite("Height", &FResolution::Height)
    ;

    class_< FDescriptionEntry >("FDescriptionEntry", no_init)
        .def_readwrite("EventID", &FDescriptionEntry::EventID)
        .def_readwrite("Description", &FDescriptionEntry::Description)
    ;

    class_< FMatchmakingResultEntry >("FMatchmakingResultEntry", no_init)
        .def_readwrite("MatchTypeIconFrameName", &FMatchmakingResultEntry::MatchTypeIconFrameName)
        .def_readwrite("StatusIconFrameName", &FMatchmakingResultEntry::StatusIconFrameName)
        .def_readwrite("Message", &FMatchmakingResultEntry::Message)
    ;

    class_< FResultEntry >("FResultEntry", no_init)
        .def_readwrite("Game", &FResultEntry::Game)
        .def_readwrite("Name", &FResultEntry::Name)
        .def_readwrite("ExpLevel", &FResultEntry::ExpLevel)
        .def_readwrite("Mission", &FResultEntry::Mission)
        .def_readwrite("PlayThrough", &FResultEntry::PlayThrough)
        .def_readwrite("NumPlayers", &FResultEntry::NumPlayers)
        .def_readwrite("MaxPlayers", &FResultEntry::MaxPlayers)
        .def_readwrite("Ping", &FResultEntry::Ping)
    ;

    class_< FMarketPlaceFilter >("FMarketPlaceFilter", no_init)
        .def_readwrite("Tag", &FMarketPlaceFilter::Tag)
        .def_readwrite("Caption", &FMarketPlaceFilter::Caption)
        .def_readwrite("Filter", &FMarketPlaceFilter::Filter)
    ;

    class_< FMessageOfTheDay >("FMessageOfTheDay", no_init)
        .def_readwrite("Header", &FMessageOfTheDay::Header)
        .def_readwrite("Body", &FMessageOfTheDay::Body)
        .def_readwrite("DisplayTime", &FMessageOfTheDay::DisplayTime)
    ;

    class_< FTrainingData >("FTrainingData", no_init)
        .def_readwrite("PCOwner", &FTrainingData::PCOwner)
        .def_readwrite("TrainingDefinition", &FTrainingData::TrainingDefinition)
    ;

    class_< FPostProcessChainOptions >("FPostProcessChainOptions", no_init)
        .def_readwrite("MaterialEffectModifiers", &FPostProcessChainOptions::MaterialEffectModifiers)
        .def_readwrite("DOFEffectModifier", &FPostProcessChainOptions::DOFEffectModifier)
    ;

    class_< FSubtitleProfile >("FSubtitleProfile", no_init)
        .def_readwrite("MinX", &FSubtitleProfile::MinX)
        .def_readwrite("MaxX", &FSubtitleProfile::MaxX)
        .def_readwrite("MinY", &FSubtitleProfile::MinY)
        .def_readwrite("MaxY", &FSubtitleProfile::MaxY)
    ;

    class_< FLoginState >("FLoginState", no_init)
        .def_readwrite("LoginName", &FLoginState::LoginName)
    ;

    class_< FGamepadState >("FGamepadState", no_init)
    ;

    class_< FAppliedSkillEffect >("FAppliedSkillEffect", no_init)
        .def_readwrite("EffectData", &FAppliedSkillEffect::EffectData)
        .def_readwrite("Contexts", &FAppliedSkillEffect::Contexts)
        .def_readwrite("Modifier", &FAppliedSkillEffect::Modifier)
    ;

    class_< FSkillActionData >("FSkillActionData", no_init)
        .def_readwrite("ClientConsoleCommand", &FSkillActionData::ClientConsoleCommand)
        .def_readwrite("GradeType", &FSkillActionData::GradeType)
        .def_readwrite("HardcodedGrade", &FSkillActionData::HardcodedGrade)
        .def_readwrite("SkillToActivate", &FSkillActionData::SkillToActivate)
        .def_readwrite("SkillToDeactivate", &FSkillActionData::SkillToDeactivate)
        .def_readwrite("AkEvent", &FSkillActionData::AkEvent)
    ;

    class_< FDeferredSkillActivationData >("FDeferredSkillActivationData", no_init)
        .def_readwrite("SkillInstigator", &FDeferredSkillActivationData::SkillInstigator)
        .def_readwrite("Definition", &FDeferredSkillActivationData::Definition)
        .def_readwrite("AdditionalSkillTarget", &FDeferredSkillActivationData::AdditionalSkillTarget)
        .def_readwrite("SkillGrade", &FDeferredSkillActivationData::SkillGrade)
        .def_readwrite("StateChangeDelegate", &FDeferredSkillActivationData::StateChangeDelegate)
    ;

    class_< FItemCustomPartTypeData >("FItemCustomPartTypeData", no_init)
        .def_readwrite("WeightedParts", &FItemCustomPartTypeData::WeightedParts)
    ;

    class_< FUIStatModifierData >("FUIStatModifierData", no_init)
        .def_readwrite("AttributePresentation", &FUIStatModifierData::AttributePresentation)
        .def_readwrite("ConstraintAttributePresentation", &FUIStatModifierData::ConstraintAttributePresentation)
        .def_readwrite("AttributeStyle", &FUIStatModifierData::AttributeStyle)
        .def_readwrite("ModifierTotal", &FUIStatModifierData::ModifierTotal)
        .def_readwrite("CompareModifierTotal", &FUIStatModifierData::CompareModifierTotal)
        .def_readwrite("DefinitionIndex", &FUIStatModifierData::DefinitionIndex)
        .def_readwrite("SupplementalAttributePresentation", &FUIStatModifierData::SupplementalAttributePresentation)
        .def_readwrite("SupplementalAttributeStyle", &FUIStatModifierData::SupplementalAttributeStyle)
        .def_readwrite("SupplementalModifierTotal", &FUIStatModifierData::SupplementalModifierTotal)
        .def_readwrite("StatCombinationMethod", &FUIStatModifierData::StatCombinationMethod)
    ;

    class_< FItemMemento >("FItemMemento", no_init)
        .def_readwrite("SerialNumber", &FItemMemento::SerialNumber)
    ;

    class_< FHolsteredGearDisplaySlot >("FHolsteredGearDisplaySlot", no_init)
        .def_readwrite("State", &FHolsteredGearDisplaySlot::State)
        .def_readwrite("Item", &FHolsteredGearDisplaySlot::Item)
    ;

    class_< FBloodSplatterTrace >("FBloodSplatterTrace", no_init)
        .def_readwrite("HitRegion", &FBloodSplatterTrace::HitRegion)
        .def_readwrite("HitLocation", &FBloodSplatterTrace::HitLocation)
        .def_readwrite("Momentum", &FBloodSplatterTrace::Momentum)
        .def_readwrite("DamageSeverityPercent", &FBloodSplatterTrace::DamageSeverityPercent)
    ;

    class_< FMeleeOverTimeState >("FMeleeOverTimeState", no_init)
        .def_readwrite("MeleeDefinition", &FMeleeOverTimeState::MeleeDefinition)
        .def_readwrite("MeleeStartTime", &FMeleeOverTimeState::MeleeStartTime)
        .def_readwrite("TimeElapsedSinceLastMelee", &FMeleeOverTimeState::TimeElapsedSinceLastMelee)
        .def_readwrite("HitActors", &FMeleeOverTimeState::HitActors)
        .def_readwrite("MeleeStartLocation", &FMeleeOverTimeState::MeleeStartLocation)
        .def_readwrite("MeleeStartRotation", &FMeleeOverTimeState::MeleeStartRotation)
    ;

    class_< FGoreEffect >("FGoreEffect", no_init)
        .def_readwrite("HitRegion", &FGoreEffect::HitRegion)
        .def_readwrite("GoreDataIndex", &FGoreEffect::GoreDataIndex)
        .def_readwrite("InstigatedBy", &FGoreEffect::InstigatedBy)
        .def_readwrite("HitLocation", &FGoreEffect::HitLocation)
        .def_readwrite("Momentum", &FGoreEffect::Momentum)
    ;

    class_< FMaterialScalarFadeReplication >("FMaterialScalarFadeReplication", no_init)
        .def_readwrite("Name", &FMaterialScalarFadeReplication::Name)
        .def_readwrite("StartValue", &FMaterialScalarFadeReplication::StartValue)
        .def_readwrite("EndValue", &FMaterialScalarFadeReplication::EndValue)
        .def_readwrite("FadeTime", &FMaterialScalarFadeReplication::FadeTime)
    ;

    class_< FActionSkillCustomEventReplicationData >("FActionSkillCustomEventReplicationData", no_init)
        .def_readwrite("EventCountForReplication", &FActionSkillCustomEventReplicationData::EventCountForReplication)
        .def_readwrite("EventName", &FActionSkillCustomEventReplicationData::EventName)
    ;

    class_< FSkillEventResponseData >("FSkillEventResponseData", no_init)
        .def_readwrite("EventType", &FSkillEventResponseData::EventType)
        .def_readwrite("Action", &FSkillEventResponseData::Action)
    ;

    class_< FNamedSkillEvent >("FNamedSkillEvent", no_init)
        .def_readwrite("EventName", &FNamedSkillEvent::EventName)
        .def_readwrite("RequiredSkills", &FNamedSkillEvent::RequiredSkills)
        .def_readwrite("EventResponses", &FNamedSkillEvent::EventResponses)
        .def_readwrite("RequiredActionSkillState", &FNamedSkillEvent::RequiredActionSkillState)
    ;

    class_< FSkillDamageEventData, bases< FSpecializedBehaviorEvent >  >("FSkillDamageEventData", no_init)
        .def_readwrite("EventType", &FSkillDamageEventData::EventType)
        .def_readwrite("EventConstraints", &FSkillDamageEventData::EventConstraints)
    ;

    class_< FSkillDamagedEventConstraintData >("FSkillDamagedEventConstraintData", no_init)
        .def_readwrite("DamageTypeConstraint", &FSkillDamagedEventConstraintData::DamageTypeConstraint)
        .def_readwrite("DamageSourceConstraint", &FSkillDamagedEventConstraintData::DamageSourceConstraint)
    ;

    class_< FSkillKillEventData, bases< FSpecializedBehaviorEvent >  >("FSkillKillEventData", no_init)
        .def_readwrite("EventType", &FSkillKillEventData::EventType)
        .def_readwrite("EventConstraints", &FSkillKillEventData::EventConstraints)
    ;

    class_< FDOFEffectData >("FDOFEffectData", no_init)
        .def_readwrite("FalloffExponent", &FDOFEffectData::FalloffExponent)
        .def_readwrite("BlurKernelSize", &FDOFEffectData::BlurKernelSize)
        .def_readwrite("MaxNearBlurAmount", &FDOFEffectData::MaxNearBlurAmount)
        .def_readwrite("MaxFarBlurAmount", &FDOFEffectData::MaxFarBlurAmount)
        .def_readwrite("ModulateBlurColor", &FDOFEffectData::ModulateBlurColor)
        .def_readwrite("FocusType", &FDOFEffectData::FocusType)
        .def_readwrite("FocusInnerRadius", &FDOFEffectData::FocusInnerRadius)
        .def_readwrite("FocusDistance", &FDOFEffectData::FocusDistance)
        .def_readwrite("FocusPosition", &FDOFEffectData::FocusPosition)
    ;

    class_< FFlashTextEntry >("FFlashTextEntry", no_init)
        .def_readwrite("TextEntry", &FFlashTextEntry::TextEntry)
        .def_readwrite("IconFrameLabel", &FFlashTextEntry::IconFrameLabel)
        .def_readwrite("ArrayType", &FFlashTextEntry::ArrayType)
        .def_readwrite("Obj", &FFlashTextEntry::Obj)
    ;

    class_< FCreditsTextureInfo >("FCreditsTextureInfo", no_init)
        .def_readwrite("TexturePath", &FCreditsTextureInfo::TexturePath)
    ;

    class_< FEmitterTemplateOptions >("FEmitterTemplateOptions", no_init)
        .def_readwrite("DefaultTemplate", &FEmitterTemplateOptions::DefaultTemplate)
        .def_readwrite("CensoredTemplateAlternative", &FEmitterTemplateOptions::CensoredTemplateAlternative)
    ;

    class_< FFloatParameter >("FFloatParameter", no_init)
        .def_readwrite("Name", &FFloatParameter::Name)
        .def_readwrite("Value", &FFloatParameter::Value)
    ;

    class_< FVectorParameter >("FVectorParameter", no_init)
        .def_readwrite("Name", &FVectorParameter::Name)
        .def_readwrite("Value", &FVectorParameter::Value)
    ;

    class_< FColorParameter >("FColorParameter", no_init)
        .def_readwrite("Name", &FColorParameter::Name)
        .def_readwrite("Value", &FColorParameter::Value)
    ;

    class_< FAttributePresentationDamageTypeMapping >("FAttributePresentationDamageTypeMapping", no_init)
        .def_readwrite("Presentation", &FAttributePresentationDamageTypeMapping::Presentation)
        .def_readwrite("DamageType", &FAttributePresentationDamageTypeMapping::DamageType)
    ;

    class_< FRemoveObject >("FRemoveObject", no_init)
        .def_readwrite("Name", &FRemoveObject::Name)
    ;

    class_< FBehaviorsSelectionData >("FBehaviorsSelectionData", no_init)
        .def_readwrite("Weight", &FBehaviorsSelectionData::Weight)
        .def_readwrite("Behaviors", &FBehaviorsSelectionData::Behaviors)
    ;

    class_< FKeyBindInfo >("FKeyBindInfo", no_init)
        .def_readwrite("Tag", &FKeyBindInfo::Tag)
        .def_readwrite("ActionName", &FKeyBindInfo::ActionName)
        .def_readwrite("Caption", &FKeyBindInfo::Caption)
        .def_readwrite("CurrentKey", &FKeyBindInfo::CurrentKey)
        .def_readwrite("Object", &FKeyBindInfo::Object)
    ;

    class_< FMissionRewardData >("FMissionRewardData", no_init)
        .def_readwrite("MissionDef", &FMissionRewardData::MissionDef)
    ;

    class_< FCombatPointSearchData >("FCombatPointSearchData", no_init)
        .def_readwrite("PointRadius", &FCombatPointSearchData::PointRadius)
        .def_readwrite("ZoneMoveDist", &FCombatZoneSearchData::ZoneMoveDist)
        .def_readwrite("ZoneTimeLimit", &FCombatZoneSearchData::ZoneTimeLimit)
        .def_readwrite("TargetRange", &FCombatZoneSearchData::TargetRange)
        .def_readwrite("MinHeight", &FCombatZoneSearchData::MinHeight)
        .def_readwrite("LineOfSight", &FCombatZoneSearchData::LineOfSight)
        .def_readwrite("LineOfSightTimeLimit", &FCombatZoneSearchData::LineOfSightTimeLimit)
    ;

    class_< FCombatZoneSearchData >("FCombatZoneSearchData", no_init)
        .def_readwrite("ZoneMoveDist", &FCombatZoneSearchData::ZoneMoveDist)
        .def_readwrite("ZoneTimeLimit", &FCombatZoneSearchData::ZoneTimeLimit)
        .def_readwrite("TargetRange", &FCombatZoneSearchData::TargetRange)
        .def_readwrite("MinHeight", &FCombatZoneSearchData::MinHeight)
        .def_readwrite("LineOfSight", &FCombatZoneSearchData::LineOfSight)
        .def_readwrite("LineOfSightTimeLimit", &FCombatZoneSearchData::LineOfSightTimeLimit)
    ;

    class_< FSeasonPassPackageCount >("FSeasonPassPackageCount", no_init)
        .def_readwrite("SeasonPassId", &FSeasonPassPackageCount::SeasonPassId)
        .def_readwrite("PackageCount", &FSeasonPassPackageCount::PackageCount)
    ;

    class_< FSeasonPassOfferUnion >("FSeasonPassOfferUnion", no_init)
        .def_readwrite("AssociatedSeasonPassOfferId", &FSeasonPassOfferUnion::AssociatedSeasonPassOfferId)
        .def_readwrite("PaidOfferId", &FSeasonPassOfferUnion::PaidOfferId)
        .def_readwrite("FreeOfferId", &FSeasonPassOfferUnion::FreeOfferId)
        .def_readwrite("SeasonPassId", &FSeasonPassOfferUnion::SeasonPassId)
    ;

    class_< FSaveResult >("FSaveResult", no_init)
        .def_readwrite("charID", &FSaveResult::charID)
        .def_readwrite("Data", &FSaveResult::Data)
    ;

    class_< FSwoopAttackData >("FSwoopAttackData", no_init)
        .def_readwrite("Distance", &FSwoopAttackData::Distance)
    ;

    class_< FInteractiveObjectGameStageGradeWeightData, bases< FGameStageGradeWeightData >  >("FInteractiveObjectGameStageGradeWeightData", no_init)
        .def_readwrite("GradeModifiers", &FInteractiveObjectGameStageGradeWeightData::GradeModifiers)
    ;

    class_< FInteractiveObjectGradeModifierData >("FInteractiveObjectGradeModifierData", no_init)
        .def_readwrite("CustomInteractiveObject", &FInteractiveObjectGradeModifierData::CustomInteractiveObject)
        .def_readwrite("DisplayName", &FInteractiveObjectGradeModifierData::DisplayName)
        .def_readwrite("ExpLevel", &FInteractiveObjectGradeModifierData::ExpLevel)
        .def_readwrite("IncludedCustomLootLists", &FInteractiveObjectGradeModifierData::IncludedCustomLootLists)
        .def_readwrite("CustomLoot", &FInteractiveObjectGradeModifierData::CustomLoot)
    ;

    class_< FMissionStateSelectionData >("FMissionStateSelectionData", no_init)
    ;

    class_< FMissionObjectiveStateSelectionData >("FMissionObjectiveStateSelectionData", no_init)
    ;

    class_< FImpactResponseData >("FImpactResponseData", no_init)
        .def_readwrite("ImpactType", &FImpactResponseData::ImpactType)
        .def_readwrite("ResponseEffect", &FImpactResponseData::ResponseEffect)
    ;

    class_< FLiftBodyPair >("FLiftBodyPair", no_init)
        .def_readwrite("BodyTag", &FLiftBodyPair::BodyTag)
        .def_readwrite("PhaseLockDef", &FLiftBodyPair::PhaseLockDef)
    ;

    class_< FActiveInteraction >("FActiveInteraction", no_init)
        .def_readwrite("TimeLength", &FActiveInteraction::TimeLength)
        .def_readwrite("TimeRemaining", &FActiveInteraction::TimeRemaining)
        .def_readwrite("InteractionServer", &FActiveInteraction::InteractionServer)
        .def_readwrite("Players", &FActiveInteraction::Players)
        .def_readwrite("Instigator", &FActiveInteraction::Instigator)
    ;

    class_< FTargetedPlayerState >("FTargetedPlayerState", no_init)
        .def_readwrite("Enemy", &FTargetedPlayerState::Enemy)
        .def_readwrite("Player", &FTargetedPlayerState::Player)
        .def_readwrite("InitialThreat", &FTargetedPlayerState::InitialThreat)
        .def_readwrite("StoppedTargetingPlayerTime", &FTargetedPlayerState::StoppedTargetingPlayerTime)
    ;

    class_< FWaypointActorData >("FWaypointActorData", no_init)
        .def_readwrite("WaypointActor", &FWaypointActorData::WaypointActor)
        .def_readwrite("WaypointObjective", &FWaypointActorData::WaypointObjective)
        .def_readwrite("Waypoints", &FWaypointActorData::Waypoints)
    ;

    class_< FAreaWaypointData >("FAreaWaypointData", no_init)
        .def_readwrite("WaypointActor", &FAreaWaypointData::WaypointActor)
        .def_readwrite("WaypointRadius", &FAreaWaypointData::WaypointRadius)
        .def_readwrite("WaypointObjective", &FAreaWaypointData::WaypointObjective)
    ;

    class_< FColiseumPlayerInfo >("FColiseumPlayerInfo", no_init)
        .def_readwrite("WPC", &FColiseumPlayerInfo::WPC)
        .def_readwrite("Stats", &FColiseumPlayerInfo::Stats)
    ;

    class_< FColiseumStat >("FColiseumStat", no_init)
        .def_readwrite("StatType", &FColiseumStat::StatType)
        .def_readwrite("StatValue", &FColiseumStat::StatValue)
    ;

    class_< FDLCMissionData >("FDLCMissionData", no_init)
        .def_readwrite("MinMissionNumber", &FDLCMissionData::MinMissionNumber)
        .def_readwrite("MaxMissionNumber", &FDLCMissionData::MaxMissionNumber)
        .def_readwrite("MissionNameLocKey", &FDLCMissionData::MissionNameLocKey)
    ;

    class_< FCompatibilityVersionInfo >("FCompatibilityVersionInfo", no_init)
        .def_readwrite("CurrentCompatPackVersion", &FCompatibilityVersionInfo::CurrentCompatPackVersion)
        .def_readwrite("CurrentCompatibilityMask", &FCompatibilityVersionInfo::CurrentCompatibilityMask)
    ;

    class_< FTaggedMarketplaceContent >("FTaggedMarketplaceContent", no_init)
        .def_readwrite("Tag", &FTaggedMarketplaceContent::Tag)
        .def_readwrite("OfferId", &FTaggedMarketplaceContent::OfferId)
        .def_readwrite("OfferIdText", &FTaggedMarketplaceContent::OfferIdText)
        .def_readwrite("OfferName", &FTaggedMarketplaceContent::OfferName)
        .def_readwrite("SellText", &FTaggedMarketplaceContent::SellText)
        .def_readwrite("ContentCategory", &FTaggedMarketplaceContent::ContentCategory)
        .def_readwrite("PackageId", &FTaggedMarketplaceContent::PackageId)
        .def_readwrite("ContentId", &FTaggedMarketplaceContent::ContentId)
    ;

    class_< FPremiumCustomizationInfo >("FPremiumCustomizationInfo", no_init)
        .def_readwrite("OfferId", &FPremiumCustomizationInfo::OfferId)
        .def_readwrite("PackageId", &FPremiumCustomizationInfo::PackageId)
        .def_readwrite("ContentId", &FPremiumCustomizationInfo::ContentId)
        .def_readwrite("PS3TitleId", &FPremiumCustomizationInfo::PS3TitleId)
    ;

    class_< FVehicleSpawnStationSlot >("FVehicleSpawnStationSlot", no_init)
        .def_readwrite("PooledVehicles", &FVehicleSpawnStationSlot::PooledVehicles)
        .def_readwrite("PooledVehicleIndex", &FVehicleSpawnStationSlot::PooledVehicleIndex)
    ;

    class_< FVehicleSpawnStationPooledVehicle >("FVehicleSpawnStationPooledVehicle", no_init)
        .def_readwrite("SpawnedVehicle", &FVehicleSpawnStationPooledVehicle::SpawnedVehicle)
        .def_readwrite("SpawnVehicleDef", &FVehicleSpawnStationPooledVehicle::SpawnVehicleDef)
    ;

    class_< FPopOppSummary >("FPopOppSummary", no_init)
        .def_readwrite("Summary", &FPopOppSummary::Summary)
        .def_readwrite("Count", &FPopOppSummary::Count)
    ;

    class_< FSpawnAnimPair >("FSpawnAnimPair", no_init)
        .def_readwrite("SpawnedAnim", &FSpawnAnimPair::SpawnedAnim)
        .def_readwrite("PointAnim", &FSpawnAnimPair::PointAnim)
    ;

    class_< FSpawnAnimData >("FSpawnAnimData", no_init)
        .def_readwrite("Key", &FSpawnAnimData::Key)
        .def_readwrite("AnimPairs", &FSpawnAnimData::AnimPairs)
        .def_readwrite("PreviewMeshOffset", &FSpawnAnimData::PreviewMeshOffset)
        .def_readwrite("PreviewMeshScale", &FSpawnAnimData::PreviewMeshScale)
    ;

    class_< FBalancedInventoryDataMirror >("FBalancedInventoryDataMirror", no_init)
        .def_readwrite("ObjectName", &FBalancedInventoryDataMirror::ObjectName)
        .def_readwrite("ObjectPath", &FBalancedInventoryDataMirror::ObjectPath)
    ;

    class_< FPopulatedAIPawnMemento >("FPopulatedAIPawnMemento", no_init)
        .def_readwrite("PawnWeapons", &FPopulatedAIPawnMemento::PawnWeapons)
        .def_readwrite("PawnItems", &FPopulatedAIPawnMemento::PawnItems)
    ;

    class_< FAIPawnPlaythroughData >("FAIPawnPlaythroughData", no_init)
        .def_readwrite("PlayThrough", &FAIPawnPlaythroughData::PlayThrough)
        .def_readwrite("DisplayName", &FAIPawnPlaythroughData::DisplayName)
        .def_readwrite("TransformedNames", &FAIPawnPlaythroughData::TransformedNames)
        .def_readwrite("OnSpawnCustomizations", &FAIPawnPlaythroughData::OnSpawnCustomizations)
        .def_readwrite("AttributeStartingValues", &FAIPawnPlaythroughData::AttributeStartingValues)
        .def_readwrite("CustomItemPoolIncludedLists", &FAIPawnPlaythroughData::CustomItemPoolIncludedLists)
        .def_readwrite("CustomItemPoolList", &FAIPawnPlaythroughData::CustomItemPoolList)
        .def_readwrite("MeshMaterial", &FAIPawnPlaythroughData::MeshMaterial)
    ;

    class_< FAIPawnGameStageGradeWeightData, bases< FGameStageGradeWeightData >  >("FAIPawnGameStageGradeWeightData", no_init)
        .def_readwrite("GradeModifiers", &FAIPawnGameStageGradeWeightData::GradeModifiers)
    ;

    class_< FAIPawnGradeModifierData >("FAIPawnGradeModifierData", no_init)
        .def_readwrite("CustomAIPawnArchetype", &FAIPawnGradeModifierData::CustomAIPawnArchetype)
        .def_readwrite("DisplayName", &FAIPawnGradeModifierData::DisplayName)
        .def_readwrite("ExpLevel", &FAIPawnGradeModifierData::ExpLevel)
        .def_readwrite("OnSpawnCustomizations", &FAIPawnGradeModifierData::OnSpawnCustomizations)
        .def_readwrite("AttributeStartingValues", &FAIPawnGradeModifierData::AttributeStartingValues)
        .def_readwrite("CustomItemPoolIncludedLists", &FAIPawnGradeModifierData::CustomItemPoolIncludedLists)
        .def_readwrite("CustomItemPoolList", &FAIPawnGradeModifierData::CustomItemPoolList)
        .def_readwrite("TransformedNames", &FAIPawnGradeModifierData::TransformedNames)
    ;

    class_< FObjectiveStatusData >("FObjectiveStatusData", no_init)
        .def_readwrite("Objectives", &FObjectiveStatusData::Objectives)
    ;

    class_< FMissionObjectiveWaypointData >("FMissionObjectiveWaypointData", no_init)
        .def_readwrite("LinkedObjective", &FMissionObjectiveWaypointData::LinkedObjective)
        .def_readwrite("ObjectiveSetRestrictions", &FMissionObjectiveWaypointData::ObjectiveSetRestrictions)
    ;

    class_< UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData >("UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData", no_init)
        .def_readwrite("Action", &UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData::SequenceName)
    ;

    class_< FAIThrowProjectileBehaviorSequenceStateData >("FAIThrowProjectileBehaviorSequenceStateData", no_init)
        .def_readwrite("Action", &FAIThrowProjectileBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &FAIThrowProjectileBehaviorSequenceStateData::SequenceName)
    ;

    class_< FPhysicalMaterialTireModel >("FPhysicalMaterialTireModel", no_init)
        .def_readwrite("PhysMaterial", &FPhysicalMaterialTireModel::PhysMaterial)
        .def_readwrite("LongGripScaler", &FPhysicalMaterialTireModel::LongGripScaler)
        .def_readwrite("LatGripScaler", &FPhysicalMaterialTireModel::LatGripScaler)
    ;

    class_< FMissionItemPoolData >("FMissionItemPoolData", no_init)
        .def_readwrite("ItemObjective", &FMissionItemPoolData::ItemObjective)
        .def_readwrite("DirectiveDefinition", &FMissionItemPoolData::DirectiveDefinition)
        .def_readwrite("ItemPool", &FMissionItemPoolData::ItemPool)
    ;

    class_< FRelevanceBucketStruct >("FRelevanceBucketStruct", no_init)
        .def_readwrite("NdxToStartCheckFrom", &FRelevanceBucketStruct::NdxToStartCheckFrom)
        .def_readwrite("DistanceSquared", &FRelevanceBucketStruct::DistanceSquared)
        .def_readwrite("MinLineChecksPerFrame", &FRelevanceBucketStruct::MinLineChecksPerFrame)
        .def_readwrite("MaxLineChecksPerFrame", &FRelevanceBucketStruct::MaxLineChecksPerFrame)
        .def_readwrite("MaxIterationsPerFrame", &FRelevanceBucketStruct::MaxIterationsPerFrame)
        .def_readwrite("Relevance", &FRelevanceBucketStruct::Relevance)
    ;

    class_< FRelevanceUpdateStruct >("FRelevanceUpdateStruct", no_init)
        .def_readwrite("FromRealViewer", &FRelevanceUpdateStruct::FromRealViewer)
        .def_readwrite("SrcLocation", &FRelevanceUpdateStruct::SrcLocation)
        .def_readwrite("ToPawn", &FRelevanceUpdateStruct::ToPawn)
        .def_readwrite("TimeRequested", &FRelevanceUpdateStruct::TimeRequested)
        .def_readwrite("ShouldRemove", &FRelevanceUpdateStruct::ShouldRemove)
        .def_readwrite("NextUpdateTime", &FRelevanceUpdateStruct::NextUpdateTime)
    ;

    class_< FRelevanceCacheStruct >("FRelevanceCacheStruct", no_init)
        .def_readwrite("RealViewerName", &FRelevanceCacheStruct::RealViewerName)
        .def_readwrite("ToPawnName", &FRelevanceCacheStruct::ToPawnName)
        .def_readwrite("TimeCached", &FRelevanceCacheStruct::TimeCached)
        .def_readwrite("NextUpdateTime", &FRelevanceCacheStruct::NextUpdateTime)
        .def_readwrite("FromLoc", &FRelevanceCacheStruct::FromLoc)
        .def_readwrite("ToLoc", &FRelevanceCacheStruct::ToLoc)
        .def_readwrite("RotatingIndex", &FRelevanceCacheStruct::RotatingIndex)
    ;

    class_< FContentState >("FContentState", no_init)
        .def_readwrite("LicensedMask", &FContentState::LicensedMask)
        .def_readwrite("InstalledMask", &FContentState::InstalledMask)
    ;

    class_< FPopulatedPickupMemento >("FPopulatedPickupMemento", no_init)
        .def_readwrite("SavedInventoryClass", &FPopulatedPickupMemento::SavedInventoryClass)
        .def_readwrite("PickupMemento", &FPopulatedPickupMemento::PickupMemento)
        .def_readwrite("WeaponMemento", &FPopulatedPickupMemento::WeaponMemento)
        .def_readwrite("ItemMemento", &FPopulatedPickupMemento::ItemMemento)
    ;

    class_< FDynamicNavMeshConnection >("FDynamicNavMeshConnection", no_init)
        .def_readwrite("MaxConnectionDistance", &FDynamicNavMeshConnection::MaxConnectionDistance)
        .def_readwrite("ConnectedPoint", &FDynamicNavMeshConnection::ConnectedPoint)
    ;

    class_< FObjectReference >("FObjectReference", no_init)
        .def_readwrite("Obj", &FObjectReference::Obj)
    ;

    class_< FBoneRotateData >("FBoneRotateData", no_init)
        .def_readwrite("Index", &FBoneRotateData::Index)
        .def_readwrite("Rotation", &FBoneRotateData::Rotation)
    ;

    class_< FMoveToCellData >("FMoveToCellData", no_init)
        .def_readwrite("IndexInCellsList", &FMoveToCellData::IndexInCellsList)
        .def_readwrite("DistanceFromCurrentCell", &FMoveToCellData::DistanceFromCurrentCell)
        .def_readwrite("CosAngle", &FMoveToCellData::CosAngle)
    ;

    class_< FCellInfo >("FCellInfo", no_init)
        .def_readwrite("AbsolutePosition", &FCellInfo::AbsolutePosition)
        .def_readwrite("Width", &FCellInfo::Width)
        .def_readwrite("Height", &FCellInfo::Height)
        .def_readwrite("CellName", &FCellInfo::CellName)
    ;

    class_< FTurretDamageEffectData >("FTurretDamageEffectData", no_init)
        .def_readwrite("DamageThreshold", &FTurretDamageEffectData::DamageThreshold)
        .def_readwrite("DamageStartTagName", &FTurretDamageEffectData::DamageStartTagName)
        .def_readwrite("DamageEndTagName", &FTurretDamageEffectData::DamageEndTagName)
    ;

    class_< FTurretEffect >("FTurretEffect", no_init)
        .def_readwrite("EffectStartTag", &FTurretEffect::EffectStartTag)
        .def_readwrite("EffectEndTag", &FTurretEffect::EffectEndTag)
        .def_readwrite("EffectTemplate", &FTurretEffect::EffectTemplate)
        .def_readwrite("EffectSocket", &FTurretEffect::EffectSocket)
        .def_readwrite("EffectRef", &FTurretEffect::EffectRef)
        .def_readwrite("EffectAudioStartAkEvent", &FTurretEffect::EffectAudioStartAkEvent)
        .def_readwrite("EffectAudioStopAkEvent", &FTurretEffect::EffectAudioStopAkEvent)
    ;

    class_< FWheelSlipModifierData >("FWheelSlipModifierData", no_init)
        .def_readwrite("LongSlipFactor", &FWheelSlipModifierData::LongSlipFactor)
        .def_readwrite("LatSlipFactor", &FWheelSlipModifierData::LatSlipFactor)
    ;

    class_< FTankSensor >("FTankSensor", no_init)
        .def_readwrite("Socket", &FTankSensor::Socket)
        .def_readwrite("Type", &FTankSensor::Type)
        .def_readwrite("SearchLength", &FTankSensor::SearchLength)
        .def_readwrite("HitLength", &FTankSensor::HitLength)
    ;

    class_< FAimAnimTransitionData >("FAimAnimTransitionData", no_init)
        .def_readwrite("FromState", &FAimAnimTransitionData::FromState)
        .def_readwrite("ToState", &FAimAnimTransitionData::ToState)
        .def_readwrite("AnimName", &FAimAnimTransitionData::AnimName)
        .def_readwrite("BlendInTime", &FAimAnimTransitionData::BlendInTime)
        .def_readwrite("BlendOutTime", &FAimAnimTransitionData::BlendOutTime)
    ;

    class_< FManufacturerSelectorData >("FManufacturerSelectorData", no_init)
        .def_readwrite("AssociatedManufacturerName", &FManufacturerSelectorData::AssociatedManufacturerName)
        .def_readwrite("ValueIfMatched", &FManufacturerSelectorData::ValueIfMatched)
    ;

    class_< FDesignerAttributeDefaultValueData >("FDesignerAttributeDefaultValueData", no_init)
        .def_readwrite("DesignerAttribute", &FDesignerAttributeDefaultValueData::DesignerAttribute)
        .def_readwrite("BaseValue", &FDesignerAttributeDefaultValueData::BaseValue)
    ;

    class_< FLootData >("FLootData", no_init)
        .def_readwrite("Weight", &FLootData::Weight)
        .def_readwrite("ItemPools", &FLootData::ItemPools)
    ;

    class_< FAsyncDataRequest >("FAsyncDataRequest", no_init)
        .def_readwrite("RequestType", &FAsyncDataRequest::RequestType)
        .def_readwrite("ObjectPath", &FAsyncDataRequest::ObjectPath)
        .def_readwrite("Instigator", &FAsyncDataRequest::Instigator)
        .def_readwrite("PlayerContext", &FAsyncDataRequest::PlayerContext)
        .def_readwrite("Payload", &FAsyncDataRequest::Payload)
        .def_readwrite("CallbackEventName", &FAsyncDataRequest::CallbackEventName)
        .def_readwrite("IntParam", &FAsyncDataRequest::IntParam)
        .def_readwrite("FloatParam", &FAsyncDataRequest::FloatParam)
    ;

    class_< UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData >("UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData", no_init)
        .def_readwrite("Action", &UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData::SequenceName)
    ;

    class_< FDefinitionIconDatum >("FDefinitionIconDatum", no_init)
        .def_readwrite("DefColor", &FDefinitionIconDatum::DefColor)
        .def_readwrite("DefIcon", &FDefinitionIconDatum::DefIcon)
        .def_readwrite("DefClass", &FDefinitionIconDatum::DefClass)
    ;

    class_< FDamageTypeSelectorData >("FDamageTypeSelectorData", no_init)
        .def_readwrite("AssociatedDamageTypeName", &FDamageTypeSelectorData::AssociatedDamageTypeName)
        .def_readwrite("ValueIfMatched", &FDamageTypeSelectorData::ValueIfMatched)
    ;

    class_< FBlackMarketUpgradeLevelData >("FBlackMarketUpgradeLevelData", no_init)
        .def_readwrite("UpgradeDefinition", &FBlackMarketUpgradeLevelData::UpgradeDefinition)
        .def_readwrite("MaxUpgradeLevel", &FBlackMarketUpgradeLevelData::MaxUpgradeLevel)
    ;

    class_< FTouchingPawn >("FTouchingPawn", no_init)
        .def_readwrite("Pawn", &FTouchingPawn::Pawn)
        .def_readwrite("VolumesTouched", &FTouchingPawn::VolumesTouched)
    ;

    class_< FFeaturedItemData >("FFeaturedItemData", no_init)
        .def_readwrite("CommerceMarkup", &FFeaturedItemData::CommerceMarkup)
        .def_readwrite("LootConfiguration", &FFeaturedItemData::LootConfiguration)
        .def_readwrite("GameStageValue", &FFeaturedItemData::GameStageValue)
        .def_readwrite("AwesomeLevelValue", &FFeaturedItemData::AwesomeLevelValue)
    ;

    class_< FQueuedPersonalEchoLog >("FQueuedPersonalEchoLog", no_init)
        .def_readwrite("Event", &FQueuedPersonalEchoLog::Event)
        .def_readwrite("Group", &FQueuedPersonalEchoLog::Group)
    ;

    class_< FCombatPointDebugData >("FCombatPointDebugData", no_init)
        .def_readwrite("Score", &FCombatPointDebugData::Score)
        .def_readwrite("Location", &FCombatPointDebugData::Location)
    ;

    class_< FCombatPointData >("FCombatPointData", no_init)
        .def_readwrite("Slot", &FCombatPointData::Slot)
        .def_readwrite("Location", &FCombatPointData::Location)
        .def_readwrite("Actor", &FCombatPointData::Actor)
        .def_readwrite("ConstraintType", &FCombatPointData::ConstraintType)
        .def_readwrite("ConstraintTags", &FCombatPointData::ConstraintTags)
    ;

    class_< FBalanceMeResourceUpgradePath >("FBalanceMeResourceUpgradePath", no_init)
        .def_readwrite("ResourceName", &FBalanceMeResourceUpgradePath::ResourceName)
        .def_readwrite("PlayerLevelForEachUpgrade", &FBalanceMeResourceUpgradePath::PlayerLevelForEachUpgrade)
    ;

    class_< FViewProfile >("FViewProfile", no_init)
        .def_readwrite("InPlayer", &FViewProfile::InPlayer)
        .def_readwrite("ViewNormal", &FViewProfile::ViewNormal)
        .def_readwrite("ViewLocation", &FViewProfile::ViewLocation)
        .def_readwrite("ViewRotation", &FViewProfile::ViewRotation)
        .def_readwrite("ViewNormalDotViewNormal", &FViewProfile::ViewNormalDotViewNormal)
        .def_readonly("UnknownData00", &FViewProfile::UnknownData00)
        .def_readwrite("ViewMatrix", &FViewProfile::ViewMatrix)
    ;

    class_< FSMPerchRandomPair >("FSMPerchRandomPair", no_init)
        .def_readwrite("Weight", &FSMPerchRandomPair::Weight)
        .def_readwrite("SMD", &FSMPerchRandomPair::SMD)
    ;

    class_< FWeaponTypeSelectorData >("FWeaponTypeSelectorData", no_init)
        .def_readwrite("WeaponType", &FWeaponTypeSelectorData::WeaponType)
        .def_readwrite("ValueIfMatched", &FWeaponTypeSelectorData::ValueIfMatched)
    ;

    class_< FWeaponAmmoResourceSelectorData >("FWeaponAmmoResourceSelectorData", no_init)
        .def_readwrite("AssociatedResourceName", &FWeaponAmmoResourceSelectorData::AssociatedResourceName)
        .def_readwrite("ValueIfMatched", &FWeaponAmmoResourceSelectorData::ValueIfMatched)
    ;

    class_< FUnlockItemData >("FUnlockItemData", no_init)
        .def_readwrite("GameStage", &FUnlockItemData::GameStage)
        .def_readwrite("UnlockItems", &FUnlockItemData::UnlockItems)
        .def_readwrite("UnlockItemPools", &FUnlockItemData::UnlockItemPools)
    ;

    class_< FWorldSpacePlayerInfo >("FWorldSpacePlayerInfo", no_init)
        .def_readwrite("WPRI", &FWorldSpacePlayerInfo::WPRI)
        .def_readwrite("WPP", &FWorldSpacePlayerInfo::WPP)
    ;

    class_< FItemPartSettings >("FItemPartSettings", no_init)
        .def_readwrite("PartList", &FItemPartSettings::PartList)
        .def_readwrite("Part", &FItemPartSettings::Part)
        .def_readwrite("PartName", &FItemPartSettings::PartName)
    ;

    class_< FGrenadeModBehaviorSequenceStateData >("FGrenadeModBehaviorSequenceStateData", no_init)
        .def_readwrite("Action", &FGrenadeModBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &FGrenadeModBehaviorSequenceStateData::SequenceName)
    ;

    class_< FEnemyBreadCrumbStruct >("FEnemyBreadCrumbStruct", no_init)
        .def_readwrite("pos", &FEnemyBreadCrumbStruct::pos)
        .def_readwrite("CombatArea", &FEnemyBreadCrumbStruct::CombatArea)
    ;

    class_< FPrismDataContainer >("FPrismDataContainer", no_init)
        .def_readwrite("RotateBoneTranslation", &FPrismDataContainer::RotateBoneTranslation)
        .def_readwrite("RotateBone", &FPrismDataContainer::RotateBone)
        .def_readwrite("RotateRefBone", &FPrismDataContainer::RotateRefBone)
        .def_readwrite("AnimDeltaList", &FPrismDataContainer::AnimDeltaList)
        .def_readwrite("AnimDeltaRefList", &FPrismDataContainer::AnimDeltaRefList)
        .def_readwrite("SwapList", &FPrismDataContainer::SwapList)
        .def_readwrite("RotateRootMotion", &FPrismDataContainer::RotateRootMotion)
    ;

    class_< FAnimDeltaDataList >("FAnimDeltaDataList", no_init)
        .def_readwrite("IndexList", &FAnimDeltaDataList::IndexList)
    ;

    class_< FAnimSwapData >("FAnimSwapData", no_init)
        .def_readwrite("Index1", &FAnimSwapData::Index1)
        .def_readwrite("Index2", &FAnimSwapData::Index2)
    ;

    class_< FGrenadeModPartBehaviorSequenceStateData >("FGrenadeModPartBehaviorSequenceStateData", no_init)
        .def_readwrite("Action", &FGrenadeModPartBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &FGrenadeModPartBehaviorSequenceStateData::SequenceName)
    ;

    class_< FMissionSetData >("FMissionSetData", no_init)
        .def_readwrite("PackageName", &FMissionSetData::PackageName)
        .def_readwrite("Missions", &FMissionSetData::Missions)
    ;

    class_< FDropProjectileBehaviorSequenceStateData >("FDropProjectileBehaviorSequenceStateData", no_init)
        .def_readwrite("Action", &FDropProjectileBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &FDropProjectileBehaviorSequenceStateData::SequenceName)
    ;

    class_< FSimpleAnimStateData >("FSimpleAnimStateData", no_init)
        .def_readwrite("AnimState", &FSimpleAnimStateData::AnimState)
    ;

    class_< FDrunkenWaveFormData >("FDrunkenWaveFormData", no_init)
        .def_readwrite("WaveFreq", &FDrunkenWaveFormData::WaveFreq)
        .def_readwrite("WaveAmp", &FDrunkenWaveFormData::WaveAmp)
        .def_readwrite("WavePhase", &FDrunkenWaveFormData::WavePhase)
    ;

    class_< FPopulatedInteractiveObjectMemento >("FPopulatedInteractiveObjectMemento", no_init)
        .def_readwrite("BehaviorSequenceState", &FPopulatedInteractiveObjectMemento::BehaviorSequenceState)
        .def_readonly("bCanBeUsed", &FPopulatedInteractiveObjectMemento::bCanBeUsed)
    ;

    class_< FVelocityObstacle >("FVelocityObstacle", no_init)
        .def_readonly("Segments", &FVelocityObstacle::Segments)
    ;

    class_< FObstacleSegment >("FObstacleSegment", no_init)
        .def_readwrite("P1", &FObstacleSegment::P1)
        .def_readwrite("P2", &FObstacleSegment::P2)
        .def_readwrite("Normal", &FObstacleSegment::Normal)
    ;

    class_< FBehaviorCondition >("FBehaviorCondition", no_init)
        .def_readwrite("ConditionId", &FBehaviorCondition::ConditionId)
        .def_readwrite("Condition", &FBehaviorCondition::Condition)
        .def_readwrite("Behaviors", &FBehaviorCondition::Behaviors)
    ;

    class_< FStatusEffectNameMapping >("FStatusEffectNameMapping", no_init)
        .def_readwrite("StatusEffectName", &FStatusEffectNameMapping::StatusEffectName)
        .def_readwrite("StatusEffectDefinitionName", &FStatusEffectNameMapping::StatusEffectDefinitionName)
    ;

    class_< FDirChangeRateRange >("FDirChangeRateRange", no_init)
        .def_readwrite("DirDegreesPerSecond", &FDirChangeRateRange::DirDegreesPerSecond)
        .def_readwrite("SpeedRange", &FDirChangeRateRange::SpeedRange)
    ;

    class_< FDecalData >("FDecalData", no_init)
        .def_readwrite("Materials", &FDecalData::Materials)
        .def_readwrite("Width", &FDecalData::Width)
        .def_readwrite("Height", &FDecalData::Height)
        .def_readwrite("MinScale", &FDecalData::MinScale)
        .def_readwrite("MaxScale", &FDecalData::MaxScale)
    ;

    class_< FFeatherBoneBlendTarget >("FFeatherBoneBlendTarget", no_init)
        .def_readwrite("StartBoneName", &FFeatherBoneBlendTarget::StartBoneName)
        .def_readwrite("BlendWeight", &FFeatherBoneBlendTarget::BlendWeight)
    ;

    class_< FWeaponAccessorySetup >("FWeaponAccessorySetup", no_init)
        .def_readwrite("WeaponArchetypeName", &FWeaponAccessorySetup::WeaponArchetypeName)
        .def_readwrite("AccessoryDefinition", &FWeaponAccessorySetup::AccessoryDefinition)
        .def_readwrite("AccessoryTransforms", &FWeaponAccessorySetup::AccessoryTransforms)
        .def_readwrite("AccessoryParts", &FWeaponAccessorySetup::AccessoryParts)
    ;

    class_< FEvalActionData >("FEvalActionData", no_init)
        .def_readwrite("Action", &FEvalActionData::Action)
    ;

    class_< FSkillIndexLevelRequirementPair >("FSkillIndexLevelRequirementPair", no_init)
        .def_readwrite("SkillIndex", &FSkillIndexLevelRequirementPair::SkillIndex)
        .def_readwrite("PlayerLevelRequirement", &FSkillIndexLevelRequirementPair::PlayerLevelRequirement)
    ;

    class_< FPlayerClassCountOverride >("FPlayerClassCountOverride", no_init)
        .def_readwrite("Override", &FPlayerClassCountOverride::Override)
        .def_readwrite("PlayerClassIdDef", &FPlayerClassCountOverride::PlayerClassIdDef)
    ;

    class_< FNameExpressionData >("FNameExpressionData", no_init)
        .def_readwrite("Expressions", &FNameExpressionData::Expressions)
        .def_readwrite("PreModifier", &FNameExpressionData::PreModifier)
        .def_readwrite("PostModifier", &FNameExpressionData::PostModifier)
    ;

    class_< FHomingTargetedActorInfo >("FHomingTargetedActorInfo", no_init)
        .def_readwrite("HomingActor", &FHomingTargetedActorInfo::HomingActor)
        .def_readwrite("HomingActorCount", &FHomingTargetedActorInfo::HomingActorCount)
    ;

    class_< FUnloadableDlcEchoCallData >("FUnloadableDlcEchoCallData", no_init)
        .def_readwrite("CallDefName", &FUnloadableDlcEchoCallData::CallDefName)
        .def_readwrite("DlcPackageId", &FUnloadableDlcEchoCallData::DlcPackageId)
    ;

    class_< FEnvironmentalEffectInfo >("FEnvironmentalEffectInfo", no_init)
        .def_readwrite("EffectID", &FEnvironmentalEffectInfo::EffectID)
        .def_readwrite("Volume", &FEnvironmentalEffectInfo::Volume)
    ;

    class_< FAkEventTrackKey >("FAkEventTrackKey", no_init)
        .def_readwrite("Time", &FAkEventTrackKey::Time)
        .def_readwrite("Event", &FAkEventTrackKey::Event)
    ;

    class_< FEnvironmentalEffectSetting >("FEnvironmentalEffectSetting", no_init)
        .def_readwrite("Effect", &FEnvironmentalEffectSetting::Effect)
        .def_readwrite("Volume", &FEnvironmentalEffectSetting::Volume)
        .def_readwrite("FadeDistance", &FEnvironmentalEffectSetting::FadeDistance)
        .def_readwrite("MinDistance", &FEnvironmentalEffectSetting::MinDistance)
        .def_readwrite("MaxDistance", &FEnvironmentalEffectSetting::MaxDistance)
    ;

    class_< FRTPCSetting >("FRTPCSetting", no_init)
        .def_readwrite("Target", &FRTPCSetting::Target)
        .def_readwrite("AkRtpc", &FRTPCSetting::AkRtpc)
        .def_readwrite("ValueAtMaxRange", &FRTPCSetting::ValueAtMaxRange)
        .def_readwrite("ValueWithinVolume", &FRTPCSetting::ValueWithinVolume)
        .def_readwrite("FadeDistance", &FRTPCSetting::FadeDistance)
        .def_readwrite("LastEvalValue", &FRTPCSetting::LastEvalValue)
    ;

    class_< FOccludedVolume >("FOccludedVolume", no_init)
        .def_readwrite("SoundVolume", &FOccludedVolume::SoundVolume)
        .def_readwrite("Target", &FOccludedVolume::Target)
        .def_readonly("UnknownData00", &FOccludedVolume::UnknownData00)
        .def_readwrite("MaxOcclusion", &FOccludedVolume::MaxOcclusion)
        .def_readwrite("FadeDistance", &FOccludedVolume::FadeDistance)
    ;

    class_< FPlaylist >("FPlaylist", no_init)
        .def_readwrite("ConfiguredGames", &FPlaylist::ConfiguredGames)
        .def_readwrite("PlaylistId", &FPlaylist::PlaylistId)
        .def_readwrite("LoadBalanceId", &FPlaylist::LoadBalanceId)
        .def_readwrite("LocalizationString", &FPlaylist::LocalizationString)
        .def_readwrite("ContentIds", &FPlaylist::ContentIds)
        .def_readwrite("TeamSize", &FPlaylist::TeamSize)
        .def_readwrite("TeamCount", &FPlaylist::TeamCount)
        .def_readwrite("MaxPartySize", &FPlaylist::MaxPartySize)
        .def_readwrite("Name", &FPlaylist::Name)
        .def_readwrite("URL", &FPlaylist::URL)
        .def_readwrite("MatchType", &FPlaylist::MatchType)
        .def_readwrite("MapCycle", &FPlaylist::MapCycle)
        .def_readwrite("InventorySwaps", &FPlaylist::InventorySwaps)
    ;

    class_< FConfiguredGameSetting >("FConfiguredGameSetting", no_init)
        .def_readwrite("GameSettingId", &FConfiguredGameSetting::GameSettingId)
        .def_readwrite("GameSettingsClassName", &FConfiguredGameSetting::GameSettingsClassName)
        .def_readwrite("URL", &FConfiguredGameSetting::URL)
        .def_readwrite("GameSettings", &FConfiguredGameSetting::GameSettings)
    ;

    class_< FInventorySwap >("FInventorySwap", no_init)
        .def_readwrite("Original", &FInventorySwap::Original)
        .def_readwrite("SwapTo", &FInventorySwap::SwapTo)
    ;

    class_< FIpAddr >("FIpAddr", no_init)
        .def_readwrite("Addr", &FIpAddr::Addr)
        .def_readwrite("Port", &FIpAddr::Port)
    ;

    class_< FClientBeaconConnection >("FClientBeaconConnection", no_init)
        .def_readwrite("PartyLeader", &FClientBeaconConnection::PartyLeader)
        .def_readwrite("ElapsedHeartbeatTime", &FClientBeaconConnection::ElapsedHeartbeatTime)
        .def_readwrite("Socket", &FClientBeaconConnection::Socket)
    ;

    class_< FPartyReservation >("FPartyReservation", no_init)
        .def_readwrite("TeamNum", &FPartyReservation::TeamNum)
        .def_readwrite("PartyLeader", &FPartyReservation::PartyLeader)
        .def_readwrite("PartyMembers", &FPartyReservation::PartyMembers)
    ;

    class_< FPlayerReservation >("FPlayerReservation", no_init)
        .def_readwrite("NetId", &FPlayerReservation::NetId)
        .def_readwrite("Skill", &FPlayerReservation::Skill)
        .def_readwrite("XpLevel", &FPlayerReservation::XpLevel)
        .def_readwrite("Mu", &FPlayerReservation::Mu)
        .def_readwrite("Sigma", &FPlayerReservation::Sigma)
        .def_readwrite("ElapsedSessionTime", &FPlayerReservation::ElapsedSessionTime)
    ;

    class_< FClientConnectionRequest >("FClientConnectionRequest", no_init)
        .def_readwrite("PlayerNetId", &FClientConnectionRequest::PlayerNetId)
        .def_readwrite("NatType", &FClientConnectionRequest::NatType)
        .def_readwrite("GoodHostRatio", &FClientConnectionRequest::GoodHostRatio)
        .def_readwrite("BandwidthHistory", &FClientConnectionRequest::BandwidthHistory)
        .def_readwrite("MinutesSinceLastTest", &FClientConnectionRequest::MinutesSinceLastTest)
    ;

    class_< FConnectionBandwidthStats >("FConnectionBandwidthStats", no_init)
        .def_readwrite("UpstreamRate", &FConnectionBandwidthStats::UpstreamRate)
        .def_readwrite("DownstreamRate", &FConnectionBandwidthStats::DownstreamRate)
        .def_readwrite("RoundtripLatency", &FConnectionBandwidthStats::RoundtripLatency)
    ;

    class_< FPlayerMember >("FPlayerMember", no_init)
        .def_readwrite("TeamNum", &FPlayerMember::TeamNum)
        .def_readwrite("Skill", &FPlayerMember::Skill)
        .def_readwrite("NetId", &FPlayerMember::NetId)
    ;

    class_< FNewsCacheEntry >("FNewsCacheEntry", no_init)
        .def_readwrite("NewsUrl", &FNewsCacheEntry::NewsUrl)
        .def_readwrite("ReadState", &FNewsCacheEntry::ReadState)
        .def_readwrite("NewsType", &FNewsCacheEntry::NewsType)
        .def_readwrite("NewsItem", &FNewsCacheEntry::NewsItem)
        .def_readwrite("TimeOut", &FNewsCacheEntry::TimeOut)
        .def_readwrite("HttpDownloader", &FNewsCacheEntry::HttpDownloader)
    ;

    class_< FEventUploadConfig >("FEventUploadConfig", no_init)
        .def_readwrite("UploadType", &FEventUploadConfig::UploadType)
        .def_readwrite("UploadUrl", &FEventUploadConfig::UploadUrl)
        .def_readwrite("TimeOut", &FEventUploadConfig::TimeOut)
    ;

    class_< FClientMeshBeaconConnection >("FClientMeshBeaconConnection", no_init)
        .def_readwrite("PlayerNetId", &FClientMeshBeaconConnection::PlayerNetId)
        .def_readwrite("ElapsedHeartbeatTime", &FClientMeshBeaconConnection::ElapsedHeartbeatTime)
        .def_readwrite("Socket", &FClientMeshBeaconConnection::Socket)
        .def_readwrite("BandwidthTest", &FClientMeshBeaconConnection::BandwidthTest)
        .def_readwrite("NatType", &FClientMeshBeaconConnection::NatType)
        .def_readwrite("GoodHostRatio", &FClientMeshBeaconConnection::GoodHostRatio)
        .def_readwrite("BandwidthHistory", &FClientMeshBeaconConnection::BandwidthHistory)
        .def_readwrite("MinutesSinceLastTest", &FClientMeshBeaconConnection::MinutesSinceLastTest)
    ;

    class_< FClientConnectionBandwidthTestData >("FClientConnectionBandwidthTestData", no_init)
        .def_readwrite("CurrentState", &FClientConnectionBandwidthTestData::CurrentState)
        .def_readwrite("TestType", &FClientConnectionBandwidthTestData::TestType)
        .def_readwrite("BytesTotalNeeded", &FClientConnectionBandwidthTestData::BytesTotalNeeded)
        .def_readwrite("BytesReceived", &FClientConnectionBandwidthTestData::BytesReceived)
        .def_readwrite("RequestTestStartTime", &FClientConnectionBandwidthTestData::RequestTestStartTime)
        .def_readwrite("TestStartTime", &FClientConnectionBandwidthTestData::TestStartTime)
        .def_readwrite("BandwidthStats", &FClientConnectionBandwidthTestData::BandwidthStats)
    ;

    class_< FFileNameToURLMapping >("FFileNameToURLMapping", no_init)
        .def_readwrite("Filename", &FFileNameToURLMapping::Filename)
        .def_readwrite("UrlMapping", &FFileNameToURLMapping::UrlMapping)
    ;

    class_< FPlaylistPopulation >("FPlaylistPopulation", no_init)
        .def_readwrite("PlaylistId", &FPlaylistPopulation::PlaylistId)
        .def_readwrite("WorldwideTotal", &FPlaylistPopulation::WorldwideTotal)
        .def_readwrite("RegionTotal", &FPlaylistPopulation::RegionTotal)
    ;

    class_< FTitleFileMcp, bases< FTitleFile >  >("FTitleFileMcp", no_init)
        .def_readwrite("HttpDownloader", &FTitleFileMcp::HttpDownloader)
    ;

    class_< FClientBandwidthTestData >("FClientBandwidthTestData", no_init)
        .def_readwrite("TestType", &FClientBandwidthTestData::TestType)
        .def_readwrite("CurrentState", &FClientBandwidthTestData::CurrentState)
        .def_readwrite("NumBytesToSendTotal", &FClientBandwidthTestData::NumBytesToSendTotal)
        .def_readwrite("NumBytesSentTotal", &FClientBandwidthTestData::NumBytesSentTotal)
        .def_readwrite("NumBytesSentLast", &FClientBandwidthTestData::NumBytesSentLast)
        .def_readwrite("ElapsedTestTime", &FClientBandwidthTestData::ElapsedTestTime)
    ;

    class_< FDeferredLeaderboardRead >("FDeferredLeaderboardRead", no_init)
        .def_readwrite("LeaderboardName", &FDeferredLeaderboardRead::LeaderboardName)
        .def_readwrite("RequestType", &FDeferredLeaderboardRead::RequestType)
        .def_readwrite("Start", &FDeferredLeaderboardRead::Start)
        .def_readwrite("End", &FDeferredLeaderboardRead::End)
    ;

    class_< FDeferredLeaderboardWrite >("FDeferredLeaderboardWrite", no_init)
        .def_readwrite("LeaderboardName", &FDeferredLeaderboardWrite::LeaderboardName)
        .def_readwrite("Score", &FDeferredLeaderboardWrite::Score)
    ;

    class_< FLeaderboardEntry >("FLeaderboardEntry", no_init)
        .def_readwrite("PlayerUID", &FLeaderboardEntry::PlayerUID)
        .def_readwrite("Rank", &FLeaderboardEntry::Rank)
        .def_readwrite("Score", &FLeaderboardEntry::Score)
    ;

    class_< FLeaderboardTemplate >("FLeaderboardTemplate", no_init)
        .def_readwrite("LeaderboardName", &FLeaderboardTemplate::LeaderboardName)
        .def_readwrite("UpdateType", &FLeaderboardTemplate::UpdateType)
        .def_readwrite("LeaderboardSize", &FLeaderboardTemplate::LeaderboardSize)
        .def_readwrite("SortType", &FLeaderboardTemplate::SortType)
        .def_readwrite("DisplayFormat", &FLeaderboardTemplate::DisplayFormat)
        .def_readwrite("LeaderboardRef", &FLeaderboardTemplate::LeaderboardRef)
    ;

    class_< FLeaderboardHandle >("FLeaderboardHandle", no_init)
        .def_readwrite("Dud", &FLeaderboardHandle::Dud)
    ;

    class_< FPendingEntry >("FPendingEntry", no_init)
        .def_readwrite("RemoteId", &FPendingEntry::RemoteId)
        .def_readwrite("CallbackFunc", &FPendingEntry::CallbackFunc)
        .def_readwrite("UserData", &FPendingEntry::UserData)
    ;

    class_< FMarketplaceOfferData >("FMarketplaceOfferData", no_init)
        .def_readwrite("OfferId", &FMarketplaceOfferData::OfferId)
        .def_readwrite("Category", &FMarketplaceOfferData::Category)
        .def_readwrite("SellTextLocKey", &FMarketplaceOfferData::SellTextLocKey)
    ;

    class_< FViewIdToLeaderboardName >("FViewIdToLeaderboardName", no_init)
        .def_readwrite("ViewId", &FViewIdToLeaderboardName::ViewId)
        .def_readwrite("LeaderboardName", &FViewIdToLeaderboardName::LeaderboardName)
    ;

    class_< FClientFilterORClause >("FClientFilterORClause", no_init)
        .def_readwrite("OrParams", &FClientFilterORClause::OrParams)
    ;

    class_< FFilterKeyToSteamKeyMapping >("FFilterKeyToSteamKeyMapping", no_init)
        .def_readwrite("KeyId", &FFilterKeyToSteamKeyMapping::KeyId)
        .def_readwrite("KeyType", &FFilterKeyToSteamKeyMapping::KeyType)
        .def_readwrite("RawKey", &FFilterKeyToSteamKeyMapping::RawKey)
        .def_readwrite("SteamKey", &FFilterKeyToSteamKeyMapping::SteamKey)
        .def_readwrite("IgnoreValue", &FFilterKeyToSteamKeyMapping::IgnoreValue)
    ;

    class_< FServerQueryToRulesResponseMapping >("FServerQueryToRulesResponseMapping", no_init)
        .def_readwrite("Query", &FServerQueryToRulesResponseMapping::Query)
        .def_readwrite("Response", &FServerQueryToRulesResponseMapping::Response)
    ;

    class_< FServerQueryToPingResponseMapping >("FServerQueryToPingResponseMapping", no_init)
        .def_readwrite("Query", &FServerQueryToPingResponseMapping::Query)
        .def_readwrite("Response", &FServerQueryToPingResponseMapping::Response)
    ;

    class_< FPropertyToColumn >("FPropertyToColumn", no_init)
        .def_readwrite("PropertyId", &FPropertyToColumn::PropertyId)
        .def_readwrite("ColumnId", &FPropertyToColumn::ColumnId)
    ;

    class_< FPendingPlayerStats >("FPendingPlayerStats", no_init)
        .def_readwrite("Player", &FPendingPlayerStats::Player)
        .def_readwrite("PlayerName", &FPendingPlayerStats::PlayerName)
        .def_readwrite("StatGuid", &FPendingPlayerStats::StatGuid)
        .def_readwrite("Stats", &FPendingPlayerStats::Stats)
        .def_readwrite("Score", &FPendingPlayerStats::Score)
        .def_readwrite("Place", &FPendingPlayerStats::Place)
    ;

    class_< FPlayerStat >("FPlayerStat", no_init)
        .def_readwrite("ViewId", &FPlayerStat::ViewId)
        .def_readwrite("PropertyId", &FPlayerStat::PropertyId)
        .def_readwrite("Data", &FPlayerStat::Data)
    ;

    class_< FProfileSettingsCache >("FProfileSettingsCache", no_init)
        .def_readwrite("Profile", &FProfileSettingsCache::Profile)
        .def_readwrite("ReadDelegates", &FProfileSettingsCache::ReadDelegates)
        .def_readwrite("WriteDelegates", &FProfileSettingsCache::WriteDelegates)
        .def_readwrite("ProfileDataChangedDelegates", &FProfileSettingsCache::ProfileDataChangedDelegates)
    ;

    class_< FDeviceIdCache >("FDeviceIdCache", no_init)
        .def_readwrite("DeviceID", &FDeviceIdCache::DeviceID)
        .def_readwrite("DeviceSelectionMulticast", &FDeviceIdCache::DeviceSelectionMulticast)
        .def_readwrite("DeviceSelectionDelegates", &FDeviceIdCache::DeviceSelectionDelegates)
    ;

    class_< FOnlineStatusMapping >("FOnlineStatusMapping", no_init)
        .def_readwrite("StatusId", &FOnlineStatusMapping::StatusId)
        .def_readwrite("StatusString", &FOnlineStatusMapping::StatusString)
    ;

    class_< FOnlineStatusPropertyMapping >("FOnlineStatusPropertyMapping", no_init)
        .def_readwrite("KeyString", &FOnlineStatusPropertyMapping::KeyString)
        .def_readwrite("PropertyId", &FOnlineStatusPropertyMapping::PropertyId)
        .def_readwrite("EncodeId", &FOnlineStatusPropertyMapping::EncodeId)
    ;

    class_< FOnlineStatusContextMapping >("FOnlineStatusContextMapping", no_init)
        .def_readwrite("KeyString", &FOnlineStatusContextMapping::KeyString)
        .def_readwrite("ContextId", &FOnlineStatusContextMapping::ContextId)
    ;

    class_< FControllerConnectionState >("FControllerConnectionState", no_init)
        .def_readwrite("bIsControllerConnected", &FControllerConnectionState::bIsControllerConnected)
        .def_readwrite("bLastIsControllerConnected", &FControllerConnectionState::bLastIsControllerConnected)
    ;

    class_< FTitleFileMapping >("FTitleFileMapping", no_init)
        .def_readwrite("Filename", &FTitleFileMapping::Filename)
        .def_readwrite("UGCHandle", &FTitleFileMapping::UGCHandle)
    ;

    class_< FQueuedAvatarRequest >("FQueuedAvatarRequest", no_init)
        .def_readwrite("CheckTime", &FQueuedAvatarRequest::CheckTime)
        .def_readwrite("NumberOfAttempts", &FQueuedAvatarRequest::NumberOfAttempts)
        .def_readwrite("PlayerNetId", &FQueuedAvatarRequest::PlayerNetId)
        .def_readwrite("Size", &FQueuedAvatarRequest::Size)
        .def_readwrite("ReadOnlineAvatarCompleteDelegate", &FQueuedAvatarRequest::ReadOnlineAvatarCompleteDelegate)
    ;

    class_< FAchievementMappingInfo >("FAchievementMappingInfo", no_init)
        .def_readwrite("AchievementId", &FAchievementMappingInfo::AchievementId)
        .def_readwrite("AchievementName", &FAchievementMappingInfo::AchievementName)
        .def_readwrite("ViewId", &FAchievementMappingInfo::ViewId)
        .def_readwrite("ProgressCount", &FAchievementMappingInfo::ProgressCount)
        .def_readwrite("MaxProgress", &FAchievementMappingInfo::MaxProgress)
    ;

    class_< FAchievementProgressStat >("FAchievementProgressStat", no_init)
        .def_readwrite("AchievementId", &FAchievementProgressStat::AchievementId)
        .def_readwrite("Progress", &FAchievementProgressStat::Progress)
        .def_readwrite("MaxProgress", &FAchievementProgressStat::MaxProgress)
    ;

    class_< FMarketplaceListCache >("FMarketplaceListCache", no_init)
        .def_readwrite("Content", &FMarketplaceListCache::Content)
        .def_readwrite("ReadState", &FMarketplaceListCache::ReadState)
        .def_readwrite("ReadCompleteDelegates", &FMarketplaceListCache::ReadCompleteDelegates)
    ;

    class_< FSteamPlayerClanData >("FSteamPlayerClanData", no_init)
        .def_readwrite("ClanName", &FSteamPlayerClanData::ClanName)
        .def_readwrite("ClanTag", &FSteamPlayerClanData::ClanTag)
    ;

    class_< FRequestEntry >("FRequestEntry", no_init)
        .def_readwrite("RemoteId", &FRequestEntry::RemoteId)
        .def_readwrite("NumProbesSent", &FRequestEntry::NumProbesSent)
        .def_readwrite("ChallengeTimestamp", &FRequestEntry::ChallengeTimestamp)
        .def_readwrite("PingTimestamp", &FRequestEntry::PingTimestamp)
        .def_readwrite("Status", &FRequestEntry::Status)
        .def_readwrite("Results", &FRequestEntry::Results)
        .def_readwrite("CallbackFunc", &FRequestEntry::CallbackFunc)
        .def_readwrite("UserData", &FRequestEntry::UserData)
    ;

    class_< FQoSResults >("FQoSResults", no_init)
        .def_readwrite("PingTimes", &FQoSResults::PingTimes)
        .def_readwrite("PingInMs", &FQoSResults::PingInMs)
    ;

    class_< FListenEntry >("FListenEntry", no_init)
        .def_readwrite("RemoteId", &FListenEntry::RemoteId)
        .def_readwrite("Status", &FListenEntry::Status)
        .def_readwrite("ActiveTimestamp", &FListenEntry::ActiveTimestamp)
    ;

}

