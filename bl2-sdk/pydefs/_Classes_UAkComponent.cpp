#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkComponent()
{
    py::class_< UAkComponent,  UActorComponent   >("UAkComponent")
        .def_readwrite("SocketName", &UAkComponent::SocketName)
        .def_readwrite("CustomLocations", &UAkComponent::CustomLocations)
        .def_readwrite("CustomRotations", &UAkComponent::CustomRotations)
        .def_readwrite("LastEnvironmentalAndOcclusionUpdateTime", &UAkComponent::LastEnvironmentalAndOcclusionUpdateTime)
        .def_readwrite("LastSubtitleUpdateTime", &UAkComponent::LastSubtitleUpdateTime)
        .def_readwrite("HeadPlayingInfoPtr", &UAkComponent::HeadPlayingInfoPtr)
        .def_readwrite("TailPlayingInfoPtr", &UAkComponent::TailPlayingInfoPtr)
        .def_readwrite("PendingFaceFX", &UAkComponent::PendingFaceFX)
        .def_readwrite("PendingSubtitle", &UAkComponent::PendingSubtitle)
        .def_readwrite("SubtitlesPendingKill", &UAkComponent::SubtitlesPendingKill)
        .def_readonly("CurrentObstructionLevels", &UAkComponent::CurrentObstructionLevels)
        .def_readonly("TargetObstructionLevels", &UAkComponent::TargetObstructionLevels)
        .def_readonly("CurrentOcclusionLevels", &UAkComponent::CurrentOcclusionLevels)
        .def_readonly("TargetOcclusionLevels", &UAkComponent::TargetOcclusionLevels)
        .def_readwrite("SpecialOcclusionProvider", &UAkComponent::SpecialOcclusionProvider)
        .def_readonly("UnknownData00", &UAkComponent::UnknownData00)
        .def_readwrite("KnownRTPCs", &UAkComponent::KnownRTPCs)
        .def_readwrite("KnownSwitches", &UAkComponent::KnownSwitches)
        .def("StaticClass", &UAkComponent::StaticClass, py::return_value_policy::reference)
        .def("GetMaxAttenuationRadius", &UAkComponent::GetMaxAttenuationRadius)
        .def("IsPlayingId", &UAkComponent::IsPlayingId)
        .def("IsPlayingEvent", &UAkComponent::IsPlayingEvent)
        .def("UpdateComponentPosition", &UAkComponent::UpdateComponentPosition)
        .def("OnAkEventCompleted", &UAkComponent::OnAkEventCompleted)
        .staticmethod("StaticClass")
  ;
}