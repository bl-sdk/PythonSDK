#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLootData()
{
    py::class_< FLootData >("FLootData")
        .def_readwrite("Weight", &FLootData::Weight)
        .def_readwrite("ItemPools", &FLootData::ItemPools)
  ;
}