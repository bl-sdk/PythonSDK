#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FColorParticleSystemParameter()
{
    class_< FColorParticleSystemParameter >("FColorParticleSystemParameter", no_init)
        .def_readwrite("Name", &FColorParticleSystemParameter::Name)
        .def_readwrite("Value", &FColorParticleSystemParameter::Value)
  ;
}