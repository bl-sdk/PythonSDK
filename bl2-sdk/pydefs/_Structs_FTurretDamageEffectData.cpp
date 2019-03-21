#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTurretDamageEffectData()
{
    class_< FTurretDamageEffectData >("FTurretDamageEffectData", no_init)
        .def_readwrite("DamageThreshold", &FTurretDamageEffectData::DamageThreshold)
        .def_readwrite("DamageStartTagName", &FTurretDamageEffectData::DamageStartTagName)
        .def_readwrite("DamageEndTagName", &FTurretDamageEffectData::DamageEndTagName)
  ;
}