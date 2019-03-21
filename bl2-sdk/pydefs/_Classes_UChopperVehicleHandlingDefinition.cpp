#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UChopperVehicleHandlingDefinition()
{
    class_< UChopperVehicleHandlingDefinition, bases< UVehicleHandlingDefinition >  , boost::noncopyable>("UChopperVehicleHandlingDefinition", no_init)
        .def_readwrite("MaxThrustForce", &UChopperVehicleHandlingDefinition::MaxThrustForce)
        .def_readwrite("MaxReverseForce", &UChopperVehicleHandlingDefinition::MaxReverseForce)
        .def_readwrite("LongDamping", &UChopperVehicleHandlingDefinition::LongDamping)
        .def_readwrite("MaxStrafeForce", &UChopperVehicleHandlingDefinition::MaxStrafeForce)
        .def_readwrite("LatDamping", &UChopperVehicleHandlingDefinition::LatDamping)
        .def_readwrite("DirectionChangeForce", &UChopperVehicleHandlingDefinition::DirectionChangeForce)
        .def_readwrite("MaxRiseForce", &UChopperVehicleHandlingDefinition::MaxRiseForce)
        .def_readwrite("UpDamping", &UChopperVehicleHandlingDefinition::UpDamping)
        .def_readwrite("TurnTorqueFactor", &UChopperVehicleHandlingDefinition::TurnTorqueFactor)
        .def_readwrite("TurnTorqueMax", &UChopperVehicleHandlingDefinition::TurnTorqueMax)
        .def_readwrite("TurnDamping", &UChopperVehicleHandlingDefinition::TurnDamping)
        .def_readwrite("MaxYawRate", &UChopperVehicleHandlingDefinition::MaxYawRate)
        .def_readwrite("PitchTorqueFactor", &UChopperVehicleHandlingDefinition::PitchTorqueFactor)
        .def_readwrite("PitchTorqueMax", &UChopperVehicleHandlingDefinition::PitchTorqueMax)
        .def_readwrite("PitchDamping", &UChopperVehicleHandlingDefinition::PitchDamping)
        .def_readwrite("RollTorqueTurnFactor", &UChopperVehicleHandlingDefinition::RollTorqueTurnFactor)
        .def_readwrite("RollTorqueStrafeFactor", &UChopperVehicleHandlingDefinition::RollTorqueStrafeFactor)
        .def_readwrite("RollTorqueMax", &UChopperVehicleHandlingDefinition::RollTorqueMax)
        .def_readwrite("RollDamping", &UChopperVehicleHandlingDefinition::RollDamping)
        .def_readwrite("StopThreshold", &UChopperVehicleHandlingDefinition::StopThreshold)
        .def_readwrite("MaxRandForce", &UChopperVehicleHandlingDefinition::MaxRandForce)
        .def_readwrite("RandForceInterval", &UChopperVehicleHandlingDefinition::RandForceInterval)
        .def_readwrite("StabilizationForceMultiplier", &UChopperVehicleHandlingDefinition::StabilizationForceMultiplier)
        .def_readwrite("MaxVelocityWhenAdjustingHover", &UChopperVehicleHandlingDefinition::MaxVelocityWhenAdjustingHover)
        .def_readwrite("HoverDeadZone", &UChopperVehicleHandlingDefinition::HoverDeadZone)
        .def_readwrite("RiseAdjustmentInterval", &UChopperVehicleHandlingDefinition::RiseAdjustmentInterval)
        .def("StaticClass", &UChopperVehicleHandlingDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}