#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAkComponent()
{
    class_< UAkComponent, bases< UActorComponent >  , boost::noncopyable>("UAkComponent", no_init)
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
        .def("StaticClass", &UAkComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetMaxAttenuationRadius", &UAkComponent::GetMaxAttenuationRadius)
        .def("IsPlayingId", &UAkComponent::IsPlayingId)
        .def("IsPlayingEvent", &UAkComponent::IsPlayingEvent)
        .def("UpdateComponentPosition", &UAkComponent::UpdateComponentPosition)
        .def("OnAkEventCompleted", &UAkComponent::OnAkEventCompleted)
        .staticmethod("StaticClass")
  ;
}