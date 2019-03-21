#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleEmitterInstanceMotionBlurInfo(py::object m)
{
    py::class_< FParticleEmitterInstanceMotionBlurInfo >(m, "FParticleEmitterInstanceMotionBlurInfo")
        .def_readwrite("ParticleMBInfoMap", &FParticleEmitterInstanceMotionBlurInfo::ParticleMBInfoMap)
  ;
}