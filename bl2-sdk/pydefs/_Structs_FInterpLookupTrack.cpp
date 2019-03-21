#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpLookupTrack()
{
    py::class_< FInterpLookupTrack >("FInterpLookupTrack")
        .def_readwrite("Points", &FInterpLookupTrack::Points)
  ;
}