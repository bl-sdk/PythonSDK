#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowVehicle_Tank()
{
    class_< AWillowVehicle_Tank, bases< AWillowVehicle >  , boost::noncopyable>("AWillowVehicle_Tank", no_init)
        .def_readwrite("Sensors", &AWillowVehicle_Tank::Sensors)
        .def_readwrite("TimeBetweenSensorTests", &AWillowVehicle_Tank::TimeBetweenSensorTests)
        .def_readwrite("SensorCheckTime", &AWillowVehicle_Tank::SensorCheckTime)
        .def("StaticClass", &AWillowVehicle_Tank::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventSetAIInputs", &AWillowVehicle_Tank::eventSetAIInputs)
        .def("CheckForCollision", &AWillowVehicle_Tank::CheckForCollision)
        .staticmethod("StaticClass")
  ;
}