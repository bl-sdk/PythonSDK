#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_PlaySound(py::module &m)
{
    py::class_< USeqAct_PlaySound,  USeqAct_Latent   >(m, "USeqAct_PlaySound")
        .def_readwrite("PlaySound", &USeqAct_PlaySound::PlaySound)
        .def_readwrite("ExtraDelay", &USeqAct_PlaySound::ExtraDelay)
        .def_readwrite("SoundDuration", &USeqAct_PlaySound::SoundDuration)
        .def_readwrite("FadeInTime", &USeqAct_PlaySound::FadeInTime)
        .def_readwrite("FadeOutTime", &USeqAct_PlaySound::FadeOutTime)
        .def_readwrite("VolumeMultiplier", &USeqAct_PlaySound::VolumeMultiplier)
        .def_readwrite("PitchMultiplier", &USeqAct_PlaySound::PitchMultiplier)
        .def("eventGetObjClassVersion", &USeqAct_PlaySound::eventGetObjClassVersion)
          ;
}