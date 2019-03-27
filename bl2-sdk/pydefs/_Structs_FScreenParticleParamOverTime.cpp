#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScreenParticleParamOverTime(py::module &m)
{
    py::class_< FScreenParticleParamOverTime >(m, "FScreenParticleParamOverTime")
        .def_readwrite("ScalarParams", &FScreenParticleParamOverTime::ScalarParams)
        .def_readwrite("VectorParams", &FScreenParticleParamOverTime::VectorParams)
  ;
}