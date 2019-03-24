#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAIEncounterComponent(py::module &m)
{
    py::class_< UWillowAIEncounterComponent,  UWillowAIDenComponent   >(m, "UWillowAIEncounterComponent")
		.def_static("StaticClass", &UWillowAIEncounterComponent::StaticClass, py::return_value_policy::reference)
          ;
}