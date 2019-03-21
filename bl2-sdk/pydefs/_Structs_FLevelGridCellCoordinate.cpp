#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLevelGridCellCoordinate()
{
    py::class_< FLevelGridCellCoordinate >("FLevelGridCellCoordinate")
        .def_readwrite("X", &FLevelGridCellCoordinate::X)
        .def_readwrite("Y", &FLevelGridCellCoordinate::Y)
        .def_readwrite("Z", &FLevelGridCellCoordinate::Z)
  ;
}