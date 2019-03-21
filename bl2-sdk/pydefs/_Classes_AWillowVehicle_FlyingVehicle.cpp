#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowVehicle_FlyingVehicle()
{
    py::class_< AWillowVehicle_FlyingVehicle,  AWillowVehicle   >("AWillowVehicle_FlyingVehicle")
        .def_readwrite("FlyingSpeed", &AWillowVehicle_FlyingVehicle::FlyingSpeed)
        .def_readwrite("AirTransFriction", &AWillowVehicle_FlyingVehicle::AirTransFriction)
        .def_readwrite("AirRotFriction", &AWillowVehicle_FlyingVehicle::AirRotFriction)
        .def_readwrite("ForceScalar", &AWillowVehicle_FlyingVehicle::ForceScalar)
        .def_readwrite("TorqueScalar", &AWillowVehicle_FlyingVehicle::TorqueScalar)
        .def_readwrite("TiltScalar", &AWillowVehicle_FlyingVehicle::TiltScalar)
        .def_readwrite("MoveTiltAmount", &AWillowVehicle_FlyingVehicle::MoveTiltAmount)
        .def_readwrite("HeightMin", &AWillowVehicle_FlyingVehicle::HeightMin)
        .def_readwrite("HeightMax", &AWillowVehicle_FlyingVehicle::HeightMax)
        .def_readwrite("HeightDesiredMin", &AWillowVehicle_FlyingVehicle::HeightDesiredMin)
        .def_readwrite("HeightDesiredMax", &AWillowVehicle_FlyingVehicle::HeightDesiredMax)
        .def_readwrite("DyingGravity", &AWillowVehicle_FlyingVehicle::DyingGravity)
        .def_readwrite("TraceLookAheadVelocityScalar", &AWillowVehicle_FlyingVehicle::TraceLookAheadVelocityScalar)
        .def_readwrite("TraceStartHeight", &AWillowVehicle_FlyingVehicle::TraceStartHeight)
        .def_readwrite("TurretConeAngle", &AWillowVehicle_FlyingVehicle::TurretConeAngle)
        .def("StaticClass", &AWillowVehicle_FlyingVehicle::StaticClass, py::return_value_policy::reference)
        .def("ApplyCameraYawDamping", &AWillowVehicle_FlyingVehicle::ApplyCameraYawDamping)
        .def("TraceThroughTriggers", &AWillowVehicle_FlyingVehicle::TraceThroughTriggers)
        .def("SuggestRiseInput", &AWillowVehicle_FlyingVehicle::SuggestRiseInput)
        .def("GetRiseInput", &AWillowVehicle_FlyingVehicle::GetRiseInput)
        .def("eventSetAIInputs", &AWillowVehicle_FlyingVehicle::eventSetAIInputs)
        .def("SetInputs", &AWillowVehicle_FlyingVehicle::SetInputs)
        .def("UnwrapToSimObj", &AWillowVehicle_FlyingVehicle::UnwrapToSimObj)
        .staticmethod("StaticClass")
  ;
}