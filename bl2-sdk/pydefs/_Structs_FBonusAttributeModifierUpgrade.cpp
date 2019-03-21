#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBonusAttributeModifierUpgrade()
{
    py::class_< FBonusAttributeModifierUpgrade >("FBonusAttributeModifierUpgrade")
        .def_readwrite("GradeToApplyAt", &FBonusAttributeModifierUpgrade::GradeToApplyAt)
        .def_readwrite("Modifier", &FBonusAttributeModifierUpgrade::Modifier)
  ;
}