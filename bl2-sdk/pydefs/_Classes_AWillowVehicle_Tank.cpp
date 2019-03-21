#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowVehicle_Tank()
{
    py::class_< AWillowVehicle_Tank,  AWillowVehicle   >("AWillowVehicle_Tank")
        .def_readwrite("Sensors", &AWillowVehicle_Tank::Sensors)
        .def_readwrite("TimeBetweenSensorTests", &AWillowVehicle_Tank::TimeBetweenSensorTests)
        .def_readwrite("SensorCheckTime", &AWillowVehicle_Tank::SensorCheckTime)
        .def("StaticClass", &AWillowVehicle_Tank::StaticClass, py::return_value_policy::reference)
        .def("eventSetAIInputs", &AWillowVehicle_Tank::eventSetAIInputs)
        .def("CheckForCollision", &AWillowVehicle_Tank::CheckForCollision)
        .staticmethod("StaticClass")
  ;
}