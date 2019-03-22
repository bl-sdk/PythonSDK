#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnParticleSystem(py::module &m)
{
    py::class_< UBehavior_SpawnParticleSystem,  UBehaviorBase   >(m, "UBehavior_SpawnParticleSystem")
        .def_readwrite("InstanceDataContext", &UBehavior_SpawnParticleSystem::InstanceDataContext)
        .def_readwrite("SavedReferenceName", &UBehavior_SpawnParticleSystem::SavedReferenceName)
        .def_readwrite("ParticleEffect", &UBehavior_SpawnParticleSystem::ParticleEffect)
        .def_readwrite("AttachmentPointName", &UBehavior_SpawnParticleSystem::AttachmentPointName)
        .def_readwrite("RelativeLocation", &UBehavior_SpawnParticleSystem::RelativeLocation)
        .def_readwrite("RelativeRotation", &UBehavior_SpawnParticleSystem::RelativeRotation)
        .def_readwrite("DrawScale", &UBehavior_SpawnParticleSystem::DrawScale)
        .def_readwrite("SpawnDirection", &UBehavior_SpawnParticleSystem::SpawnDirection)
        .def("PublishBehaviorOutput", &UBehavior_SpawnParticleSystem::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnParticleSystem::ApplyBehaviorToContext)
        .def("GetEmitterClass", &UBehavior_SpawnParticleSystem::GetEmitterClass, py::return_value_policy::reference)
          ;
}