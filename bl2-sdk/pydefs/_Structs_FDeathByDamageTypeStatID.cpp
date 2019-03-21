#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDeathByDamageTypeStatID()
{
    class_< FDeathByDamageTypeStatID >("FDeathByDamageTypeStatID", no_init)
        .def_readwrite("DamageType", &FDeathByDamageTypeStatID::DamageType)
        .def_readwrite("StatId", &FDeathByDamageTypeStatID::StatId)
  ;
}