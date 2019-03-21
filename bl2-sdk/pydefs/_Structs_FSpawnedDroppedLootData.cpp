#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpawnedDroppedLootData()
{
    py::class_< FSpawnedDroppedLootData >("FSpawnedDroppedLootData")
        .def_readwrite("Inv", &FSpawnedDroppedLootData::Inv)
  ;
}