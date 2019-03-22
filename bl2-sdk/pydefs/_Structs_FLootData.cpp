#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLootData(py::module &m)
{
    py::class_< FLootData >(m, "FLootData")
        .def_readwrite("Weight", &FLootData::Weight)
        .def_readwrite("ItemPools", &FLootData::ItemPools)
  ;
}