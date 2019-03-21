#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPhysicsAssetInstance()
{
    class_< UPhysicsAssetInstance, bases< UObject >  , boost::noncopyable>("UPhysicsAssetInstance", no_init)
        .def_readwrite("Owner", &UPhysicsAssetInstance::Owner)
        .def_readwrite("RootBodyIndex", &UPhysicsAssetInstance::RootBodyIndex)
        .def_readwrite("Bodies", &UPhysicsAssetInstance::Bodies)
        .def_readwrite("Constraints", &UPhysicsAssetInstance::Constraints)
        .def_readwrite("CollisionDisableTable", &UPhysicsAssetInstance::CollisionDisableTable)
        .def_readwrite("LinearSpringScale", &UPhysicsAssetInstance::LinearSpringScale)
        .def_readwrite("LinearDampingScale", &UPhysicsAssetInstance::LinearDampingScale)
        .def_readwrite("LinearForceLimitScale", &UPhysicsAssetInstance::LinearForceLimitScale)
        .def_readwrite("AngularSpringScale", &UPhysicsAssetInstance::AngularSpringScale)
        .def_readwrite("AngularDampingScale", &UPhysicsAssetInstance::AngularDampingScale)
        .def_readwrite("AngularForceLimitScale", &UPhysicsAssetInstance::AngularForceLimitScale)
        .def("StaticClass", &UPhysicsAssetInstance::StaticClass, return_value_policy< reference_existing_object >())
        .def("FindConstraintInstance", &UPhysicsAssetInstance::FindConstraintInstance, return_value_policy< reference_existing_object >())
        .def("FindBodyInstance", &UPhysicsAssetInstance::FindBodyInstance, return_value_policy< reference_existing_object >())
        .def("SetFullAnimWeightBonesFixed", &UPhysicsAssetInstance::SetFullAnimWeightBonesFixed)
        .def("SetFullAnimWeightBlockRigidBody", &UPhysicsAssetInstance::SetFullAnimWeightBlockRigidBody)
        .def("SetNamedBodiesBlockRigidBody", &UPhysicsAssetInstance::SetNamedBodiesBlockRigidBody)
        .def("SetNamedRBBoneSprings", &UPhysicsAssetInstance::SetNamedRBBoneSprings)
        .def("SetAllRBBoneSprings", &UPhysicsAssetInstance::SetAllRBBoneSprings)
        .def("SetNamedMotorsAngularVelocityDrive", &UPhysicsAssetInstance::SetNamedMotorsAngularVelocityDrive)
        .def("SetNamedMotorsAngularPositionDrive", &UPhysicsAssetInstance::SetNamedMotorsAngularPositionDrive)
        .def("SetAllMotorsAngularDriveTypeAndParams", &UPhysicsAssetInstance::SetAllMotorsAngularDriveTypeAndParams)
        .def("SetAllMotorsAngularDriveParams", &UPhysicsAssetInstance::SetAllMotorsAngularDriveParams)
        .def("SetAllMotorsAngularVelocityDrive", &UPhysicsAssetInstance::SetAllMotorsAngularVelocityDrive)
        .def("SetAllMotorsAngularPositionDrive", &UPhysicsAssetInstance::SetAllMotorsAngularPositionDrive)
        .def("ForceAllBodiesBelowUnfixed", &UPhysicsAssetInstance::ForceAllBodiesBelowUnfixed)
        .def("SetNamedBodiesFixed", &UPhysicsAssetInstance::SetNamedBodiesFixed)
        .def("SetAllBodiesFixed", &UPhysicsAssetInstance::SetAllBodiesFixed)
        .def("GetTotalMassBelowBone", &UPhysicsAssetInstance::GetTotalMassBelowBone)
        .def("SetAngularDriveScale", &UPhysicsAssetInstance::SetAngularDriveScale)
        .def("SetLinearDriveScale", &UPhysicsAssetInstance::SetLinearDriveScale)
        .staticmethod("StaticClass")
  ;
}