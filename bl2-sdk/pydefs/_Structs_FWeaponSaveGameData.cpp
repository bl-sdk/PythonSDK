#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponSaveGameData()
{
    py::class_< FWeaponSaveGameData >("FWeaponSaveGameData")
        .def_readwrite("WeaponDefinitionData", &FWeaponSaveGameData::WeaponDefinitionData)
        .def_readwrite("QuickSlot", &FWeaponSaveGameData::QuickSlot)
        .def_readwrite("Mark", &FWeaponSaveGameData::Mark)
  ;
}