#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStaticMeshComponent(py::module &m)
{
    py::class_< UStaticMeshComponent, UMeshComponent   >(m, "UStaticMeshComponent")
        .def_readwrite("StaticMesh", &UStaticMeshComponent::StaticMesh)
        .def_readwrite("OverriddenLODMaxRange", &UStaticMeshComponent::OverriddenLODMaxRange)
        .def_readwrite("StreamingDistanceMultiplier", &UStaticMeshComponent::StreamingDistanceMultiplier)
        .def_readwrite("IrrelevantLights", &UStaticMeshComponent::IrrelevantLights)
        .def_readwrite("LODData", &UStaticMeshComponent::LODData)
        .def_readwrite("ViewZeroOffset", &UStaticMeshComponent::ViewZeroOffset)
        .def_readwrite("ViewOneOffset", &UStaticMeshComponent::ViewOneOffset)
        .def_readwrite("ForcedLodModel", &UStaticMeshComponent::ForcedLodModel)
        .def_readwrite("PreviousLODLevel", &UStaticMeshComponent::PreviousLODLevel)
        .def("StaticClass", &UStaticMeshComponent::StaticClass, py::return_value_policy::reference)
        .def("SetViewportMaterialOffsets", &UStaticMeshComponent::SetViewportMaterialOffsets)
        .def("CanBecomeDynamic", &UStaticMeshComponent::CanBecomeDynamic)
        .def("SetForceStaticDecals", &UStaticMeshComponent::SetForceStaticDecals)
        .def("DisableRBCollisionWithSMC", &UStaticMeshComponent::DisableRBCollisionWithSMC)
        .def("SetStaticMesh", &UStaticMeshComponent::SetStaticMesh)
          ;
}