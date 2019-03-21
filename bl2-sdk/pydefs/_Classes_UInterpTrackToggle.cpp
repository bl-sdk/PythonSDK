#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackToggle()
{
    py::class_< UInterpTrackToggle,  UInterpTrack   >("UInterpTrackToggle")
        .def_readwrite("ToggleTrack", &UInterpTrackToggle::ToggleTrack)
        .def("StaticClass", &UInterpTrackToggle::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}