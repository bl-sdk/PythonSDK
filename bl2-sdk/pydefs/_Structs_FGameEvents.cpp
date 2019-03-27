#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGameEvents(py::module &m)
{
    py::class_< FGameEvents >(m, "FGameEvents")
        .def_readwrite("Events", &FGameEvents::Events)
  ;
}