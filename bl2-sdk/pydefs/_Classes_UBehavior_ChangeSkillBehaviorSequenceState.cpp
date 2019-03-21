#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeSkillBehaviorSequenceState()
{
    class_< UBehavior_ChangeSkillBehaviorSequenceState, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeSkillBehaviorSequenceState", no_init)
        .def_readwrite("Action", &UBehavior_ChangeSkillBehaviorSequenceState::Action)
        .def_readwrite("SequenceName", &UBehavior_ChangeSkillBehaviorSequenceState::SequenceName)
        .def_readwrite("SkillDef", &UBehavior_ChangeSkillBehaviorSequenceState::SkillDef)
        .def("StaticClass", &UBehavior_ChangeSkillBehaviorSequenceState::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeSkillBehaviorSequenceState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}