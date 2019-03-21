#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackFloatProp()
{
    class_< UInterpTrackFloatProp, bases< UInterpTrackFloatBase >  , boost::noncopyable>("UInterpTrackFloatProp", no_init)
        .def_readwrite("PropertyName", &UInterpTrackFloatProp::PropertyName)
        .def("StaticClass", &UInterpTrackFloatProp::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}