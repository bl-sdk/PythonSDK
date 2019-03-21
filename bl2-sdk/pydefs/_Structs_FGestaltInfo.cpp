#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltInfo(py::object m)
{
    py::class_< FGestaltInfo >(m, "FGestaltInfo")
        .def_readwrite("Parts", &FGestaltInfo::Parts)
  ;
}