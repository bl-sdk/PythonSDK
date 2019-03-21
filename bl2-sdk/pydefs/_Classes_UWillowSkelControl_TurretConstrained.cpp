#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_TurretConstrained()
{
    class_< UWillowSkelControl_TurretConstrained, bases< USkelControlSingleBone >  , boost::noncopyable>("UWillowSkelControl_TurretConstrained", no_init)
        .def_readwrite("MaxAngle", &UWillowSkelControl_TurretConstrained::MaxAngle)
        .def_readwrite("MinAngle", &UWillowSkelControl_TurretConstrained::MinAngle)
        .def_readwrite("LagDegreesPerSecondYaw", &UWillowSkelControl_TurretConstrained::LagDegreesPerSecondYaw)
        .def_readwrite("LagDegreesPerSecondPitch", &UWillowSkelControl_TurretConstrained::LagDegreesPerSecondPitch)
        .def_readwrite("LagDegreesPerSecondRoll", &UWillowSkelControl_TurretConstrained::LagDegreesPerSecondRoll)
        .def_readwrite("DesiredBoneRotation", &UWillowSkelControl_TurretConstrained::DesiredBoneRotation)
        .def_readwrite("AssociatedSeatIndex", &UWillowSkelControl_TurretConstrained::AssociatedSeatIndex)
        .def_readwrite("DefaultRotation", &UWillowSkelControl_TurretConstrained::DefaultRotation)
        .def_readwrite("VirtualSeatKey", &UWillowSkelControl_TurretConstrained::VirtualSeatKey)
        .def_readwrite("ConstrainedBoneRotation", &UWillowSkelControl_TurretConstrained::ConstrainedBoneRotation)
        .def("StaticClass", &UWillowSkelControl_TurretConstrained::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnTurretStatusChange", &UWillowSkelControl_TurretConstrained::OnTurretStatusChange)
        .staticmethod("StaticClass")
  ;
}