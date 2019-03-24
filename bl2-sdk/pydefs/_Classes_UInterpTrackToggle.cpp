#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackToggle(py::module &m)
{
    py::class_< UInterpTrackToggle,  UInterpTrack   >(m, "UInterpTrackToggle")
		.def_static("StaticClass", &UInterpTrackToggle::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ToggleTrack", &UInterpTrackToggle::ToggleTrack)
          ;
}