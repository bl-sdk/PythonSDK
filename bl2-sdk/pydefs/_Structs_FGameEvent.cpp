#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGameEvent()
{
    class_< FGameEvent >("FGameEvent", no_init)
        .def_readwrite("EventCountByTimePeriod", &FGameEvent::EventCountByTimePeriod)
  ;
}