#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIParameterBehavior(py::module &m)
{
    py::class_< UIParameterBehavior,  UInterface   >(m, "UIParameterBehavior")
        .def("Behavior_SetColorParameterValue", [](UIParameterBehavior &self , struct FName* ParameterName, struct FLinearColor* Value) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;   self.Behavior_SetColorParameterValue(pySectionIndex, ParameterName, Value); return py::make_tuple(*pySectionIndex); })
        .def("Behavior_SetFloatParameterValue", [](UIParameterBehavior &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; float* pyValue = (float*)malloc(sizeof(float)) ;   self.Behavior_SetFloatParameterValue(pySectionIndex, ParameterName, pyValue); return py::make_tuple(*pySectionIndex, *pyValue); })
        .def("Behavior_SetObjectParameterValue", [](UIParameterBehavior &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; class UObject** pyValue = 0 ;   self.Behavior_SetObjectParameterValue(pySectionIndex, ParameterName, pyValue); return py::make_tuple(*pySectionIndex, *pyValue); })
        .def("Behavior_SetVectorParameterValue", [](UIParameterBehavior &self , struct FName* ParameterName, struct FVector* Value) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;   self.Behavior_SetVectorParameterValue(pySectionIndex, ParameterName, Value); return py::make_tuple(*pySectionIndex); })
        .def("Behavior_GetColorParameterValue", [](UIParameterBehavior &self , struct FName* ParameterName, struct FLinearColor* OutValue) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;  bool ret =  self.Behavior_GetColorParameterValue(pySectionIndex, ParameterName, OutValue); return py::make_tuple(ret, *pySectionIndex); })
        .def("Behavior_GetFloatParameterValue", [](UIParameterBehavior &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; float* pyOutValue = (float*)malloc(sizeof(float)) ;  bool ret =  self.Behavior_GetFloatParameterValue(pySectionIndex, ParameterName, pyOutValue); return py::make_tuple(ret, *pySectionIndex, *pyOutValue); })
        .def("Behavior_GetObjectParameterValue", [](UIParameterBehavior &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; class UObject** pyOutValue = 0 ;  bool ret =  self.Behavior_GetObjectParameterValue(pySectionIndex, ParameterName, pyOutValue); return py::make_tuple(ret, *pySectionIndex, *pyOutValue); })
        .def("Behavior_GetVectorParameterValue", [](UIParameterBehavior &self , struct FName* ParameterName, struct FVector* OutValue) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;  bool ret =  self.Behavior_GetVectorParameterValue(pySectionIndex, ParameterName, OutValue); return py::make_tuple(ret, *pySectionIndex); })
          ;
}