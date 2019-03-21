#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCounterEventReactionData()
{
    class_< FCounterEventReactionData >("FCounterEventReactionData", no_init)
        .def_readwrite("EventType", &FCounterEventReactionData::EventType)
        .def_readwrite("Behaviors", &FCounterEventReactionData::Behaviors)
  ;
}