#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AIThrowProjectileAtTarget()
{
    class_< UBehavior_AIThrowProjectileAtTarget, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AIThrowProjectileAtTarget", no_init)
        .def_readwrite("NumProjectiles", &UBehavior_AIThrowProjectileAtTarget::NumProjectiles)
        .def_readwrite("Options", &UBehavior_AIThrowProjectileAtTarget::Options)
        .def_readwrite("StartOffset", &UBehavior_AIThrowProjectileAtTarget::StartOffset)
        .def_readwrite("StartSocket", &UBehavior_AIThrowProjectileAtTarget::StartSocket)
        .def_readwrite("ChildProjectileBaseValues", &UBehavior_AIThrowProjectileAtTarget::ChildProjectileBaseValues)
        .def_readwrite("ProjectileDef", &UBehavior_AIThrowProjectileAtTarget::ProjectileDef)
        .def_readwrite("ExistingProjectile", &UBehavior_AIThrowProjectileAtTarget::ExistingProjectile)
        .def_readwrite("SetProjectileSequenceState", &UBehavior_AIThrowProjectileAtTarget::SetProjectileSequenceState)
        .def("StaticClass", &UBehavior_AIThrowProjectileAtTarget::StaticClass, return_value_policy< reference_existing_object >())
        .def("PublishBehaviorOutput", &UBehavior_AIThrowProjectileAtTarget::PublishBehaviorOutput)
        .def("ThrowExisting", &UBehavior_AIThrowProjectileAtTarget::ThrowExisting)
        .def("ThrowProjectile", &UBehavior_AIThrowProjectileAtTarget::ThrowProjectile)
        .def("ApplyBehaviorToContext", &UBehavior_AIThrowProjectileAtTarget::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}