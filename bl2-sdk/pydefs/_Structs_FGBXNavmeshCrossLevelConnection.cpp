#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavmeshCrossLevelConnection(py::module &m)
{
    py::class_< FGBXNavmeshCrossLevelConnection >(m, "FGBXNavmeshCrossLevelConnection")
  ;
}