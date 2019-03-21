#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehaviorSequenceEnableByMission()
{
    class_< UBehaviorSequenceEnableByMission, bases< UBehaviorSequenceCustomEnableCondition >  , boost::noncopyable>("UBehaviorSequenceEnableByMission", no_init)
        .def_readwrite("VfTable_IIMission", &UBehaviorSequenceEnableByMission::VfTable_IIMission)
        .def_readwrite("LinkedMission", &UBehaviorSequenceEnableByMission::LinkedMission)
        .def_readwrite("MissionStatesToLinkTo", &UBehaviorSequenceEnableByMission::MissionStatesToLinkTo)
        .def_readwrite("LinkedObjective", &UBehaviorSequenceEnableByMission::LinkedObjective)
        .def_readwrite("ObjectiveStatesToLinkTo", &UBehaviorSequenceEnableByMission::ObjectiveStatesToLinkTo)
        .def_readwrite("ObjectiveSetRestrictions", &UBehaviorSequenceEnableByMission::ObjectiveSetRestrictions)
        .def("StaticClass", &UBehaviorSequenceEnableByMission::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventMissionReactionObjectiveComplete", &UBehaviorSequenceEnableByMission::eventMissionReactionObjectiveComplete)
        .def("eventMissionReactionObjectiveCleared", &UBehaviorSequenceEnableByMission::eventMissionReactionObjectiveCleared)
        .def("eventMissionReactionObjectiveUpdated", &UBehaviorSequenceEnableByMission::eventMissionReactionObjectiveUpdated)
        .def("eventMissionReactionObjectiveSetChanged", &UBehaviorSequenceEnableByMission::eventMissionReactionObjectiveSetChanged)
        .def("eventMissionReactionStatusChanged", &UBehaviorSequenceEnableByMission::eventMissionReactionStatusChanged)
        .def("eventMissionReactionLevelLoad", &UBehaviorSequenceEnableByMission::eventMissionReactionLevelLoad)
        .staticmethod("StaticClass")
  ;
}