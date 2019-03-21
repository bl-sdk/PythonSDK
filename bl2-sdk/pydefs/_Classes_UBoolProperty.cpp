#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBoolProperty()
{
    class_< UBoolProperty, bases< UProperty >  , boost::noncopyable>("UBoolProperty", no_init)
        .def_readonly("UnknownData00", &UBoolProperty::UnknownData00)
        .def("StaticClass", &UBoolProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}