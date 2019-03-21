#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkillActionData()
{
    class_< FSkillActionData >("FSkillActionData", no_init)
        .def_readwrite("ClientConsoleCommand", &FSkillActionData::ClientConsoleCommand)
        .def_readwrite("GradeType", &FSkillActionData::GradeType)
        .def_readwrite("HardcodedGrade", &FSkillActionData::HardcodedGrade)
        .def_readwrite("SkillToActivate", &FSkillActionData::SkillToActivate)
        .def_readwrite("SkillToDeactivate", &FSkillActionData::SkillToDeactivate)
        .def_readwrite("AkEvent", &FSkillActionData::AkEvent)
  ;
}