#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReplicatedBehaviorConsumerState()
{
    class_< FReplicatedBehaviorConsumerState >("FReplicatedBehaviorConsumerState", no_init)
        .def_readwrite("BehaviorSequenceEnabledFlags", &FReplicatedBehaviorConsumerState::BehaviorSequenceEnabledFlags)
  ;
}