#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPoly()
{
    py::class_< FGBXNavMeshPoly >("FGBXNavMeshPoly")
        .def_readonly("Verts", &FGBXNavMeshPoly::Verts)
        .def_readonly("ConnectedPolys", &FGBXNavMeshPoly::ConnectedPolys)
        .def_readonly("PolyDataIdx", &FGBXNavMeshPoly::PolyDataIdx)
  ;
}