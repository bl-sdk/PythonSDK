#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCustomEventReactionData(py::object m)
{
    py::class_< FCustomEventReactionData >(m, "FCustomEventReactionData")
        .def_readwrite("EventName", &FCustomEventReactionData::EventName)
        .def_readwrite("Behaviors", &FCustomEventReactionData::Behaviors)
  ;
}