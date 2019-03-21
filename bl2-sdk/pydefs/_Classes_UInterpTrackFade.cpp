#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackFade()
{
    class_< UInterpTrackFade, bases< UInterpTrackFloatBase >  , boost::noncopyable>("UInterpTrackFade", no_init)
        .def_readwrite("FadeColor", &UInterpTrackFade::FadeColor)
        .def("StaticClass", &UInterpTrackFade::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}