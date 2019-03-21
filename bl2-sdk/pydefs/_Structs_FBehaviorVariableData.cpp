#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorVariableData()
{
    py::class_< FBehaviorVariableData >("FBehaviorVariableData")
        .def_readwrite("Name", &FBehaviorVariableData::Name)
        .def_readwrite("Type", &FBehaviorVariableData::Type)
        .def_readwrite("Value", &FBehaviorVariableData::Value)
  ;
}