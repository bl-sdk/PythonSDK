#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWeaponTypeSelectorData()
{
    class_< FWeaponTypeSelectorData >("FWeaponTypeSelectorData", no_init)
        .def_readwrite("WeaponType", &FWeaponTypeSelectorData::WeaponType)
        .def_readwrite("ValueIfMatched", &FWeaponTypeSelectorData::ValueIfMatched)
  ;
}