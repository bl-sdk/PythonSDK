#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ABlockingMeshReplicatedActor()
{
    class_< ABlockingMeshReplicatedActor, bases< AStaticMeshActorBase >  , boost::noncopyable>("ABlockingMeshReplicatedActor", no_init)
        .def_readwrite("VfTable_IIGBXNavMeshObstacle", &ABlockingMeshActor::VfTable_IIGBXNavMeshObstacle)
        .def_readwrite("BlockingMeshComponent", &ABlockingMeshActor::BlockingMeshComponent)
        .def_readwrite("BlockingMeshMaterial", &ABlockingMeshActor::BlockingMeshMaterial)
        .def_readwrite("MatInstantConstant", &ABlockingMeshActor::MatInstantConstant)
        .def_readwrite("MatInstantConstantNew", &ABlockingMeshActor::MatInstantConstantNew)
        .def("StaticClass", &ABlockingMeshReplicatedActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("UpdateBlockingMeshComponent", &ABlockingMeshReplicatedActor::UpdateBlockingMeshComponent)
        .def("OnInterpToggle", &ABlockingMeshReplicatedActor::OnInterpToggle)
        .def("OnToggle", &ABlockingMeshReplicatedActor::OnToggle)
        .def("eventReplicatedEvent", &ABlockingMeshReplicatedActor::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}