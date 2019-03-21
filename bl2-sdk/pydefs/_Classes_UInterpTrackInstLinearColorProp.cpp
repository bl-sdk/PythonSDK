#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstLinearColorProp()
{
    class_< UInterpTrackInstLinearColorProp, bases< UInterpTrackInstProperty >  , boost::noncopyable>("UInterpTrackInstLinearColorProp", no_init)
        .def_readwrite("ColorProp", &UInterpTrackInstLinearColorProp::ColorProp)
        .def_readwrite("ResetColor", &UInterpTrackInstLinearColorProp::ResetColor)
        .def("StaticClass", &UInterpTrackInstLinearColorProp::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}