#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeSkillBehaviorSequenceState(py::module &m)
{
    py::class_< UBehavior_ChangeSkillBehaviorSequenceState,  UBehaviorBase   >(m, "UBehavior_ChangeSkillBehaviorSequenceState")
		.def_static("StaticClass", &UBehavior_ChangeSkillBehaviorSequenceState::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Action", &UBehavior_ChangeSkillBehaviorSequenceState::Action)
        .def_readwrite("SequenceName", &UBehavior_ChangeSkillBehaviorSequenceState::SequenceName)
        .def_readwrite("SkillDef", &UBehavior_ChangeSkillBehaviorSequenceState::SkillDef)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeSkillBehaviorSequenceState::ApplyBehaviorToContext)
          ;
}