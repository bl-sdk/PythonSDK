#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleCurvePair(py::module &m)
{
    py::class_< FParticleCurvePair >(m, "FParticleCurvePair")
        .def_readwrite("CurveName", &FParticleCurvePair::CurveName)
        .def_readwrite("CurveObject", &FParticleCurvePair::CurveObject)
  ;
}