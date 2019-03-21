#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USVehicleSimTank()
{
    class_< USVehicleSimTank, bases< USVehicleSimCar >  , boost::noncopyable>("USVehicleSimTank", no_init)
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
        .def("StaticClass", &USVehicleSimTank::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}