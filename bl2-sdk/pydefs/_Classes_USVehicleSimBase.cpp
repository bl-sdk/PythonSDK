#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USVehicleSimBase(py::module &m)
{
    py::class_< USVehicleSimBase,  UActorComponent   >(m, "USVehicleSimBase")
        .def_readwrite("WheelSuspensionStiffness", &USVehicleSimBase::WheelSuspensionStiffness)
        .def_readwrite("WheelSuspensionDamping", &USVehicleSimBase::WheelSuspensionDamping)
        .def_readwrite("WheelSuspensionBias", &USVehicleSimBase::WheelSuspensionBias)
        .def_readwrite("WheelLongExtremumSlip", &USVehicleSimBase::WheelLongExtremumSlip)
        .def_readwrite("WheelLongExtremumValue", &USVehicleSimBase::WheelLongExtremumValue)
        .def_readwrite("WheelLongAsymptoteSlip", &USVehicleSimBase::WheelLongAsymptoteSlip)
        .def_readwrite("WheelLongAsymptoteValue", &USVehicleSimBase::WheelLongAsymptoteValue)
        .def_readwrite("WheelLatExtremumSlip", &USVehicleSimBase::WheelLatExtremumSlip)
        .def_readwrite("WheelLatExtremumValue", &USVehicleSimBase::WheelLatExtremumValue)
        .def_readwrite("WheelLatAsymptoteSlip", &USVehicleSimBase::WheelLatAsymptoteSlip)
        .def_readwrite("WheelLatAsymptoteValue", &USVehicleSimBase::WheelLatAsymptoteValue)
        .def_readwrite("WheelInertia", &USVehicleSimBase::WheelInertia)
        .def_readwrite("AutoDriveSteer", &USVehicleSimBase::AutoDriveSteer)
        .def("StaticClass", &USVehicleSimBase::StaticClass, py::return_value_policy::reference)
          ;
}