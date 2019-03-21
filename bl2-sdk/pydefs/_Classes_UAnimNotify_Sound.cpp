#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNotify_Sound(py::object m)
{
    py::class_< UAnimNotify_Sound,  UAnimNotify   >(m, "UAnimNotify_Sound")
        .def_readwrite("SoundCue", &UAnimNotify_Sound::SoundCue)
        .def_readwrite("BoneName", &UAnimNotify_Sound::BoneName)
        .def_readwrite("PercentToPlay", &UAnimNotify_Sound::PercentToPlay)
        .def_readwrite("VolumeMultiplier", &UAnimNotify_Sound::VolumeMultiplier)
        .def_readwrite("PitchMultiplier", &UAnimNotify_Sound::PitchMultiplier)
        .def("StaticClass", &UAnimNotify_Sound::StaticClass, py::return_value_policy::reference)
          ;
}