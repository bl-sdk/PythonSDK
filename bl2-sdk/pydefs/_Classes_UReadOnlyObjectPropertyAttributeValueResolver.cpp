#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UReadOnlyObjectPropertyAttributeValueResolver()
{
    class_< UReadOnlyObjectPropertyAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UReadOnlyObjectPropertyAttributeValueResolver", no_init)
        .def_readwrite("PropertyName", &UObjectPropertyAttributeValueResolver::PropertyName)
        .def_readwrite("CachedProperty", &UObjectPropertyAttributeValueResolver::CachedProperty)
        .def("StaticClass", &UReadOnlyObjectPropertyAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}