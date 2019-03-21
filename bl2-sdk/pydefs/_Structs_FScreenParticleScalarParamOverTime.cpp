#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FScreenParticleScalarParamOverTime()
{
    class_< FScreenParticleScalarParamOverTime >("FScreenParticleScalarParamOverTime", no_init)
        .def_readwrite("ParameterName", &FScreenParticleScalarParamOverTime::ParameterName)
        .def_readwrite("TotalTime", &FScreenParticleScalarParamOverTime::TotalTime)
        .def_readwrite("StartValue", &FScreenParticleScalarParamOverTime::StartValue)
        .def_readwrite("EndValue", &FScreenParticleScalarParamOverTime::EndValue)
        .def_readwrite("LastValue", &FScreenParticleScalarParamOverTime::LastValue)
  ;
}