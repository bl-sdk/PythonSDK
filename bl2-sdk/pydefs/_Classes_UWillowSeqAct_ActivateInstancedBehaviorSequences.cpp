#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ActivateInstancedBehaviorSequences()
{
    py::class_< UWillowSeqAct_ActivateInstancedBehaviorSequences,  USequenceAction   >("UWillowSeqAct_ActivateInstancedBehaviorSequences")
        .def_readwrite("Mission", &UWillowSeqAct_ActivateInstancedBehaviorSequences::Mission)
        .def_readwrite("MissionObjective", &UWillowSeqAct_ActivateInstancedBehaviorSequences::MissionObjective)
        .def_readwrite("SequenceName", &UWillowSeqAct_ActivateInstancedBehaviorSequences::SequenceName)
        .def("StaticClass", &UWillowSeqAct_ActivateInstancedBehaviorSequences::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}