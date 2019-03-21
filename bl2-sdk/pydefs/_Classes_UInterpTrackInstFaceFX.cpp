#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstFaceFX()
{
    class_< UInterpTrackInstFaceFX, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstFaceFX", no_init)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstFaceFX::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstFaceFX::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}