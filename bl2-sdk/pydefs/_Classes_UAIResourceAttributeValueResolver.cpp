#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAIResourceAttributeValueResolver()
{
    class_< UAIResourceAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UAIResourceAttributeValueResolver", no_init)
        .def_readwrite("Resource", &UAIResourceAttributeValueResolver::Resource)
        .def("StaticClass", &UAIResourceAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}