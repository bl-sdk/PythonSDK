#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationOpportunityPointRenderingComponent(py::object m)
{
    py::class_< UPopulationOpportunityPointRenderingComponent,  UPrimitiveComponent   >(m, "UPopulationOpportunityPointRenderingComponent")
        .def("StaticClass", &UPopulationOpportunityPointRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}