#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInterpCurvePointVector()
{
    class_< FInterpCurvePointVector >("FInterpCurvePointVector", no_init)
        .def_readwrite("InVal", &FInterpCurvePointVector::InVal)
        .def_readwrite("OutVal", &FInterpCurvePointVector::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointVector::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointVector::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointVector::InterpMode)
  ;
}