#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGameEvent()
{
    py::class_< FGameEvent >("FGameEvent")
        .def_readwrite("EventCountByTimePeriod", &FGameEvent::EventCountByTimePeriod)
  ;
}