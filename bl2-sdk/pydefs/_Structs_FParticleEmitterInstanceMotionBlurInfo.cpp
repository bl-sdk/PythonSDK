#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleEmitterInstanceMotionBlurInfo()
{
    py::class_< FParticleEmitterInstanceMotionBlurInfo >("FParticleEmitterInstanceMotionBlurInfo")
        .def_readwrite("ParticleMBInfoMap", &FParticleEmitterInstanceMotionBlurInfo::ParticleMBInfoMap)
  ;
}