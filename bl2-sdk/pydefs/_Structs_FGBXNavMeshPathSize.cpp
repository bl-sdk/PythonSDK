#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPathSize(py::module &m)
{
    py::class_< FGBXNavMeshPathSize >(m, "FGBXNavMeshPathSize")
        .def_readwrite("Radius", &FGBXNavMeshPathSize::Radius)
        .def_readwrite("Height", &FGBXNavMeshPathSize::Height)
        .def_readwrite("DrawColor", &FGBXNavMeshPathSize::DrawColor)
        .def_readwrite("ObstacleDrawColor", &FGBXNavMeshPathSize::ObstacleDrawColor)
        .def_readwrite("StartIndex", &FGBXNavMeshPathSize::StartIndex)
  ;
}