#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFaceFXSoundCueKey()
{
    py::class_< FFaceFXSoundCueKey >("FFaceFXSoundCueKey")
        .def_readwrite("FaceFXSoundCue", &FFaceFXSoundCueKey::FaceFXSoundCue)
        .def_readwrite("FaceFXAkEvent", &FFaceFXSoundCueKey::FaceFXAkEvent)
  ;
}