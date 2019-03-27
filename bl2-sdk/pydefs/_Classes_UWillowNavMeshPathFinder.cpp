#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowNavMeshPathFinder(py::module &m)
{
    py::class_< UWillowNavMeshPathFinder,  UGBXNavMeshPathFinder   >(m, "UWillowNavMeshPathFinder")
		.def_static("StaticClass", &UWillowNavMeshPathFinder::StaticClass, py::return_value_policy::reference)
        .def("FindConstrainedPath", &UWillowNavMeshPathFinder::FindConstrainedPath)
          ;
}