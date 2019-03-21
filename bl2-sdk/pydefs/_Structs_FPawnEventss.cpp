#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPawnEvents(py::object m)
{
    py::class_< FPawnEvents,  FEventsBase   >(m, "FPawnEvents")
  ;
}