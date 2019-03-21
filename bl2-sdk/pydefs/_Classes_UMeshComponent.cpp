#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMeshComponent(py::object m)
{
    py::class_< UMeshComponent,  UPrimitiveComponent   >(m, "UMeshComponent")
        .def_readwrite("Materials", &UMeshComponent::Materials)
        .def("StaticClass", &UMeshComponent::StaticClass, py::return_value_policy::reference)
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
          ;
}