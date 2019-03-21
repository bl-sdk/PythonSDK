#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USoundCue()
{
    class_< USoundCue, bases< UObject >  , boost::noncopyable>("USoundCue", no_init)
        .def_readwrite("SoundClass", &USoundCue::SoundClass)
        .def_readwrite("SoundClassName", &USoundCue::SoundClassName)
        .def_readwrite("FirstNode", &USoundCue::FirstNode)
        .def_readonly("UnknownData00", &USoundCue::UnknownData00)
        .def_readwrite("MaxAudibleDistance", &USoundCue::MaxAudibleDistance)
        .def_readwrite("VolumeMultiplier", &USoundCue::VolumeMultiplier)
        .def_readwrite("PitchMultiplier", &USoundCue::PitchMultiplier)
        .def_readwrite("Duration", &USoundCue::Duration)
        .def_readwrite("DesignerComment", &USoundCue::DesignerComment)
        .def_readwrite("FaceFXAnimSetRef", &USoundCue::FaceFXAnimSetRef)
        .def_readwrite("FaceFXGroupName", &USoundCue::FaceFXGroupName)
        .def_readwrite("FaceFXAnimName", &USoundCue::FaceFXAnimName)
        .def_readwrite("MaxConcurrentPlayCount", &USoundCue::MaxConcurrentPlayCount)
        .def_readwrite("CurrentPlayCount", &USoundCue::CurrentPlayCount)
        .def_readwrite("SoundGroup", &USoundCue::SoundGroup)
        .def_readwrite("Priority", &USoundCue::Priority)
        .def_readwrite("SpatializationPercent", &USoundCue::SpatializationPercent)
        .def("StaticClass", &USoundCue::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetCueDuration", &USoundCue::GetCueDuration)
        .def("IsSoundLooping", &USoundCue::IsSoundLooping)
        .staticmethod("StaticClass")
  ;
}