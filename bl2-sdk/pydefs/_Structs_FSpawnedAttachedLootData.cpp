#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSpawnedAttachedLootData()
{
    class_< FSpawnedAttachedLootData >("FSpawnedAttachedLootData", no_init)
        .def_readwrite("Inv", &FSpawnedAttachedLootData::Inv)
        .def_readwrite("AttachmentPointName", &FSpawnedAttachedLootData::AttachmentPointName)
  ;
}