#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHomingRadiusThreshold()
{
    class_< FHomingRadiusThreshold >("FHomingRadiusThreshold", no_init)
        .def_readwrite("Radius", &FHomingRadiusThreshold::Radius)
        .def_readwrite("MaxAngleCos", &FHomingRadiusThreshold::MaxAngleCos)
        .def_readwrite("Behaviors", &FHomingRadiusThreshold::Behaviors)
  ;
}