#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTechDeathData()
{
    class_< FTechDeathData, bases< FSpecializedBehaviorEvent >  >("FTechDeathData", no_init)
        .def_readwrite("DamageTypeTriggers", &FTechDeathData::DamageTypeTriggers)
        .def_readwrite("DeathAnimation", &FTechDeathData::DeathAnimation)
  ;
}