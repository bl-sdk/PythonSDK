#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGroupAnimationAndSoundIdentifier()
{
    py::class_< FGroupAnimationAndSoundIdentifier >("FGroupAnimationAndSoundIdentifier")
        .def_readwrite("SoundNodeWaveName", &FGroupAnimationAndSoundIdentifier::SoundNodeWaveName)
        .def_readwrite("FaceFXGroupName", &FGroupAnimationAndSoundIdentifier::FaceFXGroupName)
        .def_readwrite("FaceFXAnimName", &FGroupAnimationAndSoundIdentifier::FaceFXAnimName)
  ;
}