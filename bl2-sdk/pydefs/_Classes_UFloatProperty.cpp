#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFloatProperty()
{
    class_< UFloatProperty, bases< UProperty >  , boost::noncopyable>("UFloatProperty", no_init)
        .def("StaticClass", &UFloatProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}