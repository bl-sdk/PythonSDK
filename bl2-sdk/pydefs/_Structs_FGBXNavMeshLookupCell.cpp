#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGBXNavMeshLookupCell()
{
    class_< FGBXNavMeshLookupCell >("FGBXNavMeshLookupCell", no_init)
        .def_readwrite("IntersectingPolys", &FGBXNavMeshLookupCell::IntersectingPolys)
  ;
}