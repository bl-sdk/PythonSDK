#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNavMeshPathSize()
{
    py::class_< FNavMeshPathSize >("FNavMeshPathSize")
        .def_readwrite("Size", &FNavMeshPathSize::Size)
        .def_readwrite("Height", &FNavMeshPathSize::Height)
        .def_readwrite("PolyColor", &FNavMeshPathSize::PolyColor)
        .def_readwrite("ObstacleColor", &FNavMeshPathSize::ObstacleColor)
  ;
}