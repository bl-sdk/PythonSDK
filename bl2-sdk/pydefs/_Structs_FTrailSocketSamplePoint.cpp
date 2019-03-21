#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTrailSocketSamplePoint()
{
    class_< FTrailSocketSamplePoint >("FTrailSocketSamplePoint", no_init)
        .def_readwrite("Position", &FTrailSocketSamplePoint::Position)
        .def_readwrite("Velocity", &FTrailSocketSamplePoint::Velocity)
  ;
}