#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkillActionData(py::module &m)
{
    py::class_< FSkillActionData >(m, "FSkillActionData")
        .def_readwrite("ClientConsoleCommand", &FSkillActionData::ClientConsoleCommand)
        .def_readwrite("GradeType", &FSkillActionData::GradeType)
        .def_readwrite("HardcodedGrade", &FSkillActionData::HardcodedGrade)
        .def_readwrite("SkillToActivate", &FSkillActionData::SkillToActivate)
        .def_readwrite("SkillToDeactivate", &FSkillActionData::SkillToDeactivate)
        .def_readwrite("AkEvent", &FSkillActionData::AkEvent)
  ;
}