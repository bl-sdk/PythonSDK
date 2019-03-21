#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowVehicle_ChopperVehicle()
{
    class_< AWillowVehicle_ChopperVehicle, bases< AWillowVehicle >  , boost::noncopyable>("AWillowVehicle_ChopperVehicle", no_init)
        .def_readwrite("GroundEffectIndices", &AWillowVehicle_ChopperVehicle::GroundEffectIndices)
        .def_readwrite("MaxGroundEffectDist", &AWillowVehicle_ChopperVehicle::MaxGroundEffectDist)
        .def_readwrite("GroundEffectDistParameterName", &AWillowVehicle_ChopperVehicle::GroundEffectDistParameterName)
        .def_readwrite("WaterGroundEffect", &AWillowVehicle_ChopperVehicle::WaterGroundEffect)
        .def_readwrite("FullAirSpeed", &AWillowVehicle_ChopperVehicle::FullAirSpeed)
        .def_readwrite("ContrailEffectIndices", &AWillowVehicle_ChopperVehicle::ContrailEffectIndices)
        .def_readwrite("ContrailColorParameterName", &AWillowVehicle_ChopperVehicle::ContrailColorParameterName)
        .def_readwrite("PushForce", &AWillowVehicle_ChopperVehicle::PushForce)
        .def_readwrite("RadarLockMessage", &AWillowVehicle_ChopperVehicle::RadarLockMessage)
        .def_readwrite("LastRadarLockWarnTime", &AWillowVehicle_ChopperVehicle::LastRadarLockWarnTime)
        .def("StaticClass", &AWillowVehicle_ChopperVehicle::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetInputs", &AWillowVehicle_ChopperVehicle::SetInputs)
        .def("ShouldClamp", &AWillowVehicle_ChopperVehicle::ShouldClamp)
        .def("ResetTurningSpeed", &AWillowVehicle_ChopperVehicle::ResetTurningSpeed)
        .def("eventRigidBodyCollision", &AWillowVehicle_ChopperVehicle::eventRigidBodyCollision)
        .def("Dodge", &AWillowVehicle_ChopperVehicle::Dodge)
        .def("FastVehicle", &AWillowVehicle_ChopperVehicle::FastVehicle)
        .def("RecommendLongRangedAttack", &AWillowVehicle_ChopperVehicle::RecommendLongRangedAttack)
        .def("SetDriving", &AWillowVehicle_ChopperVehicle::SetDriving)
        .staticmethod("StaticClass")
  ;
}