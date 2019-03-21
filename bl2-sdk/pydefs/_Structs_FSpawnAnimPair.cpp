#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpawnAnimPair(py::object m)
{
    py::class_< FSpawnAnimPair >(m, "FSpawnAnimPair")
        .def_readwrite("SpawnedAnim", &FSpawnAnimPair::SpawnedAnim)
        .def_readwrite("PointAnim", &FSpawnAnimPair::PointAnim)
  ;
}