#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponBalanceDefinition()
{
    py::class_< UWeaponBalanceDefinition,  UInventoryBalanceDefinition   >("UWeaponBalanceDefinition")
        .def_readwrite("WeaponPartListCollection", &UWeaponBalanceDefinition::WeaponPartListCollection)
        .def_readwrite("RuntimePartListCollection", &UWeaponBalanceDefinition::RuntimePartListCollection)
        .def("StaticClass", &UWeaponBalanceDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}