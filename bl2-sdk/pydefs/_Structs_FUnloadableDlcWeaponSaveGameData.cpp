#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUnloadableDlcWeaponSaveGameData()
{
    py::class_< FUnloadableDlcWeaponSaveGameData >("FUnloadableDlcWeaponSaveGameData")
        .def_readwrite("SerialNumber", &FUnloadableDlcWeaponSaveGameData::SerialNumber)
        .def_readwrite("QuickSlot", &FUnloadableDlcWeaponSaveGameData::QuickSlot)
        .def_readwrite("Mark", &FUnloadableDlcWeaponSaveGameData::Mark)
  ;
}