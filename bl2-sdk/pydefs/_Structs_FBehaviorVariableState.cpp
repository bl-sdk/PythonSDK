#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorVariableState(py::module &m)
{
    py::class_< FBehaviorVariableState >(m, "FBehaviorVariableState")
        .def_readwrite("Name", &FBehaviorVariableState::Name)
        .def_readwrite("Type", &FBehaviorVariableState::Type)
        .def_readwrite("Value", &FBehaviorVariableState::Value)
  ;
}