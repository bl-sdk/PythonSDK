#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstHeadTracking(py::module &m)
{
    py::class_< UInterpTrackInstHeadTracking,  UInterpTrackInst   >(m, "UInterpTrackInstHeadTracking")
		.def_static("StaticClass", &UInterpTrackInstHeadTracking::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Action", &UInterpTrackInstHeadTracking::Action)
        .def_readwrite("Mesh", &UInterpTrackInstHeadTracking::Mesh)
        .def_readwrite("TrackControls", &UInterpTrackInstHeadTracking::TrackControls)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstHeadTracking::LastUpdatePosition)
          ;
}