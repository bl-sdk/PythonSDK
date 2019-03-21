#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UByteAttributeProperty()
{
    class_< UByteAttributeProperty, bases< UByteProperty >  , boost::noncopyable>("UByteAttributeProperty", no_init)
        .def_readonly("UnknownData00", &UByteAttributeProperty::UnknownData00)
        .def("StaticClass", &UByteAttributeProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}