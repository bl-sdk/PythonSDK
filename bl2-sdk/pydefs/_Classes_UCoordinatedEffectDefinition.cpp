#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCoordinatedEffectDefinition()
{
    class_< UCoordinatedEffectDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UCoordinatedEffectDefinition", no_init)
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
        .def("StaticClass", &UCoordinatedEffectDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}