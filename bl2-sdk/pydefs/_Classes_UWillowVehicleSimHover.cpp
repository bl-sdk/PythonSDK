#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVehicleSimHover()
{
    py::class_< UWillowVehicleSimHover,  USVehicleSimCar   >("UWillowVehicleSimHover")
        .def_readwrite("FlyingVehicle", &UWillowVehicleSimHover::FlyingVehicle)
        .def_readwrite("AirTransFriction", &UWillowVehicleSimHover::AirTransFriction)
        .def_readwrite("AirRotFriction", &UWillowVehicleSimHover::AirRotFriction)
        .def_readwrite("ForceScalar", &UWillowVehicleSimHover::ForceScalar)
        .def_readwrite("TorqueScalar", &UWillowVehicleSimHover::TorqueScalar)
        .def_readwrite("TiltScalar", &UWillowVehicleSimHover::TiltScalar)
        .def_readwrite("MoveTiltAmount", &UWillowVehicleSimHover::MoveTiltAmount)
        .def("StaticClass", &UWillowVehicleSimHover::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}