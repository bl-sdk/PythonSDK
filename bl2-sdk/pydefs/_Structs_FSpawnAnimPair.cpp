#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpawnAnimPair()
{
    py::class_< FSpawnAnimPair >("FSpawnAnimPair")
        .def_readwrite("SpawnedAnim", &FSpawnAnimPair::SpawnedAnim)
        .def_readwrite("PointAnim", &FSpawnAnimPair::PointAnim)
  ;
}