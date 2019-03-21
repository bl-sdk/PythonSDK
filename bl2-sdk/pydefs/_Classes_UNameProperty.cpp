#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNameProperty()
{
    class_< UNameProperty, bases< UProperty >  , boost::noncopyable>("UNameProperty", no_init)
        .def("StaticClass", &UNameProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}