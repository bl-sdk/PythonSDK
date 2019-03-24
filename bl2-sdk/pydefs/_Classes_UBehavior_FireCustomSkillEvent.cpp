#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_FireCustomSkillEvent(py::module &m)
{
    py::class_< UBehavior_FireCustomSkillEvent,  UBehaviorBase   >(m, "UBehavior_FireCustomSkillEvent")
		.def_static("StaticClass", &UBehavior_FireCustomSkillEvent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("EventName", &UBehavior_FireCustomSkillEvent::EventName)
        .def_readwrite("Skill", &UBehavior_FireCustomSkillEvent::Skill)
        .def("ApplyBehaviorToContext", &UBehavior_FireCustomSkillEvent::ApplyBehaviorToContext)
          ;
}