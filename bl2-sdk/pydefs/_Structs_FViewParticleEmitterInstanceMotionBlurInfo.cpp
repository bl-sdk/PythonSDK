#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FViewParticleEmitterInstanceMotionBlurInfo()
{
    py::class_< FViewParticleEmitterInstanceMotionBlurInfo >("FViewParticleEmitterInstanceMotionBlurInfo")
        .def_readwrite("EmitterInstanceMBInfoMap", &FViewParticleEmitterInstanceMotionBlurInfo::EmitterInstanceMBInfoMap)
  ;
}