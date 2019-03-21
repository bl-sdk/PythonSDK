#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCustomEventReactionData()
{
    py::class_< FCustomEventReactionData >("FCustomEventReactionData")
        .def_readwrite("EventName", &FCustomEventReactionData::EventName)
        .def_readwrite("Behaviors", &FCustomEventReactionData::Behaviors)
  ;
}