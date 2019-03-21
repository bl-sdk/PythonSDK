#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstColorProp()
{
    class_< UInterpTrackInstColorProp, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstColorProp", no_init)
        .def_readwrite("ColorProp", &UInterpTrackInstColorProp::ColorProp)
        .def_readwrite("ResetColor", &UInterpTrackInstColorProp::ResetColor)
        .def_readwrite("PropertyUpdateCallback", &UInterpTrackInstProperty::PropertyUpdateCallback)
        .def_readwrite("PropertyOuterObjectInst", &UInterpTrackInstProperty::PropertyOuterObjectInst)
        .def("StaticClass", &UInterpTrackInstColorProp::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}