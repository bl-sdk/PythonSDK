#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationEncounterRenderingComponent(py::module &m)
{
    py::class_< UPopulationEncounterRenderingComponent,  UPrimitiveComponent   >(m, "UPopulationEncounterRenderingComponent")
		.def_static("StaticClass", &UPopulationEncounterRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}