#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDesignerAttributeContextResolver()
{
    class_< UDesignerAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UDesignerAttributeContextResolver", no_init)
        .def_readwrite("ValueName", &UDesignerAttributeContextResolver::ValueName)
        .def_readwrite("BaseValue", &UDesignerAttributeContextResolver::BaseValue)
        .def("StaticClass", &UDesignerAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeContext", &UDesignerAttributeContextResolver::GetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}