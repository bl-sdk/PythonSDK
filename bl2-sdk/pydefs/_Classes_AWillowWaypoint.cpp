#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowWaypoint(py::object m)
{
    py::class_< AWillowWaypoint,  ATrigger   >(m, "AWillowWaypoint")
        .def_readwrite("VfTable_IIMission", &AWillowWaypoint::VfTable_IIMission)
        .def_readwrite("WaypointInfo", &AWillowWaypoint::WaypointInfo)
        .def_readwrite("AreaRadius", &AWillowWaypoint::AreaRadius)
        .def_readwrite("TouchVolumes", &AWillowWaypoint::TouchVolumes)
        .def_readwrite("VfTable_IIUsable", &AWillowTrigger::VfTable_IIUsable)
        .def_readwrite("HUDIcon", &AWillowTrigger::HUDIcon)
        .def_readwrite("CostsToUseType", &AWillowTrigger::CostsToUseType)
        .def_readwrite("HUDIconDef", &AWillowTrigger::HUDIconDef)
        .def_readwrite("ParticleHighlight", &AWillowTrigger::ParticleHighlight)
        .def_readwrite("TriggerSprite", &AWillowTrigger::TriggerSprite)
        .def_readwrite("CostsToUseAmount", &AWillowTrigger::CostsToUseAmount)
        .def("StaticClass", &AWillowWaypoint::StaticClass, py::return_value_policy::reference)
        .def("eventMissionReactionObjectiveComplete", &AWillowWaypoint::eventMissionReactionObjectiveComplete)
        .def("eventMissionReactionObjectiveCleared", &AWillowWaypoint::eventMissionReactionObjectiveCleared)
        .def("eventMissionReactionObjectiveUpdated", &AWillowWaypoint::eventMissionReactionObjectiveUpdated)
        .def("eventMissionReactionObjectiveSetChanged", &AWillowWaypoint::eventMissionReactionObjectiveSetChanged)
        .def("eventMissionReactionLevelLoad", &AWillowWaypoint::eventMissionReactionLevelLoad)
        .def("eventMissionReactionStatusChanged", &AWillowWaypoint::eventMissionReactionStatusChanged)
        .def("ClearWaypoint", &AWillowWaypoint::ClearWaypoint)
        .def("ProcessPlayerTouch", &AWillowWaypoint::ProcessPlayerTouch)
        .def("eventTouch", &AWillowWaypoint::eventTouch)
        .def("PostBeginPlay", &AWillowWaypoint::PostBeginPlay)
        .def("NotifyUserCouldNotAffordAttemptedUse", &AWillowTrigger::NotifyUserCouldNotAffordAttemptedUse)
        .def("SetInteractionIcon", &AWillowTrigger::SetInteractionIcon)
        .def("UseObject", &AWillowTrigger::UseObject)
          ;
}