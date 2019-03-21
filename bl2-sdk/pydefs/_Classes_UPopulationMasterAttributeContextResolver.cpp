#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationMasterAttributeContextResolver()
{
    class_< UPopulationMasterAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UPopulationMasterAttributeContextResolver", no_init)
        .def("StaticClass", &UPopulationMasterAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeContext", &UPopulationMasterAttributeContextResolver::GetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}