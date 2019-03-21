#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_Sound()
{
    class_< UAnimNotify_Sound, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_Sound", no_init)
        .def_readwrite("SoundCue", &UAnimNotify_Sound::SoundCue)
        .def_readwrite("BoneName", &UAnimNotify_Sound::BoneName)
        .def_readwrite("PercentToPlay", &UAnimNotify_Sound::PercentToPlay)
        .def_readwrite("VolumeMultiplier", &UAnimNotify_Sound::VolumeMultiplier)
        .def_readwrite("PitchMultiplier", &UAnimNotify_Sound::PitchMultiplier)
        .def("StaticClass", &UAnimNotify_Sound::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}