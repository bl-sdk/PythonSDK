#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkillPointsFeedbackMessage()
{
    py::class_< USkillPointsFeedbackMessage,  UWillowLocalMessage   >("USkillPointsFeedbackMessage")
        .def_readwrite("HasSkillPoints", &USkillPointsFeedbackMessage::HasSkillPoints)
        .def("StaticClass", &USkillPointsFeedbackMessage::StaticClass, py::return_value_policy::reference)
        .def("GetString", &USkillPointsFeedbackMessage::GetString)
        .staticmethod("StaticClass")
  ;
}