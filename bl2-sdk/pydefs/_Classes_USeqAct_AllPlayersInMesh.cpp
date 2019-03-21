#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AllPlayersInMesh(py::object m)
{
    py::class_< USeqAct_AllPlayersInMesh,  USequenceAction   >(m, "USeqAct_AllPlayersInMesh")
        .def_readwrite("Meshes", &USeqAct_AllPlayersInMesh::Meshes)
        .def("StaticClass", &USeqAct_AllPlayersInMesh::StaticClass, py::return_value_policy::reference)
        .def("AllPlayersInMesh", &USeqAct_AllPlayersInMesh::AllPlayersInMesh)
        .def("MeshEncompassesActor", &USeqAct_AllPlayersInMesh::MeshEncompassesActor)
        .def("PlayerIsInAMesh", &USeqAct_AllPlayersInMesh::PlayerIsInAMesh)
          ;
}