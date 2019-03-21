#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UObjectPropertyContextResolver()
{
    class_< UObjectPropertyContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UObjectPropertyContextResolver", no_init)
        .def_readwrite("PropertyName", &UObjectPropertyContextResolver::PropertyName)
        .def("StaticClass", &UObjectPropertyContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}