#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUIStatModifierData()
{
    class_< FUIStatModifierData >("FUIStatModifierData", no_init)
        .def_readwrite("AttributePresentation", &FUIStatModifierData::AttributePresentation)
        .def_readwrite("ConstraintAttributePresentation", &FUIStatModifierData::ConstraintAttributePresentation)
        .def_readwrite("AttributeStyle", &FUIStatModifierData::AttributeStyle)
        .def_readwrite("ModifierTotal", &FUIStatModifierData::ModifierTotal)
        .def_readwrite("CompareModifierTotal", &FUIStatModifierData::CompareModifierTotal)
        .def_readwrite("DefinitionIndex", &FUIStatModifierData::DefinitionIndex)
        .def_readwrite("SupplementalAttributePresentation", &FUIStatModifierData::SupplementalAttributePresentation)
        .def_readwrite("SupplementalAttributeStyle", &FUIStatModifierData::SupplementalAttributeStyle)
        .def_readwrite("SupplementalModifierTotal", &FUIStatModifierData::SupplementalModifierTotal)
        .def_readwrite("StatCombinationMethod", &FUIStatModifierData::StatCombinationMethod)
  ;
}