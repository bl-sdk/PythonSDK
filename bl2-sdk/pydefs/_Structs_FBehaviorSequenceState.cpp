#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorSequenceState()
{
    py::class_< FBehaviorSequenceState >("FBehaviorSequenceState")
        .def_readwrite("ProvidersIndex", &FBehaviorSequenceState::ProvidersIndex)
        .def_readwrite("SequencesDataIndex", &FBehaviorSequenceState::SequencesDataIndex)
        .def_readwrite("SequenceEnabledBitIndex", &FBehaviorSequenceState::SequenceEnabledBitIndex)
        .def_readwrite("EventStateHead", &FBehaviorSequenceState::EventStateHead)
        .def_readwrite("VariableStateHead", &FBehaviorSequenceState::VariableStateHead)
  ;
}