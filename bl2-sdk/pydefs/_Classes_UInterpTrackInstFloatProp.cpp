#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstFloatProp()
{
    class_< UInterpTrackInstFloatProp, bases< UInterpTrackInstProperty >  , boost::noncopyable>("UInterpTrackInstFloatProp", no_init)
        .def_readwrite("FloatProp", &UInterpTrackInstFloatProp::FloatProp)
        .def_readwrite("ResetFloat", &UInterpTrackInstFloatProp::ResetFloat)
        .def("StaticClass", &UInterpTrackInstFloatProp::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}