#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowEffectCoordinator(py::object m)
{
    py::class_< UWillowEffectCoordinator,  UObject   >(m, "UWillowEffectCoordinator")
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
        .def("StaticClass", &UWillowEffectCoordinator::StaticClass, py::return_value_policy::reference)
        .def("StaticHandleReplicatedEffect", &UWillowEffectCoordinator::StaticHandleReplicatedEffect)
        .def("HasEffect", &UWillowEffectCoordinator::HasEffect)
        .def("PopEffect", &UWillowEffectCoordinator::PopEffect)
        .def("PushEffect", &UWillowEffectCoordinator::PushEffect)
        .def("PopMutex", &UWillowEffectCoordinator::PopMutex)
        .def("GetBaseMaterials", &UWillowEffectCoordinator::GetBaseMaterials)
        .def("PopAllEffects", &UWillowEffectCoordinator::PopAllEffects)
        .def("OnEffectComplete", &UWillowEffectCoordinator::OnEffectComplete)
          ;
}