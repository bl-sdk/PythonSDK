#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGoreTriggerData()
{
    py::class_< FGoreTriggerData >("FGoreTriggerData")
        .def_readwrite("DamageTypeTrigger", &FGoreTriggerData::DamageTypeTrigger)
        .def_readwrite("DamageSourceTrigger", &FGoreTriggerData::DamageSourceTrigger)
        .def_readwrite("HealthPctDamageThreshold", &FGoreTriggerData::HealthPctDamageThreshold)
  ;
}