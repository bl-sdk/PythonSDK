#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowMissionPickupSpawner(py::module &m)
{
    py::class_< AWillowMissionPickupSpawner,  AActor   >(m, "AWillowMissionPickupSpawner")
        .def_readwrite("VfTable_IIMission", &AWillowMissionPickupSpawner::VfTable_IIMission)
        .def_readwrite("MissionItemDef", &AWillowMissionPickupSpawner::MissionItemDef)
        .def_readwrite("LinkedAreaWaypoint", &AWillowMissionPickupSpawner::LinkedAreaWaypoint)
        .def_readwrite("ObjectiveBit", &AWillowMissionPickupSpawner::ObjectiveBit)
        .def_readwrite("MissionPickup", &AWillowMissionPickupSpawner::MissionPickup)
        .def_readwrite("Sprite", &AWillowMissionPickupSpawner::Sprite)
        .def("RunPickupEvent", &AWillowMissionPickupSpawner::RunPickupEvent)
        .def("SetPickupStatus", &AWillowMissionPickupSpawner::SetPickupStatus)
        .def("eventMissionReactionObjectiveComplete", &AWillowMissionPickupSpawner::eventMissionReactionObjectiveComplete)
        .def("eventMissionReactionObjectiveCleared", &AWillowMissionPickupSpawner::eventMissionReactionObjectiveCleared)
        .def("eventMissionReactionObjectiveUpdated", &AWillowMissionPickupSpawner::eventMissionReactionObjectiveUpdated)
        .def("eventMissionReactionObjectiveSetChanged", &AWillowMissionPickupSpawner::eventMissionReactionObjectiveSetChanged)
        .def("eventMissionReactionStatusChanged", &AWillowMissionPickupSpawner::eventMissionReactionStatusChanged)
        .def("eventMissionReactionLevelLoad", &AWillowMissionPickupSpawner::eventMissionReactionLevelLoad)
        .def("eventPostBeginPlay", &AWillowMissionPickupSpawner::eventPostBeginPlay)
          ;
}