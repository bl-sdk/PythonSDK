#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USequenceEventEnableByMission(py::object m)
{
    py::class_< USequenceEventEnableByMission,  USequenceEventCustomEnableCondition   >(m, "USequenceEventEnableByMission")
        .def_readwrite("VfTable_IIMission", &USequenceEventEnableByMission::VfTable_IIMission)
        .def_readwrite("LinkedMission", &USequenceEventEnableByMission::LinkedMission)
        .def_readwrite("MissionStatesToLinkTo", &USequenceEventEnableByMission::MissionStatesToLinkTo)
        .def_readwrite("LinkedObjective", &USequenceEventEnableByMission::LinkedObjective)
        .def_readwrite("ObjectiveStatesToLinkTo", &USequenceEventEnableByMission::ObjectiveStatesToLinkTo)
        .def_readwrite("ObjectiveSetRestrictions", &USequenceEventEnableByMission::ObjectiveSetRestrictions)
        .def("StaticClass", &USequenceEventEnableByMission::StaticClass, py::return_value_policy::reference)
        .def("eventMissionReactionObjectiveComplete", &USequenceEventEnableByMission::eventMissionReactionObjectiveComplete)
        .def("eventMissionReactionObjectiveCleared", &USequenceEventEnableByMission::eventMissionReactionObjectiveCleared)
        .def("eventMissionReactionObjectiveUpdated", &USequenceEventEnableByMission::eventMissionReactionObjectiveUpdated)
        .def("eventMissionReactionObjectiveSetChanged", &USequenceEventEnableByMission::eventMissionReactionObjectiveSetChanged)
        .def("eventMissionReactionStatusChanged", &USequenceEventEnableByMission::eventMissionReactionStatusChanged)
        .def("eventMissionReactionLevelLoad", &USequenceEventEnableByMission::eventMissionReactionLevelLoad)
          ;
}