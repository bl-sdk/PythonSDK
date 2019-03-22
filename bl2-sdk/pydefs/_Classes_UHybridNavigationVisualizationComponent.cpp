#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHybridNavigationVisualizationComponent(py::module &m)
{
    py::class_< UHybridNavigationVisualizationComponent,  UPrimitiveComponent   >(m, "UHybridNavigationVisualizationComponent")
        .def_readwrite("AllNavPoints", &UHybridNavigationVisualizationComponent::AllNavPoints)
        .def_readwrite("NavPointsToRepresent", &UHybridNavigationVisualizationComponent::NavPointsToRepresent)
        .def_readwrite("NextNavPointToProcess", &UHybridNavigationVisualizationComponent::NextNavPointToProcess)
        .def_readwrite("VisualizationVertsByNavPoint", &UHybridNavigationVisualizationComponent::VisualizationVertsByNavPoint)
        .def_readwrite("VisualizationColor", &UHybridNavigationVisualizationComponent::VisualizationColor)
        .def_readwrite("VisualizationStats", &UHybridNavigationVisualizationComponent::VisualizationStats)
          ;
}