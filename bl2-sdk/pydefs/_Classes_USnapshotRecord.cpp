#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USnapshotRecord()
{
    class_< USnapshotRecord, bases< USnapshotInterface >  , boost::noncopyable>("USnapshotRecord", no_init)
        .def_readwrite("MyName", &USnapshotRecord::MyName)
        .def_readwrite("RuleSet", &USnapshotRecord::RuleSet)
        .def_readwrite("CurrentRules", &USnapshotRecord::CurrentRules)
        .def_readonly("ContainedRules", &USnapshotRecord::ContainedRules)
        .def_readwrite("SelectedRuleIdx", &USnapshotRecord::SelectedRuleIdx)
        .def_readwrite("SelectedSubRuleIdx", &USnapshotRecord::SelectedSubRuleIdx)
        .def_readwrite("ResourcesInUse", &USnapshotRecord::ResourcesInUse)
        .def_readwrite("Flags", &USnapshotRecord::Flags)
        .def_readwrite("Location", &USnapshotRecord::Location)
        .def_readwrite("Velocity", &USnapshotRecord::Velocity)
        .def_readwrite("Rotation", &USnapshotRecord::Rotation)
        .def_readwrite("RuleAffected", &USnapshotRecord::RuleAffected)
        .def_readwrite("Rule2Affected", &USnapshotRecord::Rule2Affected)
        .def_readwrite("SequenceAffected", &USnapshotRecord::SequenceAffected)
        .def_readwrite("Sequence2Affected", &USnapshotRecord::Sequence2Affected)
        .def_readwrite("Event", &USnapshotRecord::Event)
        .def_readwrite("RuleStartName", &USnapshotRecord::RuleStartName)
        .def_readwrite("RuleEndName", &USnapshotRecord::RuleEndName)
        .def_readwrite("RuleInterruptName", &USnapshotRecord::RuleInterruptName)
        .def_readwrite("ChildSequenceStartName", &USnapshotRecord::ChildSequenceStartName)
        .def_readwrite("SwitchRuleSetName", &USnapshotRecord::SwitchRuleSetName)
        .def_readwrite("PreventNewRulesName", &USnapshotRecord::PreventNewRulesName)
        .def_readwrite("RunningRulesColor", &USnapshotRecord::RunningRulesColor)
        .def_readwrite("StalledRulesColor", &USnapshotRecord::StalledRulesColor)
        .def_readwrite("NotRunningRulesColor", &USnapshotRecord::NotRunningRulesColor)
        .def_readwrite("DisabledRulesColor", &USnapshotRecord::DisabledRulesColor)
        .def_readwrite("FlagsColor", &USnapshotRecord::FlagsColor)
        .def_readwrite("ResourcesColor", &USnapshotRecord::ResourcesColor)
        .def("StaticClass", &USnapshotRecord::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}