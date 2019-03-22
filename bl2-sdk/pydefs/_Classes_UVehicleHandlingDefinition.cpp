#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleHandlingDefinition(py::module &m)
{
    py::class_< UVehicleHandlingDefinition,  UGBXDefinition   >(m, "UVehicleHandlingDefinition")
        .def_readwrite("WheelSuspensionStiffness", &UVehicleHandlingDefinition::WheelSuspensionStiffness)
        .def_readwrite("WheelSuspensionDamping", &UVehicleHandlingDefinition::WheelSuspensionDamping)
        .def_readwrite("WheelSuspensionBias", &UVehicleHandlingDefinition::WheelSuspensionBias)
        .def_readwrite("WheelLongExtremumSlip", &UVehicleHandlingDefinition::WheelLongExtremumSlip)
        .def_readwrite("WheelLongExtremumValue", &UVehicleHandlingDefinition::WheelLongExtremumValue)
        .def_readwrite("WheelLongAsymptoteSlip", &UVehicleHandlingDefinition::WheelLongAsymptoteSlip)
        .def_readwrite("WheelLongAsymptoteValue", &UVehicleHandlingDefinition::WheelLongAsymptoteValue)
        .def_readwrite("WheelLatExtremumSlip", &UVehicleHandlingDefinition::WheelLatExtremumSlip)
        .def_readwrite("WheelLatExtremumValue", &UVehicleHandlingDefinition::WheelLatExtremumValue)
        .def_readwrite("WheelLatAsymptoteSlip", &UVehicleHandlingDefinition::WheelLatAsymptoteSlip)
        .def_readwrite("WheelLatAsymptoteValue", &UVehicleHandlingDefinition::WheelLatAsymptoteValue)
        .def_readwrite("WheelInertia", &UVehicleHandlingDefinition::WheelInertia)
        .def_readwrite("AutoDriveSteer", &UVehicleHandlingDefinition::AutoDriveSteer)
        .def_readwrite("COMOffset", &UVehicleHandlingDefinition::COMOffset)
        .def_readwrite("InertiaTensorMultiplier", &UVehicleHandlingDefinition::InertiaTensorMultiplier)
        .def_readwrite("StayUprightRollResistAngle", &UVehicleHandlingDefinition::StayUprightRollResistAngle)
        .def_readwrite("StayUprightPitchResistAngle", &UVehicleHandlingDefinition::StayUprightPitchResistAngle)
        .def_readwrite("StayUprightStiffness", &UVehicleHandlingDefinition::StayUprightStiffness)
        .def_readwrite("StayUprightDamping", &UVehicleHandlingDefinition::StayUprightDamping)
        .def_readwrite("Wheels", &UVehicleHandlingDefinition::Wheels)
        .def_readwrite("HandbrakeFishtailForces", &UVehicleHandlingDefinition::HandbrakeFishtailForces)
        .def_readwrite("FishtailCameraShake", &UVehicleHandlingDefinition::FishtailCameraShake)
        .def_readwrite("FishtailCameraShakeMinVehicleSpeed", &UVehicleHandlingDefinition::FishtailCameraShakeMinVehicleSpeed)
        .def("StaticClass", &UVehicleHandlingDefinition::StaticClass, py::return_value_policy::reference)
        .def("ApplyDefinitionToVehicle", &UVehicleHandlingDefinition::ApplyDefinitionToVehicle)
          ;
}