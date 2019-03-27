#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEventsBase(py::module &m)
{
    py::class_< FEventsBase >(m, "FEventsBase")
        .def_readwrite("TotalEvents", &FEventsBase::TotalEvents)
        .def_readwrite("EventsByClass", &FEventsBase::EventsByClass)
  ;
}