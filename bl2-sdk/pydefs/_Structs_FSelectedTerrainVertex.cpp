#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSelectedTerrainVertex(py::object m)
{
    py::class_< FSelectedTerrainVertex >(m, "FSelectedTerrainVertex")
        .def_readwrite("X", &FSelectedTerrainVertex::X)
        .def_readwrite("Y", &FSelectedTerrainVertex::Y)
        .def_readwrite("Weight", &FSelectedTerrainVertex::Weight)
  ;
}