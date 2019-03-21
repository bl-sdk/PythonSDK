#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USVehicleSimBase()
{
    class_< USVehicleSimBase, bases< UActorComponent >  , boost::noncopyable>("USVehicleSimBase", no_init)
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
        .def("StaticClass", &USVehicleSimBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}