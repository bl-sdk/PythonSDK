#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_PlaySound()
{
    class_< USeqAct_PlaySound, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_PlaySound", no_init)
        .def_readwrite("PlaySound", &USeqAct_PlaySound::PlaySound)
        .def_readwrite("ExtraDelay", &USeqAct_PlaySound::ExtraDelay)
        .def_readwrite("SoundDuration", &USeqAct_PlaySound::SoundDuration)
        .def_readwrite("FadeInTime", &USeqAct_PlaySound::FadeInTime)
        .def_readwrite("FadeOutTime", &USeqAct_PlaySound::FadeOutTime)
        .def_readwrite("VolumeMultiplier", &USeqAct_PlaySound::VolumeMultiplier)
        .def_readwrite("PitchMultiplier", &USeqAct_PlaySound::PitchMultiplier)
        .def("StaticClass", &USeqAct_PlaySound::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_PlaySound::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}