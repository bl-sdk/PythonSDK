#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicSMActor(py::module &m)
{
    py::class_< ADynamicSMActor,  AActor   >(m, "ADynamicSMActor")
		.def_static("StaticClass", &ADynamicSMActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("StaticMeshComponent", &ADynamicSMActor::StaticMeshComponent)
        .def_readwrite("LightEnvironment", &ADynamicSMActor::LightEnvironment)
        .def_readwrite("ReplicatedMesh", &ADynamicSMActor::ReplicatedMesh)
        .def_readwrite("ReplicatedMaterial0", &ADynamicSMActor::ReplicatedMaterial0)
        .def_readwrite("ReplicatedMaterial1", &ADynamicSMActor::ReplicatedMaterial1)
        .def_readwrite("ReplicatedMeshTranslation", &ADynamicSMActor::ReplicatedMeshTranslation)
        .def_readwrite("ReplicatedMeshRotation", &ADynamicSMActor::ReplicatedMeshRotation)
        .def_readwrite("ReplicatedMeshScale3D", &ADynamicSMActor::ReplicatedMeshScale3D)
        .def("SetLightEnvironmentToNotBeDynamic", &ADynamicSMActor::SetLightEnvironmentToNotBeDynamic)
        .def("eventDetach", &ADynamicSMActor::eventDetach)
        .def("eventAttach", &ADynamicSMActor::eventAttach)
        .def("CanBasePawn", &ADynamicSMActor::CanBasePawn)
        .def("SetStaticMesh", &ADynamicSMActor::SetStaticMesh)
        .def("OnSetMaterial", &ADynamicSMActor::OnSetMaterial)
        .def("OnSetMesh", &ADynamicSMActor::OnSetMesh)
        .def("eventReplicatedEvent", &ADynamicSMActor::eventReplicatedEvent)
        .def("eventPostBeginPlay", &ADynamicSMActor::eventPostBeginPlay)
          ;
}