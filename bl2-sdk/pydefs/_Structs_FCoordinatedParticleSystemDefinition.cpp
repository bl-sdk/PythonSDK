#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoordinatedParticleSystemDefinition()
{
    class_< FCoordinatedParticleSystemDefinition >("FCoordinatedParticleSystemDefinition", no_init)
        .def_readwrite("ParticleSystem", &FCoordinatedParticleSystemDefinition::ParticleSystem)
        .def_readwrite("LocationOffset", &FCoordinatedParticleSystemDefinition::LocationOffset)
        .def_readwrite("RotationOffset", &FCoordinatedParticleSystemDefinition::RotationOffset)
        .def_readwrite("TriggerTime", &FCoordinatedParticleSystemDefinition::TriggerTime)
        .def_readwrite("ParticleScale", &FCoordinatedParticleSystemDefinition::ParticleScale)
        .def_readwrite("Parameters", &FCoordinatedParticleSystemDefinition::Parameters)
        .def_readwrite("VectorParameters", &FCoordinatedParticleSystemDefinition::VectorParameters)
        .def_readwrite("ScaleByObjectSize", &FCoordinatedParticleSystemDefinition::ScaleByObjectSize)
  ;
}