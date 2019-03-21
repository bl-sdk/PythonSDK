#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInterpCurvePointLinearColor()
{
    class_< FInterpCurvePointLinearColor >("FInterpCurvePointLinearColor", no_init)
        .def_readwrite("InVal", &FInterpCurvePointLinearColor::InVal)
        .def_readwrite("OutVal", &FInterpCurvePointLinearColor::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointLinearColor::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointLinearColor::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointLinearColor::InterpMode)
  ;
}