#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FViewParticleEmitterInstanceMotionBlurInfo()
{
    class_< FViewParticleEmitterInstanceMotionBlurInfo >("FViewParticleEmitterInstanceMotionBlurInfo", no_init)
        .def_readwrite("EmitterInstanceMBInfoMap", &FViewParticleEmitterInstanceMotionBlurInfo::EmitterInstanceMBInfoMap)
  ;
}