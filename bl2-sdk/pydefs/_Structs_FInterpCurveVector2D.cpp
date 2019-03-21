#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInterpCurveVector2D()
{
    class_< FInterpCurveVector2D >("FInterpCurveVector2D", no_init)
        .def_readwrite("Points", &FInterpCurveVector2D::Points)
        .def_readwrite("InterpMethod", &FInterpCurveVector2D::InterpMethod)
  ;
}