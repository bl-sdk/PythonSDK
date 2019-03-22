#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLinearColor(py::module &m)
{
    py::class_< FLinearColor >(m, "FLinearColor")
        .def_readwrite("R", &FLinearColor::R)
        .def_readwrite("G", &FLinearColor::G)
        .def_readwrite("B", &FLinearColor::B)
        .def_readwrite("A", &FLinearColor::A)
  ;
}