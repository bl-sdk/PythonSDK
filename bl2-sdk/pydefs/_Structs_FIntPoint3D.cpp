#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FIntPoint3D(py::object m)
{
    py::class_< FIntPoint3D >(m, "FIntPoint3D")
        .def_readwrite("X", &FIntPoint3D::X)
        .def_readwrite("Y", &FIntPoint3D::Y)
        .def_readwrite("Z", &FIntPoint3D::Z)
  ;
}