#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDamageType()
{
    class_< UWillowDamageType, bases< UDamageType >  , boost::noncopyable>("UWillowDamageType", no_init)
        .def_readwrite("GibPerterbation", &UWillowDamageType::GibPerterbation)
        .def_readwrite("DamageWeaponClass", &UWillowDamageType::DamageWeaponClass)
        .def_readwrite("DamageWeaponFireMode", &UWillowDamageType::DamageWeaponFireMode)
        .def_readwrite("UBMKilledByMessageString", &UWillowDamageType::UBMKilledByMessageString)
        .def("StaticClass", &UWillowDamageType::StaticClass, return_value_policy< reference_existing_object >())
        .def("PawnTornOff", &UWillowDamageType::PawnTornOff)
        .def("SpawnHitEffect", &UWillowDamageType::SpawnHitEffect)
        .staticmethod("StaticClass")
  ;
}