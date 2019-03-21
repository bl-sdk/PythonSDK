#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstHeadTracking(py::object m)
{
    py::class_< UInterpTrackInstHeadTracking,  UInterpTrackInst   >(m, "UInterpTrackInstHeadTracking")
        .def_readwrite("Action", &UInterpTrackInstHeadTracking::Action)
        .def_readonly("UnknownData00", &UInterpTrackInstHeadTracking::UnknownData00)
        .def_readwrite("Mesh", &UInterpTrackInstHeadTracking::Mesh)
        .def_readwrite("TrackControls", &UInterpTrackInstHeadTracking::TrackControls)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstHeadTracking::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstHeadTracking::StaticClass, py::return_value_policy::reference)
          ;
}