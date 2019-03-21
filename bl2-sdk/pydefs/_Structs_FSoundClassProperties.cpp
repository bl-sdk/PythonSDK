#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSoundClassProperties()
{
    class_< FSoundClassProperties >("FSoundClassProperties", no_init)
        .def_readwrite("Volume", &FSoundClassProperties::Volume)
        .def_readwrite("Pitch", &FSoundClassProperties::Pitch)
        .def_readwrite("StereoBleed", &FSoundClassProperties::StereoBleed)
        .def_readwrite("LFEBleed", &FSoundClassProperties::LFEBleed)
        .def_readwrite("VoiceCenterChannelVolume", &FSoundClassProperties::VoiceCenterChannelVolume)
        .def_readwrite("RadioFilterVolume", &FSoundClassProperties::RadioFilterVolume)
        .def_readwrite("RadioFilterVolumeThreshold", &FSoundClassProperties::RadioFilterVolumeThreshold)
  ;
}