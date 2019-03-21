#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowEffectCoordinator()
{
    class_< UWillowEffectCoordinator, bases< UObject >  , boost::noncopyable>("UWillowEffectCoordinator", no_init)
        .def_readwrite("SupportedEffects", &UWillowEffectCoordinator::SupportedEffects)
        .def_readwrite("ManagedParticlesReserveLength", &UWillowEffectCoordinator::ManagedParticlesReserveLength)
        .def_readwrite("ManagedAudioReserveLength", &UWillowEffectCoordinator::ManagedAudioReserveLength)
        .def_readwrite("ExternalComponentsReserveLength", &UWillowEffectCoordinator::ExternalComponentsReserveLength)
        .def_readwrite("Processes", &UWillowEffectCoordinator::Processes)
        .def_readwrite("ExternalComponents", &UWillowEffectCoordinator::ExternalComponents)
        .def_readwrite("ManagedParticles", &UWillowEffectCoordinator::ManagedParticles)
        .def_readwrite("ManagedAudio", &UWillowEffectCoordinator::ManagedAudio)
        .def_readwrite("ManagedAudioFreeList", &UWillowEffectCoordinator::ManagedAudioFreeList)
        .def_readwrite("ManagedParticlesFreeList", &UWillowEffectCoordinator::ManagedParticlesFreeList)
        .def_readwrite("ExternalComponentsFreeList", &UWillowEffectCoordinator::ExternalComponentsFreeList)
        .def("StaticClass", &UWillowEffectCoordinator::StaticClass, return_value_policy< reference_existing_object >())
        .def("StaticHandleReplicatedEffect", &UWillowEffectCoordinator::StaticHandleReplicatedEffect)
        .def("HasEffect", &UWillowEffectCoordinator::HasEffect)
        .def("PopEffect", &UWillowEffectCoordinator::PopEffect)
        .def("PushEffect", &UWillowEffectCoordinator::PushEffect)
        .def("PopMutex", &UWillowEffectCoordinator::PopMutex)
        .def("GetBaseMaterials", &UWillowEffectCoordinator::GetBaseMaterials)
        .def("PopAllEffects", &UWillowEffectCoordinator::PopAllEffects)
        .def("OnEffectComplete", &UWillowEffectCoordinator::OnEffectComplete)
        .staticmethod("StaticClass")
  ;
}