#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLootData()
{
    class_< FLootData >("FLootData", no_init)
        .def_readwrite("Weight", &FLootData::Weight)
        .def_readwrite("ItemPools", &FLootData::ItemPools)
  ;
}