#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVOscillator()
{
    class_< FVOscillator >("FVOscillator", no_init)
        .def_readwrite("X", &FVOscillator::X)
        .def_readwrite("Y", &FVOscillator::Y)
        .def_readwrite("Z", &FVOscillator::Z)
  ;
}