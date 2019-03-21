#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTechDeathData(py::object m)
{
    py::class_< FTechDeathData,  FSpecializedBehaviorEvent   >(m, "FTechDeathData")
        .def_readwrite("DamageTypeTriggers", &FTechDeathData::DamageTypeTriggers)
        .def_readwrite("DeathAnimation", &FTechDeathData::DeathAnimation)
  ;
}