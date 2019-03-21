#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPolyRef()
{
    py::class_< FGBXNavMeshPolyRef >("FGBXNavMeshPolyRef")
        .def_readwrite("NavMesh", &FGBXNavMeshPolyRef::NavMesh)
        .def_readwrite("PolyIdx", &FGBXNavMeshPolyRef::PolyIdx)
  ;
}