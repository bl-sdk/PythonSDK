#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialInstanceConstant(py::module &m)
{
    py::class_< UMaterialInstanceConstant,  UMaterialInterface   >(m, "UMaterialInstanceConstant")
        .def_readwrite("FontParameterValues", &UMaterialInstanceConstant::FontParameterValues)
        .def_readwrite("ScalarParameterValues", &UMaterialInstanceConstant::ScalarParameterValues)
        .def_readwrite("TextureParameterValues", &UMaterialInstanceConstant::TextureParameterValues)
        .def_readwrite("VectorParameterValues", &UMaterialInstanceConstant::VectorParameterValues)
        .def_readwrite("PhysMaterial", &UMaterialInstance::PhysMaterial)
        .def_readwrite("Parent", &UMaterialInstance::Parent)
        .def_readwrite("PhysMaterialMask", &UMaterialInstance::PhysMaterialMask)
        .def_readwrite("PhysMaterialMaskUVChannel", &UMaterialInstance::PhysMaterialMaskUVChannel)
        .def_readwrite("BlackPhysicalMaterial", &UMaterialInstance::BlackPhysicalMaterial)
        .def_readwrite("WhitePhysicalMaterial", &UMaterialInstance::WhitePhysicalMaterial)
        .def_readwrite("ReferencedTextures", &UMaterialInstance::ReferencedTextures)
        .def_readwrite("ParentLightingGuid", &UMaterialInstance::ParentLightingGuid)
        .def("Behavior_SetObjectParameterValue", [](UMaterialInstanceConstant &self , struct FName* ParameterName) { int* pySection = (int*)malloc(sizeof(int)) ; class UObject** pyValue = 0 ;   self.Behavior_SetObjectParameterValue(pySection, ParameterName, pyValue); return py::make_tuple(*pySection, *pyValue); })
        .def("Behavior_SetFloatParameterValue", [](UMaterialInstanceConstant &self , struct FName* ParameterName) { int* pySection = (int*)malloc(sizeof(int)) ; float* pyValue = (float*)malloc(sizeof(float)) ;   self.Behavior_SetFloatParameterValue(pySection, ParameterName, pyValue); return py::make_tuple(*pySection, *pyValue); })
        .def("Behavior_SetColorParameterValue", [](UMaterialInstanceConstant &self , struct FName* ParameterName, struct FLinearColor* Value) { int* pySection = (int*)malloc(sizeof(int)) ;   self.Behavior_SetColorParameterValue(pySection, ParameterName, Value); return py::make_tuple(*pySection); })
        .def("Behavior_SetVectorParameterValue", [](UMaterialInstanceConstant &self , struct FName* ParameterName, struct FVector* Value) { int* pySection = (int*)malloc(sizeof(int)) ;   self.Behavior_SetVectorParameterValue(pySection, ParameterName, Value); return py::make_tuple(*pySection); })
        .def("Behavior_GetColorParameterValue", [](UMaterialInstanceConstant &self , struct FName* ParameterName, struct FLinearColor* OutValue) { int* pySection = (int*)malloc(sizeof(int)) ;  bool ret =  self.Behavior_GetColorParameterValue(pySection, ParameterName, OutValue); return py::make_tuple(ret, *pySection); })
        .def("Behavior_GetVectorParameterValue", [](UMaterialInstanceConstant &self , struct FName* ParameterName, struct FVector* OutValue) { int* pySection = (int*)malloc(sizeof(int)) ;  bool ret =  self.Behavior_GetVectorParameterValue(pySection, ParameterName, OutValue); return py::make_tuple(ret, *pySection); })
        .def("Behavior_GetFloatParameterValue", [](UMaterialInstanceConstant &self , struct FName* ParameterName) { int* pySection = (int*)malloc(sizeof(int)) ; float* pyOutValue = (float*)malloc(sizeof(float)) ;  bool ret =  self.Behavior_GetFloatParameterValue(pySection, ParameterName, pyOutValue); return py::make_tuple(ret, *pySection, *pyOutValue); })
        .def("Behavior_GetObjectParameterValue", [](UMaterialInstanceConstant &self , struct FName* ParameterName) { int* pySection = (int*)malloc(sizeof(int)) ; class UObject** pyOutValue = 0 ;  bool ret =  self.Behavior_GetObjectParameterValue(pySection, ParameterName, pyOutValue); return py::make_tuple(ret, *pySection, *pyOutValue); })
        .def("ClearParameterValues", &UMaterialInstanceConstant::ClearParameterValues)
        .def("SetFontParameterValue", &UMaterialInstanceConstant::SetFontParameterValue)
        .def("SetVectorParameterValue", &UMaterialInstanceConstant::SetVectorParameterValue)
        .def("SetTextureParameterValue", &UMaterialInstanceConstant::SetTextureParameterValue)
        .def("SetScalarParameterValue", &UMaterialInstanceConstant::SetScalarParameterValue)
        .def("SetParent", &UMaterialInstanceConstant::SetParent)
        .def("IsInMapOrTransientPackage", &UMaterialInstance::IsInMapOrTransientPackage)
        .def("SetScalarCurveParameterValue", &UMaterialInstance::SetScalarCurveParameterValue)
          ;
}