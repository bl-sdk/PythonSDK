#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFaceFXSoundCueKey(py::object m)
{
    py::class_< FFaceFXSoundCueKey >(m, "FFaceFXSoundCueKey")
        .def_readwrite("FaceFXSoundCue", &FFaceFXSoundCueKey::FaceFXSoundCue)
        .def_readwrite("FaceFXAkEvent", &FFaceFXSoundCueKey::FaceFXAkEvent)
  ;
}