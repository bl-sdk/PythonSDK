#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMeshComponent(py::module &m)
{
    py::class_< UMeshComponent,  UPrimitiveComponent   >(m, "UMeshComponent")
		.def_static("StaticClass", &UMeshComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Materials", &UMeshComponent::Materials)
        .def("GetInstancedMaterialInstanceConstant", &UMeshComponent::GetInstancedMaterialInstanceConstant, py::return_value_policy::reference)
        .def("CreateAndSetMaterialInstanceConstant", &UMeshComponent::CreateAndSetMaterialInstanceConstant, py::return_value_policy::reference)
        .def("Behavior_SetObjectParameterValue", [](UMeshComponent &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; class UObject** pyValue = 0 ;   self.Behavior_SetObjectParameterValue(pySectionIndex, ParameterName, pyValue); return py::make_tuple(*pySectionIndex, *pyValue); })
        .def("Behavior_SetFloatParameterValue", [](UMeshComponent &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; float* pyValue = (float*)malloc(sizeof(float)) ;   self.Behavior_SetFloatParameterValue(pySectionIndex, ParameterName, pyValue); return py::make_tuple(*pySectionIndex, *pyValue); })
        .def("Behavior_SetVectorParameterValue", [](UMeshComponent &self , struct FName* ParameterName, struct FVector* Value) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;   self.Behavior_SetVectorParameterValue(pySectionIndex, ParameterName, Value); return py::make_tuple(*pySectionIndex); })
        .def("Behavior_SetColorParameterValue", [](UMeshComponent &self , struct FName* ParameterName, struct FLinearColor* Value) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;   self.Behavior_SetColorParameterValue(pySectionIndex, ParameterName, Value); return py::make_tuple(*pySectionIndex); })
        .def("Behavior_GetColorParameterValue", [](UMeshComponent &self , struct FName* ParameterName, struct FLinearColor* OutValue) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;  bool ret =  self.Behavior_GetColorParameterValue(pySectionIndex, ParameterName, OutValue); return py::make_tuple(ret, *pySectionIndex); })
        .def("Behavior_GetFloatParameterValue", [](UMeshComponent &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; float* pyOutValue = (float*)malloc(sizeof(float)) ;  bool ret =  self.Behavior_GetFloatParameterValue(pySectionIndex, ParameterName, pyOutValue); return py::make_tuple(ret, *pySectionIndex, *pyOutValue); })
        .def("Behavior_GetObjectParameterValue", [](UMeshComponent &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; class UObject** pyOutValue = 0 ;  bool ret =  self.Behavior_GetObjectParameterValue(pySectionIndex, ParameterName, pyOutValue); return py::make_tuple(ret, *pySectionIndex, *pyOutValue); })
        .def("Behavior_GetVectorParameterValue", [](UMeshComponent &self , struct FName* ParameterName, struct FVector* OutValue) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;  bool ret =  self.Behavior_GetVectorParameterValue(pySectionIndex, ParameterName, OutValue); return py::make_tuple(ret, *pySectionIndex); })
        .def("CreateAndSetMaterialInstanceTimeVarying", &UMeshComponent::CreateAndSetMaterialInstanceTimeVarying, py::return_value_policy::reference)
        .def("PrestreamTextures", &UMeshComponent::PrestreamTextures)
        .def("GetNumElements", &UMeshComponent::GetNumElements)
        .def("SetMaterial", &UMeshComponent::SetMaterial)
        .def("GetMaterial", &UMeshComponent::GetMaterial, py::return_value_policy::reference)
          ;
}