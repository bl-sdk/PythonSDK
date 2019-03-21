#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UObjectProperty()
{
    class_< UObjectProperty, bases< UProperty >  , boost::noncopyable>("UObjectProperty", no_init)
        .def_readonly("UnknownData00", &UObjectProperty::UnknownData00)
        .def("StaticClass", &UObjectProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}