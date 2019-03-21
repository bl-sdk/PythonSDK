#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SkillCustomEvent()
{
    py::class_< UBehavior_SkillCustomEvent,  UBehaviorBase   >("UBehavior_SkillCustomEvent")
        .def_readwrite("EventName", &UBehavior_SkillCustomEvent::EventName)
        .def_readwrite("SkillDef", &UBehavior_SkillCustomEvent::SkillDef)
        .def("StaticClass", &UBehavior_SkillCustomEvent::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SkillCustomEvent::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}