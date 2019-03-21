#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWeaponBalanceDefinition()
{
    class_< UWeaponBalanceDefinition, bases< UInventoryBalanceDefinition >  , boost::noncopyable>("UWeaponBalanceDefinition", no_init)
        .def_readwrite("WeaponPartListCollection", &UWeaponBalanceDefinition::WeaponPartListCollection)
        .def_readwrite("RuntimePartListCollection", &UWeaponBalanceDefinition::RuntimePartListCollection)
        .def("StaticClass", &UWeaponBalanceDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}