#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_UpgradeSkill()
{
    class_< UBehavior_UpgradeSkill, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_UpgradeSkill", no_init)
        .def_readwrite("SkillToUpgrade", &UBehavior_UpgradeSkill::SkillToUpgrade)
        .def_readwrite("NumberOfLevelsToRaise", &UBehavior_UpgradeSkill::NumberOfLevelsToRaise)
        .def_readwrite("MaximumLevelToRaiseSkill", &UBehavior_UpgradeSkill::MaximumLevelToRaiseSkill)
        .def("StaticClass", &UBehavior_UpgradeSkill::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_UpgradeSkill::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}