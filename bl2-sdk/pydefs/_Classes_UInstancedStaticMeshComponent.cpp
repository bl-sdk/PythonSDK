#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInstancedStaticMeshComponent(py::object m)
{
    py::class_< UInstancedStaticMeshComponent,  UStaticMeshComponent   >(m, "UInstancedStaticMeshComponent")
        .def_readwrite("PerInstanceData", &UInstancedStaticMeshComponent::PerInstanceData)
        .def_readwrite("PerInstanceSMData", &UInstancedStaticMeshComponent::PerInstanceSMData)
        .def_readwrite("NumPendingLightmaps", &UInstancedStaticMeshComponent::NumPendingLightmaps)
        .def_readwrite("ComponentJoinKey", &UInstancedStaticMeshComponent::ComponentJoinKey)
        .def_readwrite("CachedMappings", &UInstancedStaticMeshComponent::CachedMappings)
        .def_readwrite("InstancingRandomSeed", &UInstancedStaticMeshComponent::InstancingRandomSeed)
        .def("StaticClass", &UInstancedStaticMeshComponent::StaticClass, py::return_value_policy::reference)
          ;
}