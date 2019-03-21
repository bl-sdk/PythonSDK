#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackEvent()
{
    class_< UInterpTrackEvent, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackEvent", no_init)
        .def_readwrite("EventTrack", &UInterpTrackEvent::EventTrack)
        .def("StaticClass", &UInterpTrackEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}