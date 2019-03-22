#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCoverMeshComponent(py::module &m)
{
    py::class_< UCoverMeshComponent,  UStaticMeshComponent   >(m, "UCoverMeshComponent")
        .def_readwrite("Meshes", &UCoverMeshComponent::Meshes)
        .def_readwrite("LocationOffset", &UCoverMeshComponent::LocationOffset)
        .def_readwrite("AutoAdjustOn", &UCoverMeshComponent::AutoAdjustOn)
        .def_readwrite("AutoAdjustOff", &UCoverMeshComponent::AutoAdjustOff)
        .def_readwrite("Disabled", &UCoverMeshComponent::Disabled)
        .def("StaticClass", &UCoverMeshComponent::StaticClass, py::return_value_policy::reference)
          ;
}