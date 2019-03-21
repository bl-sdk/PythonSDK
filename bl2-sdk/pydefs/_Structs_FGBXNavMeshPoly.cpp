#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPoly(py::object m)
{
    py::class_< FGBXNavMeshPoly >(m, "FGBXNavMeshPoly")
  ;
}