#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstAkRTPC()
{
    class_< UInterpTrackInstAkRTPC, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstAkRTPC", no_init)
        .def("StaticClass", &UInterpTrackInstAkRTPC::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}