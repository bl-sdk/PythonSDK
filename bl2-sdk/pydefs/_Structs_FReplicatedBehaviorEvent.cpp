#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedBehaviorEvent(py::object m)
{
    py::class_< FReplicatedBehaviorEvent >(m, "FReplicatedBehaviorEvent")
        .def_readwrite("SequenceIndex", &FReplicatedBehaviorEvent::SequenceIndex)
        .def_readwrite("EventCounter", &FReplicatedBehaviorEvent::EventCounter)
        .def_readwrite("EventIndex", &FReplicatedBehaviorEvent::EventIndex)
        .def_readwrite("EventOutput", &FReplicatedBehaviorEvent::EventOutput)
  ;
}