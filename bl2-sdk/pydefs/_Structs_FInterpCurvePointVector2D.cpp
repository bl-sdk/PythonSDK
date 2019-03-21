#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInterpCurvePointVector2D()
{
    class_< FInterpCurvePointVector2D >("FInterpCurvePointVector2D", no_init)
        .def_readwrite("InVal", &FInterpCurvePointVector2D::InVal)
        .def_readwrite("OutVal", &FInterpCurvePointVector2D::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointVector2D::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointVector2D::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointVector2D::InterpMode)
  ;
}