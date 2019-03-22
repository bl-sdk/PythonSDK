#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCounterEventReactionData(py::module &m)
{
    py::class_< FCounterEventReactionData >(m, "FCounterEventReactionData")
        .def_readwrite("EventType", &FCounterEventReactionData::EventType)
        .def_readwrite("Behaviors", &FCounterEventReactionData::Behaviors)
  ;
}