#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMeshComponent()
{
    class_< UMeshComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UMeshComponent", no_init)
        .def_readwrite("Materials", &UMeshComponent::Materials)
        .def("StaticClass", &UMeshComponent::StaticClass, return_value_policy< reference_existing_object >())
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