#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FQuat(py::module &m)
{
    py::class_< FQuat >(m, "FQuat")
        .def_readwrite("X", &FQuat::X)
        .def_readwrite("Y", &FQuat::Y)
        .def_readwrite("Z", &FQuat::Z)
        .def_readwrite("W", &FQuat::W)
  ;
}