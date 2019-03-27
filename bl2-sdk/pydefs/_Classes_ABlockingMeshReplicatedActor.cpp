#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ABlockingMeshReplicatedActor(py::module &m)
{
    py::class_< ABlockingMeshReplicatedActor,  AStaticMeshActorBase   >(m, "ABlockingMeshReplicatedActor")
		.def_static("StaticClass", &ABlockingMeshReplicatedActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIGBXNavMeshObstacle", &ABlockingMeshActor::VfTable_IIGBXNavMeshObstacle)
        .def_readwrite("BlockingMeshComponent", &ABlockingMeshActor::BlockingMeshComponent)
        .def_readwrite("BlockingMeshMaterial", &ABlockingMeshActor::BlockingMeshMaterial)
        .def_readwrite("MatInstantConstant", &ABlockingMeshActor::MatInstantConstant)
        .def_readwrite("MatInstantConstantNew", &ABlockingMeshActor::MatInstantConstantNew)
        .def("UpdateBlockingMeshComponent", &ABlockingMeshReplicatedActor::UpdateBlockingMeshComponent)
        .def("OnInterpToggle", &ABlockingMeshReplicatedActor::OnInterpToggle)
        .def("OnToggle", &ABlockingMeshReplicatedActor::OnToggle)
        .def("eventReplicatedEvent", &ABlockingMeshReplicatedActor::eventReplicatedEvent)
          ;
}