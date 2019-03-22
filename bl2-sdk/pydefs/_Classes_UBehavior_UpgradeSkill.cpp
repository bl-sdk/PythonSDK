#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_UpgradeSkill(py::module &m)
{
    py::class_< UBehavior_UpgradeSkill,  UBehaviorBase   >(m, "UBehavior_UpgradeSkill")
        .def_readwrite("SkillToUpgrade", &UBehavior_UpgradeSkill::SkillToUpgrade)
        .def_readwrite("NumberOfLevelsToRaise", &UBehavior_UpgradeSkill::NumberOfLevelsToRaise)
        .def_readwrite("MaximumLevelToRaiseSkill", &UBehavior_UpgradeSkill::MaximumLevelToRaiseSkill)
        .def("ApplyBehaviorToContext", &UBehavior_UpgradeSkill::ApplyBehaviorToContext)
          ;
}