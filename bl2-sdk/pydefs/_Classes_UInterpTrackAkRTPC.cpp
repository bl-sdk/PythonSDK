#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackAkRTPC()
{
    class_< UInterpTrackAkRTPC, bases< UInterpTrackFloatBase >  , boost::noncopyable>("UInterpTrackAkRTPC", no_init)
        .def_readwrite("AkRtpc", &UInterpTrackAkRTPC::AkRtpc)
        .def("StaticClass", &UInterpTrackAkRTPC::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}