#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConditionLevel(py::module &m)
{
    py::class_< FConditionLevel >(m, "FConditionLevel")
        .def_readwrite("ConditionDefinitions", &FConditionLevel::ConditionDefinitions)
        .def_readwrite("ProgressNotificationOverride", &FConditionLevel::ProgressNotificationOverride)
        .def_readwrite("CompletedAttributeEffects", &FConditionLevel::CompletedAttributeEffects)
        .def_readwrite("BadassPointReward", &FConditionLevel::BadassPointReward)
        .def_readwrite("RewardItemPool", &FConditionLevel::RewardItemPool)
        .def_readwrite("RewardTextKey", &FConditionLevel::RewardTextKey)
  ;
}