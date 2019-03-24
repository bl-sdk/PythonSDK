#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIGBXNavMeshSpecialMove(py::module &m)
{
    py::class_< UIGBXNavMeshSpecialMove,  UInterface   >(m, "UIGBXNavMeshSpecialMove")
		.def_static("StaticClass", &UIGBXNavMeshSpecialMove::StaticClass, py::return_value_policy::reference)
          ;
}