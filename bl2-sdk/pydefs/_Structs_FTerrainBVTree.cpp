#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTerrainBVTree()
{
    class_< FTerrainBVTree >("FTerrainBVTree", no_init)
        .def_readwrite("Nodes", &FTerrainBVTree::Nodes)
  ;
}