#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorSequenceState()
{
    class_< FBehaviorSequenceState >("FBehaviorSequenceState", no_init)
        .def_readwrite("ProvidersIndex", &FBehaviorSequenceState::ProvidersIndex)
        .def_readwrite("SequencesDataIndex", &FBehaviorSequenceState::SequencesDataIndex)
        .def_readwrite("SequenceEnabledBitIndex", &FBehaviorSequenceState::SequenceEnabledBitIndex)
        .def_readwrite("EventStateHead", &FBehaviorSequenceState::EventStateHead)
        .def_readwrite("VariableStateHead", &FBehaviorSequenceState::VariableStateHead)
  ;
}