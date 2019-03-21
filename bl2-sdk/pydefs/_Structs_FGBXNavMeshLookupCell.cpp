#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshLookupCell()
{
    py::class_< FGBXNavMeshLookupCell >("FGBXNavMeshLookupCell")
        .def_readwrite("IntersectingPolys", &FGBXNavMeshLookupCell::IntersectingPolys)
  ;
}