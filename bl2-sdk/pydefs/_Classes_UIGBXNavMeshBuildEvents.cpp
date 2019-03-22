#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIGBXNavMeshBuildEvents(py::module &m)
{
    py::class_< UIGBXNavMeshBuildEvents,  UInterface   >(m, "UIGBXNavMeshBuildEvents")
        .def("StaticClass", &UIGBXNavMeshBuildEvents::StaticClass, py::return_value_policy::reference)
          ;
}