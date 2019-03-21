#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCurveKey()
{
    py::class_< FCurveKey >("FCurveKey")
        .def_readwrite("CurveName", &FCurveKey::CurveName)
        .def_readwrite("Weight", &FCurveKey::Weight)
  ;
}