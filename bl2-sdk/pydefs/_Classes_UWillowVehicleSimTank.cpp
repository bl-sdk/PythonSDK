#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowVehicleSimTank()
{
    class_< UWillowVehicleSimTank, bases< USVehicleSimTank >  , boost::noncopyable>("UWillowVehicleSimTank", no_init)
        .def_readwrite("SteeringThresholdForStoppedTurns", &UWillowVehicleSimTank::SteeringThresholdForStoppedTurns)
        .def_readwrite("EngineDampingOnStoppedTurns", &UWillowVehicleSimTank::EngineDampingOnStoppedTurns)
        .def("StaticClass", &UWillowVehicleSimTank::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}