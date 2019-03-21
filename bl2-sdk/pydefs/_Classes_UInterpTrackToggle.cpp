#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackToggle()
{
    class_< UInterpTrackToggle, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackToggle", no_init)
        .def_readwrite("ToggleTrack", &UInterpTrackToggle::ToggleTrack)
        .def("StaticClass", &UInterpTrackToggle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}