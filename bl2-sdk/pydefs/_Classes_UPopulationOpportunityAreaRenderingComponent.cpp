#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationOpportunityAreaRenderingComponent()
{
    class_< UPopulationOpportunityAreaRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UPopulationOpportunityAreaRenderingComponent", no_init)
        .def("StaticClass", &UPopulationOpportunityAreaRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}