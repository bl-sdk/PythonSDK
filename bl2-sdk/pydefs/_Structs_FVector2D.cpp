#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVector2D(py::module &m)
{
    py::class_< FVector2D >(m, "FVector2D")
        .def_readwrite("X", &FVector2D::X)
        .def_readwrite("Y", &FVector2D::Y)
  ;
}