#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLensFlareElementCurvePair()
{
    class_< FLensFlareElementCurvePair >("FLensFlareElementCurvePair", no_init)
        .def_readwrite("CurveName", &FLensFlareElementCurvePair::CurveName)
        .def_readwrite("CurveObject", &FLensFlareElementCurvePair::CurveObject)
  ;
}