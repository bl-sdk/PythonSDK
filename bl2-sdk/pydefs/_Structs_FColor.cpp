#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FColor(py::module &m)
{
    py::class_< FColor >(m, "FColor")
        .def_readwrite("B", &FColor::B)
        .def_readwrite("G", &FColor::G)
        .def_readwrite("R", &FColor::R)
        .def_readwrite("A", &FColor::A)
  ;
}