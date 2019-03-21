#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGroupAnimationAndSoundIdentifier()
{
    class_< FGroupAnimationAndSoundIdentifier >("FGroupAnimationAndSoundIdentifier", no_init)
        .def_readwrite("SoundNodeWaveName", &FGroupAnimationAndSoundIdentifier::SoundNodeWaveName)
        .def_readwrite("FaceFXGroupName", &FGroupAnimationAndSoundIdentifier::FaceFXGroupName)
        .def_readwrite("FaceFXAnimName", &FGroupAnimationAndSoundIdentifier::FaceFXAnimName)
  ;
}