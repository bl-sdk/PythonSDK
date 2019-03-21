#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInterpCurvePointQuat()
{
    class_< FInterpCurvePointQuat >("FInterpCurvePointQuat", no_init)
        .def_readwrite("InVal", &FInterpCurvePointQuat::InVal)
        .def_readonly("UnknownData00", &FInterpCurvePointQuat::UnknownData00)
        .def_readwrite("OutVal", &FInterpCurvePointQuat::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointQuat::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointQuat::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointQuat::InterpMode)
  ;
}