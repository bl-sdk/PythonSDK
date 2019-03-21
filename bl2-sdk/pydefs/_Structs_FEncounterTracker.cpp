#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEncounterTracker(py::object m)
{
    py::class_< FEncounterTracker >(m, "FEncounterTracker")
        .def_readwrite("LoadedEncounter", &FEncounterTracker::LoadedEncounter)
        .def_readwrite("EncountersLevel", &FEncounterTracker::EncountersLevel)
        .def_readwrite("EncounterPath", &FEncounterTracker::EncounterPath)
        .def_readwrite("EncounterCompletionSaveState", &FEncounterTracker::EncounterCompletionSaveState)
        .def_readwrite("EncounterSaveState", &FEncounterTracker::EncounterSaveState)
        .def_readwrite("RespawnDelayStartTime", &FEncounterTracker::RespawnDelayStartTime)
  ;
}