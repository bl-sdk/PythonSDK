#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSoundClassAdjuster(py::module &m)
{
    py::class_< FSoundClassAdjuster >(m, "FSoundClassAdjuster")
        .def_readwrite("SoundClassName", &FSoundClassAdjuster::SoundClassName)
        .def_readwrite("SoundClass", &FSoundClassAdjuster::SoundClass)
        .def_readwrite("VolumeAdjuster", &FSoundClassAdjuster::VolumeAdjuster)
        .def_readwrite("PitchAdjuster", &FSoundClassAdjuster::PitchAdjuster)
        .def_readwrite("VoiceCenterChannelVolumeAdjuster", &FSoundClassAdjuster::VoiceCenterChannelVolumeAdjuster)
  ;
}