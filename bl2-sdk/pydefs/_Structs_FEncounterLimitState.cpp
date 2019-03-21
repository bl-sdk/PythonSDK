#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEncounterLimitState()
{
    py::class_< FEncounterLimitState >("FEncounterLimitState")
        .def_readwrite("NumTotalSpawned", &FEncounterLimitState::NumTotalSpawned)
        .def_readwrite("NumCurrentlyActive", &FEncounterLimitState::NumCurrentlyActive)
  ;
}