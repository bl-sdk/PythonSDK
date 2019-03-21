#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorSequenceActionData2(py::object m)
{
    py::class_< FBehaviorSequenceActionData2 >(m, "FBehaviorSequenceActionData2")
        .def_readwrite("Behavior", &FBehaviorSequenceActionData2::Behavior)
        .def_readwrite("LinkedVariables", &FBehaviorSequenceActionData2::LinkedVariables)
        .def_readwrite("OutputLinks", &FBehaviorSequenceActionData2::OutputLinks)
  ;
}