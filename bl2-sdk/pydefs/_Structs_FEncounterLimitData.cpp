#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEncounterLimitData()
{
    class_< FEncounterLimitData >("FEncounterLimitData", no_init)
        .def_readwrite("ActorTags", &FEncounterLimitData::ActorTags)
        .def_readwrite("MaxTotalToSpawn", &FEncounterLimitData::MaxTotalToSpawn)
        .def_readwrite("MaxActiveAtATime", &FEncounterLimitData::MaxActiveAtATime)
        .def_readwrite("ConstraintType", &FEncounterLimitData::ConstraintType)
        .def_readwrite("LimitState", &FEncounterLimitData::LimitState)
  ;
}