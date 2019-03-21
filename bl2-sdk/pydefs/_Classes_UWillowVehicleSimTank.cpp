#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVehicleSimTank()
{
    py::class_< UWillowVehicleSimTank,  USVehicleSimTank   >("UWillowVehicleSimTank")
        .def_readwrite("SteeringThresholdForStoppedTurns", &UWillowVehicleSimTank::SteeringThresholdForStoppedTurns)
        .def_readwrite("EngineDampingOnStoppedTurns", &UWillowVehicleSimTank::EngineDampingOnStoppedTurns)
        .def("StaticClass", &UWillowVehicleSimTank::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}