#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SkillCustomEvent(py::module &m)
{
    py::class_< UBehavior_SkillCustomEvent,  UBehaviorBase   >(m, "UBehavior_SkillCustomEvent")
		.def_static("StaticClass", &UBehavior_SkillCustomEvent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("EventName", &UBehavior_SkillCustomEvent::EventName)
        .def_readwrite("SkillDef", &UBehavior_SkillCustomEvent::SkillDef)
        .def("ApplyBehaviorToContext", &UBehavior_SkillCustomEvent::ApplyBehaviorToContext)
          ;
}