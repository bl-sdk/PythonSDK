#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStaticMeshComponent()
{
    class_< UStaticMeshComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UStaticMeshComponent", no_init)
        .def_readwrite("StaticMesh", &UStaticMeshComponent::StaticMesh)
        .def_readwrite("OverriddenLODMaxRange", &UStaticMeshComponent::OverriddenLODMaxRange)
        .def_readwrite("StreamingDistanceMultiplier", &UStaticMeshComponent::StreamingDistanceMultiplier)
        .def_readwrite("IrrelevantLights", &UStaticMeshComponent::IrrelevantLights)
        .def_readwrite("LODData", &UStaticMeshComponent::LODData)
        .def_readwrite("ViewZeroOffset", &UStaticMeshComponent::ViewZeroOffset)
        .def_readwrite("ViewOneOffset", &UStaticMeshComponent::ViewOneOffset)
        .def_readwrite("ForcedLodModel", &UStaticMeshComponent::ForcedLodModel)
        .def_readwrite("PreviousLODLevel", &UStaticMeshComponent::PreviousLODLevel)
        .def_readwrite("Materials", &UMeshComponent::Materials)
        .def("StaticClass", &UStaticMeshComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetViewportMaterialOffsets", &UStaticMeshComponent::SetViewportMaterialOffsets)
        .def("CanBecomeDynamic", &UStaticMeshComponent::CanBecomeDynamic)
        .def("SetForceStaticDecals", &UStaticMeshComponent::SetForceStaticDecals)
        .def("DisableRBCollisionWithSMC", &UStaticMeshComponent::DisableRBCollisionWithSMC)
        .def("SetStaticMesh", &UStaticMeshComponent::SetStaticMesh)
        .def("GetInstancedMaterialInstanceConstant", &UMeshComponent::GetInstancedMaterialInstanceConstant, return_value_policy< reference_existing_object >())
        .def("CreateAndSetMaterialInstanceConstant", &UMeshComponent::CreateAndSetMaterialInstanceConstant, return_value_policy< reference_existing_object >())
        .def("Behavior_SetObjectParameterValue", &UMeshComponent::Behavior_SetObjectParameterValue)
        .def("Behavior_SetFloatParameterValue", &UMeshComponent::Behavior_SetFloatParameterValue)
        .def("Behavior_SetVectorParameterValue", &UMeshComponent::Behavior_SetVectorParameterValue)
        .def("Behavior_SetColorParameterValue", &UMeshComponent::Behavior_SetColorParameterValue)
        .def("Behavior_GetColorParameterValue", &UMeshComponent::Behavior_GetColorParameterValue)
        .def("Behavior_GetFloatParameterValue", &UMeshComponent::Behavior_GetFloatParameterValue)
        .def("Behavior_GetObjectParameterValue", &UMeshComponent::Behavior_GetObjectParameterValue)
        .def("Behavior_GetVectorParameterValue", &UMeshComponent::Behavior_GetVectorParameterValue)
        .def("CreateAndSetMaterialInstanceTimeVarying", &UMeshComponent::CreateAndSetMaterialInstanceTimeVarying, return_value_policy< reference_existing_object >())
        .def("PrestreamTextures", &UMeshComponent::PrestreamTextures)
        .def("GetNumElements", &UMeshComponent::GetNumElements)
        .def("SetMaterial", &UMeshComponent::SetMaterial)
        .def("GetMaterial", &UMeshComponent::GetMaterial, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}