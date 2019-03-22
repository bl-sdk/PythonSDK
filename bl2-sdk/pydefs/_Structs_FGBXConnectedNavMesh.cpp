#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXConnectedNavMesh(py::module &m)
{
    py::class_< FGBXConnectedNavMesh >(m, "FGBXConnectedNavMesh")
        .def_readwrite("Mesh", &FGBXConnectedNavMesh::Mesh)
        .def_readwrite("MeshID", &FGBXConnectedNavMesh::MeshID)
  ;
}