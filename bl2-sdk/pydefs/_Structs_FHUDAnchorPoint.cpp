#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHUDAnchorPoint()
{
    py::class_< FHUDAnchorPoint >("FHUDAnchorPoint")
        .def_readwrite("MoviePoint", &FHUDAnchorPoint::MoviePoint)
        .def_readwrite("ScreenPoint", &FHUDAnchorPoint::ScreenPoint)
        .def_readonly("Offset", &FHUDAnchorPoint::Offset)
  ;
}