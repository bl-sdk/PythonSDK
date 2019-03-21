#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIProjectileBehavior()
{
    class_< UIProjectileBehavior, bases< UInterface >  , boost::noncopyable>("UIProjectileBehavior", no_init)
        .def("StaticClass", &UIProjectileBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_TagPayloadType", &UIProjectileBehavior::Behavior_TagPayloadType)
        .def("Behavior_LevelOffTrajectory", &UIProjectileBehavior::Behavior_LevelOffTrajectory)
        .def("Behavior_SetExplosionDefinition", &UIProjectileBehavior::Behavior_SetExplosionDefinition)
        .def("Behavior_SetDamageTypeDefinition", &UIProjectileBehavior::Behavior_SetDamageTypeDefinition)
        .def("Behavior_SetStickyGrenade", &UIProjectileBehavior::Behavior_SetStickyGrenade)
        .def("SetSpeed", &UIProjectileBehavior::SetSpeed)
        .def("SetProximity", &UIProjectileBehavior::SetProximity)
        .def("IsLevelingNow", &UIProjectileBehavior::IsLevelingNow)
        .def("SetHomingRotationOffset", &UIProjectileBehavior::SetHomingRotationOffset)
        .def("GetHomingTargetLocation", &UIProjectileBehavior::GetHomingTargetLocation)
        .def("GetHomingTargetByType", &UIProjectileBehavior::GetHomingTargetByType)
        .def("SetHomingTarget", &UIProjectileBehavior::SetHomingTarget)
        .def("FindHomingTarget", &UIProjectileBehavior::FindHomingTarget)
        .def("Detonate", &UIProjectileBehavior::Detonate)
        .def("SetVelocity", &UIProjectileBehavior::SetVelocity)
        .def("GetVelocity", &UIProjectileBehavior::GetVelocity)
        .staticmethod("StaticClass")
  ;
}