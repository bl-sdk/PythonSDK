#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTankVehicleHandlingDefinition()
{
    class_< UTankVehicleHandlingDefinition, bases< UCarVehicleHandlingDefinition >  , boost::noncopyable>("UTankVehicleHandlingDefinition", no_init)
        .def_readwrite("MaxEngineTorque", &UTankVehicleHandlingDefinition::MaxEngineTorque)
        .def_readwrite("EngineDamping", &UTankVehicleHandlingDefinition::EngineDamping)
        .def_readwrite("InsideTrackTorqueFactor", &UTankVehicleHandlingDefinition::InsideTrackTorqueFactor)
        .def_readwrite("SteeringLatStiffnessFactor", &UTankVehicleHandlingDefinition::SteeringLatStiffnessFactor)
        .def_readwrite("TurnInPlaceThrottle", &UTankVehicleHandlingDefinition::TurnInPlaceThrottle)
        .def_readwrite("TurnMaxGripReduction", &UTankVehicleHandlingDefinition::TurnMaxGripReduction)
        .def_readwrite("TurnGripScaleRate", &UTankVehicleHandlingDefinition::TurnGripScaleRate)
        .def_readwrite("SteeringThresholdForStoppedTurns", &UTankVehicleHandlingDefinition::SteeringThresholdForStoppedTurns)
        .def_readwrite("EngineDampingOnStoppedTurns", &UTankVehicleHandlingDefinition::EngineDampingOnStoppedTurns)
        .def("StaticClass", &UTankVehicleHandlingDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}