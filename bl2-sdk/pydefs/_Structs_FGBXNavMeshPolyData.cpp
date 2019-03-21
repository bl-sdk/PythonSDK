#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPolyData()
{
    class_< FGBXNavMeshPolyData >("FGBXNavMeshPolyData", no_init)
        .def_readwrite("CrossLevelConnections", &FGBXNavMeshPolyData::CrossLevelConnections)
        .def_readwrite("SpecialMoves", &FGBXNavMeshPolyData::SpecialMoves)
        .def_readonly("Obstacles", &FGBXNavMeshPolyData::Obstacles)
  ;
}