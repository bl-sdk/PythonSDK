#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGameEvent(py::object m)
{
    py::class_< FGameEvent >(m, "FGameEvent")
        .def_readwrite("EventCountByTimePeriod", &FGameEvent::EventCountByTimePeriod)
  ;
}