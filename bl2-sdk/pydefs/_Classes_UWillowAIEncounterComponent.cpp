#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAIEncounterComponent()
{
    py::class_< UWillowAIEncounterComponent,  UWillowAIDenComponent   >("UWillowAIEncounterComponent")
        .def("StaticClass", &UWillowAIEncounterComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}