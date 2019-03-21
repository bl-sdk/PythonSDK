#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSoundClassAdjuster()
{
    class_< FSoundClassAdjuster >("FSoundClassAdjuster", no_init)
        .def_readwrite("SoundClassName", &FSoundClassAdjuster::SoundClassName)
        .def_readwrite("SoundClass", &FSoundClassAdjuster::SoundClass)
        .def_readwrite("VolumeAdjuster", &FSoundClassAdjuster::VolumeAdjuster)
        .def_readwrite("PitchAdjuster", &FSoundClassAdjuster::PitchAdjuster)
        .def_readwrite("VoiceCenterChannelVolumeAdjuster", &FSoundClassAdjuster::VoiceCenterChannelVolumeAdjuster)
  ;
}