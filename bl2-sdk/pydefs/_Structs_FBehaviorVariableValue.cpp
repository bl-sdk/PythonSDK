#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorVariableValue()
{
    class_< FBehaviorVariableValue >("FBehaviorVariableValue", no_init)
        .def_readwrite("IntValue", &FBehaviorVariableValue::IntValue)
        .def_readwrite("FloatValue", &FBehaviorVariableValue::FloatValue)
        .def_readwrite("VectorValue", &FBehaviorVariableValue::VectorValue)
        .def_readwrite("ObjectValue", &FBehaviorVariableValue::ObjectValue)
        .def_readwrite("VariableType", &FBehaviorVariableValue::VariableType)
  ;
}