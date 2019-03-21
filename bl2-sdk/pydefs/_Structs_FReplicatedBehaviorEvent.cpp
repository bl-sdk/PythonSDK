#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReplicatedBehaviorEvent()
{
    class_< FReplicatedBehaviorEvent >("FReplicatedBehaviorEvent", no_init)
        .def_readwrite("SequenceIndex", &FReplicatedBehaviorEvent::SequenceIndex)
        .def_readwrite("EventCounter", &FReplicatedBehaviorEvent::EventCounter)
        .def_readwrite("EventIndex", &FReplicatedBehaviorEvent::EventIndex)
        .def_readwrite("EventOutput", &FReplicatedBehaviorEvent::EventOutput)
  ;
}