#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FROscillator()
{
    class_< FROscillator >("FROscillator", no_init)
        .def_readwrite("Pitch", &FROscillator::Pitch)
        .def_readwrite("Yaw", &FROscillator::Yaw)
        .def_readwrite("Roll", &FROscillator::Roll)
  ;
}