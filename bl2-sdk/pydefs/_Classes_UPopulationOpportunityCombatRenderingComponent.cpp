#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationOpportunityCombatRenderingComponent(py::object m)
{
    py::class_< UPopulationOpportunityCombatRenderingComponent,  UPrimitiveComponent   >(m, "UPopulationOpportunityCombatRenderingComponent")
        .def("StaticClass", &UPopulationOpportunityCombatRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}