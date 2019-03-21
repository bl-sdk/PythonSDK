#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCurveEdPresetCurve()
{
    py::class_< UCurveEdPresetCurve,  UObject   >("UCurveEdPresetCurve")
        .def_readwrite("CurveName", &UCurveEdPresetCurve::CurveName)
        .def_readwrite("Points", &UCurveEdPresetCurve::Points)
        .def("StaticClass", &UCurveEdPresetCurve::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}