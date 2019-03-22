#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTerrainInfoData(py::module &m)
{
    py::class_< FTerrainInfoData >(m, "FTerrainInfoData")
  ;
}