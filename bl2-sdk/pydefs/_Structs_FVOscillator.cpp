#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVOscillator()
{
    py::class_< FVOscillator >("FVOscillator")
        .def_readwrite("X", &FVOscillator::X)
        .def_readwrite("Y", &FVOscillator::Y)
        .def_readwrite("Z", &FVOscillator::Z)
  ;
}