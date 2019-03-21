#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBonusAttributeModifierUpgrade()
{
    class_< FBonusAttributeModifierUpgrade >("FBonusAttributeModifierUpgrade", no_init)
        .def_readwrite("GradeToApplyAt", &FBonusAttributeModifierUpgrade::GradeToApplyAt)
        .def_readwrite("Modifier", &FBonusAttributeModifierUpgrade::Modifier)
  ;
}