#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSkelControlLerpSingleBone()
{
    class_< UWillowSkelControlLerpSingleBone, bases< USkelControlSingleBone >  , boost::noncopyable>("UWillowSkelControlLerpSingleBone", no_init)
        .def_readwrite("VfTable_IIWeaponBoneController", &UWillowSkelControlLerpSingleBone::VfTable_IIWeaponBoneController)
        .def_readwrite("RotationExtent", &UWillowSkelControlLerpSingleBone::RotationExtent)
        .def_readwrite("RotationRate", &UWillowSkelControlLerpSingleBone::RotationRate)
        .def_readwrite("IncrementSize", &UWillowSkelControlLerpSingleBone::IncrementSize)
        .def_readwrite("StartRotation", &UWillowSkelControlLerpSingleBone::StartRotation)
        .def_readwrite("DestinationRotation", &UWillowSkelControlLerpSingleBone::DestinationRotation)
        .def_readwrite("RemainingRotations", &UWillowSkelControlLerpSingleBone::RemainingRotations)
        .def_readwrite("CurrentRotationRate", &UWillowSkelControlLerpSingleBone::CurrentRotationRate)
        .def("StaticClass", &UWillowSkelControlLerpSingleBone::StaticClass, return_value_policy< reference_existing_object >())
        .def("UnPause", &UWillowSkelControlLerpSingleBone::UnPause)
        .def("Pause", &UWillowSkelControlLerpSingleBone::Pause)
        .def("Stop", &UWillowSkelControlLerpSingleBone::Stop)
        .def("SpinImpulseOnFire", &UWillowSkelControlLerpSingleBone::SpinImpulseOnFire)
        .def("EndFire", &UWillowSkelControlLerpSingleBone::EndFire)
        .def("BeginFire", &UWillowSkelControlLerpSingleBone::BeginFire)
        .def("IncrementWeaponBoneControl", &UWillowSkelControlLerpSingleBone::IncrementWeaponBoneControl)
        .def("GetControlName", &UWillowSkelControlLerpSingleBone::GetControlName)
        .staticmethod("StaticClass")
  ;
}