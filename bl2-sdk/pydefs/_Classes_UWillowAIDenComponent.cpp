#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAIDenComponent(py::module &m)
{
    py::class_< UWillowAIDenComponent,  UWillowAIComponent   >(m, "UWillowAIDenComponent")
        .def_readwrite("ParentDenAI", &UWillowAIDenComponent::ParentDenAI)
        .def("StaticClass", &UWillowAIDenComponent::StaticClass, py::return_value_policy::reference)
        .def("ShouldRemoveTarget", &UWillowAIDenComponent::ShouldRemoveTarget)
        .def("FindTargetsInDen", &UWillowAIDenComponent::FindTargetsInDen)
        .def("FindTargets", &UWillowAIDenComponent::FindTargets)
          ;
}