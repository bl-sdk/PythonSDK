#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackAkEvent()
{
    class_< UInterpTrackAkEvent, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackAkEvent", no_init)
        .def_readwrite("AkEvents", &UInterpTrackAkEvent::AkEvents)
        .def("StaticClass", &UInterpTrackAkEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}