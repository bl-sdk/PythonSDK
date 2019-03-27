#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInventorySlotSaveGameData(py::module &m)
{
    py::class_< FInventorySlotSaveGameData >(m, "FInventorySlotSaveGameData")
        .def_readwrite("InventorySlotMax_Misc", &FInventorySlotSaveGameData::InventorySlotMax_Misc)
        .def_readwrite("WeaponReadyMax", &FInventorySlotSaveGameData::WeaponReadyMax)
        .def_readwrite("NumQuickSlotsFlourished", &FInventorySlotSaveGameData::NumQuickSlotsFlourished)
  ;
}