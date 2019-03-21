#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScreenParticleScalarParamOverTime()
{
    py::class_< FScreenParticleScalarParamOverTime >("FScreenParticleScalarParamOverTime")
        .def_readwrite("ParameterName", &FScreenParticleScalarParamOverTime::ParameterName)
        .def_readwrite("TotalTime", &FScreenParticleScalarParamOverTime::TotalTime)
        .def_readwrite("StartValue", &FScreenParticleScalarParamOverTime::StartValue)
        .def_readwrite("EndValue", &FScreenParticleScalarParamOverTime::EndValue)
        .def_readwrite("LastValue", &FScreenParticleScalarParamOverTime::LastValue)
  ;
}