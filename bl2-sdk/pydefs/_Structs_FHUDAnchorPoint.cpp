#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHUDAnchorPoint(py::module &m)
{
    py::class_< FHUDAnchorPoint >(m, "FHUDAnchorPoint")
        .def_readwrite("MoviePoint", &FHUDAnchorPoint::MoviePoint)
        .def_readwrite("ScreenPoint", &FHUDAnchorPoint::ScreenPoint)
  ;
}