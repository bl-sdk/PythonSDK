#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_RotateWeaponBoneFromFiring(py::module &m)
{
    py::class_< UWillowSkelControl_RotateWeaponBoneFromFiring,  USkelControlSingleBone   >(m, "UWillowSkelControl_RotateWeaponBoneFromFiring")
		.def_static("StaticClass", &UWillowSkelControl_RotateWeaponBoneFromFiring::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIWeaponBoneController", &UWillowSkelControl_RotateWeaponBoneFromFiring::VfTable_IIWeaponBoneController)
        .def_readwrite("NumberOfShotsPerRotation", &UWillowSkelControl_RotateWeaponBoneFromFiring::NumberOfShotsPerRotation)
        .def_readwrite("MaxRotationsPerSecond", &UWillowSkelControl_RotateWeaponBoneFromFiring::MaxRotationsPerSecond)
        .def_readwrite("MinRotationsPerSecond", &UWillowSkelControl_RotateWeaponBoneFromFiring::MinRotationsPerSecond)
        .def_readwrite("RotationExtent", &UWillowSkelControl_RotateWeaponBoneFromFiring::RotationExtent)
        .def_readwrite("CurrentMaxRotationsPerSecond", &UWillowSkelControl_RotateWeaponBoneFromFiring::CurrentMaxRotationsPerSecond)
        .def_readwrite("BlendPercent", &UWillowSkelControl_RotateWeaponBoneFromFiring::BlendPercent)
        .def_readwrite("BlendPercentRate", &UWillowSkelControl_RotateWeaponBoneFromFiring::BlendPercentRate)
        .def_readwrite("BlendPercentRateDelay", &UWillowSkelControl_RotateWeaponBoneFromFiring::BlendPercentRateDelay)
        .def("UnPause", &UWillowSkelControl_RotateWeaponBoneFromFiring::UnPause)
        .def("Pause", &UWillowSkelControl_RotateWeaponBoneFromFiring::Pause)
        .def("Stop", &UWillowSkelControl_RotateWeaponBoneFromFiring::Stop)
        .def("SpinImpulseOnFire", &UWillowSkelControl_RotateWeaponBoneFromFiring::SpinImpulseOnFire)
        .def("EndFire", &UWillowSkelControl_RotateWeaponBoneFromFiring::EndFire)
        .def("BeginFire", &UWillowSkelControl_RotateWeaponBoneFromFiring::BeginFire)
        .def("IncrementWeaponBoneControl", &UWillowSkelControl_RotateWeaponBoneFromFiring::IncrementWeaponBoneControl)
        .def("GetControlName", &UWillowSkelControl_RotateWeaponBoneFromFiring::GetControlName)
          ;
}