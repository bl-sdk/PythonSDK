#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSelectedTerrainVertex()
{
    class_< FSelectedTerrainVertex >("FSelectedTerrainVertex", no_init)
        .def_readwrite("X", &FSelectedTerrainVertex::X)
        .def_readwrite("Y", &FSelectedTerrainVertex::Y)
        .def_readwrite("Weight", &FSelectedTerrainVertex::Weight)
  ;
}