#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAggregateEventMapping(py::object m)
{
    py::class_< FAggregateEventMapping >(m, "FAggregateEventMapping")
        .def_readwrite("EventID", &FAggregateEventMapping::EventID)
        .def_readwrite("AggregateID", &FAggregateEventMapping::AggregateID)
        .def_readwrite("TargetAggregateID", &FAggregateEventMapping::TargetAggregateID)
  ;
}