#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIGBXNavMeshSeed()
{
    py::class_< UIGBXNavMeshSeed,  UInterface   >("UIGBXNavMeshSeed")
        .def("StaticClass", &UIGBXNavMeshSeed::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}