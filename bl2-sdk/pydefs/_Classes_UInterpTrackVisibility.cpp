#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackVisibility()
{
    py::class_< UInterpTrackVisibility,  UInterpTrack   >("UInterpTrackVisibility")
        .def_readwrite("VisibilityTrack", &UInterpTrackVisibility::VisibilityTrack)
        .def("StaticClass", &UInterpTrackVisibility::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}