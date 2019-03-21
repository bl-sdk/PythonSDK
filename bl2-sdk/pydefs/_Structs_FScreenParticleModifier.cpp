#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FScreenParticleModifier()
{
    class_< FScreenParticleModifier >("FScreenParticleModifier", no_init)
        .def_readwrite("ScalarParams", &FScreenParticleModifier::ScalarParams)
        .def_readwrite("CachedValue", &FScreenParticleModifier::CachedValue)
  ;
}