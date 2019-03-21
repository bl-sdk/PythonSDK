#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpawnedAttachedLootData()
{
    py::class_< FSpawnedAttachedLootData >("FSpawnedAttachedLootData")
        .def_readwrite("Inv", &FSpawnedAttachedLootData::Inv)
        .def_readwrite("AttachmentPointName", &FSpawnedAttachedLootData::AttachmentPointName)
  ;
}