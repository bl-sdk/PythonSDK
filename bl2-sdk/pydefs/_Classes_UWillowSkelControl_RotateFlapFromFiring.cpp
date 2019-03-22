#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSkelControl_RotateFlapFromFiring(py::module &m)
{
    py::class_< UWillowSkelControl_RotateFlapFromFiring,  USkelControlSingleBone   >(m, "UWillowSkelControl_RotateFlapFromFiring")
        .def_readwrite("VfTable_IIWeaponBoneController", &UWillowSkelControl_RotateFlapFromFiring::VfTable_IIWeaponBoneController)
        .def_readwrite("RotationExtent", &UWillowSkelControl_RotateFlapFromFiring::RotationExtent)
        .def_readwrite("BlendPercent", &UWillowSkelControl_RotateFlapFromFiring::BlendPercent)
        .def_readwrite("BlendPercentRate", &UWillowSkelControl_RotateFlapFromFiring::BlendPercentRate)
        .def_readwrite("BlendPercentRateDelay", &UWillowSkelControl_RotateFlapFromFiring::BlendPercentRateDelay)
        .def("UnPause", &UWillowSkelControl_RotateFlapFromFiring::UnPause)
        .def("Pause", &UWillowSkelControl_RotateFlapFromFiring::Pause)
        .def("Stop", &UWillowSkelControl_RotateFlapFromFiring::Stop)
        .def("SpinImpulseOnFire", &UWillowSkelControl_RotateFlapFromFiring::SpinImpulseOnFire)
        .def("EndFire", &UWillowSkelControl_RotateFlapFromFiring::EndFire)
        .def("BeginFire", &UWillowSkelControl_RotateFlapFromFiring::BeginFire)
        .def("IncrementWeaponBoneControl", &UWillowSkelControl_RotateFlapFromFiring::IncrementWeaponBoneControl)
        .def("GetControlName", &UWillowSkelControl_RotateFlapFromFiring::GetControlName)
          ;
}