#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTerrainBVTree()
{
    py::class_< FTerrainBVTree >("FTerrainBVTree")
        .def_readwrite("Nodes", &FTerrainBVTree::Nodes)
  ;
}