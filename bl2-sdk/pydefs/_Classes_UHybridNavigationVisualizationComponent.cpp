#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHybridNavigationVisualizationComponent()
{
    class_< UHybridNavigationVisualizationComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UHybridNavigationVisualizationComponent", no_init)
        .def_readwrite("AllNavPoints", &UHybridNavigationVisualizationComponent::AllNavPoints)
        .def_readwrite("NavPointsToRepresent", &UHybridNavigationVisualizationComponent::NavPointsToRepresent)
        .def_readwrite("NextNavPointToProcess", &UHybridNavigationVisualizationComponent::NextNavPointToProcess)
        .def_readwrite("VisualizationVertsByNavPoint", &UHybridNavigationVisualizationComponent::VisualizationVertsByNavPoint)
        .def_readwrite("VisualizationColor", &UHybridNavigationVisualizationComponent::VisualizationColor)
        .def_readwrite("VisualizationStats", &UHybridNavigationVisualizationComponent::VisualizationStats)
        .def("StaticClass", &UHybridNavigationVisualizationComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}