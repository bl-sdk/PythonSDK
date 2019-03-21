#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULatentRewardGFxMovie(py::object m)
{
    py::class_< ULatentRewardGFxMovie,  UWillowGFxMovie3D   >(m, "ULatentRewardGFxMovie")
        .def_readwrite("RewardObject", &ULatentRewardGFxMovie::RewardObject)
        .def("StaticClass", &ULatentRewardGFxMovie::StaticClass, py::return_value_policy::reference)
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
          ;
}