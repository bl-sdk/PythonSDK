#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowInteractiveSwitch()
{
    class_< AWillowInteractiveSwitch, bases< AWillowInteractiveObject >  , boost::noncopyable>("AWillowInteractiveSwitch", no_init)
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
        .def("StaticClass", &AWillowInteractiveSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetInteractionIcon", &AWillowInteractiveSwitch::SetInteractionIcon)
        .def("PlayerLeftGame", &AWillowInteractiveSwitch::PlayerLeftGame)
        .def("PlayerEnteredGame", &AWillowInteractiveSwitch::PlayerEnteredGame)
        .def("SetCurrentIcon", &AWillowInteractiveSwitch::SetCurrentIcon)
        .def("eventSetInitialState", &AWillowInteractiveSwitch::eventSetInitialState)
        .def("PostBeginPlay", &AWillowInteractiveSwitch::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}