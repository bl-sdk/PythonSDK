#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIGBXNavMeshSpecialMove(py::object m)
{
    py::class_< UIGBXNavMeshSpecialMove,  UInterface   >(m, "UIGBXNavMeshSpecialMove")
        .def("StaticClass", &UIGBXNavMeshSpecialMove::StaticClass, py::return_value_policy::reference)
          ;
}