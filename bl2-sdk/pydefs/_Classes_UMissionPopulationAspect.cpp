#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionPopulationAspect(py::object m)
{
    py::class_< UMissionPopulationAspect,  UPopulationAspect   >(m, "UMissionPopulationAspect")
        .def_readwrite("VfTable_IIMission", &UMissionPopulationAspect::VfTable_IIMission)
        .def_readwrite("MissionObjective", &UMissionPopulationAspect::MissionObjective)
        .def_readwrite("Activation", &UMissionPopulationAspect::Activation)
        .def_readwrite("ObjectiveUpdateSetting", &UMissionPopulationAspect::ObjectiveUpdateSetting)
        .def_readwrite("WaypointSetting", &UMissionPopulationAspect::WaypointSetting)
        .def_readwrite("WaypointActorSetting", &UMissionPopulationAspect::WaypointActorSetting)
        .def_readwrite("OverrideObjective", &UMissionPopulationAspect::OverrideObjective)
        .def_readwrite("WaypointObjectiveSetRestrictions", &UMissionPopulationAspect::WaypointObjectiveSetRestrictions)
        .def_readwrite("AreaRadius", &UMissionPopulationAspect::AreaRadius)
        .def_readwrite("ItemPools", &UMissionPopulationAspect::ItemPools)
        .def_readwrite("PickupFailsafe", &UMissionPopulationAspect::PickupFailsafe)
        .def("StaticClass", &UMissionPopulationAspect::StaticClass, py::return_value_policy::reference)
        .def("eventDenStatRemoved", &UMissionPopulationAspect::eventDenStatRemoved)
        .def("eventDenStatAdded", &UMissionPopulationAspect::eventDenStatAdded)
        .def("eventMissionReactionObjectiveComplete", &UMissionPopulationAspect::eventMissionReactionObjectiveComplete)
        .def("eventMissionReactionObjectiveCleared", &UMissionPopulationAspect::eventMissionReactionObjectiveCleared)
        .def("eventMissionReactionObjectiveUpdated", &UMissionPopulationAspect::eventMissionReactionObjectiveUpdated)
        .def("eventMissionReactionObjectiveSetChanged", &UMissionPopulationAspect::eventMissionReactionObjectiveSetChanged)
        .def("eventMissionReactionStatusChanged", &UMissionPopulationAspect::eventMissionReactionStatusChanged)
        .def("eventMissionReactionLevelLoad", &UMissionPopulationAspect::eventMissionReactionLevelLoad)
        .def("SetActivationFromMission", &UMissionPopulationAspect::SetActivationFromMission)
        .def("RemoveWaypointsFromOpportunity", &UMissionPopulationAspect::RemoveWaypointsFromOpportunity)
        .def("CreateWaypoint", &UMissionPopulationAspect::CreateWaypoint)
        .def("eventEnabledStatusChanged", &UMissionPopulationAspect::eventEnabledStatusChanged)
        .def("eventAllActorsRemoved", &UMissionPopulationAspect::eventAllActorsRemoved)
        .def("eventOnActorDeath", &UMissionPopulationAspect::eventOnActorDeath)
        .def("eventOnSpawnActor", &UMissionPopulationAspect::eventOnSpawnActor)
        .def("CreateWaypointFromWaypointSetting", &UMissionPopulationAspect::CreateWaypointFromWaypointSetting)
        .def("GrantItemsToActor", &UMissionPopulationAspect::GrantItemsToActor)
        .def("eventinitialize", &UMissionPopulationAspect::eventinitialize)
          ;
}