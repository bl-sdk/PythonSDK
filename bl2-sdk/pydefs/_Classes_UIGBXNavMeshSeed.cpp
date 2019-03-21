#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIGBXNavMeshSeed(py::object m)
{
    py::class_< UIGBXNavMeshSeed,  UInterface   >(m, "UIGBXNavMeshSeed")
        .def("StaticClass", &UIGBXNavMeshSeed::StaticClass, py::return_value_policy::reference)
          ;
}