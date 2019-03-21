#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstProperty()
{
    class_< UInterpTrackInstProperty, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstProperty", no_init)
        .def_readwrite("PropertyUpdateCallback", &UInterpTrackInstProperty::PropertyUpdateCallback)
        .def_readwrite("PropertyOuterObjectInst", &UInterpTrackInstProperty::PropertyOuterObjectInst)
        .def("StaticClass", &UInterpTrackInstProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}