#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCoordinatedEffectDefinition(py::module &m)
{
    py::class_< UCoordinatedEffectDefinition,  UGBXDefinition   >(m, "UCoordinatedEffectDefinition")
        .def_readwrite("OverrideMaterial", &UCoordinatedEffectDefinition::OverrideMaterial)
        .def_readwrite("CriticialHitParticle", &UCoordinatedEffectDefinition::CriticialHitParticle)
        .def_readwrite("ParticleEffects", &UCoordinatedEffectDefinition::ParticleEffects)
        .def_readwrite("MaterialScalarParameters", &UCoordinatedEffectDefinition::MaterialScalarParameters)
        .def_readwrite("MaterialVectorParameters", &UCoordinatedEffectDefinition::MaterialVectorParameters)
        .def_readwrite("AudioEffects", &UCoordinatedEffectDefinition::AudioEffects)
        .def_readwrite("EffectDuration", &UCoordinatedEffectDefinition::EffectDuration)
        .def_readwrite("ParticleSpeedMultiplier", &UCoordinatedEffectDefinition::ParticleSpeedMultiplier)
        .def_readwrite("NextEffect", &UCoordinatedEffectDefinition::NextEffect)
        .def_readwrite("MutexName", &UCoordinatedEffectDefinition::MutexName)
          ;
}