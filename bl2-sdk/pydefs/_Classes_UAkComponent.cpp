#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkComponent(py::module &m)
{
    py::class_< UAkComponent,  UActorComponent   >(m, "UAkComponent")
		.def_static("StaticClass", &UAkComponent::StaticClass, py::return_value_policy::reference)
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
        .def_readwrite("SpecialOcclusionProvider", &UAkComponent::SpecialOcclusionProvider)
        .def_readwrite("KnownRTPCs", &UAkComponent::KnownRTPCs)
        .def_readwrite("KnownSwitches", &UAkComponent::KnownSwitches)
        .def("GetMaxAttenuationRadius", &UAkComponent::GetMaxAttenuationRadius)
        .def("IsPlayingId", &UAkComponent::IsPlayingId)
        .def("IsPlayingEvent", &UAkComponent::IsPlayingEvent)
        .def("UpdateComponentPosition", &UAkComponent::UpdateComponentPosition)
        .def("OnAkEventCompleted", &UAkComponent::OnAkEventCompleted)
          ;
}