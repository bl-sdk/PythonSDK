#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWeaponSaveGameData()
{
    class_< FWeaponSaveGameData >("FWeaponSaveGameData", no_init)
        .def_readwrite("WeaponDefinitionData", &FWeaponSaveGameData::WeaponDefinitionData)
        .def_readwrite("QuickSlot", &FWeaponSaveGameData::QuickSlot)
        .def_readwrite("Mark", &FWeaponSaveGameData::Mark)
  ;
}