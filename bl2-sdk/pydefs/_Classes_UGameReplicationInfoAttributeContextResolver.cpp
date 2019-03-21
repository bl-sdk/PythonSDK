#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGameReplicationInfoAttributeContextResolver()
{
    class_< UGameReplicationInfoAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UGameReplicationInfoAttributeContextResolver", no_init)
        .def("StaticClass", &UGameReplicationInfoAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeContext", &UGameReplicationInfoAttributeContextResolver::GetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}