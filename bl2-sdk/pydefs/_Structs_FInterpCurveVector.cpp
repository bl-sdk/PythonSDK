#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInterpCurveVector()
{
    class_< FInterpCurveVector >("FInterpCurveVector", no_init)
        .def_readwrite("Points", &FInterpCurveVector::Points)
        .def_readwrite("InterpMethod", &FInterpCurveVector::InterpMethod)
  ;
}