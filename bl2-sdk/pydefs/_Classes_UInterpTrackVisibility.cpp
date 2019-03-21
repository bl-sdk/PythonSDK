#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackVisibility()
{
    class_< UInterpTrackVisibility, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackVisibility", no_init)
        .def_readwrite("VisibilityTrack", &UInterpTrackVisibility::VisibilityTrack)
        .def("StaticClass", &UInterpTrackVisibility::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}