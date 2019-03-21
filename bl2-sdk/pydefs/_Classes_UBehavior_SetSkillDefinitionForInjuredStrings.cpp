#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetSkillDefinitionForInjuredStrings()
{
    class_< UBehavior_SetSkillDefinitionForInjuredStrings, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetSkillDefinitionForInjuredStrings", no_init)
        .def_readwrite("SkillDef", &UBehavior_SetSkillDefinitionForInjuredStrings::SkillDef)
        .def("StaticClass", &UBehavior_SetSkillDefinitionForInjuredStrings::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetSkillDefinitionForInjuredStrings::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}