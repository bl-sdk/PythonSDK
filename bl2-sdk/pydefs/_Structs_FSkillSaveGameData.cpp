#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkillSaveGameData()
{
    class_< FSkillSaveGameData >("FSkillSaveGameData", no_init)
        .def_readwrite("SkillDefinition", &FSkillSaveGameData::SkillDefinition)
        .def_readwrite("Grade", &FSkillSaveGameData::Grade)
        .def_readwrite("GradePoints", &FSkillSaveGameData::GradePoints)
        .def_readwrite("EquippedSlotIndex", &FSkillSaveGameData::EquippedSlotIndex)
  ;
}