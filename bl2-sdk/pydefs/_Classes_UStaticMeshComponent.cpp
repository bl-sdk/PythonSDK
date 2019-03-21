#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStaticMeshComponent()
{
    py::class_< UStaticMeshComponent,  UPrimitiveComponent   >("UStaticMeshComponent")
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
        .def("StaticClass", &UStaticMeshComponent::StaticClass, py::return_value_policy::reference)
        .def("SetViewportMaterialOffsets", &UStaticMeshComponent::SetViewportMaterialOffsets)
        .def("CanBecomeDynamic", &UStaticMeshComponent::CanBecomeDynamic)
        .def("SetForceStaticDecals", &UStaticMeshComponent::SetForceStaticDecals)
        .def("DisableRBCollisionWithSMC", &UStaticMeshComponent::DisableRBCollisionWithSMC)
        .def("SetStaticMesh", &UStaticMeshComponent::SetStaticMesh)
        .def("GetInstancedMaterialInstanceConstant", &UMeshComponent::GetInstancedMaterialInstanceConstant, py::return_value_policy::reference)
        .def("CreateAndSetMaterialInstanceConstant", &UMeshComponent::CreateAndSetMaterialInstanceConstant, py::return_value_policy::reference)
        .def("Behavior_SetObjectParameterValue", &UMeshComponent::Behavior_SetObjectParameterValue)
        .def("Behavior_SetFloatParameterValue", &UMeshComponent::Behavior_SetFloatParameterValue)
        .def("Behavior_SetVectorParameterValue", &UMeshComponent::Behavior_SetVectorParameterValue)
        .def("Behavior_SetColorParameterValue", &UMeshComponent::Behavior_SetColorParameterValue)
        .def("Behavior_GetColorParameterValue", &UMeshComponent::Behavior_GetColorParameterValue)
        .def("Behavior_GetFloatParameterValue", &UMeshComponent::Behavior_GetFloatParameterValue)
        .def("Behavior_GetObjectParameterValue", &UMeshComponent::Behavior_GetObjectParameterValue)
        .def("Behavior_GetVectorParameterValue", &UMeshComponent::Behavior_GetVectorParameterValue)
        .def("CreateAndSetMaterialInstanceTimeVarying", &UMeshComponent::CreateAndSetMaterialInstanceTimeVarying, py::return_value_policy::reference)
        .def("PrestreamTextures", &UMeshComponent::PrestreamTextures)
        .def("GetNumElements", &UMeshComponent::GetNumElements)
        .def("SetMaterial", &UMeshComponent::SetMaterial)
        .def("GetMaterial", &UMeshComponent::GetMaterial, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}