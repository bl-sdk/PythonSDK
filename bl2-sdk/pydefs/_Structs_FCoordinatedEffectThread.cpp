#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoordinatedEffectThread(py::module &m)
{
    py::class_< FCoordinatedEffectThread >(m, "FCoordinatedEffectThread")
        .def_readwrite("EffectDefinition", &FCoordinatedEffectThread::EffectDefinition)
        .def_readwrite("IgnoreInstanceData", &FCoordinatedEffectThread::IgnoreInstanceData)
        .def_readwrite("LatentFloat", &FCoordinatedEffectThread::LatentFloat)
        .def_readwrite("TargetFloat", &FCoordinatedEffectThread::TargetFloat)
        .def_readwrite("ParticleSpeedMultiplier", &FCoordinatedEffectThread::ParticleSpeedMultiplier)
        .def_readwrite("CriticalParticleEffects", &FCoordinatedEffectThread::CriticalParticleEffects)
        .def_readwrite("ParticleEffects", &FCoordinatedEffectThread::ParticleEffects)
        .def_readwrite("AudioEffects", &FCoordinatedEffectThread::AudioEffects)
        .def_readwrite("HiddenParticles", &FCoordinatedEffectThread::HiddenParticles)
        .def_readwrite("EffectOwner", &FCoordinatedEffectThread::EffectOwner)
        .def_readwrite("EffectID", &FCoordinatedEffectThread::EffectID)
        .def_readwrite("EffectCompleteDelegate", &FCoordinatedEffectThread::EffectCompleteDelegate)
  ;
}