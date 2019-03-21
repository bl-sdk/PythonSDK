#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPath()
{
    class_< FGBXNavMeshPath >("FGBXNavMeshPath", no_init)
        .def_readwrite("PathPoints", &FGBXNavMeshPath::PathPoints)
        .def_readwrite("CurrentPathIdx", &FGBXNavMeshPath::CurrentPathIdx)
  ;
}