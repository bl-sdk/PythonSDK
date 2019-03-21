#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoordinatedEffectThread()
{
    class_< FCoordinatedEffectThread >("FCoordinatedEffectThread", no_init)
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