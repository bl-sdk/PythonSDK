#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UProperty()
{
    class_< UProperty, bases< UField >  , boost::noncopyable>("UProperty", no_init)
        .def_readonly("UnknownData00", &UProperty::UnknownData00)
        .def("StaticClass", &UProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}