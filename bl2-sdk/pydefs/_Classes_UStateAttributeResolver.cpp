#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStateAttributeResolver()
{
    class_< UStateAttributeResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UStateAttributeResolver", no_init)
        .def_readwrite("NameKey", &UStateAttributeResolver::NameKey)
        .def("StaticClass", &UStateAttributeResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}