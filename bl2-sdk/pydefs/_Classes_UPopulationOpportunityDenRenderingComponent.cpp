#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationOpportunityDenRenderingComponent()
{
    py::class_< UPopulationOpportunityDenRenderingComponent,  UPrimitiveComponent   >("UPopulationOpportunityDenRenderingComponent")
        .def("StaticClass", &UPopulationOpportunityDenRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}