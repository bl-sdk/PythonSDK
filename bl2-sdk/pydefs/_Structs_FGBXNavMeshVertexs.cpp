#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXNavMeshVertex()
{
    py::class_< FGBXNavMeshVertex,  FVector   >("FGBXNavMeshVertex")
  ;
}