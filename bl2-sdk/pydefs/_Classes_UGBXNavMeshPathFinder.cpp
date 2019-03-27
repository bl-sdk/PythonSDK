#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGBXNavMeshPathFinder(py::module &m)
{
    py::class_< UGBXNavMeshPathFinder,  UObject   >(m, "UGBXNavMeshPathFinder")
		.def_static("StaticClass", &UGBXNavMeshPathFinder::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PathModifiers", &UGBXNavMeshPathFinder::PathModifiers)
        .def("FindPathToLocation", &UGBXNavMeshPathFinder::FindPathToLocation)
        .def("FindNavMeshPolyForPoint", &UGBXNavMeshPathFinder::FindNavMeshPolyForPoint)
          ;
}