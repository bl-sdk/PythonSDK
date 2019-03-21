#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVOscillator(py::object m)
{
    py::class_< FVOscillator >(m, "FVOscillator")
        .def_readwrite("X", &FVOscillator::X)
        .def_readwrite("Y", &FVOscillator::Y)
        .def_readwrite("Z", &FVOscillator::Z)
  ;
}