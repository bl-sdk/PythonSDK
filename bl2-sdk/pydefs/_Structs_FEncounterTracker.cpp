#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEncounterTracker()
{
    class_< FEncounterTracker >("FEncounterTracker", no_init)
        .def_readwrite("LoadedEncounter", &FEncounterTracker::LoadedEncounter)
        .def_readwrite("EncountersLevel", &FEncounterTracker::EncountersLevel)
        .def_readwrite("EncounterPath", &FEncounterTracker::EncounterPath)
        .def_readwrite("EncounterCompletionSaveState", &FEncounterTracker::EncounterCompletionSaveState)
        .def_readwrite("EncounterSaveState", &FEncounterTracker::EncounterSaveState)
        .def_readwrite("RespawnDelayStartTime", &FEncounterTracker::RespawnDelayStartTime)
  ;
}