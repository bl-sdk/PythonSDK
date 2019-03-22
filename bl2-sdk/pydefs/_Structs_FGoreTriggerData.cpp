#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGoreTriggerData(py::module &m)
{
    py::class_< FGoreTriggerData >(m, "FGoreTriggerData")
        .def_readwrite("DamageTypeTrigger", &FGoreTriggerData::DamageTypeTrigger)
        .def_readwrite("DamageSourceTrigger", &FGoreTriggerData::DamageSourceTrigger)
        .def_readwrite("HealthPctDamageThreshold", &FGoreTriggerData::HealthPctDamageThreshold)
  ;
}