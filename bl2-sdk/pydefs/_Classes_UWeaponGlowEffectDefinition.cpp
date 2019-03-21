#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponGlowEffectDefinition(py::object m)
{
    py::class_< UWeaponGlowEffectDefinition,  UGBXDefinition   >(m, "UWeaponGlowEffectDefinition")
        .def_readwrite("GlowScaleCurve", &UWeaponGlowEffectDefinition::GlowScaleCurve)
        .def("StaticClass", &UWeaponGlowEffectDefinition::StaticClass, py::return_value_policy::reference)
          ;
}