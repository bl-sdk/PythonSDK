#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKillMissionData()
{
    py::class_< FKillMissionData >("FKillMissionData")
        .def_readwrite("DamageCauserType", &FKillMissionData::DamageCauserType)
        .def_readwrite("DamageType", &FKillMissionData::DamageType)
        .def_readwrite("HitRegionName", &FKillMissionData::HitRegionName)
  ;
}