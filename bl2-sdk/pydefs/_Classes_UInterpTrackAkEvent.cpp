#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackAkEvent(py::module &m)
{
    py::class_< UInterpTrackAkEvent,  UInterpTrack   >(m, "UInterpTrackAkEvent")
		.def_static("StaticClass", &UInterpTrackAkEvent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AkEvents", &UInterpTrackAkEvent::AkEvents)
          ;
}