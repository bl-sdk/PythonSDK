#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackBoolProp()
{
    class_< UInterpTrackBoolProp, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackBoolProp", no_init)
        .def_readwrite("BoolTrack", &UInterpTrackBoolProp::BoolTrack)
        .def_readwrite("PropertyName", &UInterpTrackBoolProp::PropertyName)
        .def("StaticClass", &UInterpTrackBoolProp::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}