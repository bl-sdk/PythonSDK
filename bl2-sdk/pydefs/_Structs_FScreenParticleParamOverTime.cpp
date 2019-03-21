#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScreenParticleParamOverTime()
{
    py::class_< FScreenParticleParamOverTime >("FScreenParticleParamOverTime")
        .def_readwrite("ScalarParams", &FScreenParticleParamOverTime::ScalarParams)
        .def_readwrite("VectorParams", &FScreenParticleParamOverTime::VectorParams)
  ;
}