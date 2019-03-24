#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialInterface(py::module &m)
{
    py::class_< UMaterialInterface,  UObject   >(m, "UMaterialInterface")
		.def_static("StaticClass", &UMaterialInterface::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ParentRefFence", &UMaterialInterface::ParentRefFence)
        .def_readwrite("LightmassSettings", &UMaterialInterface::LightmassSettings)
        .def_readwrite("CustomSkinType", &UMaterialInterface::CustomSkinType)
        .def("SetForceMipLevelsToBeResident", &UMaterialInterface::SetForceMipLevelsToBeResident)
        .def("Behavior_SetColorParameterValue", [](UMaterialInterface &self , struct FName* ParameterName, struct FLinearColor* Value) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;   self.Behavior_SetColorParameterValue(pySectionIndex, ParameterName, Value); return py::make_tuple(*pySectionIndex); })
        .def("Behavior_SetFloatParameterValue", [](UMaterialInterface &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; float* pyValue = (float*)malloc(sizeof(float)) ;   self.Behavior_SetFloatParameterValue(pySectionIndex, ParameterName, pyValue); return py::make_tuple(*pySectionIndex, *pyValue); })
        .def("Behavior_SetObjectParameterValue", [](UMaterialInterface &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; class UObject** pyValue = 0 ;   self.Behavior_SetObjectParameterValue(pySectionIndex, ParameterName, pyValue); return py::make_tuple(*pySectionIndex, *pyValue); })
        .def("Behavior_SetVectorParameterValue", [](UMaterialInterface &self , struct FName* ParameterName, struct FVector* Value) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;   self.Behavior_SetVectorParameterValue(pySectionIndex, ParameterName, Value); return py::make_tuple(*pySectionIndex); })
        .def("Behavior_GetColorParameterValue", [](UMaterialInterface &self , struct FName* ParameterName, struct FLinearColor* OutValue) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;  bool ret =  self.Behavior_GetColorParameterValue(pySectionIndex, ParameterName, OutValue); return py::make_tuple(ret, *pySectionIndex); })
        .def("Behavior_GetFloatParameterValue", [](UMaterialInterface &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; float* pyOutValue = (float*)malloc(sizeof(float)) ;  bool ret =  self.Behavior_GetFloatParameterValue(pySectionIndex, ParameterName, pyOutValue); return py::make_tuple(ret, *pySectionIndex, *pyOutValue); })
        .def("Behavior_GetObjectParameterValue", [](UMaterialInterface &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; class UObject** pyOutValue = 0 ;  bool ret =  self.Behavior_GetObjectParameterValue(pySectionIndex, ParameterName, pyOutValue); return py::make_tuple(ret, *pySectionIndex, *pyOutValue); })
        .def("Behavior_GetVectorParameterValue", [](UMaterialInterface &self , struct FName* ParameterName, struct FVector* OutValue) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;  bool ret =  self.Behavior_GetVectorParameterValue(pySectionIndex, ParameterName, OutValue); return py::make_tuple(ret, *pySectionIndex); })
        .def("GetVectorCurveParameterValue", &UMaterialInterface::GetVectorCurveParameterValue)
        .def("GetVectorParameterValue", &UMaterialInterface::GetVectorParameterValue)
        .def("GetTextureParameterValue", [](UMaterialInterface &self , struct FName ParameterName) { class UTexture** pyOutValue = 0 ;  bool ret =  self.GetTextureParameterValue(ParameterName, pyOutValue); return py::make_tuple(ret, *pyOutValue); })
        .def("GetScalarCurveParameterValue", &UMaterialInterface::GetScalarCurveParameterValue)
        .def("GetScalarParameterValue", [](UMaterialInterface &self , struct FName ParameterName) { float* pyOutValue = (float*)malloc(sizeof(float)) ;  bool ret =  self.GetScalarParameterValue(ParameterName, pyOutValue); return py::make_tuple(ret, *pyOutValue); })
        .def("GetFontParameterValue", [](UMaterialInterface &self , struct FName ParameterName) { class UFont** pyOutFontValue = 0 ; int* pyOutFontPage = (int*)malloc(sizeof(int)) ;  bool ret =  self.GetFontParameterValue(ParameterName, pyOutFontValue, pyOutFontPage); return py::make_tuple(ret, *pyOutFontValue, *pyOutFontPage); })
        .def("GetParameterDesc", &UMaterialInterface::GetParameterDesc)
        .def("GetPhysicalMaterial", &UMaterialInterface::GetPhysicalMaterial, py::return_value_policy::reference)
        .def("GetMaterial", &UMaterialInterface::GetMaterial, py::return_value_policy::reference)
        .def("GetSurfaceHeight", &USurface::GetSurfaceHeight)
        .def("GetSurfaceWidth", &USurface::GetSurfaceWidth)
          ;
}