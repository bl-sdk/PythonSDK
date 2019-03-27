#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrack(py::module &m)
{
    py::class_< UInterpTrack,  UObject   >(m, "UInterpTrack")
		.def_static("StaticClass", &UInterpTrack::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_FInterpEdInputInterface", &UInterpTrack::VfTable_FInterpEdInputInterface)
        .def_readwrite("CurveEdVTable", &UInterpTrack::CurveEdVTable)
        .def_readwrite("SubTracks", &UInterpTrack::SubTracks)
        .def_readwrite("TrackInstClass", &UInterpTrack::TrackInstClass)
        .def_readwrite("ActiveCondition", &UInterpTrack::ActiveCondition)
        .def_readwrite("TrackPlayDirection", &UInterpTrack::TrackPlayDirection)
        .def_readwrite("TrackTitle", &UInterpTrack::TrackTitle)
          ;
}