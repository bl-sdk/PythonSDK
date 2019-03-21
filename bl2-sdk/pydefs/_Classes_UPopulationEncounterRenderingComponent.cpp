#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationEncounterRenderingComponent()
{
    class_< UPopulationEncounterRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UPopulationEncounterRenderingComponent", no_init)
        .def("StaticClass", &UPopulationEncounterRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}