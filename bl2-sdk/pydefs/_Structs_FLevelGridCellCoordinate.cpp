#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLevelGridCellCoordinate(py::object m)
{
    py::class_< FLevelGridCellCoordinate >(m, "FLevelGridCellCoordinate")
        .def_readwrite("X", &FLevelGridCellCoordinate::X)
        .def_readwrite("Y", &FLevelGridCellCoordinate::Y)
        .def_readwrite("Z", &FLevelGridCellCoordinate::Z)
  ;
}