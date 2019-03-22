#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWindDirectionalSourceComponent(py::module &m)
{
    py::class_< UWindDirectionalSourceComponent,  UActorComponent   >(m, "UWindDirectionalSourceComponent")
        .def_readwrite("SceneProxy", &UWindDirectionalSourceComponent::SceneProxy)
        .def_readwrite("Strength", &UWindDirectionalSourceComponent::Strength)
        .def_readwrite("Phase", &UWindDirectionalSourceComponent::Phase)
        .def_readwrite("Frequency", &UWindDirectionalSourceComponent::Frequency)
        .def_readwrite("Speed", &UWindDirectionalSourceComponent::Speed)
          ;
}