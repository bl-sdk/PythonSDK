#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorEventData()
{
    py::class_< FBehaviorEventData >("FBehaviorEventData")
        .def_readwrite("UserData", &FBehaviorEventData::UserData)
        .def_readwrite("OutputVariables", &FBehaviorEventData::OutputVariables)
        .def_readwrite("OutputLinks", &FBehaviorEventData::OutputLinks)
  ;
}