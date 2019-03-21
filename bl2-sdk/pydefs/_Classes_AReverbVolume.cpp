#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AReverbVolume()
{
    py::class_< AReverbVolume,  AVolume   >("AReverbVolume")
        .def_readwrite("Priority", &AReverbVolume::Priority)
        .def_readwrite("Settings", &AReverbVolume::Settings)
        .def_readwrite("AmbientZoneSettings", &AReverbVolume::AmbientZoneSettings)
        .def_readwrite("NextLowerPriorityVolume", &AReverbVolume::NextLowerPriorityVolume)
        .def("StaticClass", &AReverbVolume::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}