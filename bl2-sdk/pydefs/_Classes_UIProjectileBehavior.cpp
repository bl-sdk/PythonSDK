#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIProjectileBehavior(py::module &m)
{
    py::class_< UIProjectileBehavior,  UInterface   >(m, "UIProjectileBehavior")
        .def("StaticClass", &UIProjectileBehavior::StaticClass, py::return_value_policy::reference)
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
          ;
}