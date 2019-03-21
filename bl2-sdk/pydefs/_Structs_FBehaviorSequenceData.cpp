#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorSequenceData(py::object m)
{
    py::class_< FBehaviorSequenceData >(m, "FBehaviorSequenceData")
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