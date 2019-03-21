#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLocationInfo()
{
    py::class_< FLocationInfo >("FLocationInfo")
        .def_readwrite("Location", &FLocationInfo::Location)
  ;
}