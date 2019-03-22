#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponBalanceDefinition(py::module &m)
{
    py::class_< UWeaponBalanceDefinition,  UInventoryBalanceDefinition   >(m, "UWeaponBalanceDefinition")
        .def_readwrite("WeaponPartListCollection", &UWeaponBalanceDefinition::WeaponPartListCollection)
        .def_readwrite("RuntimePartListCollection", &UWeaponBalanceDefinition::RuntimePartListCollection)
          ;
}