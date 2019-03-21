#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowMissionPickupFailsafe()
{
    class_< AWillowMissionPickupFailsafe, bases< AActor >  , boost::noncopyable>("AWillowMissionPickupFailsafe", no_init)
        .def_readwrite("LinkedAspect", &AWillowMissionPickupFailsafe::LinkedAspect)
        .def_readwrite("CompletedObjective", &AWillowMissionPickupFailsafe::CompletedObjective)
        .def_readwrite("ObjectiveSet", &AWillowMissionPickupFailsafe::ObjectiveSet)
        .def_readwrite("TimeToTriggerFailsafe", &AWillowMissionPickupFailsafe::TimeToTriggerFailsafe)
        .def_readwrite("MissionItem", &AWillowMissionPickupFailsafe::MissionItem)
        .def_readwrite("VfTable_IIMission", &AWillowMissionPickupSpawner::VfTable_IIMission)
        .def_readwrite("MissionItemDef", &AWillowMissionPickupSpawner::MissionItemDef)
        .def_readwrite("LinkedAreaWaypoint", &AWillowMissionPickupSpawner::LinkedAreaWaypoint)
        .def_readwrite("ObjectiveBit", &AWillowMissionPickupSpawner::ObjectiveBit)
        .def_readwrite("MissionPickup", &AWillowMissionPickupSpawner::MissionPickup)
        .def_readwrite("Sprite", &AWillowMissionPickupSpawner::Sprite)
        .def("StaticClass", &AWillowMissionPickupFailsafe::StaticClass, return_value_policy< reference_existing_object >())
        .def("EnactFailsafe", &AWillowMissionPickupFailsafe::EnactFailsafe)
        .def("CheckFailsafe", &AWillowMissionPickupFailsafe::CheckFailsafe)
        .def("SetupFailsafe", &AWillowMissionPickupFailsafe::SetupFailsafe)
        .def("WaitingForActivation", &AWillowMissionPickupFailsafe::WaitingForActivation)
        .def("SetPickup", &AWillowMissionPickupFailsafe::SetPickup)
        .def("SetFailsafePickup", &AWillowMissionPickupFailsafe::SetFailsafePickup)
        .def("SetPickupStatus", &AWillowMissionPickupFailsafe::SetPickupStatus)
        .def("RunPickupEvent", &AWillowMissionPickupSpawner::RunPickupEvent)
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