#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FProjectileEvents(py::module &m)
{
    py::class_< FProjectileEvents >(m, "FProjectileEvents")
        .def_readwrite("TotalEvents", &FEventsBase::TotalEvents)
        .def_readwrite("EventsByClass", &FEventsBase::EventsByClass)
  ;
}