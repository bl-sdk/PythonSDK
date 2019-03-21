#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_RotateFlapFromFiring()
{
    class_< UWillowSkelControl_RotateFlapFromFiring, bases< USkelControlSingleBone >  , boost::noncopyable>("UWillowSkelControl_RotateFlapFromFiring", no_init)
        .def_readwrite("VfTable_IIWeaponBoneController", &UWillowSkelControl_RotateFlapFromFiring::VfTable_IIWeaponBoneController)
        .def_readwrite("RotationExtent", &UWillowSkelControl_RotateFlapFromFiring::RotationExtent)
        .def_readwrite("BlendPercent", &UWillowSkelControl_RotateFlapFromFiring::BlendPercent)
        .def_readwrite("BlendPercentRate", &UWillowSkelControl_RotateFlapFromFiring::BlendPercentRate)
        .def_readwrite("BlendPercentRateDelay", &UWillowSkelControl_RotateFlapFromFiring::BlendPercentRateDelay)
        .def("StaticClass", &UWillowSkelControl_RotateFlapFromFiring::StaticClass, return_value_policy< reference_existing_object >())
        .def("UnPause", &UWillowSkelControl_RotateFlapFromFiring::UnPause)
        .def("Pause", &UWillowSkelControl_RotateFlapFromFiring::Pause)
        .def("Stop", &UWillowSkelControl_RotateFlapFromFiring::Stop)
        .def("SpinImpulseOnFire", &UWillowSkelControl_RotateFlapFromFiring::SpinImpulseOnFire)
        .def("EndFire", &UWillowSkelControl_RotateFlapFromFiring::EndFire)
        .def("BeginFire", &UWillowSkelControl_RotateFlapFromFiring::BeginFire)
        .def("IncrementWeaponBoneControl", &UWillowSkelControl_RotateFlapFromFiring::IncrementWeaponBoneControl)
        .def("GetControlName", &UWillowSkelControl_RotateFlapFromFiring::GetControlName)
        .staticmethod("StaticClass")
  ;
}