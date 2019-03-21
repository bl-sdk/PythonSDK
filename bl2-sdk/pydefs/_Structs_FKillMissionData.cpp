#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FKillMissionData()
{
    class_< FKillMissionData >("FKillMissionData", no_init)
        .def_readwrite("DamageCauserType", &FKillMissionData::DamageCauserType)
        .def_readwrite("DamageType", &FKillMissionData::DamageType)
        .def_readwrite("HitRegionName", &FKillMissionData::HitRegionName)
  ;
}