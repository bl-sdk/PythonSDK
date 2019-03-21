#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedBehaviorEvent()
{
    py::class_< FReplicatedBehaviorEvent >("FReplicatedBehaviorEvent")
        .def_readwrite("SequenceIndex", &FReplicatedBehaviorEvent::SequenceIndex)
        .def_readwrite("EventCounter", &FReplicatedBehaviorEvent::EventCounter)
        .def_readwrite("EventIndex", &FReplicatedBehaviorEvent::EventIndex)
        .def_readwrite("EventOutput", &FReplicatedBehaviorEvent::EventOutput)
  ;
}