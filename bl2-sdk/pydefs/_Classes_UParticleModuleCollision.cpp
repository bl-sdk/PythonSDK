#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleCollision(py::module &m)
{
    py::class_< UParticleModuleCollision,  UParticleModuleCollisionBase   >(m, "UParticleModuleCollision")
		.def_static("StaticClass", &UParticleModuleCollision::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DampingFactor", &UParticleModuleCollision::DampingFactor)
        .def_readwrite("DampingFactorRotation", &UParticleModuleCollision::DampingFactorRotation)
        .def_readwrite("MaxCollisions", &UParticleModuleCollision::MaxCollisions)
        .def_readwrite("CollisionCompletionOption", &UParticleModuleCollision::CollisionCompletionOption)
        .def_readwrite("ParticleMass", &UParticleModuleCollision::ParticleMass)
        .def_readwrite("DirScalar", &UParticleModuleCollision::DirScalar)
        .def_readwrite("VerticalFudgeFactor", &UParticleModuleCollision::VerticalFudgeFactor)
        .def_readwrite("DelayAmount", &UParticleModuleCollision::DelayAmount)
        .def_readwrite("MaxCollisionDistance", &UParticleModuleCollision::MaxCollisionDistance)
          ;
}