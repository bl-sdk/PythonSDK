#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGBXNavMeshPoly()
{
    class_< FGBXNavMeshPoly >("FGBXNavMeshPoly", no_init)
        .def_readonly("Verts", &FGBXNavMeshPoly::Verts)
        .def_readonly("ConnectedPolys", &FGBXNavMeshPoly::ConnectedPolys)
        .def_readonly("PolyDataIdx", &FGBXNavMeshPoly::PolyDataIdx)
  ;
}