#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationOpportunityCombatRenderingComponent()
{
    class_< UPopulationOpportunityCombatRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UPopulationOpportunityCombatRenderingComponent", no_init)
        .def("StaticClass", &UPopulationOpportunityCombatRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}