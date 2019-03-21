#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkillSaveGameData(py::object m)
{
    py::class_< FSkillSaveGameData >(m, "FSkillSaveGameData")
        .def_readwrite("SkillDefinition", &FSkillSaveGameData::SkillDefinition)
        .def_readwrite("Grade", &FSkillSaveGameData::Grade)
        .def_readwrite("GradePoints", &FSkillSaveGameData::GradePoints)
        .def_readwrite("EquippedSlotIndex", &FSkillSaveGameData::EquippedSlotIndex)
  ;
}