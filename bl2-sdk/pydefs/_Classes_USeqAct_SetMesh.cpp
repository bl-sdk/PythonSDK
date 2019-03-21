#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetMesh()
{
    py::class_< USeqAct_SetMesh,  USequenceAction   >("USeqAct_SetMesh")
        .def_readwrite("NewSkeletalMesh", &USeqAct_SetMesh::NewSkeletalMesh)
        .def_readwrite("NewStaticMesh", &USeqAct_SetMesh::NewStaticMesh)
        .def_readwrite("MeshType", &USeqAct_SetMesh::MeshType)
        .def("StaticClass", &USeqAct_SetMesh::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}