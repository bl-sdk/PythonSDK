#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNamedObjectProperty()
{
    class_< FNamedObjectProperty >("FNamedObjectProperty", no_init)
        .def_readwrite("ObjectPropertyName", &FNamedObjectProperty::ObjectPropertyName)
        .def_readwrite("ObjectPropertyValue", &FNamedObjectProperty::ObjectPropertyValue)
  ;
}