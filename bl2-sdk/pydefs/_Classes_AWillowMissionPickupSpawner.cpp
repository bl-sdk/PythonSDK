#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowMissionPickupSpawner()
{
    class_< AWillowMissionPickupSpawner, bases< AActor >  , boost::noncopyable>("AWillowMissionPickupSpawner", no_init)
        .def_readwrite("VfTable_IIMission", &AWillowMissionPickupSpawner::VfTable_IIMission)
        .def_readwrite("MissionItemDef", &AWillowMissionPickupSpawner::MissionItemDef)
        .def_readwrite("LinkedAreaWaypoint", &AWillowMissionPickupSpawner::LinkedAreaWaypoint)
        .def_readwrite("ObjectiveBit", &AWillowMissionPickupSpawner::ObjectiveBit)
        .def_readwrite("MissionPickup", &AWillowMissionPickupSpawner::MissionPickup)
        .def_readwrite("Sprite", &AWillowMissionPickupSpawner::Sprite)
        .def("StaticClass", &AWillowMissionPickupSpawner::StaticClass, return_value_policy< reference_existing_object >())
        .def("RunPickupEvent", &AWillowMissionPickupSpawner::RunPickupEvent)
        .def("SetPickupStatus", &AWillowMissionPickupSpawner::SetPickupStatus)
        .def("eventMissionReactionObjectiveComplete", &AWillowMissionPickupSpawner::eventMissionReactionObjectiveComplete)
        .def("eventMissionReactionObjectiveCleared", &AWillowMissionPickupSpawner::eventMissionReactionObjectiveCleared)
        .def("eventMissionReactionObjectiveUpdated", &AWillowMissionPickupSpawner::eventMissionReactionObjectiveUpdated)
        .def("eventMissionReactionObjectiveSetChanged", &AWillowMissionPickupSpawner::eventMissionReactionObjectiveSetChanged)
        .def("eventMissionReactionStatusChanged", &AWillowMissionPickupSpawner::eventMissionReactionStatusChanged)
        .def("eventMissionReactionLevelLoad", &AWillowMissionPickupSpawner::eventMissionReactionLevelLoad)
        .def("eventPostBeginPlay", &AWillowMissionPickupSpawner::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}