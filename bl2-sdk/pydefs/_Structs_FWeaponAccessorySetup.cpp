#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWeaponAccessorySetup()
{
    class_< FWeaponAccessorySetup >("FWeaponAccessorySetup", no_init)
        .def_readwrite("WeaponArchetypeName", &FWeaponAccessorySetup::WeaponArchetypeName)
        .def_readwrite("AccessoryDefinition", &FWeaponAccessorySetup::AccessoryDefinition)
        .def_readwrite("AccessoryTransforms", &FWeaponAccessorySetup::AccessoryTransforms)
        .def_readwrite("AccessoryParts", &FWeaponAccessorySetup::AccessoryParts)
  ;
}