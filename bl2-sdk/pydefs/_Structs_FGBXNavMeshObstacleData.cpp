#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGBXNavMeshObstacleData()
{
    class_< FGBXNavMeshObstacleData >("FGBXNavMeshObstacleData", no_init)
        .def_readwrite("Obstacle", &FGBXNavMeshObstacleData::Obstacle)
        .def_readwrite("MinAffectedPathSize", &FGBXNavMeshObstacleData::MinAffectedPathSize)
  ;
}