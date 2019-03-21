#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstComment()
{
    class_< UInterpTrackInstComment, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstComment", no_init)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstComment::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstComment::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}