#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVehicleSeatDefinition(py::object m)
{
    py::class_< FVehicleSeatDefinition >(m, "FVehicleSeatDefinition")
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