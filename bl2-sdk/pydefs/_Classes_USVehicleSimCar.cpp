#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USVehicleSimCar()
{
    class_< USVehicleSimCar, bases< USVehicleSimBase >  , boost::noncopyable>("USVehicleSimCar", no_init)
        .def_readwrite("ChassisTorqueScale", &USVehicleSimCar::ChassisTorqueScale)
        .def_readwrite("MaxSteerAngleCurve", &USVehicleSimCar::MaxSteerAngleCurve)
        .def_readwrite("SteerSpeed", &USVehicleSimCar::SteerSpeed)
        .def_readwrite("ReverseThrottle", &USVehicleSimCar::ReverseThrottle)
        .def_readwrite("EngineBrakeFactor", &USVehicleSimCar::EngineBrakeFactor)
        .def_readwrite("MaxBrakeTorque", &USVehicleSimCar::MaxBrakeTorque)
        .def_readwrite("StopThreshold", &USVehicleSimCar::StopThreshold)
        .def_readwrite("ActualSteering", &USVehicleSimCar::ActualSteering)
        .def_readwrite("TimeSinceThrottle", &USVehicleSimCar::TimeSinceThrottle)
        .def("StaticClass", &USVehicleSimCar::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}