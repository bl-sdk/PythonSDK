#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTimerEventReactionData()
{
    class_< FTimerEventReactionData >("FTimerEventReactionData", no_init)
        .def_readwrite("EventType", &FTimerEventReactionData::EventType)
        .def_readwrite("Behaviors", &FTimerEventReactionData::Behaviors)
  ;
}