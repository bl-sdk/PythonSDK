#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactorySkeletalMesh()
{
    py::class_< UActorFactorySkeletalMesh,  UActorFactory   >("UActorFactorySkeletalMesh")
        .def_readwrite("SkeletalMesh", &UActorFactorySkeletalMesh::SkeletalMesh)
        .def_readwrite("AnimSet", &UActorFactorySkeletalMesh::AnimSet)
        .def_readwrite("AnimSequenceName", &UActorFactorySkeletalMesh::AnimSequenceName)
        .def("StaticClass", &UActorFactorySkeletalMesh::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}