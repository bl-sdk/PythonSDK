#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInterpCurveFloat()
{
    class_< FInterpCurveFloat >("FInterpCurveFloat", no_init)
        .def_readwrite("Points", &FInterpCurveFloat::Points)
        .def_readwrite("InterpMethod", &FInterpCurveFloat::InterpMethod)
  ;
}