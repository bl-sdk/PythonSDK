#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPathSize()
{
    class_< FGBXNavMeshPathSize >("FGBXNavMeshPathSize", no_init)
        .def_readwrite("Radius", &FGBXNavMeshPathSize::Radius)
        .def_readwrite("Height", &FGBXNavMeshPathSize::Height)
        .def_readwrite("DrawColor", &FGBXNavMeshPathSize::DrawColor)
        .def_readwrite("ObstacleDrawColor", &FGBXNavMeshPathSize::ObstacleDrawColor)
        .def_readwrite("StartIndex", &FGBXNavMeshPathSize::StartIndex)
  ;
}