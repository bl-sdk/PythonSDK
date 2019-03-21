#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCurveEdPresetCurve()
{
    class_< UCurveEdPresetCurve, bases< UObject >  , boost::noncopyable>("UCurveEdPresetCurve", no_init)
        .def_readwrite("CurveName", &UCurveEdPresetCurve::CurveName)
        .def_readwrite("Points", &UCurveEdPresetCurve::Points)
        .def("StaticClass", &UCurveEdPresetCurve::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}