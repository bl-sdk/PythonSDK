#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWorldBody(py::module &m)
{
    py::class_< UWorldBody,  UObject   >(m, "UWorldBody")
        .def_readwrite("VfTable_IIWorldBody", &UWorldBody::VfTable_IIWorldBody)
        .def_readwrite("Instigator", &UWorldBody::Instigator)
        .def_readwrite("Location", &UWorldBody::Location)
        .def_readwrite("Rotation", &UWorldBody::Rotation)
        .def_readwrite("Velocity", &UWorldBody::Velocity)
        .def_readwrite("WorldBodyAttachmentProxy", &UWorldBody::WorldBodyAttachmentProxy)
        .def_readwrite("AttachmentProxyImpactInfo", &UWorldBody::AttachmentProxyImpactInfo)
        .def_readwrite("AdditionalQueryInterfaceSource", &UWorldBody::AdditionalQueryInterfaceSource)
        .def("Behavior_CauseRadiusDamage", &UWorldBody::Behavior_CauseRadiusDamage)
        .def("Behavior_CauseDamage", &UWorldBody::Behavior_CauseDamage)
        .def("ShutDown", &UWorldBody::ShutDown)
        .def("InitializeFromImpact", &UWorldBody::InitializeFromImpact)
        .def("Initialize", &UWorldBody::Initialize)
        .def("WorldBodyAttachComponent", &UWorldBody::WorldBodyAttachComponent)
        .def("WorldBodyAttachActor", &UWorldBody::WorldBodyAttachActor)
        .def("WorldBodyAttachTo", &UWorldBody::WorldBodyAttachTo)
        .def("GetWorldBodyAttachmentBase", &UWorldBody::GetWorldBodyAttachmentBase, py::return_value_policy::reference)
        .def("GetWorldBodyAttachmentBoneForComponent", &UWorldBody::GetWorldBodyAttachmentBoneForComponent)
        .def("GetWorldBodyAttachmentLocationAndRotation", &UWorldBody::GetWorldBodyAttachmentLocationAndRotation)
        .def("GetWorldBodyAttachmentRotation", &UWorldBody::GetWorldBodyAttachmentRotation)
        .def("GetWorldBodyAttachmentLocation", &UWorldBody::GetWorldBodyAttachmentLocation)
        .def("GetWorldBodyVelocity", &UWorldBody::GetWorldBodyVelocity)
        .def("GetWorldBodyRotation", &UWorldBody::GetWorldBodyRotation)
        .def("GetWorldBodyLocation", &UWorldBody::GetWorldBodyLocation)
          ;
}