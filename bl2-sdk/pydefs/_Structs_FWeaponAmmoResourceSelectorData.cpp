#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWeaponAmmoResourceSelectorData()
{
    class_< FWeaponAmmoResourceSelectorData >("FWeaponAmmoResourceSelectorData", no_init)
        .def_readwrite("AssociatedResourceName", &FWeaponAmmoResourceSelectorData::AssociatedResourceName)
        .def_readwrite("ValueIfMatched", &FWeaponAmmoResourceSelectorData::ValueIfMatched)
  ;
}