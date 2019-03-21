#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGroupAnimationAndSoundIdentifier(py::object m)
{
    py::class_< FGroupAnimationAndSoundIdentifier >(m, "FGroupAnimationAndSoundIdentifier")
        .def_readwrite("SoundNodeWaveName", &FGroupAnimationAndSoundIdentifier::SoundNodeWaveName)
        .def_readwrite("FaceFXGroupName", &FGroupAnimationAndSoundIdentifier::FaceFXGroupName)
        .def_readwrite("FaceFXAnimName", &FGroupAnimationAndSoundIdentifier::FaceFXAnimName)
  ;
}