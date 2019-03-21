#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAggregateEventMapping()
{
    class_< FAggregateEventMapping >("FAggregateEventMapping", no_init)
        .def_readwrite("EventID", &FAggregateEventMapping::EventID)
        .def_readwrite("AggregateID", &FAggregateEventMapping::AggregateID)
        .def_readwrite("TargetAggregateID", &FAggregateEventMapping::TargetAggregateID)
  ;
}