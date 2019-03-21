#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FScalarParticleSystemParameter()
{
    class_< FScalarParticleSystemParameter >("FScalarParticleSystemParameter", no_init)
        .def_readwrite("Name", &FScalarParticleSystemParameter::Name)
        .def_readwrite("Value", &FScalarParticleSystemParameter::Value)
  ;
}