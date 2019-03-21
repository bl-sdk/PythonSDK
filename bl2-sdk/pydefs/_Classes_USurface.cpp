#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USurface()
{
    py::class_< USurface,  UObject   >("USurface")
        .def("StaticClass", &USurface::StaticClass, py::return_value_policy::reference)
        .def("GetSurfaceHeight", &USurface::GetSurfaceHeight)
        .def("GetSurfaceWidth", &USurface::GetSurfaceWidth)
        .staticmethod("StaticClass")
  ;
}