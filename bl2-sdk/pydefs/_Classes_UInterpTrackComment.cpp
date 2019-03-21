#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackComment()
{
    class_< UInterpTrackComment, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackComment", no_init)
        .def_readwrite("CommentTrack", &UInterpTrackComment::CommentTrack)
        .def("StaticClass", &UInterpTrackComment::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}