#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnParticleSystemAtWorldLocation()
{
    class_< UBehavior_SpawnParticleSystemAtWorldLocation, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SpawnParticleSystemAtWorldLocation", no_init)
        .def_readwrite("InstanceDataContext", &UBehavior_SpawnParticleSystemAtWorldLocation::InstanceDataContext)
        .def_readwrite("SavedReferenceName", &UBehavior_SpawnParticleSystemAtWorldLocation::SavedReferenceName)
        .def_readwrite("ParticleEffect", &UBehavior_SpawnParticleSystemAtWorldLocation::ParticleEffect)
        .def_readwrite("Location", &UBehavior_SpawnParticleSystemAtWorldLocation::Location)
        .def_readwrite("Direction", &UBehavior_SpawnParticleSystemAtWorldLocation::Direction)
        .def_readwrite("DrawScale", &UBehavior_SpawnParticleSystemAtWorldLocation::DrawScale)
        .def("StaticClass", &UBehavior_SpawnParticleSystemAtWorldLocation::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_SpawnParticleSystemAtWorldLocation::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnParticleSystemAtWorldLocation::ApplyBehaviorToContext)
        .def("GetEmitterClass", &UBehavior_SpawnParticleSystemAtWorldLocation::GetEmitterClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}