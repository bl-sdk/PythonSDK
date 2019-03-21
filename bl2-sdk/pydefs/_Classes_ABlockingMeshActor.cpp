#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ABlockingMeshActor()
{
    class_< ABlockingMeshActor, bases< AStaticMeshActorBase >  , boost::noncopyable>("ABlockingMeshActor", no_init)
        .def_readwrite("VfTable_IIGBXNavMeshObstacle", &ABlockingMeshActor::VfTable_IIGBXNavMeshObstacle)
        .def_readwrite("BlockingMeshComponent", &ABlockingMeshActor::BlockingMeshComponent)
        .def_readwrite("BlockingMeshMaterial", &ABlockingMeshActor::BlockingMeshMaterial)
        .def_readwrite("MatInstantConstant", &ABlockingMeshActor::MatInstantConstant)
        .def_readwrite("MatInstantConstantNew", &ABlockingMeshActor::MatInstantConstantNew)
        .def("StaticClass", &ABlockingMeshActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}