#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBodyWeaponHoldDefinition()
{
    class_< UBodyWeaponHoldDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UBodyWeaponHoldDefinition", no_init)
        .def_readwrite("HoldName", &UBodyWeaponHoldDefinition::HoldName)
        .def_readwrite("EnvironmentTag", &UBodyWeaponHoldDefinition::EnvironmentTag)
        .def_readwrite("AimOffsetProfileName", &UBodyWeaponHoldDefinition::AimOffsetProfileName)
        .def_readwrite("AnimSetList", &UBodyWeaponHoldDefinition::AnimSetList)
        .def_readwrite("WeaponActions", &UBodyWeaponHoldDefinition::WeaponActions)
        .def_readwrite("DefaultLeftHandIKHold", &UBodyWeaponHoldDefinition::DefaultLeftHandIKHold)
        .def_readwrite("CustomLeftHandIKHolds", &UBodyWeaponHoldDefinition::CustomLeftHandIKHolds)
        .def_readwrite("LeftHandIKJointLocation", &UBodyWeaponHoldDefinition::LeftHandIKJointLocation)
        .def_readwrite("LeftHandIKHandLocation", &UBodyWeaponHoldDefinition::LeftHandIKHandLocation)
        .def_readwrite("LeftHandIKHandRotation", &UBodyWeaponHoldDefinition::LeftHandIKHandRotation)
        .def_readwrite("ParentDefinition", &UBodyWeaponHoldDefinition::ParentDefinition)
        .def("StaticClass", &UBodyWeaponHoldDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAnimSets", &UBodyWeaponHoldDefinition::GetAnimSets)
        .def("GetWeaponSMD", &UBodyWeaponHoldDefinition::GetWeaponSMD, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}