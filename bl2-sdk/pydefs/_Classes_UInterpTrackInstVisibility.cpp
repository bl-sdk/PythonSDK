#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstVisibility()
{
    class_< UInterpTrackInstVisibility, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstVisibility", no_init)
        .def_readwrite("Action", &UInterpTrackInstVisibility::Action)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstVisibility::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstVisibility::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}