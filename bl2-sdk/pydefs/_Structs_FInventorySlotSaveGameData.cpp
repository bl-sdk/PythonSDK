#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInventorySlotSaveGameData()
{
    class_< FInventorySlotSaveGameData >("FInventorySlotSaveGameData", no_init)
        .def_readwrite("InventorySlotMax_Misc", &FInventorySlotSaveGameData::InventorySlotMax_Misc)
        .def_readwrite("WeaponReadyMax", &FInventorySlotSaveGameData::WeaponReadyMax)
        .def_readwrite("NumQuickSlotsFlourished", &FInventorySlotSaveGameData::NumQuickSlotsFlourished)
  ;
}