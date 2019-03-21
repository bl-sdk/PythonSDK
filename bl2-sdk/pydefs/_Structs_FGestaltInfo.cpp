#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltInfo()
{
    py::class_< FGestaltInfo >("FGestaltInfo")
        .def_readwrite("Parts", &FGestaltInfo::Parts)
  ;
}