#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UClassProperty()
{
    class_< UClassProperty, bases< UProperty >  , boost::noncopyable>("UClassProperty", no_init)
        .def_readonly("UnknownData00", &UClassProperty::UnknownData00)
        .def("StaticClass", &UClassProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}