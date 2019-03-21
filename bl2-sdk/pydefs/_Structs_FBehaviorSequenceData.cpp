#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorSequenceData()
{
    class_< FBehaviorSequenceData >("FBehaviorSequenceData", no_init)
        .def_readwrite("BehaviorSequenceName", &FBehaviorSequenceData::BehaviorSequenceName)
        .def_readwrite("CustomEnableCondition", &FBehaviorSequenceData::CustomEnableCondition)
        .def_readwrite("EventData", &FBehaviorSequenceData::EventData)
        .def_readwrite("EventData2", &FBehaviorSequenceData::EventData2)
        .def_readwrite("BehaviorData", &FBehaviorSequenceData::BehaviorData)
        .def_readwrite("BehaviorData2", &FBehaviorSequenceData::BehaviorData2)
        .def_readwrite("VariableData", &FBehaviorSequenceData::VariableData)
        .def_readwrite("ConsolidatedOutputLinkData", &FBehaviorSequenceData::ConsolidatedOutputLinkData)
        .def_readwrite("ConsolidatedVariableLinkData", &FBehaviorSequenceData::ConsolidatedVariableLinkData)
        .def_readwrite("ConsolidatedLinkedVariables", &FBehaviorSequenceData::ConsolidatedLinkedVariables)
  ;
}