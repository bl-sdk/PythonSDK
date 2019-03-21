#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEncounterWaveTracker()
{
    class_< FEncounterWaveTracker >("FEncounterWaveTracker", no_init)
        .def_readwrite("nWaveIdx", &FEncounterWaveTracker::nWaveIdx)
        .def_readwrite("nLimitStateIdx", &FEncounterWaveTracker::nLimitStateIdx)
        .def_readwrite("LimitSaveState", &FEncounterWaveTracker::LimitSaveState)
  ;
}