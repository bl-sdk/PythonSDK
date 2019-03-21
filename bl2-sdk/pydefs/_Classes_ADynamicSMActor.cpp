#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADynamicSMActor()
{
    class_< ADynamicSMActor, bases< AActor >  , boost::noncopyable>("ADynamicSMActor", no_init)
        .def_readwrite("StaticMeshComponent", &ADynamicSMActor::StaticMeshComponent)
        .def_readwrite("LightEnvironment", &ADynamicSMActor::LightEnvironment)
        .def_readwrite("ReplicatedMesh", &ADynamicSMActor::ReplicatedMesh)
        .def_readwrite("ReplicatedMaterial0", &ADynamicSMActor::ReplicatedMaterial0)
        .def_readwrite("ReplicatedMaterial1", &ADynamicSMActor::ReplicatedMaterial1)
        .def_readwrite("ReplicatedMeshTranslation", &ADynamicSMActor::ReplicatedMeshTranslation)
        .def_readwrite("ReplicatedMeshRotation", &ADynamicSMActor::ReplicatedMeshRotation)
        .def_readwrite("ReplicatedMeshScale3D", &ADynamicSMActor::ReplicatedMeshScale3D)
        .def("StaticClass", &ADynamicSMActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetLightEnvironmentToNotBeDynamic", &ADynamicSMActor::SetLightEnvironmentToNotBeDynamic)
        .def("eventDetach", &ADynamicSMActor::eventDetach)
        .def("eventAttach", &ADynamicSMActor::eventAttach)
        .def("CanBasePawn", &ADynamicSMActor::CanBasePawn)
        .def("SetStaticMesh", &ADynamicSMActor::SetStaticMesh)
        .def("OnSetMaterial", &ADynamicSMActor::OnSetMaterial)
        .def("OnSetMesh", &ADynamicSMActor::OnSetMesh)
        .def("eventReplicatedEvent", &ADynamicSMActor::eventReplicatedEvent)
        .def("eventPostBeginPlay", &ADynamicSMActor::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}