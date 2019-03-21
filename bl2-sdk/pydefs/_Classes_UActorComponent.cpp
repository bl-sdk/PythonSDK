#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorComponent()
{
    py::class_< UActorComponent,  UComponent   >("UActorComponent")
        .def_readwrite("VfTable_IIWorldBody", &UActorComponent::VfTable_IIWorldBody)
        .def_readwrite("Scene", &UActorComponent::Scene)
        .def_readwrite("Owner", &UActorComponent::Owner)
        .def_readwrite("TickGroup", &UActorComponent::TickGroup)
        .def("StaticClass", &UActorComponent::StaticClass, py::return_value_policy::reference)
        .def("Behavior_Destroy", &UActorComponent::Behavior_Destroy)
        .def("WorldBodyAttachComponent", &UActorComponent::WorldBodyAttachComponent)
        .def("WorldBodyAttachActor", &UActorComponent::WorldBodyAttachActor)
        .def("WorldBodyAttachTo", &UActorComponent::WorldBodyAttachTo)
        .def("GetWorldBodyAttachmentBase", &UActorComponent::GetWorldBodyAttachmentBase, py::return_value_policy::reference)
        .def("GetWorldBodyAttachmentBoneForComponent", &UActorComponent::GetWorldBodyAttachmentBoneForComponent)
        .def("GetWorldBodyAttachmentLocationAndRotation", &UActorComponent::GetWorldBodyAttachmentLocationAndRotation)
        .def("GetWorldBodyAttachmentRotation", &UActorComponent::GetWorldBodyAttachmentRotation)
        .def("GetWorldBodyAttachmentLocation", &UActorComponent::GetWorldBodyAttachmentLocation)
        .def("GetWorldBodyVelocity", &UActorComponent::GetWorldBodyVelocity)
        .def("GetWorldBodyRotation", &UActorComponent::GetWorldBodyRotation)
        .def("GetWorldBodyLocation", &UActorComponent::GetWorldBodyLocation)
        .def("IsPlayerOwnedBy", &UActorComponent::IsPlayerOwnedBy)
        .def("SetPlayerOwner", &UActorComponent::SetPlayerOwner)
        .def("DetachFromAny", &UActorComponent::DetachFromAny)
        .def("ForceUpdate", &UActorComponent::ForceUpdate)
        .def("SetComponentRBFixed", &UActorComponent::SetComponentRBFixed)
        .def("SetTickGroup", &UActorComponent::SetTickGroup)
        .staticmethod("StaticClass")
  ;
}