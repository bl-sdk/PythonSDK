#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterfaceProperty()
{
    class_< UInterfaceProperty, bases< UProperty >  , boost::noncopyable>("UInterfaceProperty", no_init)
        .def_readonly("UnknownData00", &UInterfaceProperty::UnknownData00)
        .def("StaticClass", &UInterfaceProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}