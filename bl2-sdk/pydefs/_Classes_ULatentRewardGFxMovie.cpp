#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULatentRewardGFxMovie()
{
    class_< ULatentRewardGFxMovie, bases< UWillowGFxMovie3D >  , boost::noncopyable>("ULatentRewardGFxMovie", no_init)
        .def_readwrite("RewardObject", &ULatentRewardGFxMovie::RewardObject)
        .def("StaticClass", &ULatentRewardGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnClosedOnDeath", &ULatentRewardGFxMovie::OnClosedOnDeath)
        .def("HandleInputAxis", &ULatentRewardGFxMovie::HandleInputAxis)
        .def("HandleRewardInputKey", &ULatentRewardGFxMovie::HandleRewardInputKey)
        .def("extOnRolloverChoice", &ULatentRewardGFxMovie::extOnRolloverChoice)
        .def("extOnFocusedChoice", &ULatentRewardGFxMovie::extOnFocusedChoice)
        .def("extRewardPanelClosed", &ULatentRewardGFxMovie::extRewardPanelClosed)
        .def("AcceptReward", &ULatentRewardGFxMovie::AcceptReward)
        .def("extOnClickedChoice", &ULatentRewardGFxMovie::extOnClickedChoice)
        .def("DisplayRewardsPanel", &ULatentRewardGFxMovie::DisplayRewardsPanel)
        .def("extTryDisplayRewardPanel", &ULatentRewardGFxMovie::extTryDisplayRewardPanel)
        .def("eventOnClose", &ULatentRewardGFxMovie::eventOnClose)
        .def("eventStart", &ULatentRewardGFxMovie::eventStart)
        .staticmethod("StaticClass")
  ;
}