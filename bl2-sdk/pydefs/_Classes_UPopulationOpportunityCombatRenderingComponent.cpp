#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationOpportunityCombatRenderingComponent()
{
    py::class_< UPopulationOpportunityCombatRenderingComponent,  UPrimitiveComponent   >("UPopulationOpportunityCombatRenderingComponent")
        .def("StaticClass", &UPopulationOpportunityCombatRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}