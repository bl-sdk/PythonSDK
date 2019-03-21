#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UObjectPropertyAttributeValueResolver()
{
    class_< UObjectPropertyAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UObjectPropertyAttributeValueResolver", no_init)
        .def_readwrite("PropertyName", &UObjectPropertyAttributeValueResolver::PropertyName)
        .def_readwrite("CachedProperty", &UObjectPropertyAttributeValueResolver::CachedProperty)
        .def("StaticClass", &UObjectPropertyAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}