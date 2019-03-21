#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorVariableState()
{
    py::class_< FBehaviorVariableState >("FBehaviorVariableState")
        .def_readwrite("Name", &FBehaviorVariableState::Name)
        .def_readwrite("Type", &FBehaviorVariableState::Type)
        .def_readwrite("Value", &FBehaviorVariableState::Value)
  ;
}