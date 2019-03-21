#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorEventData2()
{
    py::class_< FBehaviorEventData2 >("FBehaviorEventData2")
        .def_readwrite("UserData", &FBehaviorEventData2::UserData)
        .def_readwrite("OutputVariables", &FBehaviorEventData2::OutputVariables)
        .def_readwrite("OutputLinks", &FBehaviorEventData2::OutputLinks)
  ;
}