#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANavMeshObstacle_FCheckpointRecord()
{
    class_< ANavMeshObstacle_FCheckpointRecord >("ANavMeshObstacle_FCheckpointRecord", no_init)
  ;
}