#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSpawnedDroppedLootData()
{
    class_< FSpawnedDroppedLootData >("FSpawnedDroppedLootData", no_init)
        .def_readwrite("Inv", &FSpawnedDroppedLootData::Inv)
  ;
}