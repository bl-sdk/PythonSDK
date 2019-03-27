#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackVisibility(py::module &m)
{
    py::class_< UInterpTrackVisibility,  UInterpTrack   >(m, "UInterpTrackVisibility")
		.def_static("StaticClass", &UInterpTrackVisibility::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VisibilityTrack", &UInterpTrackVisibility::VisibilityTrack)
          ;
}