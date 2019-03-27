#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationOpportunityDenRenderingComponent(py::module &m)
{
    py::class_< UPopulationOpportunityDenRenderingComponent,  UPrimitiveComponent   >(m, "UPopulationOpportunityDenRenderingComponent")
		.def_static("StaticClass", &UPopulationOpportunityDenRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}