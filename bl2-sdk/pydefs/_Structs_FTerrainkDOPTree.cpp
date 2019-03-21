#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTerrainkDOPTree(py::object m)
{
    py::class_< FTerrainkDOPTree >(m, "FTerrainkDOPTree")
        .def_readwrite("Nodes", &FTerrainkDOPTree::Nodes)
        .def_readwrite("Triangles", &FTerrainkDOPTree::Triangles)
  ;
}