#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponSaveGameData(py::module &m)
{
    py::class_< FWeaponSaveGameData >(m, "FWeaponSaveGameData")
        .def_readwrite("WeaponDefinitionData", &FWeaponSaveGameData::WeaponDefinitionData)
        .def_readwrite("QuickSlot", &FWeaponSaveGameData::QuickSlot)
        .def_readwrite("Mark", &FWeaponSaveGameData::Mark)
  ;
}