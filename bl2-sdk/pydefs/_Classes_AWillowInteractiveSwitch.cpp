#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowInteractiveSwitch(py::object m)
{
    py::class_< AWillowInteractiveSwitch,  AWillowInteractiveObject   >(m, "AWillowInteractiveSwitch")
        .def_readwrite("OnBehaviorSetName", &AWillowInteractiveSwitch::OnBehaviorSetName)
        .def_readwrite("NotAllPlayersNearBehaviorSetName", &AWillowInteractiveSwitch::NotAllPlayersNearBehaviorSetName)
        .def_readwrite("OffBehaviorSetName", &AWillowInteractiveSwitch::OffBehaviorSetName)
        .def_readwrite("AllActorsInVolumes", &AWillowInteractiveSwitch::AllActorsInVolumes)
        .def_readwrite("TouchingPlayers", &AWillowInteractiveSwitch::TouchingPlayers)
        .def_readwrite("TouchingVehicles", &AWillowInteractiveSwitch::TouchingVehicles)
        .def_readwrite("NumberOfTouchingPlayers", &AWillowInteractiveSwitch::NumberOfTouchingPlayers)
        .def_readwrite("OffIcon", &AWillowInteractiveSwitch::OffIcon)
        .def_readwrite("NotAllPlayersNearIcon", &AWillowInteractiveSwitch::NotAllPlayersNearIcon)
        .def_readwrite("OffIconDef", &AWillowInteractiveSwitch::OffIconDef)
        .def_readwrite("NotAllPlayersNearIconDef", &AWillowInteractiveSwitch::NotAllPlayersNearIconDef)
        .def_readwrite("CurrentIcon", &AWillowInteractiveSwitch::CurrentIcon)
        .def("StaticClass", &AWillowInteractiveSwitch::StaticClass, py::return_value_policy::reference)
        .def("SetInteractionIcon", &AWillowInteractiveSwitch::SetInteractionIcon)
        .def("PlayerLeftGame", &AWillowInteractiveSwitch::PlayerLeftGame)
        .def("PlayerEnteredGame", &AWillowInteractiveSwitch::PlayerEnteredGame)
        .def("SetCurrentIcon", &AWillowInteractiveSwitch::SetCurrentIcon)
        .def("eventSetInitialState", &AWillowInteractiveSwitch::eventSetInitialState)
        .def("PostBeginPlay", &AWillowInteractiveSwitch::PostBeginPlay)
          ;
}