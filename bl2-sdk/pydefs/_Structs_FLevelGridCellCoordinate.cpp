#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLevelGridCellCoordinate()
{
    class_< FLevelGridCellCoordinate >("FLevelGridCellCoordinate", no_init)
        .def_readwrite("X", &FLevelGridCellCoordinate::X)
        .def_readwrite("Y", &FLevelGridCellCoordinate::Y)
        .def_readwrite("Z", &FLevelGridCellCoordinate::Z)
  ;
}