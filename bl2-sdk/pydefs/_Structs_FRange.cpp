#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRange()
{
    py::class_< FRange >("FRange")
        .def_readwrite("MinValue", &FRange::MinValue)
        .def_readwrite("MaxValue", &FRange::MaxValue)
  ;
}