#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTrailSamplePoint()
{
    class_< FTrailSamplePoint >("FTrailSamplePoint", no_init)
        .def_readwrite("RelativeTime", &FTrailSamplePoint::RelativeTime)
        .def_readwrite("FirstEdgeSample", &FTrailSamplePoint::FirstEdgeSample)
        .def_readwrite("ControlPointSample", &FTrailSamplePoint::ControlPointSample)
        .def_readwrite("SecondEdgeSample", &FTrailSamplePoint::SecondEdgeSample)
  ;
}