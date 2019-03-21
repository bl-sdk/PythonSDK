#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScreenParticleVectorParamOverTime(py::object m)
{
    py::class_< FScreenParticleVectorParamOverTime >(m, "FScreenParticleVectorParamOverTime")
        .def_readwrite("ParameterName", &FScreenParticleVectorParamOverTime::ParameterName)
        .def_readwrite("TotalTime", &FScreenParticleVectorParamOverTime::TotalTime)
        .def_readwrite("VectorStartValue", &FScreenParticleVectorParamOverTime::VectorStartValue)
        .def_readwrite("VectorEndValue", &FScreenParticleVectorParamOverTime::VectorEndValue)
        .def_readwrite("LastValue", &FScreenParticleVectorParamOverTime::LastValue)
  ;
}