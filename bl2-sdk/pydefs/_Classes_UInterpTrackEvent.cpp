#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackEvent()
{
    py::class_< UInterpTrackEvent,  UInterpTrack   >("UInterpTrackEvent")
        .def_readwrite("EventTrack", &UInterpTrackEvent::EventTrack)
        .def("StaticClass", &UInterpTrackEvent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}