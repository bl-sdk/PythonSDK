#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIGBXNavMeshBuildEvents()
{
    py::class_< UIGBXNavMeshBuildEvents,  UInterface   >("UIGBXNavMeshBuildEvents")
        .def("StaticClass", &UIGBXNavMeshBuildEvents::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}