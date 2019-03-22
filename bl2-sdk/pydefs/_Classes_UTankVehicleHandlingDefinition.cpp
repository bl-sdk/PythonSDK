#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTankVehicleHandlingDefinition(py::module &m)
{
    py::class_< UTankVehicleHandlingDefinition,  UCarVehicleHandlingDefinition   >(m, "UTankVehicleHandlingDefinition")
        .def_readwrite("MaxEngineTorque", &UTankVehicleHandlingDefinition::MaxEngineTorque)
        .def_readwrite("EngineDamping", &UTankVehicleHandlingDefinition::EngineDamping)
        .def_readwrite("InsideTrackTorqueFactor", &UTankVehicleHandlingDefinition::InsideTrackTorqueFactor)
        .def_readwrite("SteeringLatStiffnessFactor", &UTankVehicleHandlingDefinition::SteeringLatStiffnessFactor)
        .def_readwrite("TurnInPlaceThrottle", &UTankVehicleHandlingDefinition::TurnInPlaceThrottle)
        .def_readwrite("TurnMaxGripReduction", &UTankVehicleHandlingDefinition::TurnMaxGripReduction)
        .def_readwrite("TurnGripScaleRate", &UTankVehicleHandlingDefinition::TurnGripScaleRate)
        .def_readwrite("SteeringThresholdForStoppedTurns", &UTankVehicleHandlingDefinition::SteeringThresholdForStoppedTurns)
        .def_readwrite("EngineDampingOnStoppedTurns", &UTankVehicleHandlingDefinition::EngineDampingOnStoppedTurns)
          ;
}