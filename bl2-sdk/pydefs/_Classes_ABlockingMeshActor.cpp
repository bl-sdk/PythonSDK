#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ABlockingMeshActor()
{
    py::class_< ABlockingMeshActor,  AStaticMeshActorBase   >("ABlockingMeshActor")
        .def_readwrite("VfTable_IIGBXNavMeshObstacle", &ABlockingMeshActor::VfTable_IIGBXNavMeshObstacle)
        .def_readwrite("BlockingMeshComponent", &ABlockingMeshActor::BlockingMeshComponent)
        .def_readwrite("BlockingMeshMaterial", &ABlockingMeshActor::BlockingMeshMaterial)
        .def_readwrite("MatInstantConstant", &ABlockingMeshActor::MatInstantConstant)
        .def_readwrite("MatInstantConstantNew", &ABlockingMeshActor::MatInstantConstantNew)
        .def("StaticClass", &ABlockingMeshActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}