#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMapProperty()
{
    class_< UMapProperty, bases< UProperty >  , boost::noncopyable>("UMapProperty", no_init)
        .def_readonly("UnknownData00", &UMapProperty::UnknownData00)
        .def("StaticClass", &UMapProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}