#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttributeValueResolver()
{
    class_< UAttributeValueResolver, bases< UObject >  , boost::noncopyable>("UAttributeValueResolver", no_init)
        .def("StaticClass", &UAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}