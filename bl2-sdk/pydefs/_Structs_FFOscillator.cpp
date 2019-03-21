#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFOscillator()
{
    py::class_< FFOscillator >("FFOscillator")
        .def_readwrite("Amplitude", &FFOscillator::Amplitude)
        .def_readwrite("Frequency", &FFOscillator::Frequency)
        .def_readwrite("InitialOffset", &FFOscillator::InitialOffset)
  ;
}