#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEncounterLimitState()
{
    class_< FEncounterLimitState >("FEncounterLimitState", no_init)
        .def_readwrite("NumTotalSpawned", &FEncounterLimitState::NumTotalSpawned)
        .def_readwrite("NumCurrentlyActive", &FEncounterLimitState::NumCurrentlyActive)
  ;
}