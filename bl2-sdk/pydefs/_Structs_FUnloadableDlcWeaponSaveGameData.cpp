#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUnloadableDlcWeaponSaveGameData()
{
    class_< FUnloadableDlcWeaponSaveGameData >("FUnloadableDlcWeaponSaveGameData", no_init)
        .def_readwrite("SerialNumber", &FUnloadableDlcWeaponSaveGameData::SerialNumber)
        .def_readwrite("QuickSlot", &FUnloadableDlcWeaponSaveGameData::QuickSlot)
        .def_readwrite("Mark", &FUnloadableDlcWeaponSaveGameData::Mark)
  ;
}