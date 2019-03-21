#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationOpportunityPointRenderingComponent()
{
    class_< UPopulationOpportunityPointRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UPopulationOpportunityPointRenderingComponent", no_init)
        .def("StaticClass", &UPopulationOpportunityPointRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}