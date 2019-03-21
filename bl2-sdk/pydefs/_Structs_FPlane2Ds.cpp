#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlane2D(py::object m)
{
    py::class_< FPlane2D,  FVector2D   >(m, "FPlane2D")
        .def_readwrite("W", &FPlane2D::W)
  ;
}