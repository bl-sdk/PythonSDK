#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponGlowEffectDefinition(py::module &m)
{
    py::class_< UWeaponGlowEffectDefinition,  UGBXDefinition   >(m, "UWeaponGlowEffectDefinition")
		.def_static("StaticClass", &UWeaponGlowEffectDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("GlowScaleCurve", &UWeaponGlowEffectDefinition::GlowScaleCurve)
          ;
}