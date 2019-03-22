#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANavMeshBoundsVolume(py::module &m)
{
    py::class_< ANavMeshBoundsVolume,  AVolume   >(m, "ANavMeshBoundsVolume")
        .def("StaticClass", &ANavMeshBoundsVolume::StaticClass, py::return_value_policy::reference)
          ;
}