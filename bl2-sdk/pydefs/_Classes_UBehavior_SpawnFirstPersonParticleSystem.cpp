#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnFirstPersonParticleSystem()
{
    class_< UBehavior_SpawnFirstPersonParticleSystem, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SpawnFirstPersonParticleSystem", no_init)
        .def_readwrite("InstanceDataContext", &UBehavior_SpawnFirstPersonParticleSystem::InstanceDataContext)
        .def_readwrite("SavedReferenceName", &UBehavior_SpawnFirstPersonParticleSystem::SavedReferenceName)
        .def_readwrite("ParticleEffect", &UBehavior_SpawnFirstPersonParticleSystem::ParticleEffect)
        .def_readwrite("AttachmentPointName", &UBehavior_SpawnFirstPersonParticleSystem::AttachmentPointName)
        .def_readwrite("RelativeLocation", &UBehavior_SpawnFirstPersonParticleSystem::RelativeLocation)
        .def_readwrite("RelativeRotation", &UBehavior_SpawnFirstPersonParticleSystem::RelativeRotation)
        .def_readwrite("DrawScale", &UBehavior_SpawnFirstPersonParticleSystem::DrawScale)
        .def("StaticClass", &UBehavior_SpawnFirstPersonParticleSystem::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_SpawnFirstPersonParticleSystem::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnFirstPersonParticleSystem::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}