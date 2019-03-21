#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRootMotionCurve()
{
    class_< FRootMotionCurve >("FRootMotionCurve", no_init)
        .def_readwrite("AnimName", &FRootMotionCurve::AnimName)
        .def_readwrite("Curve", &FRootMotionCurve::Curve)
        .def_readwrite("MaxCurveTime", &FRootMotionCurve::MaxCurveTime)
  ;
}