#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowNavMeshPathFinder(py::object m)
{
    py::class_< UWillowNavMeshPathFinder,  UGBXNavMeshPathFinder   >(m, "UWillowNavMeshPathFinder")
        .def("StaticClass", &UWillowNavMeshPathFinder::StaticClass, py::return_value_policy::reference)
        .def("FindConstrainedPath", &UWillowNavMeshPathFinder::FindConstrainedPath)
          ;
}