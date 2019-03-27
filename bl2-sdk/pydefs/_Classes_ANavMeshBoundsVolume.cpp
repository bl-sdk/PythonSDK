#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANavMeshBoundsVolume(py::module &m)
{
    py::class_< ANavMeshBoundsVolume,  AVolume   >(m, "ANavMeshBoundsVolume")
		.def_static("StaticClass", &ANavMeshBoundsVolume::StaticClass, py::return_value_policy::reference)
          ;
}