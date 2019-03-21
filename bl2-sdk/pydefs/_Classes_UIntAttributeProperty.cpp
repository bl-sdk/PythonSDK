#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIntAttributeProperty()
{
    class_< UIntAttributeProperty, bases< UIntProperty >  , boost::noncopyable>("UIntAttributeProperty", no_init)
        .def_readonly("UnknownData00", &UIntAttributeProperty::UnknownData00)
        .def("StaticClass", &UIntAttributeProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}