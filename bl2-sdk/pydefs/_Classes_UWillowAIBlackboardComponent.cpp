#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAIBlackboardComponent()
{
    py::class_< UWillowAIBlackboardComponent,  UWillowAIComponent   >("UWillowAIBlackboardComponent")
        .def_readwrite("Allegiance", &UWillowAIBlackboardComponent::Allegiance)
        .def("StaticClass", &UWillowAIBlackboardComponent::StaticClass, py::return_value_policy::reference)
        .def("GetAllegiance", &UWillowAIBlackboardComponent::GetAllegiance, py::return_value_policy::reference)
        .def("GetTargets", &UWillowAIBlackboardComponent::GetTargets)
        .staticmethod("StaticClass")
  ;
}