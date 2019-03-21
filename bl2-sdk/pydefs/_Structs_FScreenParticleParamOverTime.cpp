#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FScreenParticleParamOverTime()
{
    class_< FScreenParticleParamOverTime >("FScreenParticleParamOverTime", no_init)
        .def_readwrite("ScalarParams", &FScreenParticleParamOverTime::ScalarParams)
        .def_readwrite("VectorParams", &FScreenParticleParamOverTime::VectorParams)
  ;
}