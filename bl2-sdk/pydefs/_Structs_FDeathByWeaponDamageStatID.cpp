#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDeathByWeaponDamageStatID(py::module &m)
{
    py::class_< FDeathByWeaponDamageStatID >(m, "FDeathByWeaponDamageStatID")
        .def_readwrite("DamageType", &FDeathByWeaponDamageStatID::DamageType)
        .def_readwrite("DamageCauserType", &FDeathByWeaponDamageStatID::DamageCauserType)
        .def_readwrite("StatId", &FDeathByWeaponDamageStatID::StatId)
  ;
}