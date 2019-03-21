#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FActorParticleSystemParameter()
{
    class_< FActorParticleSystemParameter >("FActorParticleSystemParameter", no_init)
        .def_readwrite("Name", &FActorParticleSystemParameter::Name)
        .def_readwrite("Context", &FActorParticleSystemParameter::Context)
  ;
}