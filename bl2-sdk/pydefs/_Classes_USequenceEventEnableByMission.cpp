#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USequenceEventEnableByMission()
{
    class_< USequenceEventEnableByMission, bases< USequenceEventCustomEnableCondition >  , boost::noncopyable>("USequenceEventEnableByMission", no_init)
        .def_readwrite("VfTable_IIMission", &USequenceEventEnableByMission::VfTable_IIMission)
        .def_readwrite("LinkedMission", &USequenceEventEnableByMission::LinkedMission)
        .def_readwrite("MissionStatesToLinkTo", &USequenceEventEnableByMission::MissionStatesToLinkTo)
        .def_readwrite("LinkedObjective", &USequenceEventEnableByMission::LinkedObjective)
        .def_readwrite("ObjectiveStatesToLinkTo", &USequenceEventEnableByMission::ObjectiveStatesToLinkTo)
        .def_readwrite("ObjectiveSetRestrictions", &USequenceEventEnableByMission::ObjectiveSetRestrictions)
        .def("StaticClass", &USequenceEventEnableByMission::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventMissionReactionObjectiveComplete", &USequenceEventEnableByMission::eventMissionReactionObjectiveComplete)
        .def("eventMissionReactionObjectiveCleared", &USequenceEventEnableByMission::eventMissionReactionObjectiveCleared)
        .def("eventMissionReactionObjectiveUpdated", &USequenceEventEnableByMission::eventMissionReactionObjectiveUpdated)
        .def("eventMissionReactionObjectiveSetChanged", &USequenceEventEnableByMission::eventMissionReactionObjectiveSetChanged)
        .def("eventMissionReactionStatusChanged", &USequenceEventEnableByMission::eventMissionReactionStatusChanged)
        .def("eventMissionReactionLevelLoad", &USequenceEventEnableByMission::eventMissionReactionLevelLoad)
        .staticmethod("StaticClass")
  ;
}