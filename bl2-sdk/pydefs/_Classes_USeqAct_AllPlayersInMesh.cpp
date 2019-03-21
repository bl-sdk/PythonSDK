#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AllPlayersInMesh()
{
    class_< USeqAct_AllPlayersInMesh, bases< USequenceAction >  , boost::noncopyable>("USeqAct_AllPlayersInMesh", no_init)
        .def_readwrite("Meshes", &USeqAct_AllPlayersInMesh::Meshes)
        .def("StaticClass", &USeqAct_AllPlayersInMesh::StaticClass, return_value_policy< reference_existing_object >())
        .def("AllPlayersInMesh", &USeqAct_AllPlayersInMesh::AllPlayersInMesh)
        .def("MeshEncompassesActor", &USeqAct_AllPlayersInMesh::MeshEncompassesActor)
        .def("PlayerIsInAMesh", &USeqAct_AllPlayersInMesh::PlayerIsInAMesh)
        .staticmethod("StaticClass")
  ;
}