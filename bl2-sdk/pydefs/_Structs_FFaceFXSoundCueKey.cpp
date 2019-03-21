#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFaceFXSoundCueKey()
{
    class_< FFaceFXSoundCueKey >("FFaceFXSoundCueKey", no_init)
        .def_readwrite("FaceFXSoundCue", &FFaceFXSoundCueKey::FaceFXSoundCue)
        .def_readwrite("FaceFXAkEvent", &FFaceFXSoundCueKey::FaceFXAkEvent)
  ;
}