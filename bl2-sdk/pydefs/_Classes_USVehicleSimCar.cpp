#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USVehicleSimCar(py::module &m)
{
    py::class_< USVehicleSimCar,  USVehicleSimBase   >(m, "USVehicleSimCar")
        .def_readwrite("ChassisTorqueScale", &USVehicleSimCar::ChassisTorqueScale)
        .def_readwrite("MaxSteerAngleCurve", &USVehicleSimCar::MaxSteerAngleCurve)
        .def_readwrite("SteerSpeed", &USVehicleSimCar::SteerSpeed)
        .def_readwrite("ReverseThrottle", &USVehicleSimCar::ReverseThrottle)
        .def_readwrite("EngineBrakeFactor", &USVehicleSimCar::EngineBrakeFactor)
        .def_readwrite("MaxBrakeTorque", &USVehicleSimCar::MaxBrakeTorque)
        .def_readwrite("StopThreshold", &USVehicleSimCar::StopThreshold)
        .def_readwrite("ActualSteering", &USVehicleSimCar::ActualSteering)
        .def_readwrite("TimeSinceThrottle", &USVehicleSimCar::TimeSinceThrottle)
        .def("StaticClass", &USVehicleSimCar::StaticClass, py::return_value_policy::reference)
          ;
}