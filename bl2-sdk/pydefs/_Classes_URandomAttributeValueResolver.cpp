#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URandomAttributeValueResolver()
{
    class_< URandomAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("URandomAttributeValueResolver", no_init)
        .def_readwrite("LowerBound", &URandomAttributeValueResolver::LowerBound)
        .def_readwrite("UpperBound", &URandomAttributeValueResolver::UpperBound)
        .def_readwrite("ValueLifetime", &URandomAttributeValueResolver::ValueLifetime)
        .def_readwrite("SavedRandomValues", &URandomAttributeValueResolver::SavedRandomValues)
        .def("StaticClass", &URandomAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}