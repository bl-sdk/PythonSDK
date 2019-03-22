#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackEvent(py::module &m)
{
    py::class_< UInterpTrackEvent,  UInterpTrack   >(m, "UInterpTrackEvent")
        .def_readwrite("EventTrack", &UInterpTrackEvent::EventTrack)
          ;
}