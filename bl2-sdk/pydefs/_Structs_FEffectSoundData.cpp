#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEffectSoundData()
{
    class_< FEffectSoundData >("FEffectSoundData", no_init)
        .def_readwrite("Type", &FEffectSoundData::Type)
        .def_readwrite("AkPlayingId", &FEffectSoundData::AkPlayingId)
  ;
}