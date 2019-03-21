#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedBehaviorConsumerState()
{
    py::class_< FReplicatedBehaviorConsumerState >("FReplicatedBehaviorConsumerState")
        .def_readwrite("BehaviorSequenceEnabledFlags", &FReplicatedBehaviorConsumerState::BehaviorSequenceEnabledFlags)
  ;
}