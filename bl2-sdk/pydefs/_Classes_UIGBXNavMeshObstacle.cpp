#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIGBXNavMeshObstacle()
{
    py::class_< UIGBXNavMeshObstacle,  UInterface   >("UIGBXNavMeshObstacle")
        .def("StaticClass", &UIGBXNavMeshObstacle::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}