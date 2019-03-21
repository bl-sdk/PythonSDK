#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRewardData()
{
    class_< FRewardData >("FRewardData", no_init)
        .def_readwrite("ExperienceRewardPercentage", &FRewardData::ExperienceRewardPercentage)
        .def_readwrite("CurrencyRewardType", &FRewardData::CurrencyRewardType)
        .def_readwrite("CreditRewardMultiplier", &FRewardData::CreditRewardMultiplier)
        .def_readwrite("OtherCurrencyReward", &FRewardData::OtherCurrencyReward)
        .def_readwrite("RewardItems", &FRewardData::RewardItems)
        .def_readwrite("RewardItemPools", &FRewardData::RewardItemPools)
  ;
}