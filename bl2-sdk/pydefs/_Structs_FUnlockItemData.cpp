#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUnlockItemData(py::object m)
{
    py::class_< FUnlockItemData >(m, "FUnlockItemData")
        .def_readwrite("GameStage", &FUnlockItemData::GameStage)
        .def_readwrite("UnlockItems", &FUnlockItemData::UnlockItems)
        .def_readwrite("UnlockItemPools", &FUnlockItemData::UnlockItemPools)
  ;
}