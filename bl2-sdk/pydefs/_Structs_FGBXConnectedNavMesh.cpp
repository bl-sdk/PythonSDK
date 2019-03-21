#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGBXConnectedNavMesh()
{
    class_< FGBXConnectedNavMesh >("FGBXConnectedNavMesh", no_init)
        .def_readwrite("Mesh", &FGBXConnectedNavMesh::Mesh)
        .def_readwrite("MeshID", &FGBXConnectedNavMesh::MeshID)
  ;
}