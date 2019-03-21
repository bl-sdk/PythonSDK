#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInterpCurveLinearColor()
{
    class_< FInterpCurveLinearColor >("FInterpCurveLinearColor", no_init)
        .def_readwrite("Points", &FInterpCurveLinearColor::Points)
        .def_readwrite("InterpMethod", &FInterpCurveLinearColor::InterpMethod)
  ;
}