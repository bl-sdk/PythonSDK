#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactorySkeletalMesh(py::module &m)
{
    py::class_< UActorFactorySkeletalMesh,  UActorFactory   >(m, "UActorFactorySkeletalMesh")
        .def_readwrite("SkeletalMesh", &UActorFactorySkeletalMesh::SkeletalMesh)
        .def_readwrite("AnimSet", &UActorFactorySkeletalMesh::AnimSet)
        .def_readwrite("AnimSequenceName", &UActorFactorySkeletalMesh::AnimSequenceName)
          ;
}