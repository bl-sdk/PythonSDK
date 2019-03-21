#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAggregateEventMapping()
{
    py::class_< FAggregateEventMapping >("FAggregateEventMapping")
        .def_readwrite("EventID", &FAggregateEventMapping::EventID)
        .def_readwrite("AggregateID", &FAggregateEventMapping::AggregateID)
        .def_readwrite("TargetAggregateID", &FAggregateEventMapping::TargetAggregateID)
  ;
}