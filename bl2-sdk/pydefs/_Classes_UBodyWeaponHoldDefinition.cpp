#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBodyWeaponHoldDefinition()
{
    py::class_< UBodyWeaponHoldDefinition,  UGBXDefinition   >("UBodyWeaponHoldDefinition")
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
        .def("StaticClass", &UBodyWeaponHoldDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetAnimSets", &UBodyWeaponHoldDefinition::GetAnimSets)
        .def("GetWeaponSMD", &UBodyWeaponHoldDefinition::GetWeaponSMD, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}