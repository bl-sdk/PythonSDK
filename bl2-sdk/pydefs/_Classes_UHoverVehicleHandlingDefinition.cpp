#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHoverVehicleHandlingDefinition()
{
    class_< UHoverVehicleHandlingDefinition, bases< UVehicleHandlingDefinition >  , boost::noncopyable>("UHoverVehicleHandlingDefinition", no_init)
        .def_readwrite("AirTransFriction", &UHoverVehicleHandlingDefinition::AirTransFriction)
        .def_readwrite("AirRotFriction", &UHoverVehicleHandlingDefinition::AirRotFriction)
        .def_readwrite("ForceScalar", &UHoverVehicleHandlingDefinition::ForceScalar)
        .def_readwrite("TorqueScalar", &UHoverVehicleHandlingDefinition::TorqueScalar)
        .def_readwrite("TiltScalar", &UHoverVehicleHandlingDefinition::TiltScalar)
        .def_readwrite("MoveTiltAmount", &UHoverVehicleHandlingDefinition::MoveTiltAmount)
        .def_readwrite("ChassisTorqueScale", &UCarVehicleHandlingDefinition::ChassisTorqueScale)
        .def_readwrite("MaxSteerAngleCurve", &UCarVehicleHandlingDefinition::MaxSteerAngleCurve)
        .def_readwrite("SteerSpeed", &UCarVehicleHandlingDefinition::SteerSpeed)
        .def_readwrite("ReverseThrottle", &UCarVehicleHandlingDefinition::ReverseThrottle)
        .def_readwrite("EngineBrakeFactor", &UCarVehicleHandlingDefinition::EngineBrakeFactor)
        .def_readwrite("MaxBrakeTorque", &UCarVehicleHandlingDefinition::MaxBrakeTorque)
        .def_readwrite("StopThreshold", &UCarVehicleHandlingDefinition::StopThreshold)
        .def_readwrite("TorqueVSpeedCurve", &UCarVehicleHandlingDefinition::TorqueVSpeedCurve)
        .def_readwrite("LSDFactor", &UCarVehicleHandlingDefinition::LSDFactor)
        .def_readwrite("ThrottleSpeed", &UCarVehicleHandlingDefinition::ThrottleSpeed)
        .def_readwrite("SlopeMinDriveLimit", &UCarVehicleHandlingDefinition::SlopeMinDriveLimit)
        .def_readwrite("SlopeMaxDriveLimit", &UCarVehicleHandlingDefinition::SlopeMaxDriveLimit)
        .def_readwrite("FrontalCollisionGripFactor", &UCarVehicleHandlingDefinition::FrontalCollisionGripFactor)
        .def_readwrite("InAirUprightTorqueFactor", &UCarVehicleHandlingDefinition::InAirUprightTorqueFactor)
        .def_readwrite("InAirUprightMaxTorque", &UCarVehicleHandlingDefinition::InAirUprightMaxTorque)
        .def("StaticClass", &UHoverVehicleHandlingDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}