#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInterpCurveQuat()
{
    class_< FInterpCurveQuat >("FInterpCurveQuat", no_init)
        .def_readwrite("Points", &FInterpCurveQuat::Points)
        .def_readwrite("InterpMethod", &FInterpCurveQuat::InterpMethod)
  ;
}