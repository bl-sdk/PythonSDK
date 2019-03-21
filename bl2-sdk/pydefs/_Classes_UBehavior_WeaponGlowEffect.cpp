#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_WeaponGlowEffect()
{
    py::class_< UBehavior_WeaponGlowEffect,  UBehaviorBase   >("UBehavior_WeaponGlowEffect")
        .def_readwrite("Action", &UBehavior_WeaponGlowEffect::Action)
        .def_readwrite("Effect", &UBehavior_WeaponGlowEffect::Effect)
        .def("StaticClass", &UBehavior_WeaponGlowEffect::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_WeaponGlowEffect::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}