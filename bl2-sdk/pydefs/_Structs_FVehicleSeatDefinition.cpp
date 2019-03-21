#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVehicleSeatDefinition()
{
    class_< FVehicleSeatDefinition >("FVehicleSeatDefinition", no_init)
        .def_readwrite("SeatDefinition", &FVehicleSeatDefinition::SeatDefinition)
        .def_readwrite("WeaponBalanceDefinition", &FVehicleSeatDefinition::WeaponBalanceDefinition)
        .def_readwrite("WeaponFireSMD", &FVehicleSeatDefinition::WeaponFireSMD)
        .def_readwrite("NextSeatIndex", &FVehicleSeatDefinition::NextSeatIndex)
        .def_readwrite("Anim_SeatSwap", &FVehicleSeatDefinition::Anim_SeatSwap)
        .def_readwrite("SeatAIDef", &FVehicleSeatDefinition::SeatAIDef)
        .def_readwrite("SeatInteractTextDefinition", &FVehicleSeatDefinition::SeatInteractTextDefinition)
        .def_readwrite("GunSocket", &FVehicleSeatDefinition::GunSocket)
        .def_readwrite("SeatNameEnter", &FVehicleSeatDefinition::SeatNameEnter)
        .def_readwrite("SeatNameExit", &FVehicleSeatDefinition::SeatNameExit)
  ;
}