#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEncounterWaveData()
{
    class_< FEncounterWaveData >("FEncounterWaveData", no_init)
        .def_readwrite("InitialDelay", &FEncounterWaveData::InitialDelay)
        .def_readwrite("PercentToComplete", &FEncounterWaveData::PercentToComplete)
        .def_readwrite("EncounterPopulationDef", &FEncounterWaveData::EncounterPopulationDef)
        .def_readwrite("MemberOpportunities", &FEncounterWaveData::MemberOpportunities)
        .def_readwrite("SpawnLimits", &FEncounterWaveData::SpawnLimits)
  ;
}