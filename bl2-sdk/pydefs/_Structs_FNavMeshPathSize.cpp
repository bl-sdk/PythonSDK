#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNavMeshPathSize()
{
    class_< FNavMeshPathSize >("FNavMeshPathSize", no_init)
        .def_readwrite("Size", &FNavMeshPathSize::Size)
        .def_readwrite("Height", &FNavMeshPathSize::Height)
        .def_readwrite("PolyColor", &FNavMeshPathSize::PolyColor)
        .def_readwrite("ObstacleColor", &FNavMeshPathSize::ObstacleColor)
  ;
}