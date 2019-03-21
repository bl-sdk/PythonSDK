#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIWeaponBoneController()
{
    class_< UIWeaponBoneController, bases< UInterface >  , boost::noncopyable>("UIWeaponBoneController", no_init)
        .def("StaticClass", &UIWeaponBoneController::StaticClass, return_value_policy< reference_existing_object >())
        .def("UnPause", &UIWeaponBoneController::UnPause)
        .def("Pause", &UIWeaponBoneController::Pause)
        .def("Stop", &UIWeaponBoneController::Stop)
        .def("SpinImpulseOnFire", &UIWeaponBoneController::SpinImpulseOnFire)
        .def("EndFire", &UIWeaponBoneController::EndFire)
        .def("BeginFire", &UIWeaponBoneController::BeginFire)
        .def("IncrementWeaponBoneControl", &UIWeaponBoneController::IncrementWeaponBoneControl)
        .def("GetControlName", &UIWeaponBoneController::GetControlName)
        .staticmethod("StaticClass")
  ;
}