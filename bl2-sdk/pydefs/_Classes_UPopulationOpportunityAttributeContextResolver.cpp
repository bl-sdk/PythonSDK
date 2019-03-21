#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationOpportunityAttributeContextResolver()
{
    class_< UPopulationOpportunityAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UPopulationOpportunityAttributeContextResolver", no_init)
        .def("StaticClass", &UPopulationOpportunityAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}