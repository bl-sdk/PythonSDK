#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCustomEventReactionData()
{
    class_< FCustomEventReactionData >("FCustomEventReactionData", no_init)
        .def_readwrite("EventName", &FCustomEventReactionData::EventName)
        .def_readwrite("Behaviors", &FCustomEventReactionData::Behaviors)
  ;
}