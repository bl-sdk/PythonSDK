#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerReplicationInfoAttributeContextResolver()
{
    class_< UPlayerReplicationInfoAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UPlayerReplicationInfoAttributeContextResolver", no_init)
        .def("StaticClass", &UPlayerReplicationInfoAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}