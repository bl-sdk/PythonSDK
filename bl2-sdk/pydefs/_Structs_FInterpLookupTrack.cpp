#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpLookupTrack(py::object m)
{
    py::class_< FInterpLookupTrack >(m, "FInterpLookupTrack")
        .def_readwrite("Points", &FInterpLookupTrack::Points)
  ;
}