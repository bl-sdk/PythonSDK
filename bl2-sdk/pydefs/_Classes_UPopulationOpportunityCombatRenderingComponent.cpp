#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationOpportunityCombatRenderingComponent(py::module &m)
{
    py::class_< UPopulationOpportunityCombatRenderingComponent,  UPrimitiveComponent   >(m, "UPopulationOpportunityCombatRenderingComponent")
          ;
}