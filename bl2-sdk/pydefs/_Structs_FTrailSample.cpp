#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTrailSample()
{
    class_< FTrailSample >("FTrailSample", no_init)
        .def_readwrite("RelativeTime", &FTrailSample::RelativeTime)
        .def_readwrite("FirstEdgeSample", &FTrailSample::FirstEdgeSample)
        .def_readwrite("ControlPointSample", &FTrailSample::ControlPointSample)
        .def_readwrite("SecondEdgeSample", &FTrailSample::SecondEdgeSample)
  ;
}