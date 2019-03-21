#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUnlockItemData()
{
    py::class_< FUnlockItemData >("FUnlockItemData")
        .def_readwrite("GameStage", &FUnlockItemData::GameStage)
        .def_readwrite("UnlockItems", &FUnlockItemData::UnlockItems)
        .def_readwrite("UnlockItemPools", &FUnlockItemData::UnlockItemPools)
  ;
}