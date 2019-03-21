#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTerrainkDOPTree()
{
    class_< FTerrainkDOPTree >("FTerrainkDOPTree", no_init)
        .def_readwrite("Nodes", &FTerrainkDOPTree::Nodes)
        .def_readwrite("Triangles", &FTerrainkDOPTree::Triangles)
  ;
}