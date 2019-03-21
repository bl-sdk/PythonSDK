#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTimedMissionData()
{
    py::class_< FTimedMissionData >("FTimedMissionData")
        .def_readwrite("Mission", &FTimedMissionData::Mission)
        .def_readwrite("SecondsLeft", &FTimedMissionData::SecondsLeft)
  ;
}