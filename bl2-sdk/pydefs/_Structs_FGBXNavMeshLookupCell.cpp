#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshLookupCell(py::module &m)
{
    py::class_< FGBXNavMeshLookupCell >(m, "FGBXNavMeshLookupCell")
        .def_readwrite("IntersectingPolys", &FGBXNavMeshLookupCell::IntersectingPolys)
  ;
}