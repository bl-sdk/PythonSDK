#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPackedNormal(py::object m)
{
    py::class_< FPackedNormal >(m, "FPackedNormal")
        .def_readwrite("X", &FPackedNormal::X)
        .def_readwrite("Y", &FPackedNormal::Y)
        .def_readwrite("Z", &FPackedNormal::Z)
        .def_readwrite("W", &FPackedNormal::W)
  ;
}