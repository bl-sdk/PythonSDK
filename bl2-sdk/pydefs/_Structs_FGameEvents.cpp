#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGameEvents()
{
    py::class_< FGameEvents >("FGameEvents")
        .def_readwrite("Events", &FGameEvents::Events)
  ;
}