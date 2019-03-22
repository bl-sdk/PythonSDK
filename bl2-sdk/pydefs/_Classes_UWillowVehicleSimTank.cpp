#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowVehicleSimTank(py::module &m)
{
    py::class_< UWillowVehicleSimTank,  USVehicleSimTank   >(m, "UWillowVehicleSimTank")
        .def_readwrite("SteeringThresholdForStoppedTurns", &UWillowVehicleSimTank::SteeringThresholdForStoppedTurns)
        .def_readwrite("EngineDampingOnStoppedTurns", &UWillowVehicleSimTank::EngineDampingOnStoppedTurns)
          ;
}