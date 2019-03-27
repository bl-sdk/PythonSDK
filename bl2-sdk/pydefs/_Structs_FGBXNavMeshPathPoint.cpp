#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPathPoint(py::module &m)
{
    py::class_< FGBXNavMeshPathPoint >(m, "FGBXNavMeshPathPoint")
        .def_readwrite("Poly", &FGBXNavMeshPathPoint::Poly)
        .def_readwrite("Location", &FGBXNavMeshPathPoint::Location)
        .def_readwrite("SpecialMoveId", &FGBXNavMeshPathPoint::SpecialMoveId)
        .def_readwrite("NextPathObjectDistance", &FGBXNavMeshPathPoint::NextPathObjectDistance)
        .def_readwrite("CrossedObstacles", &FGBXNavMeshPathPoint::CrossedObstacles)
  ;
}