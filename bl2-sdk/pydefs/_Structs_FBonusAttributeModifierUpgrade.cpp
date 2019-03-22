#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBonusAttributeModifierUpgrade(py::module &m)
{
    py::class_< FBonusAttributeModifierUpgrade >(m, "FBonusAttributeModifierUpgrade")
        .def_readwrite("GradeToApplyAt", &FBonusAttributeModifierUpgrade::GradeToApplyAt)
        .def_readwrite("Modifier", &FBonusAttributeModifierUpgrade::Modifier)
  ;
}