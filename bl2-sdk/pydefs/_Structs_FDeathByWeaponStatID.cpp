#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDeathByWeaponStatID()
{
    class_< FDeathByWeaponStatID >("FDeathByWeaponStatID", no_init)
        .def_readwrite("DamageCauserType", &FDeathByWeaponStatID::DamageCauserType)
        .def_readwrite("StatId", &FDeathByWeaponStatID::StatId)
  ;
}