#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPhysXParticleSystem(py::object m)
{
    py::class_< UPhysXParticleSystem,  UObject   >(m, "UPhysXParticleSystem")
        .def_readwrite("MaxParticles1", &UPhysXParticleSystem::MaxParticles1)
        .def_readwrite("MaxParticles2", &UPhysXParticleSystem::MaxParticles2)
        .def_readwrite("MaxParticles", &UPhysXParticleSystem::MaxParticles)
        .def_readwrite("ParticleSpawnReserve", &UPhysXParticleSystem::ParticleSpawnReserve)
        .def_readwrite("RBChannel", &UPhysXParticleSystem::RBChannel)
        .def_readwrite("SimulationMethod", &UPhysXParticleSystem::SimulationMethod)
        .def_readwrite("PacketSizeMultiplier", &UPhysXParticleSystem::PacketSizeMultiplier)
        .def_readwrite("RBCollideWithChannels", &UPhysXParticleSystem::RBCollideWithChannels)
        .def_readwrite("CollisionDistance", &UPhysXParticleSystem::CollisionDistance)
        .def_readwrite("RestitutionWithStaticShapes", &UPhysXParticleSystem::RestitutionWithStaticShapes)
        .def_readwrite("RestitutionWithDynamicShapes", &UPhysXParticleSystem::RestitutionWithDynamicShapes)
        .def_readwrite("FrictionWithStaticShapes", &UPhysXParticleSystem::FrictionWithStaticShapes)
        .def_readwrite("FrictionWithDynamicShapes", &UPhysXParticleSystem::FrictionWithDynamicShapes)
        .def_readwrite("StaticFrictionWithStaticShapes", &UPhysXParticleSystem::StaticFrictionWithStaticShapes)
        .def_readwrite("StaticFrictionWithDynamicShapes", &UPhysXParticleSystem::StaticFrictionWithDynamicShapes)
        .def_readwrite("MaxMotionDistance", &UPhysXParticleSystem::MaxMotionDistance)
        .def_readwrite("Damping", &UPhysXParticleSystem::Damping)
        .def_readwrite("ExternalAcceleration", &UPhysXParticleSystem::ExternalAcceleration)
        .def_readwrite("RestParticleDistance", &UPhysXParticleSystem::RestParticleDistance)
        .def_readwrite("RestDensity", &UPhysXParticleSystem::RestDensity)
        .def_readwrite("KernelRadiusMultiplier", &UPhysXParticleSystem::KernelRadiusMultiplier)
        .def_readwrite("Stiffness", &UPhysXParticleSystem::Stiffness)
        .def_readwrite("Viscosity", &UPhysXParticleSystem::Viscosity)
        .def_readwrite("CollisionResponseCoefficient", &UPhysXParticleSystem::CollisionResponseCoefficient)
        .def_readwrite("CascadeScene", &UPhysXParticleSystem::CascadeScene)
        .def_readwrite("PSys", &UPhysXParticleSystem::PSys)
        .def("StaticClass", &UPhysXParticleSystem::StaticClass, py::return_value_policy::reference)
          ;
}