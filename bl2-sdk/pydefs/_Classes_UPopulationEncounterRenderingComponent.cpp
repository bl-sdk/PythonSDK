#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationEncounterRenderingComponent()
{
    py::class_< UPopulationEncounterRenderingComponent,  UPrimitiveComponent   >("UPopulationEncounterRenderingComponent")
        .def("StaticClass", &UPopulationEncounterRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}