#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStaticMeshCollectionActor(py::module &m)
{
    py::class_< AStaticMeshCollectionActor,  AStaticMeshActorBase   >(m, "AStaticMeshCollectionActor")
        .def_readwrite("StaticMeshComponents", &AStaticMeshCollectionActor::StaticMeshComponents)
        .def_readwrite("MaxStaticMeshComponents", &AStaticMeshCollectionActor::MaxStaticMeshComponents)
        .def("StaticClass", &AStaticMeshCollectionActor::StaticClass, py::return_value_policy::reference)
          ;
}