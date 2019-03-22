#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionObserversData(py::module &m)
{
    py::class_< FMissionObserversData >(m, "FMissionObserversData")
        .def_readwrite("Mission", &FMissionObserversData::Mission)
        .def_readwrite("Observers", &FMissionObserversData::Observers)
  ;
}