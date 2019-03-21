#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnParticleSystem()
{
    class_< UBehavior_SpawnParticleSystem, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SpawnParticleSystem", no_init)
        .def_readwrite("InstanceDataContext", &UBehavior_SpawnParticleSystem::InstanceDataContext)
        .def_readwrite("SavedReferenceName", &UBehavior_SpawnParticleSystem::SavedReferenceName)
        .def_readwrite("ParticleEffect", &UBehavior_SpawnParticleSystem::ParticleEffect)
        .def_readwrite("AttachmentPointName", &UBehavior_SpawnParticleSystem::AttachmentPointName)
        .def_readwrite("RelativeLocation", &UBehavior_SpawnParticleSystem::RelativeLocation)
        .def_readwrite("RelativeRotation", &UBehavior_SpawnParticleSystem::RelativeRotation)
        .def_readwrite("DrawScale", &UBehavior_SpawnParticleSystem::DrawScale)
        .def_readwrite("SpawnDirection", &UBehavior_SpawnParticleSystem::SpawnDirection)
        .def("StaticClass", &UBehavior_SpawnParticleSystem::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_SpawnParticleSystem::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnParticleSystem::ApplyBehaviorToContext)
        .def("GetEmitterClass", &UBehavior_SpawnParticleSystem::GetEmitterClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}