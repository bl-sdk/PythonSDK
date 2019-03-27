#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCurveKey(py::module &m)
{
    py::class_< FCurveKey >(m, "FCurveKey")
        .def_readwrite("CurveName", &FCurveKey::CurveName)
        .def_readwrite("Weight", &FCurveKey::Weight)
  ;
}