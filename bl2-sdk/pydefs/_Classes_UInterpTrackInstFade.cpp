#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstFade()
{
    class_< UInterpTrackInstFade, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstFade", no_init)
        .def("StaticClass", &UInterpTrackInstFade::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}