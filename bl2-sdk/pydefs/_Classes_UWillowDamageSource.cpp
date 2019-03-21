#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDamageSource()
{
    class_< UWillowDamageSource, bases< UDamageType >  , boost::noncopyable>("UWillowDamageSource", no_init)
        .def_readwrite("GibPerterbation", &UWillowDamageType::GibPerterbation)
        .def_readwrite("DamageWeaponClass", &UWillowDamageType::DamageWeaponClass)
        .def_readwrite("DamageWeaponFireMode", &UWillowDamageType::DamageWeaponFireMode)
        .def_readwrite("UBMKilledByMessageString", &UWillowDamageType::UBMKilledByMessageString)
        .def("StaticClass", &UWillowDamageSource::StaticClass, return_value_policy< reference_existing_object >())
        .def("CanDamageSourceBeAbsorbedByShields", &UWillowDamageSource::CanDamageSourceBeAbsorbedByShields)
        .def("ShouldDamageSourcePenetrateShields", &UWillowDamageSource::ShouldDamageSourcePenetrateShields)
        .def("GetAmmoTheftAmounts", &UWillowDamageSource::GetAmmoTheftAmounts)
        .def("PawnTornOff", &UWillowDamageType::PawnTornOff)
        .def("SpawnHitEffect", &UWillowDamageType::SpawnHitEffect)
        .staticmethod("StaticClass")
  ;
}