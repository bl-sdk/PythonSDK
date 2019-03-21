#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAttributeSlotData()
{
    class_< FAttributeSlotData >("FAttributeSlotData", no_init)
        .def_readwrite("SlotName", &FAttributeSlotData::SlotName)
        .def_readwrite("MinimumGrade", &FAttributeSlotData::MinimumGrade)
        .def_readwrite("MaximumGrade", &FAttributeSlotData::MaximumGrade)
        .def_readwrite("TargetInstanceDataName", &FAttributeSlotData::TargetInstanceDataName)
        .def_readwrite("EffectGrade", &FAttributeSlotData::EffectGrade)
        .def_readwrite("AttributeToModify", &FAttributeSlotData::AttributeToModify)
        .def_readwrite("ConstraintAttribute", &FAttributeSlotData::ConstraintAttribute)
        .def_readwrite("ModifierType", &FAttributeSlotData::ModifierType)
        .def_readwrite("BaseModifierValue", &FAttributeSlotData::BaseModifierValue)
        .def_readwrite("PerGradeUpgrade", &FAttributeSlotData::PerGradeUpgrade)
        .def_readwrite("ComputedModifierValue", &FAttributeSlotData::ComputedModifierValue)
  ;
}