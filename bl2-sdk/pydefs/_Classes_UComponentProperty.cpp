#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UComponentProperty()
{
    class_< UComponentProperty, bases< UObjectProperty >  , boost::noncopyable>("UComponentProperty", no_init)
        .def("StaticClass", &UComponentProperty::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}