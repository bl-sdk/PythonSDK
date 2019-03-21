#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UByteProperty()
{
    class_< UByteProperty, bases< UProperty >  , boost::noncopyable>("UByteProperty", no_init)
        .def_readonly("UnknownData00", &UByteProperty::UnknownData00)
        .def("StaticClass", &UByteProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}