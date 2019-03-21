#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationOpportunityDenRenderingComponent()
{
    class_< UPopulationOpportunityDenRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UPopulationOpportunityDenRenderingComponent", no_init)
        .def("StaticClass", &UPopulationOpportunityDenRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}