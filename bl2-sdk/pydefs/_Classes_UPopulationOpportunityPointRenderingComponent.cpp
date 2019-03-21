#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationOpportunityPointRenderingComponent()
{
    py::class_< UPopulationOpportunityPointRenderingComponent,  UPrimitiveComponent   >("UPopulationOpportunityPointRenderingComponent")
        .def("StaticClass", &UPopulationOpportunityPointRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}