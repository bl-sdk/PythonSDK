#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorSequenceActionData(py::object m)
{
    py::class_< FBehaviorSequenceActionData >(m, "FBehaviorSequenceActionData")
        .def_readwrite("Behavior", &FBehaviorSequenceActionData::Behavior)
        .def_readwrite("ContextVariables", &FBehaviorSequenceActionData::ContextVariables)
        .def_readwrite("LinkedVariables", &FBehaviorSequenceActionData::LinkedVariables)
        .def_readwrite("OutputVariables", &FBehaviorSequenceActionData::OutputVariables)
        .def_readwrite("OutputLinks", &FBehaviorSequenceActionData::OutputLinks)
  ;
}