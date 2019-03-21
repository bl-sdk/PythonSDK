#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleCollision()
{
    class_< UParticleModuleCollision, bases< UParticleModuleCollisionBase >  , boost::noncopyable>("UParticleModuleCollision", no_init)
        .def_readwrite("DampingFactor", &UParticleModuleCollision::DampingFactor)
        .def_readwrite("DampingFactorRotation", &UParticleModuleCollision::DampingFactorRotation)
        .def_readwrite("MaxCollisions", &UParticleModuleCollision::MaxCollisions)
        .def_readwrite("CollisionCompletionOption", &UParticleModuleCollision::CollisionCompletionOption)
        .def_readwrite("ParticleMass", &UParticleModuleCollision::ParticleMass)
        .def_readwrite("DirScalar", &UParticleModuleCollision::DirScalar)
        .def_readwrite("VerticalFudgeFactor", &UParticleModuleCollision::VerticalFudgeFactor)
        .def_readwrite("DelayAmount", &UParticleModuleCollision::DelayAmount)
        .def_readwrite("MaxCollisionDistance", &UParticleModuleCollision::MaxCollisionDistance)
        .def("StaticClass", &UParticleModuleCollision::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}