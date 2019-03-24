#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIGBXNavMeshObstacle(py::module &m)
{
    py::class_< UIGBXNavMeshObstacle,  UInterface   >(m, "UIGBXNavMeshObstacle")
		.def_static("StaticClass", &UIGBXNavMeshObstacle::StaticClass, py::return_value_policy::reference)
          ;
}