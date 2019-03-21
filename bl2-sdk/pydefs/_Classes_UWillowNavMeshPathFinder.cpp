#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowNavMeshPathFinder()
{
    py::class_< UWillowNavMeshPathFinder,  UGBXNavMeshPathFinder   >("UWillowNavMeshPathFinder")
        .def("StaticClass", &UWillowNavMeshPathFinder::StaticClass, py::return_value_policy::reference)
        .def("FindConstrainedPath", &UWillowNavMeshPathFinder::FindConstrainedPath)
        .staticmethod("StaticClass")
  ;
}