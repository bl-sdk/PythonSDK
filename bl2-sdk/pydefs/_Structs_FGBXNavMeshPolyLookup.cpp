#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPolyLookup()
{
    py::class_< FGBXNavMeshPolyLookup >("FGBXNavMeshPolyLookup")
        .def_readwrite("XCells", &FGBXNavMeshPolyLookup::XCells)
        .def_readwrite("YCells", &FGBXNavMeshPolyLookup::YCells)
        .def_readwrite("Origin", &FGBXNavMeshPolyLookup::Origin)
        .def_readwrite("CellSize", &FGBXNavMeshPolyLookup::CellSize)
        .def_readwrite("CellIndices", &FGBXNavMeshPolyLookup::CellIndices)
        .def_readwrite("Cells", &FGBXNavMeshPolyLookup::Cells)
  ;
}