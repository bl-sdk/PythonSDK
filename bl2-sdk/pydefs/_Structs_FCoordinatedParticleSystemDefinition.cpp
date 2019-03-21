#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoordinatedParticleSystemDefinition(py::object m)
{
    py::class_< FCoordinatedParticleSystemDefinition >(m, "FCoordinatedParticleSystemDefinition")
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