#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGBXNavMeshPathFinder()
{
    py::class_< UGBXNavMeshPathFinder,  UObject   >("UGBXNavMeshPathFinder")
        .def_readwrite("PathModifiers", &UGBXNavMeshPathFinder::PathModifiers)
        .def("StaticClass", &UGBXNavMeshPathFinder::StaticClass, py::return_value_policy::reference)
        .def("FindPathToLocation", &UGBXNavMeshPathFinder::FindPathToLocation)
        .def("FindNavMeshPolyForPoint", &UGBXNavMeshPathFinder::FindNavMeshPolyForPoint)
        .staticmethod("StaticClass")
  ;
}