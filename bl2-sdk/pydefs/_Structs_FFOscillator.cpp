#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFOscillator()
{
    class_< FFOscillator >("FFOscillator", no_init)
        .def_readwrite("Amplitude", &FFOscillator::Amplitude)
        .def_readwrite("Frequency", &FFOscillator::Frequency)
        .def_readwrite("InitialOffset", &FFOscillator::InitialOffset)
  ;
}