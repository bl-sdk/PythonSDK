#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLocationInfo(py::module &m)
{
    py::class_< FLocationInfo >(m, "FLocationInfo")
        .def_readwrite("Location", &FLocationInfo::Location)
  ;
}