#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVehicleState(py::object m)
{
    py::class_< FVehicleState >(m, "FVehicleState")
        .def_readwrite("RBState", &FVehicleState::RBState)
        .def_readwrite("ServerBrake", &FVehicleState::ServerBrake)
        .def_readwrite("ServerGas", &FVehicleState::ServerGas)
        .def_readwrite("ServerSteering", &FVehicleState::ServerSteering)
        .def_readwrite("ServerRise", &FVehicleState::ServerRise)
        .def_readwrite("ServerView", &FVehicleState::ServerView)
  ;
}