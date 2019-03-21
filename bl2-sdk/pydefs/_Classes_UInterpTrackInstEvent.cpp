#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstEvent()
{
    class_< UInterpTrackInstEvent, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstEvent", no_init)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstEvent::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}