#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationOpportunityAreaRenderingComponent()
{
    py::class_< UPopulationOpportunityAreaRenderingComponent,  UPrimitiveComponent   >("UPopulationOpportunityAreaRenderingComponent")
        .def("StaticClass", &UPopulationOpportunityAreaRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}