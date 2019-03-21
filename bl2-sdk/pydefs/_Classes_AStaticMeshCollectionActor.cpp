#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStaticMeshCollectionActor()
{
    py::class_< AStaticMeshCollectionActor,  AStaticMeshActorBase   >("AStaticMeshCollectionActor")
        .def_readwrite("StaticMeshComponents", &AStaticMeshCollectionActor::StaticMeshComponents)
        .def_readwrite("MaxStaticMeshComponents", &AStaticMeshCollectionActor::MaxStaticMeshComponents)
        .def("StaticClass", &AStaticMeshCollectionActor::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}