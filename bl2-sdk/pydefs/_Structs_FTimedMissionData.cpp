#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTimedMissionData(py::module &m)
{
    py::class_< FTimedMissionData >(m, "FTimedMissionData")
        .def_readwrite("Mission", &FTimedMissionData::Mission)
        .def_readwrite("SecondsLeft", &FTimedMissionData::SecondsLeft)
  ;
}