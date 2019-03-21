#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerSkillTreeSkillData()
{
    class_< FPlayerSkillTreeSkillData >("FPlayerSkillTreeSkillData", no_init)
        .def_readwrite("Definition", &FPlayerSkillTreeSkillData::Definition)
        .def_readwrite("Index", &FPlayerSkillTreeSkillData::Index)
        .def_readwrite("PrevSkillIndex", &FPlayerSkillTreeSkillData::PrevSkillIndex)
        .def_readwrite("NextSkillIndex", &FPlayerSkillTreeSkillData::NextSkillIndex)
        .def_readwrite("ParentTierIndex", &FPlayerSkillTreeSkillData::ParentTierIndex)
        .def_readwrite("PrevSkillTypeIndex", &FPlayerSkillTreeSkillData::PrevSkillTypeIndex)
        .def_readwrite("NextSkillTypeIndex", &FPlayerSkillTreeSkillData::NextSkillTypeIndex)
        .def_readwrite("Grade", &FPlayerSkillTreeSkillData::Grade)
        .def_readwrite("Owner", &FPlayerSkillTreeSkillData::Owner)
  ;
}