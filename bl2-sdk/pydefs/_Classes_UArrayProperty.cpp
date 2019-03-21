#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UArrayProperty()
{
    class_< UArrayProperty, bases< UProperty >  , boost::noncopyable>("UArrayProperty", no_init)
        .def_readonly("UnknownData00", &UArrayProperty::UnknownData00)
        .def("StaticClass", &UArrayProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}