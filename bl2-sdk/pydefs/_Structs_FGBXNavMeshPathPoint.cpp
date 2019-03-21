#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPathPoint()
{
    class_< FGBXNavMeshPathPoint >("FGBXNavMeshPathPoint", no_init)
        .def_readwrite("Poly", &FGBXNavMeshPathPoint::Poly)
        .def_readwrite("Location", &FGBXNavMeshPathPoint::Location)
        .def_readwrite("SpecialMoveId", &FGBXNavMeshPathPoint::SpecialMoveId)
        .def_readwrite("NextPathObjectDistance", &FGBXNavMeshPathPoint::NextPathObjectDistance)
        .def_readwrite("CrossedObstacles", &FGBXNavMeshPathPoint::CrossedObstacles)
  ;
}