#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FScreenParticleVectorParamOverTime()
{
    class_< FScreenParticleVectorParamOverTime >("FScreenParticleVectorParamOverTime", no_init)
        .def_readwrite("ParameterName", &FScreenParticleVectorParamOverTime::ParameterName)
        .def_readwrite("TotalTime", &FScreenParticleVectorParamOverTime::TotalTime)
        .def_readwrite("VectorStartValue", &FScreenParticleVectorParamOverTime::VectorStartValue)
        .def_readwrite("VectorEndValue", &FScreenParticleVectorParamOverTime::VectorEndValue)
        .def_readwrite("LastValue", &FScreenParticleVectorParamOverTime::LastValue)
  ;
}