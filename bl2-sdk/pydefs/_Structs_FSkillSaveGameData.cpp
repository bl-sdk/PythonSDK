#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkillSaveGameData()
{
    py::class_< FSkillSaveGameData >("FSkillSaveGameData")
        .def_readwrite("SkillDefinition", &FSkillSaveGameData::SkillDefinition)
        .def_readwrite("Grade", &FSkillSaveGameData::Grade)
        .def_readwrite("GradePoints", &FSkillSaveGameData::GradePoints)
        .def_readwrite("EquippedSlotIndex", &FSkillSaveGameData::EquippedSlotIndex)
  ;
}