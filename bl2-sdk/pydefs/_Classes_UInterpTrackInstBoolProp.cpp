#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstBoolProp()
{
    class_< UInterpTrackInstBoolProp, bases< UInterpTrackInstProperty >  , boost::noncopyable>("UInterpTrackInstBoolProp", no_init)
        .def_readwrite("BoolProp", &UInterpTrackInstBoolProp::BoolProp)
        .def_readwrite("BitMask", &UInterpTrackInstBoolProp::BitMask)
        .def("StaticClass", &UInterpTrackInstBoolProp::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}