#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorVariableValue()
{
    py::class_< FBehaviorVariableValue >("FBehaviorVariableValue")
        .def_readwrite("IntValue", &FBehaviorVariableValue::IntValue)
        .def_readwrite("FloatValue", &FBehaviorVariableValue::FloatValue)
        .def_readwrite("VectorValue", &FBehaviorVariableValue::VectorValue)
        .def_readwrite("ObjectValue", &FBehaviorVariableValue::ObjectValue)
        .def_readwrite("VariableType", &FBehaviorVariableValue::VariableType)
  ;
}