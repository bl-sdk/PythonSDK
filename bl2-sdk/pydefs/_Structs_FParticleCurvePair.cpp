#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleCurvePair()
{
    py::class_< FParticleCurvePair >("FParticleCurvePair")
        .def_readwrite("CurveName", &FParticleCurvePair::CurveName)
        .def_readwrite("CurveObject", &FParticleCurvePair::CurveObject)
  ;
}