#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpawnedDroppedLootData(py::object m)
{
    py::class_< FSpawnedDroppedLootData >(m, "FSpawnedDroppedLootData")
        .def_readwrite("Inv", &FSpawnedDroppedLootData::Inv)
  ;
}