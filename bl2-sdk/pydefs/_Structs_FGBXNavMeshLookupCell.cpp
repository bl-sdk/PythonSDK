#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshLookupCell(py::object m)
{
    py::class_< FGBXNavMeshLookupCell >(m, "FGBXNavMeshLookupCell")
        .def_readwrite("IntersectingPolys", &FGBXNavMeshLookupCell::IntersectingPolys)
  ;
}