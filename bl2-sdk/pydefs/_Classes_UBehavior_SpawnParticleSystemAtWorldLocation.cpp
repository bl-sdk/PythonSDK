#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnParticleSystemAtWorldLocation()
{
    py::class_< UBehavior_SpawnParticleSystemAtWorldLocation,  UBehaviorBase   >("UBehavior_SpawnParticleSystemAtWorldLocation")
        .def_readwrite("InstanceDataContext", &UBehavior_SpawnParticleSystemAtWorldLocation::InstanceDataContext)
        .def_readwrite("SavedReferenceName", &UBehavior_SpawnParticleSystemAtWorldLocation::SavedReferenceName)
        .def_readwrite("ParticleEffect", &UBehavior_SpawnParticleSystemAtWorldLocation::ParticleEffect)
        .def_readwrite("Location", &UBehavior_SpawnParticleSystemAtWorldLocation::Location)
        .def_readwrite("Direction", &UBehavior_SpawnParticleSystemAtWorldLocation::Direction)
        .def_readwrite("DrawScale", &UBehavior_SpawnParticleSystemAtWorldLocation::DrawScale)
        .def("StaticClass", &UBehavior_SpawnParticleSystemAtWorldLocation::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_SpawnParticleSystemAtWorldLocation::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnParticleSystemAtWorldLocation::ApplyBehaviorToContext)
        .def("GetEmitterClass", &UBehavior_SpawnParticleSystemAtWorldLocation::GetEmitterClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}