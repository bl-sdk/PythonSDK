#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCurveEdPresetCurve(py::object m)
{
    py::class_< UCurveEdPresetCurve,  UObject   >(m, "UCurveEdPresetCurve")
        .def_readwrite("CurveName", &UCurveEdPresetCurve::CurveName)
        .def_readwrite("Points", &UCurveEdPresetCurve::Points)
        .def("StaticClass", &UCurveEdPresetCurve::StaticClass, py::return_value_policy::reference)
          ;
}