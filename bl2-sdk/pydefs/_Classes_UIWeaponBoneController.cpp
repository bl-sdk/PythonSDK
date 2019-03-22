#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIWeaponBoneController(py::module &m)
{
    py::class_< UIWeaponBoneController,  UInterface   >(m, "UIWeaponBoneController")
        .def("UnPause", &UIWeaponBoneController::UnPause)
        .def("Pause", &UIWeaponBoneController::Pause)
        .def("Stop", &UIWeaponBoneController::Stop)
        .def("SpinImpulseOnFire", &UIWeaponBoneController::SpinImpulseOnFire)
        .def("EndFire", &UIWeaponBoneController::EndFire)
        .def("BeginFire", &UIWeaponBoneController::BeginFire)
        .def("IncrementWeaponBoneControl", &UIWeaponBoneController::IncrementWeaponBoneControl)
        .def("GetControlName", &UIWeaponBoneController::GetControlName)
          ;
}