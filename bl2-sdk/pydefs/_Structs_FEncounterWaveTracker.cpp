#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEncounterWaveTracker(py::module &m)
{
    py::class_< FEncounterWaveTracker >(m, "FEncounterWaveTracker")
        .def_readwrite("nWaveIdx", &FEncounterWaveTracker::nWaveIdx)
        .def_readwrite("nLimitStateIdx", &FEncounterWaveTracker::nLimitStateIdx)
        .def_readwrite("LimitSaveState", &FEncounterWaveTracker::LimitSaveState)
  ;
}