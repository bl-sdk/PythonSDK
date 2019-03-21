#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkillEventResponseData()
{
    py::class_< FSkillEventResponseData >("FSkillEventResponseData")
        .def_readwrite("EventType", &FSkillEventResponseData::EventType)
        .def_readwrite("Action", &FSkillEventResponseData::Action)
  ;
}