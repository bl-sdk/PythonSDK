#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIGBXNavMeshBuildEvents(py::module &m)
{
    py::class_< UIGBXNavMeshBuildEvents,  UInterface   >(m, "UIGBXNavMeshBuildEvents")
          ;
}