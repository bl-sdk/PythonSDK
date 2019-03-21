#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTimerEventReactionData()
{
    py::class_< FTimerEventReactionData >("FTimerEventReactionData")
        .def_readwrite("EventType", &FTimerEventReactionData::EventType)
        .def_readwrite("Behaviors", &FTimerEventReactionData::Behaviors)
  ;
}