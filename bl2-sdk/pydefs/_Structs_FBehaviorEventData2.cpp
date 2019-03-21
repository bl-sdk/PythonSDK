#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorEventData2(py::object m)
{
    py::class_< FBehaviorEventData2 >(m, "FBehaviorEventData2")
        .def_readwrite("UserData", &FBehaviorEventData2::UserData)
        .def_readwrite("OutputVariables", &FBehaviorEventData2::OutputVariables)
        .def_readwrite("OutputLinks", &FBehaviorEventData2::OutputLinks)
  ;
}