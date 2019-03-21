#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRecentlyResistedAttackData()
{
    class_< FRecentlyResistedAttackData >("FRecentlyResistedAttackData", no_init)
        .def_readwrite("DamagedActor", &FRecentlyResistedAttackData::DamagedActor)
        .def_readwrite("DamageType", &FRecentlyResistedAttackData::DamageType)
        .def_readwrite("LastResistTime", &FRecentlyResistedAttackData::LastResistTime)
  ;
}