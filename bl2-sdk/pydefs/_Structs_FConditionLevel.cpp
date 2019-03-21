#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FConditionLevel()
{
    class_< FConditionLevel >("FConditionLevel", no_init)
        .def_readwrite("ConditionDefinitions", &FConditionLevel::ConditionDefinitions)
        .def_readwrite("ProgressNotificationOverride", &FConditionLevel::ProgressNotificationOverride)
        .def_readwrite("CompletedAttributeEffects", &FConditionLevel::CompletedAttributeEffects)
        .def_readwrite("BadassPointReward", &FConditionLevel::BadassPointReward)
        .def_readwrite("RewardItemPool", &FConditionLevel::RewardItemPool)
        .def_readwrite("RewardTextKey", &FConditionLevel::RewardTextKey)
  ;
}