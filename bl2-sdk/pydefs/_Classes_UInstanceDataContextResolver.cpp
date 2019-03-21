#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInstanceDataContextResolver()
{
    class_< UInstanceDataContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UInstanceDataContextResolver", no_init)
        .def_readwrite("InstanceDataName", &UInstanceDataContextResolver::InstanceDataName)
        .def("StaticClass", &UInstanceDataContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeContext", &UInstanceDataContextResolver::GetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}