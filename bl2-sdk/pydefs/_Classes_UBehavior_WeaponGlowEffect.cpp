#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_WeaponGlowEffect()
{
    class_< UBehavior_WeaponGlowEffect, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_WeaponGlowEffect", no_init)
        .def_readwrite("Action", &UBehavior_WeaponGlowEffect::Action)
        .def_readwrite("Effect", &UBehavior_WeaponGlowEffect::Effect)
        .def("StaticClass", &UBehavior_WeaponGlowEffect::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_WeaponGlowEffect::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}