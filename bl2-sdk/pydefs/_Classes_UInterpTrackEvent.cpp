#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackEvent(py::module &m)
{
    py::class_< UInterpTrackEvent,  UInterpTrack   >(m, "UInterpTrackEvent")
		.def_static("StaticClass", &UInterpTrackEvent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("EventTrack", &UInterpTrackEvent::EventTrack)
          ;
}