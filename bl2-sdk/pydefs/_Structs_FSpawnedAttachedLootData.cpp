#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpawnedAttachedLootData(py::object m)
{
    py::class_< FSpawnedAttachedLootData >(m, "FSpawnedAttachedLootData")
        .def_readwrite("Inv", &FSpawnedAttachedLootData::Inv)
        .def_readwrite("AttachmentPointName", &FSpawnedAttachedLootData::AttachmentPointName)
  ;
}