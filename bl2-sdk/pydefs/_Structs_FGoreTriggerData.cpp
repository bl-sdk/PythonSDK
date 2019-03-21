#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGoreTriggerData()
{
    class_< FGoreTriggerData >("FGoreTriggerData", no_init)
        .def_readwrite("DamageTypeTrigger", &FGoreTriggerData::DamageTypeTrigger)
        .def_readwrite("DamageSourceTrigger", &FGoreTriggerData::DamageSourceTrigger)
        .def_readwrite("HealthPctDamageThreshold", &FGoreTriggerData::HealthPctDamageThreshold)
  ;
}