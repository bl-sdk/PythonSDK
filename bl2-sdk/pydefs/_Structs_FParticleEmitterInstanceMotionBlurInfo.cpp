#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FParticleEmitterInstanceMotionBlurInfo()
{
    class_< FParticleEmitterInstanceMotionBlurInfo >("FParticleEmitterInstanceMotionBlurInfo", no_init)
        .def_readwrite("ParticleMBInfoMap", &FParticleEmitterInstanceMotionBlurInfo::ParticleMBInfoMap)
  ;
}