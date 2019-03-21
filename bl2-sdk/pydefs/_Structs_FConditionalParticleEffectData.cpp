#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FConditionalParticleEffectData()
{
    class_< FConditionalParticleEffectData >("FConditionalParticleEffectData", no_init)
        .def_readwrite("Expression", &FConditionalParticleEffectData::Expression)
        .def_readwrite("ParticleEffect", &FConditionalParticleEffectData::ParticleEffect)
  ;
}