#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDelegateProperty()
{
    class_< UDelegateProperty, bases< UProperty >  , boost::noncopyable>("UDelegateProperty", no_init)
        .def_readonly("UnknownData00", &UDelegateProperty::UnknownData00)
        .def("StaticClass", &UDelegateProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}