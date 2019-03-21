#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRewardData()
{
    py::class_< FRewardData >("FRewardData")
        .def_readwrite("ExperienceRewardPercentage", &FRewardData::ExperienceRewardPercentage)
        .def_readwrite("CurrencyRewardType", &FRewardData::CurrencyRewardType)
        .def_readwrite("CreditRewardMultiplier", &FRewardData::CreditRewardMultiplier)
        .def_readwrite("OtherCurrencyReward", &FRewardData::OtherCurrencyReward)
        .def_readwrite("RewardItems", &FRewardData::RewardItems)
        .def_readwrite("RewardItemPools", &FRewardData::RewardItemPools)
  ;
}