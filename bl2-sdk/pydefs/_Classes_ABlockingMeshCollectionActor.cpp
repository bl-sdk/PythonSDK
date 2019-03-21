#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ABlockingMeshCollectionActor()
{
    py::class_< ABlockingMeshCollectionActor,  AStaticMeshActorBase   >("ABlockingMeshCollectionActor")
        .def_readwrite("BlockingMeshComponents", &ABlockingMeshCollectionActor::BlockingMeshComponents)
        .def_readwrite("MaxBlockingMeshComponents", &ABlockingMeshCollectionActor::MaxBlockingMeshComponents)
        .def("StaticClass", &ABlockingMeshCollectionActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}