#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRotator()
{
    class_< FRotator >("FRotator", no_init)
        .def_readwrite("Pitch", &FRotator::Pitch)
        .def_readwrite("Yaw", &FRotator::Yaw)
        .def_readwrite("Roll", &FRotator::Roll)
  ;
}