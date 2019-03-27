#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkillEventResponseData(py::module &m)
{
    py::class_< FSkillEventResponseData >(m, "FSkillEventResponseData")
        .def_readwrite("EventType", &FSkillEventResponseData::EventType)
        .def_readwrite("Action", &FSkillEventResponseData::Action)
  ;
}