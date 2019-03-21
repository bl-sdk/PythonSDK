#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPolyRef()
{
    class_< FGBXNavMeshPolyRef >("FGBXNavMeshPolyRef", no_init)
        .def_readwrite("NavMesh", &FGBXNavMeshPolyRef::NavMesh)
        .def_readwrite("PolyIdx", &FGBXNavMeshPolyRef::PolyIdx)
  ;
}