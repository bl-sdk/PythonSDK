#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_WeaponGlowEffect(py::module &m)
{
    py::class_< UBehavior_WeaponGlowEffect,  UBehaviorBase   >(m, "UBehavior_WeaponGlowEffect")
        .def_readwrite("Action", &UBehavior_WeaponGlowEffect::Action)
        .def_readwrite("Effect", &UBehavior_WeaponGlowEffect::Effect)
        .def("ApplyBehaviorToContext", &UBehavior_WeaponGlowEffect::ApplyBehaviorToContext)
          ;
}