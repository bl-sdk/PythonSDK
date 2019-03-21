#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPawnEvents()
{
    py::class_< FPawnEvents,  FEventsBase   >("FPawnEvents")
  ;
}