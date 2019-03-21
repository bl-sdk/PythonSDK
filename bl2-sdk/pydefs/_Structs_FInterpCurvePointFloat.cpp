#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInterpCurvePointFloat()
{
    class_< FInterpCurvePointFloat >("FInterpCurvePointFloat", no_init)
        .def_readwrite("InVal", &FInterpCurvePointFloat::InVal)
        .def_readwrite("OutVal", &FInterpCurvePointFloat::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointFloat::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointFloat::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointFloat::InterpMode)
  ;
}