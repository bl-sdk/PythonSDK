#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMissionWeaponBalanceDefinition()
{
    class_< UMissionWeaponBalanceDefinition, bases< UInventoryBalanceDefinition >  , boost::noncopyable>("UMissionWeaponBalanceDefinition", no_init)
        .def_readwrite("MissionObjective", &UMissionWeaponBalanceDefinition::MissionObjective)
        .def_readwrite("WeaponPartListCollection", &UWeaponBalanceDefinition::WeaponPartListCollection)
        .def_readwrite("RuntimePartListCollection", &UWeaponBalanceDefinition::RuntimePartListCollection)
        .def("StaticClass", &UMissionWeaponBalanceDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}