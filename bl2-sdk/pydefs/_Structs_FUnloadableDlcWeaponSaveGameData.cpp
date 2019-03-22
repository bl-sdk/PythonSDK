#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUnloadableDlcWeaponSaveGameData(py::module &m)
{
    py::class_< FUnloadableDlcWeaponSaveGameData >(m, "FUnloadableDlcWeaponSaveGameData")
        .def_readwrite("SerialNumber", &FUnloadableDlcWeaponSaveGameData::SerialNumber)
        .def_readwrite("QuickSlot", &FUnloadableDlcWeaponSaveGameData::QuickSlot)
        .def_readwrite("Mark", &FUnloadableDlcWeaponSaveGameData::Mark)
  ;
}