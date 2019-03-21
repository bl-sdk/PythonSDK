#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPolyLookup()
{
    class_< FGBXNavMeshPolyLookup >("FGBXNavMeshPolyLookup", no_init)
        .def_readwrite("XCells", &FGBXNavMeshPolyLookup::XCells)
        .def_readwrite("YCells", &FGBXNavMeshPolyLookup::YCells)
        .def_readwrite("Origin", &FGBXNavMeshPolyLookup::Origin)
        .def_readwrite("CellSize", &FGBXNavMeshPolyLookup::CellSize)
        .def_readwrite("CellIndices", &FGBXNavMeshPolyLookup::CellIndices)
        .def_readwrite("Cells", &FGBXNavMeshPolyLookup::Cells)
  ;
}