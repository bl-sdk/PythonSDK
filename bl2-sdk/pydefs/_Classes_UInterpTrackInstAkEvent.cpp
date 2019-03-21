#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstAkEvent()
{
    class_< UInterpTrackInstAkEvent, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstAkEvent", no_init)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstAkEvent::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstAkEvent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}