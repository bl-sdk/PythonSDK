#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUnlockItemData()
{
    class_< FUnlockItemData >("FUnlockItemData", no_init)
        .def_readwrite("GameStage", &FUnlockItemData::GameStage)
        .def_readwrite("UnlockItems", &FUnlockItemData::UnlockItems)
        .def_readwrite("UnlockItemPools", &FUnlockItemData::UnlockItemPools)
  ;
}