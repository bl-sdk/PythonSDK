#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowVehicleSimHover()
{
    class_< UWillowVehicleSimHover, bases< USVehicleSimCar >  , boost::noncopyable>("UWillowVehicleSimHover", no_init)
        .def_readwrite("FlyingVehicle", &UWillowVehicleSimHover::FlyingVehicle)
        .def_readwrite("AirTransFriction", &UWillowVehicleSimHover::AirTransFriction)
        .def_readwrite("AirRotFriction", &UWillowVehicleSimHover::AirRotFriction)
        .def_readwrite("ForceScalar", &UWillowVehicleSimHover::ForceScalar)
        .def_readwrite("TorqueScalar", &UWillowVehicleSimHover::TorqueScalar)
        .def_readwrite("TiltScalar", &UWillowVehicleSimHover::TiltScalar)
        .def_readwrite("MoveTiltAmount", &UWillowVehicleSimHover::MoveTiltAmount)
        .def("StaticClass", &UWillowVehicleSimHover::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}