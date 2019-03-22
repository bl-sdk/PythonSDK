#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AReverbVolumeToggleable(py::module &m)
{
    py::class_< AReverbVolumeToggleable,  AReverbVolume   >(m, "AReverbVolumeToggleable")
        .def("OnToggle", &AReverbVolumeToggleable::OnToggle)
          ;
}