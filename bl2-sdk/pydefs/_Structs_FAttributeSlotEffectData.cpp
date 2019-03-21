#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAttributeSlotEffectData()
{
    class_< FAttributeSlotEffectData >("FAttributeSlotEffectData", no_init)
        .def_readwrite("SlotName", &FAttributeSlotEffectData::SlotName)
        .def_readwrite("AttributeToModify", &FAttributeSlotEffectData::AttributeToModify)
        .def_readwrite("ConstraintAttribute", &FAttributeSlotEffectData::ConstraintAttribute)
        .def_readwrite("ModifierType", &FAttributeSlotEffectData::ModifierType)
        .def_readwrite("BaseModifierValue", &FAttributeSlotEffectData::BaseModifierValue)
        .def_readwrite("PerGradeUpgrade", &FAttributeSlotEffectData::PerGradeUpgrade)
        .def_readwrite("MinimumGrade", &FAttributeSlotEffectData::MinimumGrade)
        .def_readwrite("MaximumGrade", &FAttributeSlotEffectData::MaximumGrade)
        .def_readwrite("TargetInstanceDataName", &FAttributeSlotEffectData::TargetInstanceDataName)
  ;
}