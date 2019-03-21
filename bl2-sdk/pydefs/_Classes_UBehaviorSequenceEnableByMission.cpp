#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorSequenceEnableByMission()
{
    py::class_< UBehaviorSequenceEnableByMission,  UBehaviorSequenceCustomEnableCondition   >("UBehaviorSequenceEnableByMission")
        .def_readwrite("VfTable_IIMission", &UBehaviorSequenceEnableByMission::VfTable_IIMission)
        .def_readwrite("LinkedMission", &UBehaviorSequenceEnableByMission::LinkedMission)
        .def_readwrite("MissionStatesToLinkTo", &UBehaviorSequenceEnableByMission::MissionStatesToLinkTo)
        .def_readwrite("LinkedObjective", &UBehaviorSequenceEnableByMission::LinkedObjective)
        .def_readwrite("ObjectiveStatesToLinkTo", &UBehaviorSequenceEnableByMission::ObjectiveStatesToLinkTo)
        .def_readwrite("ObjectiveSetRestrictions", &UBehaviorSequenceEnableByMission::ObjectiveSetRestrictions)
        .def("StaticClass", &UBehaviorSequenceEnableByMission::StaticClass, py::return_value_policy::reference)
        .def("eventMissionReactionObjectiveComplete", &UBehaviorSequenceEnableByMission::eventMissionReactionObjectiveComplete)
        .def("eventMissionReactionObjectiveCleared", &UBehaviorSequenceEnableByMission::eventMissionReactionObjectiveCleared)
        .def("eventMissionReactionObjectiveUpdated", &UBehaviorSequenceEnableByMission::eventMissionReactionObjectiveUpdated)
        .def("eventMissionReactionObjectiveSetChanged", &UBehaviorSequenceEnableByMission::eventMissionReactionObjectiveSetChanged)
        .def("eventMissionReactionStatusChanged", &UBehaviorSequenceEnableByMission::eventMissionReactionStatusChanged)
        .def("eventMissionReactionLevelLoad", &UBehaviorSequenceEnableByMission::eventMissionReactionLevelLoad)
        .staticmethod("StaticClass")
  ;
}