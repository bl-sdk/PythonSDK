#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstHeadTracking()
{
    class_< UInterpTrackInstHeadTracking, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstHeadTracking", no_init)
        .def_readwrite("Action", &UInterpTrackInstHeadTracking::Action)
        .def_readonly("UnknownData00", &UInterpTrackInstHeadTracking::UnknownData00)
        .def_readwrite("Mesh", &UInterpTrackInstHeadTracking::Mesh)
        .def_readwrite("TrackControls", &UInterpTrackInstHeadTracking::TrackControls)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstHeadTracking::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstHeadTracking::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}