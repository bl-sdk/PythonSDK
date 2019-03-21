#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCurveTrack()
{
    class_< FCurveTrack >("FCurveTrack", no_init)
        .def_readwrite("CurveName", &FCurveTrack::CurveName)
        .def_readwrite("CurveWeights", &FCurveTrack::CurveWeights)
  ;
}