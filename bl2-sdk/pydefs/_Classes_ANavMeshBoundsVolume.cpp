#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANavMeshBoundsVolume(py::module &m)
{
    py::class_< ANavMeshBoundsVolume,  AVolume   >(m, "ANavMeshBoundsVolume")
          ;
}