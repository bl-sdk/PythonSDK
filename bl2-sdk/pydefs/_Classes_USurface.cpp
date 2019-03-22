#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USurface(py::module &m)
{
    py::class_< USurface,  UObject   >(m, "USurface")
        .def("GetSurfaceHeight", &USurface::GetSurfaceHeight)
        .def("GetSurfaceWidth", &USurface::GetSurfaceWidth)
          ;
}