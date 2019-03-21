#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTerrainkDOPTree()
{
    py::class_< FTerrainkDOPTree >("FTerrainkDOPTree")
        .def_readwrite("Nodes", &FTerrainkDOPTree::Nodes)
        .def_readwrite("Triangles", &FTerrainkDOPTree::Triangles)
  ;
}