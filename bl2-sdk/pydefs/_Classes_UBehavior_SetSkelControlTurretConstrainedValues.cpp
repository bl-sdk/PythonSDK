#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetSkelControlTurretConstrainedValues()
{
    py::class_< UBehavior_SetSkelControlTurretConstrainedValues,  UBehaviorBase   >("UBehavior_SetSkelControlTurretConstrainedValues")
        .def_readwrite("SkelControlName", &UBehavior_SetSkelControlTurretConstrainedValues::SkelControlName)
        .def_readwrite("MaxAngle", &UBehavior_SetSkelControlTurretConstrainedValues::MaxAngle)
        .def_readwrite("MinAngle", &UBehavior_SetSkelControlTurretConstrainedValues::MinAngle)
        .def_readwrite("LagDegreesPerSecondYaw", &UBehavior_SetSkelControlTurretConstrainedValues::LagDegreesPerSecondYaw)
        .def_readwrite("LagDegreesPerSecondPitch", &UBehavior_SetSkelControlTurretConstrainedValues::LagDegreesPerSecondPitch)
        .def_readwrite("LagDegreesPerSecondRoll", &UBehavior_SetSkelControlTurretConstrainedValues::LagDegreesPerSecondRoll)
        .def("StaticClass", &UBehavior_SetSkelControlTurretConstrainedValues::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetSkelControlTurretConstrainedValues::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}