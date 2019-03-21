#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVector4()
{
    py::class_< FVector4 >("FVector4")
        .def_readwrite("X", &FVector4::X)
        .def_readwrite("Y", &FVector4::Y)
        .def_readwrite("Z", &FVector4::Z)
        .def_readwrite("W", &FVector4::W)
  ;
}