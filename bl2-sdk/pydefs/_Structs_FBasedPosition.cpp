#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBasedPosition()
{
    py::class_< FBasedPosition >("FBasedPosition")
        .def_readwrite("Base", &FBasedPosition::Base)
        .def_readwrite("Position", &FBasedPosition::Position)
        .def_readwrite("CachedBaseLocation", &FBasedPosition::CachedBaseLocation)
        .def_readwrite("CachedBaseRotation", &FBasedPosition::CachedBaseRotation)
        .def_readwrite("CachedTransPosition", &FBasedPosition::CachedTransPosition)
  ;
}