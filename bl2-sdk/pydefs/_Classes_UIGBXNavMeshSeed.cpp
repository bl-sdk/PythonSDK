#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIGBXNavMeshSeed(py::module &m)
{
    py::class_< UIGBXNavMeshSeed,  UInterface   >(m, "UIGBXNavMeshSeed")
		.def_static("StaticClass", &UIGBXNavMeshSeed::StaticClass, py::return_value_policy::reference)
          ;
}