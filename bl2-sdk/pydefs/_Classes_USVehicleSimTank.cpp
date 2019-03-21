#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USVehicleSimTank(py::object m)
{
    py::class_< USVehicleSimTank,  USVehicleSimCar   >(m, "USVehicleSimTank")
        .def_readwrite("LeftTrackVel", &USVehicleSimTank::LeftTrackVel)
        .def_readwrite("RightTrackVel", &USVehicleSimTank::RightTrackVel)
        .def_readwrite("LeftTrackTorque", &USVehicleSimTank::LeftTrackTorque)
        .def_readwrite("RightTrackTorque", &USVehicleSimTank::RightTrackTorque)
        .def_readwrite("MaxEngineTorque", &USVehicleSimTank::MaxEngineTorque)
        .def_readwrite("EngineDamping", &USVehicleSimTank::EngineDamping)
        .def_readwrite("InsideTrackTorqueFactor", &USVehicleSimTank::InsideTrackTorqueFactor)
        .def_readwrite("SteeringLatStiffnessFactor", &USVehicleSimTank::SteeringLatStiffnessFactor)
        .def_readwrite("TurnInPlaceThrottle", &USVehicleSimTank::TurnInPlaceThrottle)
        .def_readwrite("TurnMaxGripReduction", &USVehicleSimTank::TurnMaxGripReduction)
        .def_readwrite("TurnGripScaleRate", &USVehicleSimTank::TurnGripScaleRate)
        .def("StaticClass", &USVehicleSimTank::StaticClass, py::return_value_policy::reference)
          ;
}