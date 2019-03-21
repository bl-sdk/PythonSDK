#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFOscillator(py::object m)
{
    py::class_< FFOscillator >(m, "FFOscillator")
        .def_readwrite("Amplitude", &FFOscillator::Amplitude)
        .def_readwrite("Frequency", &FFOscillator::Frequency)
        .def_readwrite("InitialOffset", &FFOscillator::InitialOffset)
  ;
}