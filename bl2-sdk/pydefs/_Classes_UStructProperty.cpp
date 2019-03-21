#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStructProperty()
{
    class_< UStructProperty, bases< UProperty >  , boost::noncopyable>("UStructProperty", no_init)
        .def_readonly("UnknownData00", &UStructProperty::UnknownData00)
        .def("StaticClass", &UStructProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}