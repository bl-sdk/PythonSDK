#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerRecentDamageEventData()
{
    class_< FPlayerRecentDamageEventData >("FPlayerRecentDamageEventData", no_init)
        .def_readwrite("DamageTypeDefinition", &FPlayerRecentDamageEventData::DamageTypeDefinition)
        .def_readwrite("DamageLocation", &FPlayerRecentDamageEventData::DamageLocation)
        .def_readwrite("TotalDamageForDamageType", &FPlayerRecentDamageEventData::TotalDamageForDamageType)
        .def_readwrite("DamageEventFlags", &FPlayerRecentDamageEventData::DamageEventFlags)
        .def_readwrite("DamageTime", &FPlayerRecentDamageEventData::DamageTime)
        .def_readwrite("DamagedActor", &FPlayerRecentDamageEventData::DamagedActor)
  ;
}