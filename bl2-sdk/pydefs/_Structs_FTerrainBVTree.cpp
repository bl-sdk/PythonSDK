#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTerrainBVTree(py::module &m)
{
    py::class_< FTerrainBVTree >(m, "FTerrainBVTree")
        .def_readwrite("Nodes", &FTerrainBVTree::Nodes)
  ;
}