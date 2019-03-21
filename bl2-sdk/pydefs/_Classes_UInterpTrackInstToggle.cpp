#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstToggle()
{
    class_< UInterpTrackInstToggle, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstToggle", no_init)
        .def_readwrite("Action", &UInterpTrackInstToggle::Action)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstToggle::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstToggle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}