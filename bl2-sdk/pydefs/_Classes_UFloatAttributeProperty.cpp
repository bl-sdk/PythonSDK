#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFloatAttributeProperty()
{
    class_< UFloatAttributeProperty, bases< UFloatProperty >  , boost::noncopyable>("UFloatAttributeProperty", no_init)
        .def_readonly("UnknownData00", &UFloatAttributeProperty::UnknownData00)
        .def("StaticClass", &UFloatAttributeProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}