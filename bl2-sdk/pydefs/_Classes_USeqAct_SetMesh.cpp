#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetMesh()
{
    class_< USeqAct_SetMesh, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetMesh", no_init)
        .def_readwrite("NewSkeletalMesh", &USeqAct_SetMesh::NewSkeletalMesh)
        .def_readwrite("NewStaticMesh", &USeqAct_SetMesh::NewStaticMesh)
        .def_readwrite("MeshType", &USeqAct_SetMesh::MeshType)
        .def("StaticClass", &USeqAct_SetMesh::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}