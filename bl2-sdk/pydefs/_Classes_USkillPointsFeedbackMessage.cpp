#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkillPointsFeedbackMessage()
{
    class_< USkillPointsFeedbackMessage, bases< UWillowLocalMessage >  , boost::noncopyable>("USkillPointsFeedbackMessage", no_init)
        .def_readwrite("HasSkillPoints", &USkillPointsFeedbackMessage::HasSkillPoints)
        .def("StaticClass", &USkillPointsFeedbackMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetString", &USkillPointsFeedbackMessage::GetString)
        .staticmethod("StaticClass")
  ;
}