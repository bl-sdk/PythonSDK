#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ActivateInstancedBehaviorSequences(py::module &m)
{
    py::class_< UWillowSeqAct_ActivateInstancedBehaviorSequences,  USequenceAction   >(m, "UWillowSeqAct_ActivateInstancedBehaviorSequences")
		.def_static("StaticClass", &UWillowSeqAct_ActivateInstancedBehaviorSequences::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Mission", &UWillowSeqAct_ActivateInstancedBehaviorSequences::Mission)
        .def_readwrite("MissionObjective", &UWillowSeqAct_ActivateInstancedBehaviorSequences::MissionObjective)
        .def_readwrite("SequenceName", &UWillowSeqAct_ActivateInstancedBehaviorSequences::SequenceName)
          ;
}