#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowNavMeshPathFinder(py::module &m)
{
    py::class_< UWillowNavMeshPathFinder,  UGBXNavMeshPathFinder   >(m, "UWillowNavMeshPathFinder")
        .def("FindConstrainedPath", &UWillowNavMeshPathFinder::FindConstrainedPath)
          ;
}