#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInterpCurvePointTwoVectors()
{
    class_< FInterpCurvePointTwoVectors >("FInterpCurvePointTwoVectors", no_init)
        .def_readwrite("InVal", &FInterpCurvePointTwoVectors::InVal)
        .def_readwrite("OutVal", &FInterpCurvePointTwoVectors::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointTwoVectors::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointTwoVectors::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointTwoVectors::InterpMode)
  ;
}