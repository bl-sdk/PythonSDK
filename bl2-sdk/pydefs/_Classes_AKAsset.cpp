#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AKAsset()
{
    class_< AKAsset, bases< AActor >  , boost::noncopyable>("AKAsset", no_init)
        .def_readwrite("SkeletalMeshComponent", &AKAsset::SkeletalMeshComponent)
        .def_readwrite("ReplicatedMesh", &AKAsset::ReplicatedMesh)
        .def_readwrite("ReplicatedPhysAsset", &AKAsset::ReplicatedPhysAsset)
        .def("StaticClass", &AKAsset::StaticClass, return_value_policy< reference_existing_object >())
        .def("DoKismetAttachment", &AKAsset::DoKismetAttachment)
        .def("OnTeleport", &AKAsset::OnTeleport)
        .def("OnToggle", &AKAsset::OnToggle)
        .def("TakeRadiusDamage", &AKAsset::TakeRadiusDamage)
        .def("eventTakeDamage", &AKAsset::eventTakeDamage)
        .def("eventReplicatedEvent", &AKAsset::eventReplicatedEvent)
        .def("SetMeshAndPhysAsset", &AKAsset::SetMeshAndPhysAsset)
        .def("eventPostBeginPlay", &AKAsset::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}