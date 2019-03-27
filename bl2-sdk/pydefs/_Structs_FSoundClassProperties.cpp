#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSoundClassProperties(py::module &m)
{
    py::class_< FSoundClassProperties >(m, "FSoundClassProperties")
        .def_readwrite("Volume", &FSoundClassProperties::Volume)
        .def_readwrite("Pitch", &FSoundClassProperties::Pitch)
        .def_readwrite("StereoBleed", &FSoundClassProperties::StereoBleed)
        .def_readwrite("LFEBleed", &FSoundClassProperties::LFEBleed)
        .def_readwrite("VoiceCenterChannelVolume", &FSoundClassProperties::VoiceCenterChannelVolume)
        .def_readwrite("RadioFilterVolume", &FSoundClassProperties::RadioFilterVolume)
        .def_readwrite("RadioFilterVolumeThreshold", &FSoundClassProperties::RadioFilterVolumeThreshold)
  ;
}