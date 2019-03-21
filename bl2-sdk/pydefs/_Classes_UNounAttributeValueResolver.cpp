#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNounAttributeValueResolver()
{
    class_< UNounAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UNounAttributeValueResolver", no_init)
        .def_readwrite("ReplicationStrategy", &UNounAttributeValueResolver::ReplicationStrategy)
        .def_readwrite("DefaultValue", &UNounAttributeValueResolver::DefaultValue)
        .def("StaticClass", &UNounAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}