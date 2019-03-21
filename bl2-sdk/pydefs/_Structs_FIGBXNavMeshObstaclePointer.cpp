#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FIGBXNavMeshObstaclePointer()
{
    class_< FIGBXNavMeshObstaclePointer >("FIGBXNavMeshObstaclePointer", no_init)
        .def_readwrite("Dummy", &FIGBXNavMeshObstaclePointer::Dummy)
  ;
}