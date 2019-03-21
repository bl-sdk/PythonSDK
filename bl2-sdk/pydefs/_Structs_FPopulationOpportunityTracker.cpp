#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulationOpportunityTracker(py::object m)
{
    py::class_< FPopulationOpportunityTracker >(m, "FPopulationOpportunityTracker")
        .def_readwrite("OpportunityOutermostName", &FPopulationOpportunityTracker::OpportunityOutermostName)
        .def_readwrite("OpportunityName", &FPopulationOpportunityTracker::OpportunityName)
        .def_readwrite("LoadedOpportunity", &FPopulationOpportunityTracker::LoadedOpportunity)
        .def_readwrite("SpawnedActors", &FPopulationOpportunityTracker::SpawnedActors)
        .def_readwrite("SavedActorsList", &FPopulationOpportunityTracker::SavedActorsList)
        .def_readwrite("ActorsRemovedWhileUnloaded", &FPopulationOpportunityTracker::ActorsRemovedWhileUnloaded)
        .def_readwrite("bTotalResetOnLevelLoad", &FPopulationOpportunityTracker::bTotalResetOnLevelLoad)
        .def_readwrite("RespawnStyle", &FPopulationOpportunityTracker::RespawnStyle)
        .def_readwrite("RespawnDelayStartTime", &FPopulationOpportunityTracker::RespawnDelayStartTime)
        .def_readwrite("SavedState", &FPopulationOpportunityTracker::SavedState)
        .def_readwrite("OpportunityCleanupParams", &FPopulationOpportunityTracker::OpportunityCleanupParams)
  ;
}