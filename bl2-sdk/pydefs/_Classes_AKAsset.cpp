#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AKAsset(py::module &m)
{
    py::class_< AKAsset,  AActor   >(m, "AKAsset")
        .def_readwrite("SkeletalMeshComponent", &AKAsset::SkeletalMeshComponent)
        .def_readwrite("ReplicatedMesh", &AKAsset::ReplicatedMesh)
        .def_readwrite("ReplicatedPhysAsset", &AKAsset::ReplicatedPhysAsset)
        .def("DoKismetAttachment", &AKAsset::DoKismetAttachment)
        .def("OnTeleport", &AKAsset::OnTeleport)
        .def("OnToggle", &AKAsset::OnToggle)
        .def("TakeRadiusDamage", &AKAsset::TakeRadiusDamage)
        .def("eventTakeDamage", &AKAsset::eventTakeDamage)
        .def("eventReplicatedEvent", &AKAsset::eventReplicatedEvent)
        .def("SetMeshAndPhysAsset", &AKAsset::SetMeshAndPhysAsset)
        .def("eventPostBeginPlay", &AKAsset::eventPostBeginPlay)
          ;
}