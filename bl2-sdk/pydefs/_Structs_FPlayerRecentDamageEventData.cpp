#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerRecentDamageEventData()
{
    py::class_< FPlayerRecentDamageEventData >("FPlayerRecentDamageEventData")
        .def_readwrite("DamageTypeDefinition", &FPlayerRecentDamageEventData::DamageTypeDefinition)
        .def_readwrite("DamageLocation", &FPlayerRecentDamageEventData::DamageLocation)
        .def_readwrite("TotalDamageForDamageType", &FPlayerRecentDamageEventData::TotalDamageForDamageType)
        .def_readwrite("DamageEventFlags", &FPlayerRecentDamageEventData::DamageEventFlags)
        .def_readwrite("DamageTime", &FPlayerRecentDamageEventData::DamageTime)
        .def_readwrite("DamagedActor", &FPlayerRecentDamageEventData::DamagedActor)
  ;
}