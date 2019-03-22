#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAttributeSlotData(py::module &m)
{
    py::class_< FAttributeSlotData >(m, "FAttributeSlotData")
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