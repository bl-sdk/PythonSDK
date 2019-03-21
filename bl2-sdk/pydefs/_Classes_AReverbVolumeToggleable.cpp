#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AReverbVolumeToggleable()
{
    py::class_< AReverbVolumeToggleable,  AReverbVolume   >("AReverbVolumeToggleable")
        .def("StaticClass", &AReverbVolumeToggleable::StaticClass, py::return_value_policy::reference)
        .def("OnToggle", &AReverbVolumeToggleable::OnToggle)
        .staticmethod("StaticClass")
  ;
}