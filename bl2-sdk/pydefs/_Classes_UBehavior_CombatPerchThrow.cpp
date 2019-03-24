#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CombatPerchThrow(py::module &m)
{
    py::class_< UBehavior_CombatPerchThrow,  UBehaviorBase   >(m, "UBehavior_CombatPerchThrow")
		.def_static("StaticClass", &UBehavior_CombatPerchThrow::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NumProjectiles", &UBehavior_AIThrowProjectileAtTarget::NumProjectiles)
        .def_readwrite("Options", &UBehavior_AIThrowProjectileAtTarget::Options)
        .def_readwrite("StartOffset", &UBehavior_AIThrowProjectileAtTarget::StartOffset)
        .def_readwrite("StartSocket", &UBehavior_AIThrowProjectileAtTarget::StartSocket)
        .def_readwrite("ChildProjectileBaseValues", &UBehavior_AIThrowProjectileAtTarget::ChildProjectileBaseValues)
        .def_readwrite("ProjectileDef", &UBehavior_AIThrowProjectileAtTarget::ProjectileDef)
        .def_readwrite("ExistingProjectile", &UBehavior_AIThrowProjectileAtTarget::ExistingProjectile)
        .def_readwrite("SetProjectileSequenceState", &UBehavior_AIThrowProjectileAtTarget::SetProjectileSequenceState)
        .def("ThrowProjectile", &UBehavior_CombatPerchThrow::ThrowProjectile)
        .def("ApplyBehaviorToContext", &UBehavior_CombatPerchThrow::ApplyBehaviorToContext)
        .def("PublishBehaviorOutput", &UBehavior_AIThrowProjectileAtTarget::PublishBehaviorOutput)
        .def("ThrowExisting", &UBehavior_AIThrowProjectileAtTarget::ThrowExisting)
          ;
}