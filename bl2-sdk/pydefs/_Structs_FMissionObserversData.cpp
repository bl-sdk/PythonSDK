#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionObserversData()
{
    py::class_< FMissionObserversData >("FMissionObserversData")
        .def_readwrite("Mission", &FMissionObserversData::Mission)
        .def_readwrite("Observers", &FMissionObserversData::Observers)
  ;
}