#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIGBXNavMeshSpecialMove()
{
    py::class_< UIGBXNavMeshSpecialMove,  UInterface   >("UIGBXNavMeshSpecialMove")
        .def("StaticClass", &UIGBXNavMeshSpecialMove::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}