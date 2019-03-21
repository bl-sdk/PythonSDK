#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponGlowEffectDefinition()
{
    py::class_< UWeaponGlowEffectDefinition,  UGBXDefinition   >("UWeaponGlowEffectDefinition")
        .def_readwrite("GlowScaleCurve", &UWeaponGlowEffectDefinition::GlowScaleCurve)
        .def("StaticClass", &UWeaponGlowEffectDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}