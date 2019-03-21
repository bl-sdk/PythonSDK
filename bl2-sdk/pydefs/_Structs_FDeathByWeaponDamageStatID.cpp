#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDeathByWeaponDamageStatID()
{
    class_< FDeathByWeaponDamageStatID >("FDeathByWeaponDamageStatID", no_init)
        .def_readwrite("DamageType", &FDeathByWeaponDamageStatID::DamageType)
        .def_readwrite("DamageCauserType", &FDeathByWeaponDamageStatID::DamageCauserType)
        .def_readwrite("StatId", &FDeathByWeaponDamageStatID::StatId)
  ;
}