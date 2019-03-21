#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetSkelControlTurretConstrainedValues()
{
    class_< UBehavior_SetSkelControlTurretConstrainedValues, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetSkelControlTurretConstrainedValues", no_init)
        .def_readwrite("SkelControlName", &UBehavior_SetSkelControlTurretConstrainedValues::SkelControlName)
        .def_readwrite("MaxAngle", &UBehavior_SetSkelControlTurretConstrainedValues::MaxAngle)
        .def_readwrite("MinAngle", &UBehavior_SetSkelControlTurretConstrainedValues::MinAngle)
        .def_readwrite("LagDegreesPerSecondYaw", &UBehavior_SetSkelControlTurretConstrainedValues::LagDegreesPerSecondYaw)
        .def_readwrite("LagDegreesPerSecondPitch", &UBehavior_SetSkelControlTurretConstrainedValues::LagDegreesPerSecondPitch)
        .def_readwrite("LagDegreesPerSecondRoll", &UBehavior_SetSkelControlTurretConstrainedValues::LagDegreesPerSecondRoll)
        .def("StaticClass", &UBehavior_SetSkelControlTurretConstrainedValues::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetSkelControlTurretConstrainedValues::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}