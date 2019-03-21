#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStrProperty()
{
    class_< UStrProperty, bases< UProperty >  , boost::noncopyable>("UStrProperty", no_init)
        .def("StaticClass", &UStrProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}