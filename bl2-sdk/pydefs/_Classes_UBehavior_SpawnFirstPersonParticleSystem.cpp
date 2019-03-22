#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnFirstPersonParticleSystem(py::module &m)
{
    py::class_< UBehavior_SpawnFirstPersonParticleSystem,  UBehaviorBase   >(m, "UBehavior_SpawnFirstPersonParticleSystem")
        .def_readwrite("InstanceDataContext", &UBehavior_SpawnFirstPersonParticleSystem::InstanceDataContext)
        .def_readwrite("SavedReferenceName", &UBehavior_SpawnFirstPersonParticleSystem::SavedReferenceName)
        .def_readwrite("ParticleEffect", &UBehavior_SpawnFirstPersonParticleSystem::ParticleEffect)
        .def_readwrite("AttachmentPointName", &UBehavior_SpawnFirstPersonParticleSystem::AttachmentPointName)
        .def_readwrite("RelativeLocation", &UBehavior_SpawnFirstPersonParticleSystem::RelativeLocation)
        .def_readwrite("RelativeRotation", &UBehavior_SpawnFirstPersonParticleSystem::RelativeRotation)
        .def_readwrite("DrawScale", &UBehavior_SpawnFirstPersonParticleSystem::DrawScale)
        .def("StaticClass", &UBehavior_SpawnFirstPersonParticleSystem::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_SpawnFirstPersonParticleSystem::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnFirstPersonParticleSystem::ApplyBehaviorToContext)
          ;
}